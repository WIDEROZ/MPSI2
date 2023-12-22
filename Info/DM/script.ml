let rec exp a n =
  if n = 0 then
    1.
  else if n mod 2 = 0 then
    exp a (n/2) *. exp a (n/2)
  else
    a *. exp a (n-1);;
  ;;


exp 5. 1 ;;


let tab = [1; 2; 3; 4; 5];;

let f tab =
  match tab with
  | [] -> []
  | t::s -> s;;

f tab;;

  let rec concat l1 l2 =
    match l1 with 
    | [] -> l2
    | t::s -> t :: concat s l2
  ;;

  let l1 = [1];;
  let l2 = [5; 6; 7; 8; 9];;

  concat l1 l2;;



let rec polynome (coeff:float list) (x0:float) =
  match coeff with
  | [] -> 0.
  | t::s -> t*.(x0**float_of_int(List.length (coeff)-1))+.polynome s x0;;


let rec polynome (coeff:float list) (x0:float) =
  match coeff with
  | [] -> 0.
  | t::s -> t +. (polynome s x0)*.x0;;



List.tl [1; 5; 6; 3; 8];;

let deplacements = deplacements_hanoi n posD posI posA in
let listeEtat = ref [etat] in
  for i = 0 to ((List.length deplacements) -1) do
    match valeur deplacements i with
      | (Gauche, Centre) -> etat.centre <- [List.hd etat.gauche] @ etat.centre ; etat.gauche <- List.tl etat.gauche ; listeEtat := !listeEtat @ [etat]
      | (Gauche, Droite) -> etat.droite <- [List.hd etat.gauche] @ etat.droite ; etat.gauche <- List.tl etat.gauche ; listeEtat := !listeEtat @ [etat]
      | (Centre, Gauche) -> etat.gauche <- [List.hd etat.centre] @ etat.gauche ; etat.centre <- List.tl etat.centre ; listeEtat := !listeEtat @ [etat]
      | (Centre, Droite) -> etat.droite <- [List.hd etat.centre] @ etat.droite ; etat.centre <- List.tl etat.centre ; listeEtat := !listeEtat @ [etat]
      | (Droite, Gauche) -> etat.gauche <- [List.hd etat.droite] @ etat.gauche ; etat.droite <- List.tl etat.droite ; listeEtat := !listeEtat @ [etat]
      | (Droite, Centre) -> etat.centre <- [List.hd etat.droite] @ etat.centre ; etat.droite <- List.tl etat.droite ; listeEtat := !listeEtat @ [etat]
      | _ -> listeEtat := !listeEtat @ [etat]
  done;

  !listeEtat
;;

etats_hannoi 3 Gauche Centre Droite;;