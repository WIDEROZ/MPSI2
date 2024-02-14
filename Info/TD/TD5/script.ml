type peano = Zero | Succ of peano;;

let rec somme1 n p =
  match n with
| Zero -> p
| Succ(q) -> Succ(somme1 q n)
;;


let somme2 n p = 
match p with
| Zero -> 
| Succ()

;;