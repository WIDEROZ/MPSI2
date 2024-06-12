(* Définition du type graphe_pondere représentant les graphes sous la forme
de listes d'adjacences *)

type graphe_pondere = (int * float) list array ;;


(* Définition du type file_prio pour représenter les files de priorités, et
les opérations associées *)

type file_prio = (int*float) list ;;

let rec ajout_file_prio (l:file_prio) e =
  match l with
  | [] -> [e]
  | t::s -> let t1,t2 = t and e1,e2 = e in
      if e2 < t2 then e::l
      else t::(ajout_file_prio s e) ;;

let premier_elt_file_prio l =
  match l with
  | [] -> failwith "file vide"
  | t::s -> t ;;

let enlever_file_prio l =
  match l with
  | [] -> failwith "file vide"
  | t::s -> s ;;

let rec suppr_elt_file_prio l a =
  match l with
  | []-> failwith "file vide"
  | (t1,t2)::s -> if t1 = a then s else (t1,t2)::(suppr_elt_file_prio s a) ;;

let rec appartient t1 l =
  match l with
  |[] -> false
  |(e1,e2)::s -> if e1 = t1 then true else appartient t1 s;;

let rec float_assoc a1 l =
  match l with
  | [] -> failwith "file vide"
  | (e1,e2)::s -> if e1 = a1 then e2 else float_assoc a1 s ;;


(* Algorithme de Dijkstra sur un graphe pondéré représenté par une liste
d'adjacence *)

let dijkstra (g:graphe_pondere) s1 =

  let n = Array.length g in 
  
  (* On crée le tableau des distances au sommet initial, avec des éléments
  de type option : une distance infinie est représentée par None, une distance
  finie de valeur un flottant b est représentée par Some(b) ; les distances
  sont initialement infinies *)
  let distances = Array.make n None in
  
  (* On créele tableau visite, indiquant par un booléen pour chaque sommet
  s'il a été visité *)
  let visite = Array.make n false in
  distances.(s1) <- Some(0.);

  (* on crée une référence f vers une file de priorité *)
  let f = ref [] in
  f := ajout_file_prio (!f) (s1,0.);    

  (* On fait défiler la file de priorité tant qu'elle est non-vide ; on ajoute
  ou modifie les distances associées aux voisins du sommet parcouru *)
  while (!f <> []) do
    
    (* on défile le premier élément de la file : t1 est le sommet, t2 est sa
    distance (réelle) au sommet initial associée, optimale car c'est le
    premier élément de la file *)
    let (t1,t2)::s = (!f) in
    
    (* On récupère la liste d'adjacence du sommet t1, contenue dans g.(t1) *)
    let lv = g.(t1) in 
    
    (* on enlève le premier élément de f *)
    f := s;
    
    (* on marque t1 comme visité *)
    visite.(t1) <- true;
    print_int t1;Printf.printf("\n");print_float t2;Printf.printf("\n"); 
    
    let rec mise_a_jour l1 =
      
      (* on définit récursivement la fonction mise_a_jour, qui prend en entrée
      une liste de couples sommets/longueurs d'arêtes (en pratique, c'est la
      liste d'adjacence du sommet t1) et, pour chaque couple dans la liste
      représentant un sommet s1 et la longueur de (t1,s1), met à jour la
      distance du sommet initial à s1 si nécessaire *)
      match l1 with
      | []-> ()
      | (a1,a2)::s ->
          begin
            if not(visite.(a1)) then (* On effectue la mise à jour seulement
                                     pour les sommet non-visités *)

              begin
                if appartient a1 (!f) then (* si le sommet a1 est dans la file
                                              de prio, sa distance au sommet
                                              initial est déjà <inf, on la
                                              modifie potentiellement ;
                                              sinon, on l'ajoute *)
                  begin
                    let Some(b2) = distances.(a1) in
                    if a2 +. t2 < b2 then
                        (* on supprime l'ancien couple (sommet,distance), on
                        ajoute le nouveau et on stocke la nouvelle distance dans
                        le tableau *)
                      begin
                        f := suppr_elt_file_prio (!f) a1;
                        f := ajout_file_prio (!f) (a1,a2 +. t2);
                        distances.(a1) <- Some(a2 +. t2);
                      end
                  end
                else (* Si l'élément n'est pas dans la file de prio, on fait
                     pareil mais sans la suppression *)
                  begin
                    f := ajout_file_prio (!f) (a1,a2 +. t2);
                    distances.(a1) <- Some(a2 +. t2);
                  end
              end;
            mise_a_jour s;
          end;
    in mise_a_jour lv;
    Printf.printf("\n\n");
  done;
  distances ;;

let (g:graphe_pondere) =
  [|[(1,5.);(2,6.);(4,15.);(5,12.)];
    [(0,5.);(3,10.)];
    [(0,6.);(4,15.);(5,5.)];
    [(1,10.);(6,10.)];
    [(0,15.);(2,13.);(7,8.)];
    [(0,12.);(2,5.);(7,10.)];
    [(3,10.);(7,7.)];
    [(6,7.);(5,10.)]
  |] ;;

dijkstra g 0 ;;
