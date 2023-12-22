let rec expRapide a n = 
  if n = 0 then
    1
  else if n mod 2 = 0 then
    let expSuivante = expRapide a (n/2) in expSuivante * expSuivante
  else
    a * expRapide a (n-1)

;;

let rec long l =
  match l with
  | [] -> 0
  | t::s -> 1 + long s
  ;;

let rec somme l =
  match l with
  | [] -> 0
  | t::s -> t + somme s
  ;; 

let rec max l =
  match l with
  | [x] -> x
  | t::s -> if t > max s then t else max s
  | [] -> 0

  ;;

let rec insert v l =
  match l with
  | [] -> [v]
  | t::s -> if v < t then v::l else t::insert v s
;;

let rec triInsert l =
  match l with
  | [] -> []
  | t::s -> insert t (triInsert s)
;;

let tri = triInsert [5; 5; 6; 8; 1; 6;96; 9; 495; 56];;


let rec division l =
  match l with
  |  []  -> ([], [])
  | t::[] -> ([t], [])
  | t1::t2::s -> let (l1, l2) = division s in (t1::l1, t2::l2);;
;;

let rec fusion l1 l2 = 
  match (l1, l2) with
  | (_, []) -> l1 
  | ([], _) -> l2
  | (t1::s1, t2::s2) -> if t1 < t2 then t1::(fusion s1 (t2::s2)) else t2::(fusion (t1::s1) s2)
;;

let rec triFusion l = 
  match l with 
  | [] -> []
  | [x] -> [x]
  | _ -> let (l1, l2) = division l in fusion (triFusion l1) (triFusion l2)

;;


let tri = triFusion [5; 5; 6; 8; 1; 6;96; 9; 495; 56];;




let rec insertion v l =
  match l with
  | [] -> [v]
  | t::s -> if v < t then v::t::s else t::(insertion v s)
;;

let rec triInsertion l = 
  match l with
  | [] -> []
  | t::s -> insertion t (triInsertion s)
;;


let tri = triInsertion [5; 5; 6; 8; 1; 6;96; 9; 495; 56];;


let rec division2 l = 
  match l with
  | [] -> ([], [])
  | [x] -> ([x], [])
  | t1::t2::s -> let (l1, l2) = division2 s in (t1::l1, t2::l2)
;;

let rec fusion2 l1 l2 = 
  match (l1, l2) with
  | [], _ -> l2
  | _, [] -> l1
  | (t1::s1, t2::s2) -> if t1 < t2 then t1::(fusion2 s1 l2) else t2::(fusion2 l1 s2)
;;

let rec triFusion2 l =
  match l with
  | [] -> []
  | [x] -> [x]
  | t::s -> let (l1, l2) = division2 l in fusion2 (triFusion2 l1) (triFusion2 l2)
;;


let tri = triFusion2 [5; 5; 6; 8; 1; 6;96; 9; 495; 56];;



let rec expNaive a n = 
  match n with
  | 0 -> 1
  | _ -> a * expNaive a (n-1)
;;


