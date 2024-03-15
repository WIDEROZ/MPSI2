type 'a abr = E | N of 'a * 'a abr * 'a abr ;;

let t = [|1; 2; 3; 4; 5; 6; 7; 3; 9|];;
let tabToABR tab = 
  let rec aux t i =
    if (i < Array.length t) then
      match t with
      | [||] -> E
      | _ -> N(t.(i), aux t (2*i+1), aux t (2*i+2))
    else E;
  in aux tab 0
;;

tabToABR t;;

let rec entassement t i = 
  let l = Array.length t in
  if 2*i+1 < l && 2*i+2 == l then
    let v = t.(i) in 
    if v < t.(2*i+1) then
      (t.(i) <- t.(2*i+1); t.(2*i+1) <- v;)
    else
      ()
  else if 2*i+2 < l then
    let v = t.(i) in
    if v < t.(2*i+1) || v < t.(2*i+2) then
      if t.(2*i+2) < t.(2*i+1) then
        (t.(i) <- t.(2*i+1); t.(2*i+1) <- v;entassement t (2*i+1))
      else
        (t.(i) <- t.(2*i+2); t.(2*i+2) <- v;entassement t (2*i+2))

;;


let creationTas t = 
  let l = Array.length t in
  for k = l - (l+1)/2 downto 0 do entassement t k;done
;;


let rec descente t i k = 
  if 2*i+1 < k && 2*i+2 == k then
    let v = t.(i) in 
    if v < t.(2*i+1) then
      (t.(i) <- t.(2*i+1); t.(2*i+1) <- v;)
    else
      ()
  else if 2*i+2 < k then
    let v = t.(i) in
    if v < t.(2*i+1) || v < t.(2*i+2) then
      if t.(2*i+2) < t.(2*i+1) then
        (t.(i) <- t.(2*i+1); t.(2*i+1) <- v;descente t (2*i+1) k)
      else
        (t.(i) <- t.(2*i+2); t.(2*i+2) <- v;descente t (2*i+2) k)

;;

let triTas t = 
  let extractMax t1 k = 
    let v = t.(0) in (t.(0) <- t.(k-1); t.(k-1) <- v; descente t1 0 (k-1))
  in
  for k = Array.length t downto 2 do
    extractMax t k; done;;

let triParTas t = 
  creationTas t; triTas t
;;

creationTas t;;

t;;
