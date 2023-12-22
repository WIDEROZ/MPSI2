(*2*)
type complexe = {mutable re:float; mutable im:float};;

let conjugue z = 
  z.im <- -. z.im;;

let carre z =
  let re2 = z.re *. z.re -. z.im *. z.im
  and im2 =  2. *. z.re *. z.im
  in z.re <- re2 ; z.im <- im2
;;


let z = {re=2. ;im=2. };;

conjugue(z);;
print_float(z.im);;

carre(z);;

(*2.1*)
let x = ref 5;;
x;;

(*2.2*)
let v1 = ref 5 ;;
let v2 = ref 5 ;;
v1 = v2 ;;
v1 == v2 ;;
let v3 = v1 ;;
v1 = v3 ;;
v1 == v3 ;;
v1 := !v1 + 1 ;;
v1 ;;
v3 ;;

let affichageSyracuse n s = 
  let r = ref n in 
  while !r >= s do
    print_int !r;
    print_string "\n";
    r := if !r mod 2 = 0 then (!r) / 2 else 3*(!r)+1;
  done;
;;


(*3*)
let tab1 = [|1; 2; 5; 8|] ;;
Array.length tab1;;
let tab2 = Array.make 10 0;;
let tab3 = Array.init 10  ;;

let max t = 
  let maxi = ref t.(0) in
    for i = 1 to Array.length t - 1 do
      if !maxi < t.(i) then 
        maxi := t.(i);
      done;
    !maxi;
;;

let swap t i j =
  let tmp = t.(i) in 
    t.(i) <- t.(j);
    t.(j) <- tmp;
  ;
;;

let somme t = 
  let s = ref 0 in
    for i = 0 to Array.length t - 1 do
      s := !s + t.(i);
    done;
    !s;
;;

let tab = Array.make 5 0;;
Array.length tab;;
let syrracuse i = if i mod 2 = 0 then i/2 else 3*i+1 ;;
let t = Array.init 7 syrracuse;;

let maxiTab t = 
  let max = ref t.(0) in 
    for i = 0 to (Array.length t -1) do
      if !max < t.(i) then
        max := t.(i)
    done;
    !max
;;

maxiTab t ;;

let arrayToList t = 
  let l = ref [] in
    for i = 0 to (Array.length t -1) do
      l := t.((Array.length t -1)-i)::!l
    done;
    !l;;

arrayToList t;;

let rec division l =
  match l with
  | [] -> ([], [])
  | [x] -> ([x], [])
  | t1::t2::s -> let (l1, l2) = division s in (t1::l1, t2::l2)
;;

let rec fusion l1 l2 =
  match l1, l2 with
  | _, [] -> l1
  | [], _ -> l2
  | t1::s1, t2::s2 -> if t1 < t2 then t1::(fusion s1 l2) else t2::(fusion l1 s2)
;;

let rec triFusion l = 
  match l with
  | [] -> []
  | [x] -> [x]
  | t1::t2::s -> let (l1, l2) = division l in fusion (triFusion l1) (triFusion l2)
;;

triFusion [5; 5; 6516; 45; 4; 408; 4; 989; 48; 8];;


let rec insert v l = 
  match l with
  | [] -> [v]
  | t::s -> if v < t then v::l else t::(insert v s)
;;

let rec triInsert l =
  match l with
  | [] -> []
  | t::s -> insert t (triInsert s)
;;

triInsert [5; 5; 6516; 45; 4; 408; 4; 989; 48; 8];;