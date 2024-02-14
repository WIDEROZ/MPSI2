type 'a bintree = E | N of 'a * 'a bintree * 'a bintree;;

let t = N(0, N(1, E, N(3, E, E)), N(2, E, E));;


let rec taille t =
  match t with
  | E -> 0;
  | N(v, l, r) -> 1 + taille(l) + taille(r)
;;

let n = taille(t);;

let rec parfait h = 
  match h with
  | -1 -> E
  | _ -> let p = parfait(h-1) in N(1, p, p)
  ;;

let v = parfait(1);;

let peigneGauche n =
  let rec peigneEtiquette k p =
    match k with
    | 0 -> E
    | _ -> N(p, peigneEtiquette (k-1) (p+1), E)
  in
    peigneEtiquette n 0
  ;;
;;


let p = peigneGauche 5;;

