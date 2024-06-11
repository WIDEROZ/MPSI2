(* Définition du type mat_adj pour représenter un graphe avec une matrice d'adjacence *)

type mat_adj = float option array array ;; 


(* Algorithme de Floyd-Warshall, version bottom-up *)

let fw_bottom_up (m1:mat_adj) =
  
  let n = Array.length m1 in
  
  (* On crée deux tableaux de taille n x n : w stocke à chaque étape
  la dernier version de W^(k), et w_copy contient l'ancienne version
  à partir de laquelle la nouvelle version est calculée *)
  
  let w = Array.make_matrix n n None in
  let w_copy = Array.make_matrix n n None in
  
  
  (* On calcule W^(k) pour k allant de 0 à n *)
  for k = 0 to n do
    
    (* si k = 0 : W^(0)_ij = m1_ij *)
    if k = 0 then
      begin
        for i = 0 to (n-1) do
          for j = 0 to (n-1) do
            w.(i).(j) <- m1.(i).(j)
          done;
        done;
      end
  
    (* sinon, on calcule W^(k) en fct de W^(k-1) pour chaque k  *)
    else
      begin
        
        (* On stocke W^(k-1) dans w_copy *)
        for i = 0 to (n-1) do
          for j = 0 to (n-1) do
            w_copy.(i).(j) <- w.(i).(j)
          done;
        done;
        
        (* On calcule W^(k) dans w *)
        for i = 0 to (n-1) do
          for j = 0 to (n-1) do
            let e1 = w_copy.(i).(k-1) and e2 = w_copy.(k-1).(j) in
            
            (* On vérifie que les chemins de i vers k+1 et de k+1 vers 1
            sont < +inf : sinon, la somme est infinie, donc pas de changement *)
            if e1 <> None && e2 <> None then
              begin
                
                (* On stocke les longueurs des chemins dans b1 et b2 *)
                let Some(b1) = e1 and Some(b2) = e2 in
                
                (* On met à jour la valeur de w.(i).(j) si celle-ci
                est infinie ou supérieure à b1+b2 ; sinon, pas de changement *)
                if w.(i).(j) = None then
                  w.(i).(j) <- Some(b1 +. b2)
                else
                  let Some(b3) = w.(i).(j) in
                  if b3 > b1 +. b2 then
                    w.(i).(j) <- Some(b1 +. b2) 
                        
              end
          done;
        done;
        
      end
  done;
  w ;;


(* Test de l'algorithme sur une matrice d'adjacence d'un graphe orienté pondéré *)

let m0 = [| [|Some(0.);None;Some(-2.);None|] ;
            [|Some(4.);Some(0.);Some(3.);None|] ;
            [|None;None;Some(0.);Some(2.)|] ;
            [|None;Some(-1.);None;Some(0.)|] ;
         |] ;;

fw_bottom_up m0 ;;