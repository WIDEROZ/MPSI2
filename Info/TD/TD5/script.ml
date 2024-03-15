type peano = Zero | Succ of peano;;


let rec somme1 n p =
  match n with
| Zero -> p
| Succ(q) -> Succ(somme1 q n)
;;


let rec somme2 n p = 
match n with
| Zero -> p
| Succ(q) -> somme2 q (Succ(p))

;;

