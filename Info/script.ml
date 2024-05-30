let fibbo n = 
  let tab = Array.make (n+1) 0 in
    let rec fibo_aux p = 
      match p with
      | 0 -> tab.(p) <- 1; 1
      | 1 -> tab.(p) <- 1; 1
      | _ -> if tab.(p) = 0 then 
              (tab.(p) <- fibo_aux (p-1) + fibo_aux (p-2) ; tab.(p))
             else 
              tab.(p)
    in
    fibo_aux n
  ;;

fibbo 5;;


let fibo n =
  let tab = Array.make (n+1) (-1) in
  let rec fibo_aux k = 
    if tab.(k) = -1 then
      begin
      if k <= 1 then 
        (tab.(k) <- k)
      else
        (tab.(k) <- fibo_aux (k-1) + fibo_aux (k-2))
      end;
  
    tab.(k)
  in
  fibo_aux n
;;

fibo 6;;

