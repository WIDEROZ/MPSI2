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

let grille_complete = Et(listEtL 3);;


(* (b) *)

let rec parcoursL i = 
  let rec parcoursC j = 
    let rec parcoursNeg i j k = 
      let rec aux l = 
        match l with
        | 1 -> if(l = k) then
                [Var(i, j, l)]
              else
                [Neg(Var(i, j, l))]
        | _ -> if(l = k) then
                [Var(i, j, l)] @ aux (l-1)
              else
                [Neg(Var(i, j, l))] @ aux (l-1)
      in
        match k with
        | 1 -> [Et(aux 4)]
        | _ -> [Et(aux 4)] @ parcoursNeg i j (k-1)
    in
    match j with
        | 0 -> [Ou(parcoursNeg i j 4)]
        | _ -> [Ou(parcoursNeg i j 4)] @ parcoursC (j-1)
  in
  match i with
  | 0 -> parcoursC 3
  | _ -> parcoursC 3 @ parcoursL (i-1)
;;


let un_par_case = 
  Et(parcoursL 3)
;;


(* (c) *)
let rec parcoursValL k =
  let rec parcoursL i =
    let rec parcoursNeg x = 
      let rec parcoursC j = 
        match j with
        | 0 -> if (x = j) then
                [Var(i, j, k)]
              else
                [Neg(Var(i, j, k))]
        | _ -> if (x = j) then
                [Var(i, j, k)] @ parcoursC (j-1)
              else
                [Neg(Var(i, j, k))] @ parcoursC (j-1)
        in
        match x with
        | 0 -> [Et(parcoursC 3)]
        | _ -> [Et(parcoursC 3)] @ parcoursNeg (x-1)
      in
      match i with
      | 0 -> [Ou(parcoursNeg 3)]
      | _ -> [Ou(parcoursNeg 3)] @ parcoursL (i-1)
    in
    match k with
    | 1 -> [Et(parcoursL 3)]
    | _ -> [Et(parcoursL 3)] @ parcoursValL (k-1)
  ;;


let un_par_ligne = 
  Et(parcoursValL 4)
;;

(* (d) *)
let rec parcoursValC k =
  let rec parcoursC j =
    let rec parcoursNeg x = 
      let rec parcoursL i = 
        match i with
        | 0 -> if (x = i) then
                [Var(i, j, k)]
              else
                [Neg(Var(i, j, k))]
        | _ -> if (x = i) then
                [Var(i, j, k)] @ parcoursL (i-1)
              else
                [Neg(Var(i, j, k))] @ parcoursL (i-1)
        in
        match x with
        | 0 -> [Et(parcoursL 3)]
        | _ -> [Et(parcoursL 3)] @ parcoursNeg (x-1)
      in
      match j with
      | 0 -> [Ou(parcoursNeg 3)]
      | _ -> [Ou(parcoursNeg 3)] @ parcoursC (j-1)
    in
    match k with
    | 1 -> [Et(parcoursC 3)]
    | _ -> [Et(parcoursC 3)] @ parcoursValC (k-1)
;;



let un_par_colonne = 
  Et(parcoursValC 4)
;;


(* (e) *)
let rec parcoursValCarre k =
  let rec carre (i1, j1) =
    let rec parcoursNeg (x, y) =
      let rec g j =
        let rec f i = 
          match i with
          | 0 -> if (x = i+i1) && (y = j+j1) then 
                  [Var(i+i1, j+j1, k)]
                else
                  [Neg(Var(i+i1, j+j1, k))]
          | _ ->  if (x = i+i1) && (y = j+j1) then 
                  [Var(i+i1, j+j1, k)] @ f 0
                  else
                  [Neg(Var(i+i1, j+j1, k))] @ f 0

          in
          match j with
          | 0 -> f 1
          | _ -> f 1 @ g 0
        in
        if (x, y) = (i1, j1) then
          [Et(g 1)]
        else if (x = i1) then
        [Et(g 1)]
        else if (y = j1) then
        [Et(g 1)] @ parcoursNeg (x-1, y)
        else
        [Et(g 1)] @ parcoursNeg (x, y-1) @ parcoursNeg (x-1, y)
  
      in
      [Ou(parcoursNeg (i1+1, j1+1))]
    in
    match k with
    | 1 -> carre (0, 0) @ carre(2, 0) @ carre(0, 2) @ carre (2, 2)
    | _ -> carre (0, 0) @ carre(2, 0) @ carre(0, 2) @ carre (2, 2) @ parcoursValCarre (k-1)
  ;;

let un_par_carre = 
  Et(parcoursValCarre 4)
;;


let tab = [|
            [|2;3;1;0|];
            [|0;0;2;0|];
            [|3;0;0;0|];
            [|0;4;0;0|]
          |]
;;

(* QUESTION 5 *)


let formule_grille t =
  (* Prend en entrée une grille de sudoku sous la forme d'un tableau 4x4
     et renvoie la conjonction de variables correspondant à l'information
     des cases remplies
  *)
  let phraseProp = ref [] in
  for i = 0 to 3 do
    for j = 0 to 3 do
      if t.(i).(j) != 0 then
        phraseProp := !phraseProp @ [Var(i, j, t.(i).(j))]
      done;
    done;
    Et(!phraseProp)
;;


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


(* (a) *)
let rec simplif_list_et l =
  (* Prend en entrée une liste de formule et supprime les Vrai de la liste *)
  match l with
  | []   -> []
  | t::s -> if t = Vrai then simplif_list_et s else t :: simplif_list_et s
;;

(* (b) *)
let rec simplif_list_ou l = 
  match l with
  | []   -> []
  | t::s -> if t = Faux then simplif_list_ou s else t :: simplif_list_ou s
;;

(* (c) *)
let rec vrai_in l =
  (* Renvoie true si la formule Vrai est dans l est false sinon *)
  match l with
  | [] -> false
  | t::s -> if t = Vrai then true else vrai_in s
;;

(* (d) *)
let rec faux_in l =
  (* Renvoie true si la formule Faux est dans l est false sinon *)
  match l with
  | [] -> false
  | t::s -> if t = Faux then true else faux_in s
;;


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

let rec valuation_sat_arbre a =
  (* Prend en entrée un arbre de quine associé à une formule et renvoie
     un couple (liste, booléen) avec :
  -si la formule n'est pas satisfiable, la liste vide et le booléen false
  -si la formule est satisfiable, une liste de variables à satisfaire pour
  satisfaire la formule, et le booléen true 
  *)
  match a with
  | Valide                 -> ([], true)
  | Invalide               -> ([], false)
  | Noeud(i, j, k, a1, a2) -> let (l, b) = valuation_sat_arbre a1 in
  if b = false then let (l2, b2) = valuation_sat_arbre a2 in
  if b2 = false then ([], false)
  else 



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