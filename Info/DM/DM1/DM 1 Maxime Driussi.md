# Exercice 1 : 

## 1. 
$$f'_{1} : x \mapsto a_{i}ix^{i-1} \space\space\space\space\space\space\space\space\space\space\space\space\space\space f'_{2} : x \mapsto \sum_{i=O}^n a_{i}ix^{i-1} $$

## 2.

 ```Ocaml
let rec poly coeffs x0 =
	match coeffs with
	| [] -> 0.0
	| coeff :: reste -> coeff +. x0 *. (poly reste x0);;
 ```
 
## 3.

```Ocaml
let deriv coeffs =
	let rec aux niveau coeffs =
		match coeffs with
		| [] -> []
		| a::r -> a*.niveau::aux (niveau+.1.) r
	in match coeffs with
	|[] -> []
	|a::r -> aux 1. r;;
```

## 4.

```Ocaml
let rec gradient coeffs x0 alpha iteration =
	if iteration = 0 then (x0, poly coeffs x0)
	else
	let gradient_value = poly (deriv coeffs) x0 in
	let nouveau_x = x0 -. (alpha *. gradient_value) in
	gradient coeffs nouveau_x alpha (iteration - 1)
```

## 5.

```Ocaml
let rec newton coeffs x n =
	let calcul coeffs x = x -.(poly coeffs x)/.(poly (deriv coeffs) x)
	in match n with
	| 0 -> (calcul coeffs x)
	| n -> newton coeffs (calcul coeffs x) (n-1);;
```

# Exercice 2:

## 1.
```Ocaml
type position = Centre | Droite | Gauche ;;
```

## 2.
```Ocaml
let rec deplacements_hanoi n (origine:position) (destination:position)
(intermediaire:position) =
	let rec fusion liste1 liste2 =
		match liste1 with
		| [] -> liste2
		| t::s -> t::(fusion s liste2)
	in match n with
	| 0 -> []
	| n -> fusion (fusion (deplacements_hanoi (n-1) origine intermediaire
	destination) [(origine, destination)]) (deplacements_hanoi (n-1)
	intermediaire destination origine);;
```

## 3.
```Ocaml
type etat = { gauche : int list ; centre : int list ; droite : int list };;
```

## 4.
```Ocaml
let generateur_liste n =
	let rec aux n x =
		if n - x + 1 = 0 then [] else x :: aux n (x + 1)
	in
	aux n 1 ;;

let etats_hanoi n depart arrive inter =
	let rec aux deplacements liste =
		match deplacements with
		| [] -> []
		| t::s ->
			match t with
			| (Gauche, Droite) ->
				let nouvel_etat = { liste with droite = (List.hd liste.gauche) ::
				liste.droite; gauche = List.tl liste.gauche } in
				nouvel_etat :: (aux s nouvel_etat)
			| (Gauche, Centre) ->
				let nouvel_etat = { liste with centre = (List.hd liste.gauche) ::
				liste.centre; gauche = List.tl liste.gauche } in
				nouvel_etat :: (aux s nouvel_etat)
			| (Centre, Gauche) ->
				let nouvel_etat = { liste with gauche = (List.hd liste.centre) ::
				liste.gauche; centre = List.tl liste.centre } in
				nouvel_etat :: (aux s nouvel_etat)
			| (Centre, Droite) ->
				let nouvel_etat = { liste with droite = (List.hd liste.centre) ::
				liste.droite; centre = List.tl liste.centre } in
				nouvel_etat :: (aux s nouvel_etat)
			| (Droite, Gauche) ->
				let nouvel_etat = { liste with gauche = (List.hd liste.droite) ::
				liste.gauche; droite = List.tl liste.droite } in
				nouvel_etat :: (aux s nouvel_etat)
			| (Droite, Centre) ->
				let nouvel_etat = { liste with centre = (List.hd liste.droite) ::
				liste.centre; droite = List.tl liste.droite } in
				nouvel_etat :: (aux s nouvel_etat)
			| _ -> []
		in
		let etat_initial tour_initial =
		match tour_initial with (* crée l'état de départ *)
		| Centre -> { gauche = [] ; centre = generateur_liste n ; droite = [] }
		| Gauche -> { gauche = generateur_liste n ; centre = [] ; droite = [] }
		| Droite -> { gauche = [] ; centre = [] ; droite = generateur_liste n }
	in
	(etat_initial depart) :: (aux (deplacements_hanoi n depart arrive inter)
	(etat_initial depart))
```

## 5.
$C_{0}$ = 1 ; $C_{1}$ = 2 ; $C_{2}$ = 4 ; $C_{3}$ = 8 ; $C_{4}$ = 16  -> 2 appelle de (n-1)

## 6.
$C_{n+1} = 2 C_{n}$ 
La suite $(Un)$ est donc une suite géométrique de raison 2

## 7.
$C_{n}$ = $2^n$ ; Ainsi la complexité est de $Θ(2^n)$

# Exercice 3:

# Partie A:
## 1.
Montrons tout d'abord que la fonction insertion termine.
La fonction présente deux cas terminaux : lorsque la liste l est vide (l = \[\])
ou lorsque t > v. De plus, l'appel récursif est effectué sur s, qui est de
taille strictement inférieure à l car l = t + s. La fonction utilise alors la
longueur de l, notée longueur(l), comme un variant. Ce terme est un entier
positif et décroissant, car l(i+1) = s(i) et donc longueur(i+1) < longueur(i).
Ainsi, la fonction termine.
De manière similaire, la fonction tri_insertion termine également, car elle
utilise longueur(l) comme variant, qui reste un entier positif et
décroissant pour les mêmes raisons mentionnées précédemment. En
conséquence, la fonction tri_insertion est démontrée comme terminant
correctement.

## 2.
Supposons que la fonction insertion soit correcte.

Démontrons par récurrence la propriété P(n) : "pour toute liste l d'entiers
de longueur n, l'exécution de l'algorithme de tri par insertion
(tri_insertion) renvoie une liste triée."

<u>Initialisation :</u>

La propriété P(0) est valide, car tri_insertion renvoie une liste vide ("\[\]")
lorsque la liste d'entrée est vide (“l = \[\]”), c'est-à-dire lorsque n = 0.

<u>Hérédité :</u>

Soit n un entier tel que P(n) est vrai. Montrons que P(n+1) est également
vrai :

Considérons une liste l de longueur n+1. Lors de l'exécution de
tri_insertion sur cette liste, l'algorithme effectue l'insertion d'un
élément t dans la liste triée obtenue à partir des n premiers éléments de l. Nous supposons que cette insertion est correcte. En fin de compte, la
liste renvoyée par tri_insertion est correctement ordonnée, car la liste
triée obtenue à partir des n premiers éléments était déjà triée.

Ainsi, par récurrence, la propriété P(n) est démontrée pour tout entier n,
ce qui signifie que l'algorithme de tri par insertion renvoie une liste triée
pour toute liste d'entiers.

# Partie B:

## 1.
Supposons que les fonctions division et fusion atteignent un état final. La
fonction présentée comporte deux cas terminaux : lorsque la liste l est
vide (l = \[\]) et lorsque sa longueur est égale à 1 (longueur(l) = 1). De plus, la
fonction utilise la longueur de la liste (longueur(l)) comme une mesure de
variant, c'est-à-dire qu'à chaque itération, la liste est divisée en deux
sous-listes, ce qui garantit que longueur(l(i+1)) = longueur(l(i))/2. Ainsi, la
longueur totale de la liste décroît à chaque étape, restant un entier
positif, assurant ainsi la terminaison de la fonction.

## 2.
Supposons que les opérations de division et de fusion soient correctes.

Démontrons par récurrence forte la propriété P(n) : "pour toute liste
d'entiers l de longueur n, tri_fusion renvoie la liste triée."

<u>Initialisation :</u>

P(0) est vraie car tri_fusion renvoie \[\ ] lorsque l = \[\] (c'est-à-dire n = 0).

<u>Hérédité :</u>

Soit n un entier ≥ 0 tel que pour tout k appartenant à \[\2; n\]\, P(k) est vraie.
Montrons P(n+1) :

La fonction tri_fusion appliquée à une liste l de longueur n+1 renvoie la
fusion du tri fusion de la division de l'en deux listes. Ces deux listes sont
de taille n/2 et appartiennent donc à \[\2; n\]\. Selon l'hypothèse de
récurrence, le tri fusion de ces listes renvoie des listes triées.

De plus, comme la fonction de fusion est correcte, elle renvoie la fusion
triée des deux listes. Ainsi, tri_fusion renvoie bien la liste l triée.

En conclusion, la propriété P(n+1) est démontrée, et donc, par récurrence
forte, la fonction tri_fusion est correcte pour toutes les listes d'entiers
de longueur n.