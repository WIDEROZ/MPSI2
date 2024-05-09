type formule = Vrai | Faux | Var of int*int*int | Neg of formule
             | Et of formule list | Ou of formule list ;;



(* QUESTION 2 *)

(* (a) *)

let rec listEtL i = 
  let rec listEtC j = 
    let rec listVal k = 
      match k with
      | 1 -> [Var(i, j, k)]
      | _ -> [Var(i, j, k)] @ listVal (k-1)
    in 
    match j with
    | 0 -> [Ou(listVal 4)]
    | _ -> [Ou(listVal 4)] @ listEtC (j-1)
  in
  match i with
  | 0 -> listEtC 3
  | _ -> listEtC 3 @ listEtL (i-1)
  
;;

let listEt = listEtL 3;;

let grille_complete = Et(listEt);;


(* (b) *)

let rec listNeg i j k = 
  let rec aux l = 
    match l with
    | 1 -> if(l == k) then
            [Var(i, j, l)]
           else
            [Neg(Var(i, j, l))]
    | _ -> if(l == k) then
            [Var(i, j, l)] @ aux (l-1)
           else
            [Neg(Var(i, j, l))] @ aux (l-1)
  in
    match k with
    | 1 -> [Et(aux 4)]
    | _ -> [Et(aux 4)] @ listNeg i j (k-1)

;;


let un_par_case = 
  let rec parcoursL i = 
    let rec parcoursC j = 
      match j with
      | 0 -> [Ou(listNeg i j 4)]
      | _ -> [Ou(listNeg i j 4)] @ parcoursC (j-1)
    in
    match i with
    | 0 -> parcoursC 3
    | _ -> parcoursC 3 @ parcoursL (i-1)
  in
  Et(parcoursL 3)
;;


(* (c) *)
let un_par_ligne = 
  
;;


(* let un_par_colonne = *)


(* let un_par_carre = *)



(* QUESTION 5 *)


(* let formule_grille t = *)
  (* Prend en entrée une grille de sudoku sous la forme d'un tableau 4x4
     et renvoie la conjonction de variables correspondant à l'information
     des cases remplies
  *)
    
  


(* QUESTION 7 *)

let rec substitution_sudoku f v1 v2 v3 b =
  (* prend en entrée une formule f, trois entiers v1, v2, v3 et un booléen b
     et renvoie la formule obtenue par substitution de Var(v1,v2,v3) par Vrai
     si b vaut true et Faux si b vaut false
  *)
  let rec subs_list l1 = match l1 with
    | [] -> []
    | t::s -> (substitution_sudoku t v1 v2 v3 b)::(subs_list s)
  in match f with
  | Vrai -> Vrai
  | Faux -> Faux
  | Var(x1,x2,x3) when (x1,x2,x3) = (v1,v2,v3) -> if b then Vrai else Faux
  | Var(_) -> f
  | Neg(f1) -> Neg(substitution_sudoku f1 v1 v2 v3 b)
  | Et(l) -> Et(subs_list l)
  | Ou(l) -> Ou(subs_list l) ;;

(* let rec simplif_list_et l = *)
  (* Prend en entrée une liste de formule et supprime les Vrai de la liste *)

(* let rec simplif_list_ou l = *)

(* let rec vrai_in l = *)
  (* Renvoie true si la formule Vrai est dans l est false sinon *)

(* let rec faux_in l = *)
  (* Renvoie true si la formule Faux est dans l est false sinon *)


let rec simplif_quine_sudoku f =
  (* Prend en entrée une formule f et la simplifie selon les règles
  de l'algorithme de Quine *)
  let rec simplif_quine_list l =
    match l with
    |[] -> []
    |t::s -> (simplif_quine_sudoku t)::(simplif_quine_list s) 
  in
  match f with
  | Faux | Vrai | Var(_,_,_) -> f
  | Et(l) -> let l2 = simplif_list_et (simplif_quine_list l) in
      if faux_in l2 then Faux else
      if l2 = [] then Vrai
      else Et(l2)
  | Ou(l) -> let l2 = simplif_list_ou (simplif_quine_list l) in
      if vrai_in l2 then Vrai else
      if l2 = [] then Faux 
      else Ou(l2)
  | Neg(f) -> let f2 = simplif_quine_sudoku f in
      if f2 = Faux then Vrai else
      if f2 = Vrai then Faux else
        Neg(f2) ;; 

let rec insertion_sans_doublon e l =
  match l with
  |[] -> [e]
  | t::s -> if t = e then l else t::(insertion_sans_doublon e s) ;;

let rec fusion_sans_doublon l1 l2 =
  match l1 with
  | [] -> l2
  | t::s -> insertion_sans_doublon t (fusion_sans_doublon s l2) ;;

let rec variables f =
  (* Prend en entrée une formule et renvoie la liste de ses variables *)
  match f with
  | Vrai | Faux -> []
  | Var(x1,x2,x3) -> [(x1,x2,x3)]
  | Neg(f2) -> variables f2
  | Et(l) -> (match l with
      | [] -> []
      | t::s -> fusion_sans_doublon (variables t) (variables (Et(s)) )) 
  | Ou(l) -> match l with
    | [] -> []
    | t::s -> fusion_sans_doublon (variables t) (variables (Ou(s)) ) ;;




type arbre_quine_sudoku = Valide | Invalide | Noeud of int * int * int * arbre_quine_sudoku * arbre_quine_sudoku ;;

let rec arbre f =
  (* Prend en entrée une formule et renvoie l'arbre de quine associé *)
  let f_bis = simplif_quine_sudoku f in
  match f_bis with
  | Vrai -> Valide
  | Faux -> Invalide
  | _ -> let var = variables f_bis in
      let (x1,x2,x3)::s = var in
      let f1 = simplif_quine_sudoku (substitution_sudoku f x1 x2 x3 true) in
      let f2 = simplif_quine_sudoku (substitution_sudoku f x1 x2 x3 false) in
      Noeud(x1,x2,x3,arbre f1,arbre f2) ;; 
      

(* QUESTION 8 *)

(* let rec valuation_sat_arbre a = *)
  (* Prend en entrée un arbre de quine associé à une formule et renvoie
     un couple (liste, booléen) avec :
  -si la formule n'est pas satisfiable, la liste vide et le booléen false
  -si la formule est satisfiable, une liste de variables à satisfaire pour
  satisfaire la formule, et le booléen true*)


(* QUESTION 9 *)

(* let liste_to_val l = *)
  (* Prend en entrée une liste de variables propositionnelles et
  renvoie une matrice 4x4 avec à la case (i,j) :
  -la valeur k si la liste contient une variable x_{i,j,k}
  -la valeur 0 s'il n'y a pas de variable x_{i,j,k} *)



(* QUESTION 10 *)

(* let valuation_sat f = *)
  (* prend en entrée une formule du calcul propositionnel et renvoie
  la matrice 4x4 en sortie de liste_to_val correspondant à une liste de variables
  à satisfaire pour satisfaire la formule en entrée *)



(* QUESTION 11 *)

(* let solution_grille t = *)
  (* prend en entrée une grille de sudoku sous la forme d'une matrice 4x4 et
  renvoie la grille remplie *)


(* QUESTION 12 *)

(* let fichier_solution nom_fichier t = *)
  (* prend en entrée un nom de fichier sans extension sous la forme d'une
  chaîne de caractère, un tableau t correspondant à une grille de sudoku,
  et stocke dans un fichier [nom_fichier].txt la solution de la grille *)




let t1 = [| [|3;0;2;0|];
            [|2;4;1;0|];
            [|0;0;0;0|];
            [|1;0;0;0|];|]

let t2 = [| [|1;0;3;4|];
            [|0;4;0;0|];
            [|0;0;2;0|];
            [|0;0;0;0|];|]

let t3 = [| [|2;0;0;0|];
            [|0;1;2;0|];
            [|3;0;0;1|];
            [|0;0;0;0|];|]


fichier_solution "grille_1" t1 ;;

fichier_solution "grille_2" t2 ;;

fichier_solution "grille_3" t3 ;;