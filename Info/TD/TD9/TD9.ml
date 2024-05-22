let rec division l = 
  match l with
  | [] -> ([], [])
  | [v] -> ([], [v])
  | t1::t2::s -> let (l1, l2) = division s in (t1::l1, t2::l2)
;;

let rec fusion l1 l2 = 
  match l1 with
  | [] -> l2
  | t::s ->  