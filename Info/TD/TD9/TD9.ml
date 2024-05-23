let rec division l =
  match l with
  | [] -> ([], [])
  | [v] -> ([v], [])
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
  | _ -> let (l1, l2) = division l in fusion (triFusion l1) (triFusion l2)
;;

triFusion [984; 6544; 21; 32; 12; 84; 10; 0; 1; 5; 65];;

let fibo n =
  let t = Array.make (n+1) (-1) in
  let rec fibo_aux n = 
    if t.(n) = -1 then
      begin
      if n <= 1 then
        t.(n) <- n
      else t.(n) <- fibo_aux (n-1) + fibo_aux (n-2)
      end;
      t.(n)

    in fibo_aux n;;


fibo (2);;

let inversions t = 
  let count = ref 0 in
  for i = 0 to Array.length t do
    for j = i to Array.length t do
      if t.(j) < t.(i) then
        count := !count +1;
      done;
    done;
  ;;



let proc t1 t2 = 
  let count = ref 0 in
   let i = ref 0 in
      for j = 0 to (Array.length t2-1) do
        while t1.(!i) < t2.(j) && !i <= Array.length t1 -2 do
          i := !i +1
        done;
        count := !count + (Array.length t1 - !i + 1);
        i := 0;
      done;
    !count;;

proc [|1; 2; 3; 4; 5|] [|2; 3; 4; 5; 6|];;

let rec binom k n =
  if n <> 0 then 
    match k with
    | 0 -> 1
    | 1 -> n
    | _ -> binom (k-1) (n-1) + binom k (n-1)
  else
    0
  ;;


binom 2 4;;