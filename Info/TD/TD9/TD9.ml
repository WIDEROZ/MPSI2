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

type objet = {poids : int ; valeur : int};;

let rec somme objets = 
  match objets with
  | [] -> (0, 0)
  | obj::s -> let (p, v) = somme s in (obj.poids + p, obj.valeur + v)
;;

let rec rechercheMaxVal objects =
  match objects with
  | [] -> 0
  | obj::s -> max (rechercheMaxVal s) (obj.valeur)
;;


let sac_a_dos_glouton objets pMax = 
  let sac = ref [] in
    let iVmax = ref 0 in
      let vMax = ref 0 in
      let pTot = ref 0 in
      for k = 0 to (Array.length objets) -1 do
        for i = 0 to (Array.length objets)-1 do
          if !vMax < objets.(i).valeur && objets.(i).valeur <> -1 then
            vMax := objets.(i).valeur;
            iVmax := i
        done;
        if (objets.(!iVmax).poids + !pTot) < pMax then
          begin
          sac := objets.(!iVmax)::!sac;
          pTot := objets.(!iVmax).poids + !pTot;
          objets.(!iVmax) <- {poids = -1; valeur = -1}
          end;
        vMax := 0
      done;
    !sac
;;

let obj1 = {poids = 54; valeur = 652};;
let obj2 = {poids = 7; valeur = 6};;
let obj3 = {poids = 12; valeur = 15};;
let obj4 = {poids = 32; valeur = 20};;


sac_a_dos_glouton [|obj1; obj2; obj3; obj4|] 100;;




let plssc l1 l2 =
  let str = ref "" in
    for i = 0 to (String.length l1 -1) do
      for j = 0 to (String.length l2 -1) do
        if l1.[i] = l2.[j] then
          str := !str ^ String.make 1 l1.[i]
        done;
      done;
  !str
;;

plssc "feur" "ruef";;







let rec plssc l1 l2 = 
  let l1Len = String.length l1
  let tab = Array.make 