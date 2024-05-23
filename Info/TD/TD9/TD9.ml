let rec division l = 
  match l with
  | [] -> ([], [])
  | [v] -> ([], [v])
  | t1::t2::s -> let (l1, l2) = division s in (t1::l1, t2::l2)
;;

let rec fusion l1 l2 = 
  match l1, l2 with
  | [], _ -> l2
  | _, [] -> l1
  | t1::s1, t2::s2 -> if t1 < t2 then t1::(fusion s1 l2) else t2::(fusion l1 s2)
  ;;

let rec triFusion l = 
  match l with
  | [] -> []
  | [v] -> [v]
  | t::s -> let (l1, l2) = division l