type chifoumi = Pierre | Feuille | Ciseau;;
type resultat = Defaite | Nul | Victoire;;
type intlist = Empty | Cell of int * intlist;;

let f (j1, j2) =
  match (j1,j2) with
  | (Pierre, Ciseau) | (Feuille, Ciseau) | (Ciseau, Feuille) -> (Victoire, Defaite)
  | (x,y) when x==y -> (Nul, Nul)
  | _ -> (Defaite, Victoire)
;;

let rec appartient x l =
  match l with
  | Empty -> false
  | Cell(i,s) -> i == x || appartient x s
;;

let rec long l = 
  match l with
  | [] -> 0
  | t::s -> 1 + long s
;;

let rec concat l1 l2 =
  match l1 with
  | [] -> l2
  | t::s -> t::(concat s l2)
;;

let rec maximum l = 
  match l with
  | [] -> 0
  | t::s -> let m = maximum s in
    if t > m then
    t
    else
    m
;;

let rec somme l =
  match l with
  | [] -> 0
  | t::s -> t + somme s
;;

let rec produit l = 
  match l with
  | [] -> 1
  | t::s -> t * produit l
;;

let rec listSyrracuse a n = 
  if n == 0 then
    []
  else
    let succ = 
      if a mod 2 == 0 then
        a/2
      else
        3*a+1
  in a::(listSyrracuse a (n-1))
;;

let rec listConcat l =
  match l with
  | [] -> []
  | t::s -> concat t (listConcat s)
;;


type materiel = {pion:int ; cavalier:int ; fou:int ; tour:int ; dame:int ; roi:int};;
type piece = Pion | Cavalier | Fou | Tour | Dame | Roi ;;

let rec listToMateriel l = 
  match l with
  | [] -> {pion = 0; cavalier = 0; fou = 0; tour = 0; dame = 0; roi = 0}
  | t::s -> let m = listToMateriel s in
    match t with
    | Pion -> {m with pion = m.pion + 1}
    | Cavalier -> {m with cavalier = m.cavalier + 1}
    | Fou -> {m with fou = m.fou + 1}
    | Tour -> {m with tour = m.tour + 1}
    | Dame -> {m with dame = m.dame + 1}
    | Roi -> {m with roi = m.roi + 1}
;;

let rec insertion a l = 
  match l with
  | []   -> [a]
  | t::s ->
    if a < t then
      a::t::s
    else
      t::(insertion a s)

;;

let list = [1; 2; 3; 4; 5; 6; 7; 8; 9; 10; 11; 12; 13; 14; 15; 16; 17; 18; 19; 20];;

long(list);;
maximum(list);;
somme(list);;
produit(list);;

let valeurMateriel m = m.pion + 3*m.fou + 3*m.cavalier + 5*m.tour + 9*m.dame;;
