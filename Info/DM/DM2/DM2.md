# Exercice 1
## Question 1
Soit $i, j \in [\![0, 3]\!]$ et $k \in [\![1, 4]\!]$

Pour chaque case à la coordonné $(i, j)$ on a $4$ valeurs possibles pour $k$ : $1, 2, 3, 4$
Si on fixe la ligne $i$ on a donc $4$ possibilités pour choisir la colonne. 
Alors pour une ligne fixé on à : $4 \times 4 = 16$ possibilités
Or dans la grille on a : $4$ lignes, on ajoute donc 4 fois chaque nombre de variables possibles dans une ligne 
Ainsi, on a : 
$64$ variables propositionnelles
___


Compter le nombre de valuation reviens à compter le nombre de grilles de sudoku différentes qui suivent les règles.


On remplit la <u>première ligne</u> du tableau du sudoku,
- Dans la première case de la ligne on a $\boxed{4}$ possibilités de valuation $k_{1} \in [\![1, 4]\!]$ (car le tableau n'est pas encore rempli) 
- Dans la deuxième case de la ligne $v(x_{1, 0, k_{1}}) = 0$ (par la règle sur la ligne) alors on prend une valeur $k_{2} \in [\![1, 4]\!] \setminus \{ k_{1} \}$ cela revient à choisir quel élément sera bien évalué à $1$ dans l'ensemble : $\{ x_{0, 0, v} ; v \in [\![1, 4]\!] \setminus \{ k_{1} \} \}$ ce qui nous fait $\boxed{3}$ possibilités de valuation possible. 

Par analogie pour les $2$ dernières cases de la ligne :

$$\text{Ainsi, pour la première ligne on a : } \boxed{4! =24} \text{ choix de valuation}$$


On remplit la <u>deuxième ligne</u> : 

- Dans la première case de la ligne on prend une valeur $k_{5} \in [\![1, 4]\!] \setminus \{ k_{1}, k_{2} \}$ (car on doit respecter la règle du carré $2 \times 2$ et de la colonne) on doit alors choisir entre les valuations des éléments de cet ensemble : $\{ x_{1, 0, v} : v \in [\![1, 4]\!] \setminus \{ k_{1}, k_{2} \} \}$ on a alors $\boxed{2}$ choix. 
- Ce qui nous laisse pas le choix pour le choix de la valeur de la case $(1, 1)$ : $v(x_{1, 1, k_{6}}) = 1$ avec $k_{6} \in [\![1, 4]\!] \setminus \{ k_{1}, k_{2}, k_{5} \}$ ($|[\![1, 4]\!] \setminus \{ k_{1}, k_{2}, k_{5} \}| = 1$)

- Dans la troisième case on choisit une valeur $k_{7} \in [\![1, 4]\!]\setminus \{ k_{5}, k_{6}, k_{3}, k_{4}\}$ or $k_{4} = k_{5}$ ou $k_{4} = k_{6}$ sinon $k_{4}$ serait égal à un élément de sa ligne.
  On a deux cas :
  - Si $k_{5} = k_{3}$, alors, comme $k_{3} \neq k_{4}$ ($k_{3}$ et $k_{4}$ sur la même ligne) on a $k_{5}\neq k_{4}$ et $k_{6} \neq k_{5}$ (car $k_{6}$ et $k_{5}$ sont sur la même ligne) alors $|[\![1, 4]\!]\setminus \{ k_{5}, k_{6}, k_{3}, k_{4}\}| = 1$
  - Si $k_{6} = k_{3}$, par analogie il ne reste qu'une possibilité
  
  Dans les deux cas il ne reste donc qu'<u>une possibilité</u>

- Dans la dernière case il ne reste finalement qu'<u>une possibilité</u>

$$\text{Finalement pour la deuxième ligne on a } \boxed{2} \text{ choix de valuation}$$


On remplit la <u>troisième ligne</u> : 
- Pour la première case $(2, 0)$ :
  on a que $\boxed{2}$ choix disponibles par la règle des colonnes
- Pour la deuxième case $(2, 1)$ : 
  comme la valeur de la case $(2, 0)$ est différente de la case $(0, 0)$ et $(1, 0)$ elle est forcément égale a une des valeurs au dessus de la deuxième (par la règle du carré)
  on a donc $\boxed{2}$ possibilités de remplissage. 
- Pour les deux dernières cases $(2, 2)$ et $(2, 3)$ :
  Si la valeur de la case $(2, 0)$ et la valeur de la case $(2, 1)$ auraient été toutes les deux au dessus de la valeur de la case $(2, 2)$ (respectivement $(2, 3)$),
  comme les valeur de $(0, 2)$ et $(1, 2)$ et $(0, 3)$ et $(1, 3)$ sont différents entre eux par la règle du carré,  les valeurs de $(2, 0)$ et $(2, 1)$ et $(0, 3)$ et $(1, 3)$ (respectivement $(2, 0)$ et $(2, 1)$ et $(0, 2)$ et $(1, 2)$) le sont aussi, alors on aurait pas de possibilité de remplir la case $(2, 3)$ (respectivement $(2, 2)$). 
  
  Donc, les valeur des cases $(2, 0)$ et $(2, 1)$ sont chacune au dessus de : soit $(2, 2)$, soit $(2, 3)$.
  Mais jamais les les valeur des cases $(2, 0)$ et $(2, 1)$ au dessus d'une unique case : soit $(2, 2)$ soit $(2, 3)$
  
  Comme on a bien au dessus de $(2, 2)$ et $(2, 3)$ exactement une valeur différente à $(2, 0)$ ou $(2, 1)$, sur la ligne d'indice $2$ et la colonne d'indice $2$ (respectivement $3$) on a exactement $3$ valeurs différentes. 
  
  Ainsi, il ne reste plus qu'<u>une seule possibilité</u> pour remplir les deux dernières cases de la ligne.

$$\text{Finalement pour la troisième ligne on a } \boxed{4} \text{ choix de valuation}$$


On remplit la <u>quatrième ligne</u> : 
Pour chaque case on applique la règle des colonnes il ne nous reste donc <u>pas le choix</u> pour le placement des dernières valeurs.


Ainsi, on a $24 \times 2 \times 4 \times 1 = 192$ grilles de sudoku différentes donc,
$$\boxed{192} \text{ valuations possibles}$$

## Question 3

```OCaml 
let grille =
[|
	[|2;3;1;0|];
	[|0;0;2;0|];
	[|3;0;0;0|];
	[|0;4;0;0|]
|]
;;
```

## Question 4
On utilise les notations de l'énoncé :
$$\begin{array}{c}
x_{0, 0, 2} \wedge x_{0, 1, 3} \wedge x_{0, 2, 1} \wedge x_{1, 2, 2} \wedge x_{2, 0, 3} \wedge x_{3, 1, 4}
\end{array}$$

## Question 6
```OCaml
let isThereSolutions t =
	Et([formule_grille t; grille_complete; 
	un_par_case; un_par_ligne; un_par_colonne;
	un_par_carre])
;;
```


