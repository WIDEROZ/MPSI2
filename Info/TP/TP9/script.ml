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


let rec complet n = 
  if (n mod 2 == 0) then
    match n with
    | 0 -> E
    | _ -> N(1, complet (n/2), complet ((n-2)/2))
  else
    N(1, complet ((n-1)/2), complet ((n-1)/2))
;;

(*Correction : *) 

let completprof n = 
  ler rec sousarbreracine n j = 
  match n with
  | 0 -> E
  | _ -> N(j, sousarbreracine (n-1) (2*j+1), sousarbreracine (n-1) (2*j+2))
in sousarbreracine n 0
;;

completprof 7;;

complet 7;;

let maxint x y = 
  if (x > y) then
    x
  else
    y
;;

let rec maximum t = 
  match t with
  | E -> 0
  | N(a, b, c) -> maxint (maximum c) (maxint a (maximum b))
;;



let arbre = N(1, N(5, E, E), N(8, N(1, E, N(46, E, E)), N(47, N(6, E, E), E)));;

maximum arbre;;

