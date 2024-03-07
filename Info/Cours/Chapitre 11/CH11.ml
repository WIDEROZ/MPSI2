(*Arbre binaire normal*)
type 'a bintree = E | N of 'a * 'a bintree * 'a bintree;;

(*Arbre binaire avec des couples (construction de dictionaires)*)

type ('k, 'v) abr = A | K of 'k * 'v * ('k, 'v) abr * ('k, 'v) abr;;


let infixe t = 
 let rec aux t acc =
 match t with
 | E -> acc
 | N(e, g, d) -> aux g (e :: aux d acc) in
 aux t []

;;

let rec recherche t v = 
  match t with
  | E -> false
  | N(e, g, d) -> if e == v then true
  else if v < e then recherche g v
  else recherche d v
;;

let rec ajout t v =
  match t with
  | E -> N(v, E, E)
  | N(e, g, d) -> if v = e then t 
  else if v > e then N(e, g, ajout d v)
  else N(e, ajout g v, d)
;;

let rec maxBinTree t =
  match t with
  | E -> failwith "arbre vide"
  | N(e, g, d) -> if d = E then e else maxBinTree d
;;

let rec supprMax t = 
  match t with
  | E -> failwith "Arbre vide"
  | N(e, g, d) -> if d = E then g else N(e, g, supprMax d)

;;

let rec suppr t v = 
  match t with
  | E -> E
  | N(e, g, d) -> if v > e then N(e, g, suppr d v)
  else if v < e then N(e, suppr g v, d)
  else N(maxBinTree g, supprMax g, d)
;;

let t = N(7, N(4, N(1, E, E), N(5, E, E)), N(10, N(9, E, E), N(13, N(11, E, E), N(15, E, E))));;

infixe t;;


recherche t 100;;
let t = ajout t 100;;
recherche t 100;;

