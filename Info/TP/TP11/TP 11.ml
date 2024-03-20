(*Exercice 1*)
let reste m c = 
    c mod m
;;


(*Exercice 2*)
let rec hachage_chaine s = 
    let count = ref 0 in
    for i = 0 to (String.length s -1) do
        count := int_of_char(s.[i]) + 128 * (!count)
    done;
    !count
;;

(*Exercice 3*)

type ('k, 'v) table_hachage = {hache: 'k -> int; donnes: ('k * 'v) list array};;

let test = {hache = reste 4 ; donnes = [|[(150, "zero")]; 
                                         [(1, "un")];
                                         [];
                                         [(65453, "trois"); (187, "deuxiemetrois")]|]};;


let creer_table h m = 
    {hache = h m; donnes = Array.make m []};;



let recherche t k = 
    let rec rechList l =
        match l with
        | [] -> false
        | (c, _)::q -> if c == k then true else rechList q;
    in rechList (t.donnes.(t.hache k))
;;


let rec ajout_liste l (k, v) = 
    match l with
    | [] -> [(k, v)]
    | (k1, v1)::s -> if k1 == k then (k,v)::s else (k1, v1)::(ajout_liste s (k, v))
;;

let ajout t (k, v) = 
    let i = t.hache k in
    t.donnes.(i) <- ajout_liste t.donnes.(i) (k, v)
;;

let rec suppression_liste l k = 
    match l with
    | [] -> []
    | (k1, v1)::s -> if k1 == k then s else (k1, v1)::suppression_liste s k 
;;

let suppression t k = 
    let i = t.hache k in
    t.donnes.(i) <- suppression_liste t.donnes.(i) k
;;

