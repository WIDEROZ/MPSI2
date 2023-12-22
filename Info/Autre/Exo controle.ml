let rec suite u0 n =
  match n with
  | 0 -> u0
  | _ -> 0.5 *. suite u0 (n-1) +. 3.

;;

suite 3. 1;;


binome 5 10;;


let rec fibo n = 
  if n = 1 then
    1
  else if n = 2 then
    1
  else
    fibo (n-1) + fibo (n-2)

;;

let rec fusion l1 l2 = 
  match (l1, l2) with
  | [], l2 -> l2
  | l1, [] -> l1
  | t1::s1, t2::s2 -> if t1<t2 then t1::fusion (s1) (l2) else t2::fusion (l1) (s2)
;;

fusion [1; 5; 9; 10] [5; 6; 8; 10; 22; 55];;

let rec division l = 
  match l with
  | [] -> [], []
  | [x] -> [x], []
  | t1::t2::s -> let (l1, l2) = division s in (t1::l1, t2::l2)
;;
let rec triFusion l = 
  match l with
  | [] -> []
  | [x] -> [x]
  | _ -> let (l1, l2) = division l in fusion (triFusion l1) (triFusion l2)
;;

triFusion [2; 5; 1 ;0; 1315; 6; 464];;


let listFonction t f = 
  let liste = ref [] in
    for i = 0 to Array.length (t) - 1 do
      liste := t.(f i)::!liste
    done;
    !liste
;;



let rec binome p n = 
  if p = 0 then
    1
  else if p = 1 || n = 0 then 
    n
  else
    binome p (n-1) + binome (p-1) (n-1)

;;

let pascal n = 
  let t = Array.make (n+1) [||] in
    for i = 0 to n do
      t.(i) <- Array.make (i+1) 0;
      for p = 0 to i do
        t.(i).(p) <- binome p i;
      done;
    done;
    t
;;


pascal 4;;

let m = [|[|1; 0; 0; 0|];
          [|0; 1; 0; 0|];
          [|0; 0; 1; 0|];
          [|0; 0; 0; 1|]|];;

let m2 = [|[|5;   5;   4|];
          [|86; 84;   1|];
          [|10; 66; 100|];
        |]
;;

let trace m =
  let count = ref 0 in
    for i = 0 to (Array.length m - 1) do
      if i != (Array.length m - i - 1) then
        count := !count + m.(i).(i) + m.(i).(Array.length m - i - 1)
      else 
        count := !count + m.(i).(i)
    done;
  !count
;;

trace m;;
trace m2;;

let transpose m = 
  let mt = Array.make (Array.length m.(0)) [||] in
    for l = 0 to Array.length m - 1 do
      mt.(l) <- Array.make (Array.length m) 0;
      for 




;;



let array_list t = 
  let l = ref [] in 
  let i = ref ((Array.length t) - 1) in 
  while !i >= 0 do 
    l := t.(!i) :: !l;
    i := !i - 1
  done;
  !l
;;
let m = [|[|5;   5;   4|];
          [|86; 84;   1|];
          [|10; 66; 100|];
        |]
;;

array_list m;;

let trie t = 
  for i = 0 to Array.length t -2 do 
    if t.(i)>t.(i+1) then false;
  done ;
;;


