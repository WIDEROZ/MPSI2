Soit $E, F, G, \dots$ des $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$ espaces vectoriels de dimension finie
# I. Matrice d'une application linéaire dans un couple de base
## 1. Définition et linéarité
### a. Définitions
#### Définition
La matrice d'une famille de vecteurs de $E$ : $x = (x_{j})_{j = 1}^{p}$ dans une base $e = (e_{i})_{i = 1}^{n}$ de $E$ est la matrice des coordonnées dans $e$ des vecteurs de $x$ : 
$$Mat_{e}(x) = \begin{pmatrix}
e_{i}^{*}(x_{j})
\end{pmatrix}_{i, j} = \text{Excal 1}$$

#### Remarque / Notation
Si $x$ est un vecteur de $E$, 
$$Mat_{e}((x)) = Mat_{e}(x)$$

#### Exemple
Si $u = (1, 2,3), v = (4, 5, 6)$ et $e$ base canonique de $\mathbb{R}^{3}$
$$Mat_{e}((u, v)) = \begin{pmatrix}
1&4 \\
2&5 \\
3 &6
\end{pmatrix}$$

#### Définition
Soient $u \in \mathcal{L}(E, F)$
et $\begin{cases}e \text{ une base de }E \\ f \text{ une base de }F \end{cases}$
Alors la matrice de $u$ dans le couple de base $(e,f)$ est :
$$Mat_{e,f}(u) = Mat_{f}(u(e))$$
Plus précisément : 
Si $e = (e_{j})_{j=1}^{p}$ et $f = (f_{i})_{i = 1}^{n}$ alors
$$Mat_{e, f}(u) = Mat_{f}(u(e_{1}), \dots, u(e_{p}))= \text{Exal 2}$$

#### Exercice
$$u : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{2} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto 
\begin{pmatrix}
x+2y+3z \\
3x+2y+z
\end{pmatrix}
\end{cases}$$
On note $can_{n}$ la base $a_{n}$ de $\mathbb{R}^{n}$
Pour exprimer
$$A = Mat_{can_{3}, can_{2}}(u)$$
En notant $can_{3} = (e_{1}, e_{2}, e_{3})$ et $can_{2} = (f_{1}, f_{2})$
On calcule : $u(e_{1}), u(e_{2}), u(e_{3})$ et on les exprime dans la base $can_{2}$ en colonnes

On a : 
$$\begin{cases}
u(e_{1}) = \begin{pmatrix}
1 \\
3
\end{pmatrix} \\
u(e_{2}) = \begin{pmatrix}
2 \\
2
\end{pmatrix} \\
u(e_{3}) = \begin{pmatrix}
3 \\
1
\end{pmatrix}
\end{cases}$$
Donc, 
$$A = \begin{pmatrix}
1&2&3 \\
3&2&1
\end{pmatrix} \text{ Voir Excal 3 (Important)}$$
$$u\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} = A\times\begin{pmatrix}
x \\
y \\
z
\end{pmatrix}$$

#### Exercice
Soit $v : \mathbb{R}^{2} \to \mathbb{R}^{3}$ et $e = can_{2}$ l'application linéaire telle que : 
$$\begin{cases}
v(e_{1}) = (1, 2,3) \\
v(e_{2}) = (3, 2, 1)
\end{cases}$$
Exprimer, 
$$B = Mat_{e, can_{3}}(v)$$

$$B = \begin{pmatrix}
1&3 \\
2&2 \\
3&1
\end{pmatrix}$$

#### Exercice
Soit $w : E \to F$ avec
$$\begin{cases}
\dim E = 2 \\
e = (e_{1}, e_{2}) \text{ une base de }E \\
\dim F = 3 \\
f = (f_{1}, f_{2}, f_{3}) \text{ une base de }F
\end{cases}$$

Déterminée uniquement par : 
$$\begin{cases}
w(e_{1}) = f_{1} + 2f_{2} + 3f_{3} \\
w(e_{2}) = 3f_{1} + 2f_{2} + f_{3}
\end{cases}$$
Exprimer
$$C = Mat_{e, f}(w)$$
$$C = \begin{pmatrix}
1&3 \\
2&2 \\
3&1
\end{pmatrix}$$

#### Remarque
On fait correspondre une matrice a l'application linéaire par un choix de bases :
Changer les bases change la matrice en général, donc parler de le matrice de $u$ n'a aucun sens.
$$\boxed{ZZZ}$$

### b. Isomorphismes d'espaces vectoriels
#### Théorème
Avec les notations précédentes : 
Pour $n = \dim F$ et $p = \dim E$
L'application $Mat_{e, f} : \mathcal{L}(E, F) \to \mathcal{M}_{n, p}(\mathbb{K})$ est un isomorphisme d'espaces vectoriels

Démonstration : 
Soient $u, v \in \mathcal{L}(E, F)$ et $\lambda \in \mathbb{K}$, 
Alors, 
$$\begin{array}{cl}
Mat_{e, f}(\lambda u + v) &= Mat_{f}((\lambda u+v)(e)) \\
&= (f_{i}^{*}((\lambda u+v)(e_{j})))_{i, j}  \\
&= (f_{i}^{*}(\lambda(u(e_{j}))+v(e_{j})))_{i, j} \\
&=  (\lambda f_{i}^{*}(u(e_{j}))+ f_{i}^{*}(v(e_{j})))_{i, j} \\
&= \lambda(f_{i}^{*}(u(e_{j})))_{i, j} + (f_{i}^{*}(v(e_{j})))_{i, j} \\
&= \lambda Mat_{e, f}(u) + Mat_{e, f}(v)
\end{array}$$
Ainsi $Mat_{e, f}$ est linéaire,
Comme $\mathcal{L}(E, F)$ et $\mathcal{M}_{n, p}(\mathbb{K})$ sont de même dimension finie, il suffit de prouver (par exemple) que $Mat_{e, f}$ est injective
($\text{Ker }(Mat_{e, f}) = \{ 0_{\mathcal{L}(E, F)} \}$)
Soit $u \in \mathcal{L}(E, F)$, $Mat_{e, f}(u) = 0_{\mathcal{M}_{n, p}(\mathbb{K})}$
On a $Mat_{f}(u(e)) = 0$ donc, tous les $u(e_{j}) (j \in [\![1, p]\!]$ sont nuls (car leur coordonnées sont nuls)
Ainsi $\mathrm{Im}(u) = Vect(u(e)) = \{ 0 \}$
ie $u = 0$
Ainsi $u$ est injective.
Puis bijective car $E$ et $F$ sont de même dimension finie
Ainsi $Mat_{e, f}$ est un isomorphisme.

#### Remarque
Cet isomorphisme n'est pas canonique car il dépend du couple de bases choisi

### c. Calcul de la matrice des coordonnées de l'image
#### Théorème
Soit $u \in \mathcal{L}(E, F)$
$e$ une base de $E$
$f$ une base de $F$
On note : $p = \dim E$ et $n = \dim F$
Soit $x \in E$,
On note : 
$$\begin{cases}
A = Mat_{e, f}(u) \\
X = Mat_{e}(x) \\
Y = Mat_{f}(u(x))
\end{cases}$$
Alors, 
$$Y = AX$$

Démonstration : 
Par définition de $A$ : 
$$\sum_{i = 1}^{n}\left( \sum_{j = 1}^{p}A[i, j]X[j]  \right)f_{i} = \sum_{i = 1}^{n}\left( \sum_{j = 1}^{p}f_{i}^{*}(u(e_{j}))X[j] \right)f_{i}$$
Par commutativité de $\mathbb{K}$ et par linéarité : 
$$= \sum_{i = 1}^{n}\left( \sum_{j = 1}^{p} X[j](f_{i}^{*} \circ  u)(e_{j}) \right)f_{i} = \sum_{ i =1}^{n}(f_{i}\circ  u) \left( \sum_{j = 1}^{p} X[j] e_{j} \right)f_{i}$$
$$= \sum_{i=1}^{n}f_{i}^{*}(u(x))f_{i} = u(x)$$
Par unicité des coordonnées, la famille des coordonnées de $u(x)$ dans la base $f$ étant à la fois $(Y[i])_{i=1}^{n}$ et
$$\left( \sum_{j = 1}^{p}A[i, j]X[j] \right)_{i = 1}^{n}$$
On a pour tout $i \in [\![1, n]\!]$, 
$$\sum_{j = 1}^{p}A [i, j]X[j] = Y[i]$$
ie 
$$AX = Y$$

#### Remarque
Si on a : $x_{1}, \dots, x_{k} \in E$, 
En notant : 
$X_{1}, \dots, X_{k}$ leur matrice dans $E$ et $Y_{1}, \dots, Y_{k}$ les matrices de leurs images dans $F$,
on a en concaténant les colonnes :
$$A(X_{1}|\dots|X_{k}) = (Y_{1}|\dots|Y_{k})$$

#### Propriété
Avec les notations du théorème précédent, 
$Mat_{e, f}(u)$ est l'unique matrice vérifiant l'égalité pour tout $x \in E$

Démonstration : 
Soit $A' \in \mathcal{M}_{n, p}(\mathbb{K}) \setminus \{ A \}$, 
Soit $u' \in \mathcal{L}(E, F)$ l'unique antécédent de $A'$ par $Mat_{e, f}$. 
Comme $Mat_{e, f}(u') \neq A = Mat_{e, f}(u)$ alors, $u' \neq u$
Soit $x \in E$ tq $u'(x) \neq u(x)$
Avec les notations précédentes, $Y' \neq Y$
Donc, 
$$A'X = Y' \neq Y$$
Par le théorème précédent. 

## 2. Méthode de calculs de noyaux et d'images
On reprend les notations précédentes ($e, f, u, A, X, Y$)

#### Noyau
Pour déterminer $\text{Ker }u$ on résout : $AX = 0$
Soit en utilisant le pivot, soit par un subterfuge malicieux on trouve une matrice échelonnée par lignes qui est équivalent par lignes à $A$. 
En revenant au système et en supprimant les équations triviales ($0 = 0$), on obtiens une représentation cartésienne de $\text{Ker }u$ relative à la base $e$ (elle est bien "minimale"). 
On a autant d'équations non triviales que de pivots et on admet provisoirement que le nombre de pivots est égal à $rg(u)$
(On le démontrera plus tard). Par la formule du rang :
$$\dim \text{Ker }u = \dim E - rg(u) = p-r$$
et cette dimension est aussi le nombre d'inconnues secondaires
Pour avoir une base de $\text{Ker }u$ on peut continuer l'algorithme du pivot jusqu'à obtenir une matrice échelonnée réduite par lignes, équivalente par lignes à $A$. 
(On remarque que une telle matrice est unique)

On obtiens une base de $\text{Ker }u$ ainsi : 
En notant : $z_{1} = x_{i_{1}}, \dots z_{p-r} = x_{i_{p-r}}$ les inconnues secondaires, $N_{k}$ ($k \in [\![1, p-r]\!]$) la matrice colonne obtenue en prenant : 
$$z_{i} = \delta_{i, k} \text{ Pour tout } i \in [\![1, p-r]\!]$$
et en déduisant les valeurs des inconnues principales et $n_{k} \in E$ le vecteur défini par : $Mat_{e}(n_{k}) = N_{k}$
Alors, $(n_{1}, \dots, n_{k})$ est une base de $\text{Ker } u$


#### Image (voir le poly)


#### Exemple

Soit $E$ un ev de dim $5$, $(e_{1}, e_{2}, e_{3}, e_{4}, e_{5}) = e$ une base de $E$, 
$F$ un ev de dim $4$, $(f_{1}, f_{2}, f_{3}, f_{4}) = f$ une base de $F$ et
$u \in \mathcal{L}(E, F)$ l'unique application linéaire vérifiant : 
$$\begin{cases}
u(e_{1}) =\space\space f_{1}+2f_{2}+5f_{3}+7f_{4} \\
u(e_{2}) = \space\space\space\space\space\space\space\space\space \space f_{2}+2f_{3}+3f_{4} \\
u(e_{3}) = 2f_{1}+3f_{2}+8f_{3}+11f_{4} \\
u(e_{4}) = -f_{1}-f_{2}-3f_{3}-4f_{4} \\
u(e_{5}) = f_{1}+4f_{2}+9f_{3}+13f_{4}
\end{cases}$$

##### $\text{Ker }$
Déterminer une représentation cartésienne (minimale) de $\text{Ker }u$ puis une base de $\text{Ker }u$
On a : 
$$A = Mat_{e, f}(u) = $$
$$\begin{pmatrix}
1&0&2&-1&1 \\
2&1&3&-1&4 \\
5&2&8&-3&9 \\
7&3&11&-4&13
\end{pmatrix} \sim_{L} \begin{pmatrix}
1&0&2&-1&1 \\
0&1&-1&1&2 \\
0&2&-2&2&4 \\
0&3&-3&3&6
\end{pmatrix} \begin{array}{l}
 \\
L_{2} \leftarrow L_{2} - 2 L_{1} \\
L_{3} \leftarrow L_{3} - 5 L_{1} \\
L_{4} \leftarrow L_{4} - 7 L_{1}
\end{array}$$
$$ \sim _{L} \begin{pmatrix}
1&0&2&-1&1 \\
0&1&-1&1&2 \\
0&0&0&0&0 \\
0&0&0&0&0
\end{pmatrix} \begin{array}{l}
 \\
 \\
L_{3} \leftarrow L_{3} - 2L_{2} \\
L_{4} \leftarrow L_{4} - 3 L_{2}
\end{array}$$
On a bien $A$ qui est échelonné
Ainsi, 
$$\begin{cases}
x&&  &+& 2z &-& t &+& u &=& 0\\
 && y &-& z &+& t &+& 2u& =& 0
\end{cases}$$
est une représentation cartésienne minimale de $\text{Ker }u$ en notant $x, y, z, t, u$ les coordonnées dans la base $e$.

Ainsi $\text{Ker u}$ est un sev de $E$ de dimension $3 = 5-2$
(2 pivots ie $rg(u) = 2$ et $\dim E = 5$)

Pour avoir une base de $\text{Ker }u$ on poursuit l'algo, mais ici il n'y a rien a faire car la matrice est déjà échelonnée réduite puis : 
- On fixe l'inconnue secondaire $z$ a $1$ et les autres a $0$ ce qui fournit un premier vecteur $n_{1}$ tel que
  $$Mat_{e}(n_{1}) = \begin{pmatrix} -2 \\
1 \\
1 \\
0 \\
0 \end{pmatrix}$$
- La même pour $t$ ce qui nous donne un deuxième vecteur $n_{2}$ tel que :
  $$Mat_{e}(n_{2}) = \begin{pmatrix} 1 \\
-1 \\
0 \\
1 \\
0  \end{pmatrix}$$

- De même pour $u$
  $$Mat_{e}(n_{3}) = \begin{pmatrix} 
-1 \\
-2 \\
0 \\
0 \\
1
\end{pmatrix}$$

Finalement une base de $\text{Ker }u$ et $n = (n_{1}, n_{2}, n_{3})$
Définie par : 
$$Mat_{e}(n) = \begin{pmatrix}
-2 &1&-1 \\
1&-1&-2 \\
1&0&0 \\
0&1&0 \\
0&0&1
\end{pmatrix}$$

##### Image
$$\begin{pmatrix}
1&0&2&-1&1 \\
2&1&3&-1&4 \\
5&2&8&-3&9 \\
7&3&11&-4&13
\end{pmatrix} \sim_{C} \begin{pmatrix}
1&0&0&0&0 \\
2&1&-1&1&2 \\
5&2&-2&2&4 \\
7&3&-3&3&6
\end{pmatrix}$$
- $C_{3} \leftarrow C_{3}-2C_{1}$
- $C_{4} \leftarrow C_{4} + C_{1}$
- $C_{5} \leftarrow C_{5} - C_{1}$
$$\sim_{C} \begin{pmatrix}
1&0&0&0&0 \\
2&1&0&0&0 \\
5&2&0&0&0 \\
7&3&0&0&0
\end{pmatrix}$$
- $C_{3}\leftarrow C_{3} + C_{2}$
- $C_{4} \leftarrow C_{4} -C_{2}$
- $C_{5} \leftarrow C_{5} - 2C_{2}$

Ainsi une base de $\mathrm{Im}(u)$ est $g = (g_{1}, g_{2})$
ou 
$$g_{1} = f_{1}+2f_{2}+5f_{3}+7f_{4}$$
$$g_{2}=f_{2}+2f_{3}+3f_{4}$$
$$Mat_{f}(g) = \begin{pmatrix}
1&0 \\
2&1 \\
5&2 \\
7&3
\end{pmatrix}$$

ATTENTION : FAUX de dire que : 
$$g_{1}= \begin{pmatrix}
1 \\
2 \\
5 \\
7
\end{pmatrix}$$



###### Attention !
Dans les 2 cas ne pas confondre les vecteurs $n_{1}, n_{2}, n_{3} \in E$ avec les vecteurs colonnes de leur coordonnées dans la base $e$, ni $g_{1}, g_{2} \in F$ avec les vecteurs colonnes de leur coordonnées dans la base $f$

#### Remarque
Pour une base de $\mathrm{Im}(u)$, la descente du pivot par colonne suffit. 

Pour une représentation cartésienne de l'image : 
$$M = (A|Y)$$
$$= \left( \begin{array}{ccccc|c}
1&0&2&-1&1&x' \\
2&1&3&-1&4&y' \\
5&2&8&-3&9&z' \\
7&3&11&-4&13&t'
\end{array} \right)$$
Faire en exercice

#### Exercice
$E = \mathcal{M}_{2, 3}(\mathbb{R})$ et $e$ sa basse canonique en lignes
$F = \mathcal{M}_{2}(\mathbb{R})$ et $f$ sa base canonique en lignes
Soit $A \in E$,
On note
$$A = \begin{pmatrix}
a&b \\
c&d \\
g&h 
\end{pmatrix}$$
On considère
$$\phi_{A} : \begin{cases}
E \to F \\
M \mapsto MA
\end{cases}$$
Déterminer $Mat_{e,f}(\phi_{A})$
On a $e = (e_{1}, \dots, e_{6})$
$$e = \begin{pmatrix}
\begin{pmatrix}
1&0&0 \\
0&0&0
\end{pmatrix}
, \begin{pmatrix}
0&1&0 \\
0&0&0
\end{pmatrix}, \dots, \begin{pmatrix}
0&0&0 \\
0&0&1
\end{pmatrix}\end{pmatrix}$$
et $f = (f_{1}, \dots, f_{4})$
$$f = \begin{pmatrix}
\begin{pmatrix}
1&0 \\
0&0
\end{pmatrix}, \begin{pmatrix}
0&1 \\
0&0
\end{pmatrix}, \begin{pmatrix}
0&0 \\
1&0
\end{pmatrix}, \begin{pmatrix}
0&0 \\
0&1
\end{pmatrix}
\end{pmatrix}$$

$\phi_{A}$ est linéaire car le produit matriciel est bilinéaire
On a : 
$$\phi(e_{1}) = \begin{pmatrix}
1&0&0 \\
0&0&0
\end{pmatrix}\begin{pmatrix}
a&b \\
c&d \\
g&h
\end{pmatrix} = \begin{pmatrix}
a&b \\
0&0
\end{pmatrix} = af_{1}+b f_{2}$$

$$\tilde{A} = \begin{pmatrix}
a&c&g&0&0&0 \\
b&d&h&0&0&0 \\
0&0&0&a&c&g \\
0&0&0&b&d&h
\end{pmatrix}$$
Calculer $Y = \phi_{A}\left(\begin{pmatrix}1&2&3 \\ 4&5&6\end{pmatrix}\right)$ sans passer par l'application

On a : $Mat_{f}(Y) = Mat_{f, g}(\phi_{A})Mat_{e}\begin{pmatrix}1&2&3 \\ 4&5&6\end{pmatrix}$
$$\tilde{A} \begin{pmatrix}
1 \\
2 \\
3 \\
4 \\
5 \\
6
\end{pmatrix} = \begin{pmatrix}
a+2c+3g \\
b+2d+3h \\
4a+5c+6g \\
4b+5c+6h
\end{pmatrix}$$
Ce sont les coordonnées de la matrice $Y$ dans la base $f$
Ainsi, 
$$Y = \begin{pmatrix}
a+2c+3g&b+2d+3h \\
4a+5c+6g&4b+5c+6h
\end{pmatrix}$$


###### Exercice
On suppose $\begin{pmatrix}a \\c \\b\end{pmatrix}$ et $\begin{pmatrix}b \\ d \\f\end{pmatrix}$ non colinéaires. 
Quel est le noyau de $\phi_{A}$ et son image. 
Soit $M = \begin{pmatrix}x&y&z \\ t&u&v\end{pmatrix} \in E$ 
Alors, 
$$\phi_{A}(M) = 0 \Leftrightarrow \tilde{A} \begin{pmatrix}
x \\
y \\
z \\
t \\
u \\
v
\end{pmatrix} = 0_{\mathcal{M}_{6, 1}} \Leftrightarrow \begin{cases}
xa+yc+zg=0 \\
xb+yd+zh=0 \\
ta+uc+vg=0 \\
tb+ud+vh=0
\end{cases}$$
Faire le pivot :
On obtiens : $rg(\phi_{A}) = 4$,
Ainsi $\dim \text{Ker }\phi_{A} = 2$

## 3. Composition et produit matriciel
### a. Matrices et compositions
#### Théorème
Soit $E, F, G$ de dimension finies $q, p, n$
et $e, f, g$ des bases de ces espaces
Soit $u \in \mathcal{L}(E, F), v \in \mathcal{L}(F, G)$,
Alors, 
$$Mat_{e, g}(v \circ u) = Mat_{f, g}(v)Mat_{e, f}(u)$$
###### Attention a l'inversion : la noter a chaque utilisation de la formule

Démonstration : 
$$\begin{array}{rl}
Mat_{f, g}(v)Mat_{e, f}(u) &= Mat_{f, g}(v)Mat_{e, f}(u(e_{1}), \dots, u(e_{q})) \\
&= Mat_{f, g}(v)(Mat_{f}(u(e_{1}))|\dots|Mat_{f}(u(e_{q}))) \\
&= Mat_{g, f}(v)Mat_{f}(u(e_{1}))| \dots |Mat_{g, f}(v)Mat_{f}(u(e_{q})) \\
&= Mat_{g}(v(u(e_{1})))| \dots | Mat_{g}(v(u(e_{q}))) \\
&= Mat_{g}(v \circ  u (e)) = Mat_{e, g}(v \circ  u)
\end{array}$$


#### Corollaire
Soient $E, F$ de dimension finies, 
$u \in \mathcal{L}(E, F)$ et
$e, f$ des bases de ces espaces
Alors,
$u$ est in un isomorphisme ssi
$Mat_{e, f}(u)$ est carrée inversible
Dans ce cas, on a : 
$$Mat_{f, e}(u^{-1}) = (Mat_{e, f}(u))^{-1}$$

Démonstration : 
Supposons que $u$ est un isomorphisme,
$\dim F= \dim E = n$
Donc, $Mat_{e, f}(u)$ est carrée
De plus par le théorème précédent
$$Mat_{f, e}(u^{-1})Mat_{e, f}(u) = Mat_{e, e}(Id_{E}) = I_{n}$$
Ainsi, 
$Mat_{e, f}(u)$ est inversible a gauche donc inversible (car c'est une matrice carrée) et 
$$(Mat_{e, f}(u))^{-1} = Mat_{f, e}(u^{-1})$$

Supposons que $Mat_{e, f}(u)$ soit carrée inversible, 
Alors d'une part $E,F$ sont de même dimension finie, 
D'autre part : pour $x \in \text{Ker }u$ on a : 
$$Mat_{e, f}(u)Mat_{e}(x) = Mat_{f}(u(x)) = 0$$
En multipliant a gauche par : $Mat_{e, f}(u)^{-1}$ (car $Mat_{e, f}(u)$ est inversible a gauche et c'est une patrice carrée), on obtiens : 
$Mat_{e}(x)$ ie $x = 0$
Ainsi, $u$ est injective, puis bijective. 

### b. Cas d'un endomorphisme
#### Notation
Pour $E$ de dimension finie $n$ et $u \in \mathcal{L}(E)$, 
On note : 
$$Mat_{e}(u) := Mat_{e, e}(u)$$

#### Théorème
$$Mat_{e} : (\mathcal{L}(E), +, \circ) \to (\mathcal{M}_{n}(\mathbb{K}), +, \times)$$
est un isomorphisme d'anneaux

Démonstration : 
1. Comme $Mat_{e}$ est in isomorphisme d'ev, il préserve l'addition. 
2. $Mat_{e}(Id_{E}) = I_{n}$ (neutre de $\circ_{\mathcal{L}(E)}$  / neutre de $\times_{\mathcal{M}_{n}(\mathbb{K})}$)
3. Pour $u, v \in \mathcal{L}(E)$ 
   $$Mat_{e}(v \circ u) = Mat_{e}(v) Mat_{e}(u)$$
   Par le théorème précédent
4. On sait déjà que $Mat_{e}$ est bijectif car c'est un isomorphisme d'ev



#### Remarque
On sait déjà que : 
$$Mat_{e} = Mat_{e, e} : (\mathcal{L}(E), +, \cdot) \to (\mathcal{M}_{n}(\mathbb{K}), +, \cdot)$$
est un isomorphisme d'espace vectoriel
Ainsi, 
$$Mat_{e} : (\mathcal{L}(E), +, \cdot_{\mathbb{K}}, \circ ) \to (\mathcal{M}_{n}(\mathbb{K}), +, \cdot_{\mathbb{K}}, \times)$$
est un isomorphisme d'algèbre. 

#### Remarque
Attention cet isomorphisme dépend de la base choisie

#### Corollaire
Pour une matrice carrée, l'inversible a gauche (ou a droite) suffit pour être inversible.

Démonstration : 
Ce phénomène est connu dans $\mathcal{L}(E)$ lorsque $E$ est de dimension finie. 
Par l'isomorphisme précédent il est donc valide dans $\mathcal{M}_{n}(\mathbb{K})$

### c. Calcul de l'inverse d'une matrice
La méthode du pivot est déjà vue
On peut la 复活 ainsi : 
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$
Soit $E$ de dimension $n$, $e$ une base de $E$ et $u \in \mathcal{L}(E)$ l'endomorphisme vérifiant : $Mat_{e}(u) = A$
Calculer $A^{-1}$ revient a calculer $u^{-1}$ et inversible
Soit $y \in E$, 
On résout l'équation $u(x) = y$
这对你有好处吗？
#### Exemple
$$A = \begin{pmatrix}
4&1&2 \\
2&1&1 \\
1&1&0
\end{pmatrix}$$
On prend $E = \mathbb{R}^{3}$ et $e$ sa base canonique et $u$ telle que $Mat_{e}(u) = A$
Soient, 
$$Y = \begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} \in \mathbb{R}^{3}$$
Pour
$$X = \begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \in \mathbb{R}^{3}$$
$$\begin{array}{cl}
Y = u(x) &\Leftrightarrow Y = AX \\
&\Leftrightarrow \begin{pmatrix}
4&1&2 \\
2&1&1 \\
1&1&0
\end{pmatrix}
\begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} = \begin{pmatrix}
x \\
y \\
z
\end{pmatrix}
\end{array}$$

En résolvant ce système : 
$$\begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} = \begin{pmatrix}
ax+by+cz \\
dx+ey+fz \\
gx+hy+iz
\end{pmatrix} = \begin{pmatrix}
a&b&c \\
d&e&f \\
g&h&i
\end{pmatrix}\begin{pmatrix}
x \\
y \\
z
\end{pmatrix}$$
En notant : $v \in \mathcal{L}(E)$ tq $Mat_{e}(v) = B$
Comme on a : 
$$Y = AX \Leftrightarrow X = BY$$
$$u(X) = Y \Leftrightarrow X = v(Y)$$
Donc, 
$v = u^{-1}$ donc, $B = A^{-1}$

##### Présentation attendue : 
Pour, 
$$X = \begin{pmatrix}
x \\
y \\
z
\end{pmatrix}, Y = \begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} \in \mathbb{R}^{3},$$
$$\begin{array}{rl}
AX = Y &\Leftrightarrow AX = I_{3}Y \\
&\Leftrightarrow \begin{pmatrix}
4&1&2 \\
2&1&1 \\
1&1&0
\end{pmatrix}
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} = \begin{pmatrix}
1&0&0 \\
0&1&0 \\
0&0&1
\end{pmatrix}\begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} \\
&\Leftrightarrow \begin{pmatrix}
4&1&2 \\
0&1&0 \\
0&3&-2
\end{pmatrix}\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} = \begin{pmatrix}
1&0&0 \\
-1&2&0 \\
-1&0&4
\end{pmatrix}\begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} \begin{array}{l}
 \\
L_{2} \leftarrow 2L_{2} - L_{1}  \\
L_{3} \leftarrow 4L_{3}-L_{1}
\end{array} \\
&\Leftrightarrow \begin{pmatrix}
4&1&2 \\
0&1&0 \\
0&0&-2
\end{pmatrix}\begin{pmatrix}
x \\
y \\
z
\end{pmatrix}  = \begin{pmatrix}
1&0&0 \\
-1&2&0 \\
2&-6&4
\end{pmatrix} \begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix}\begin{array}{l}
 \\
 \\
L_{3} \leftarrow L_{3}-3L_{2}
\end{array} \\
&\Leftrightarrow \begin{pmatrix}
4&1&0 \\
0&1&0 \\
0&0&-2
\end{pmatrix} \begin{pmatrix}
x \\
y \\
z
\end{pmatrix} =  \begin{pmatrix}
3&-6&4 \\
-1&2&0 \\
2&-6&4
\end{pmatrix} \begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} \begin{array}{l}
L_{1}\leftarrow L_{1} +L_{3} \\
 \\
 \\
\end{array} \\
&\Leftrightarrow \begin{pmatrix}
4&0&0 \\
0&1&0 \\
0&0&-2
\end{pmatrix}\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} = \begin{pmatrix}
4&-8&4 \\
-1&2&0 \\
2&-6&4
\end{pmatrix}\begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix}\begin{array}{l}
L_{1}\leftarrow L_{1} + L_{2} \\
 \\
 \\
\end{array} \\
&\Leftrightarrow \begin{pmatrix}
1&0&0 \\
0&1&0 \\
0&0&1
\end{pmatrix}\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} = \begin{pmatrix}
1&-2&1 \\
-1&2&0 \\
-1&3&-2
\end{pmatrix}\begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix}\begin{array}{l}
L_{1}\leftarrow \frac{1}{4}L_{1} \\
 \\
L_{3} \leftarrow -\frac{1}{2}L_{3}
\end{array} \\
&\Leftrightarrow X = BY
\end{array}$$
Le résultat précédent assure que $B = A^{-1}$
Faire la vérification

Cela vérifie l'algorithme sur la matrice augmenté donnée précédemment

# IV. Application linéaire <u>canoniquement</u> associé a une matrice
#### Rappel
On identifie les vecteurs de $\mathbb{K}^{q}$ aux matrices colonnes (éléments de $\mathcal{M}_{q, 1}(\mathbb{K})$ pour $q \in \mathbb{N}^{*}$)

## 1. Définition
#### Définition
Pour $A \in \mathcal{M}_{n, p}(\mathbb{K})$, 
On appelle l'application linéaire canoniquement associé à $A$ est l'unique $u_{A} \in \mathcal{L}(\mathbb{K}^{n}, \mathbb{K}^{n})$ telle que
$$Mat_{can_{p}, can_{n}}(u_{A})= A$$

#### Proposition
Grace à l'identification entre les $\mathbb{K}^{q}$ et $\mathcal{M}_{q, 1}(\mathbb{K})$ on a :
avec les notations ci dessus
$$u_{A} : \begin{cases}
\mathbb{K}^{q} \to \mathbb{K}^{n} \\
X \mapsto AX
\end{cases}$$

Démonstration : 
Pour $X \in \mathbb{K}^{q}$
$$u_{A}(X) = Mat_{can_{n}}(u_{A}(X)) = (Mat_{can_{q}, can_{n}}(u_{A}))(Mat_{can_{q}}(X)) = AX$$

#### Remarque
On a utilisé le fait déjà énoncé (définition des bases canoniques) qui est que : 
Pour $X \in \mathbb{K}^{q} \simeq \mathcal{M}_{q, 1}(\mathbb{K})$, 
$$Mat_{can_{q}}(X) = X$$


#### Définition
Le noyau (resp. image, rang) d'une matrice $A \in \mathcal{M}_{n, p}(\mathbb{K})$ est celui (resp. celle, celui) de $u_{A}$
$$\text{Ker }A = \text{Ker }u_{A}, \mathrm{Im}(A) = \mathrm{Im}(u_{A}), rg(A) = rg(u_{A})$$

#### Conséquence
les vecteurs colonne de $A$ sont les images des vecteurs de la base canonique d'indice $p$ par $u_{A}$ et ils engendrent $\mathrm{Im}(A)$ en particulier leur rang est celui de $A$ 

## 2. Lien avec les systèmes linéaires
Soit $A \in \mathcal{M}_{n, p}(\mathbb{K})$, 

#### Propriété
$\text{Ker }A$ est exactement l'ensemble des solutions du système $AX = 0$
$\mathrm{Im}(A)$ est exactement l'ensemble des seconds membres $B \in \mathbb{K}^{n}$ tq le système $AX = B$ admette des solutions (ie soit compatible)


#### Propriété
1. $\text{Ker }A$ est invariant sur les opérations élémentaires sur les lignes de $A$
2. $\mathrm{Im}A$ est invariant sur les opérations élémentaires sur les colonnes de $A$

Démonstration : 
1. Est conséquence du fait que deux systèmes équivalents par lignes dont logiquement équivalents. 
2. On a déjà vu que le sev engendré par une famille de vecteurs colonnes (éléments de $\mathbb{R}$) est invariant par les opérations élémentaires sur les colonnes de leur matrice. 

#### Remarque
On retrouve les méthodes en exo dans ce cas particulier : $E = \mathbb{K}^{p}$ et $F = \mathbb{K}^{n}$

## 3. Caractérisation des matrices inversibles
Soit $n \in \mathbb{N}^{*}$, 
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$, 
Alors $u_{A} \in \mathcal{L}(\mathbb{K}^{n})$ (endomorphisme canoniquement associé) est un endomorphisme d'un espace de dimension finie, donc on a : 

#### Proposition
Les assertion suivantes sont équivalentes : 
- $A \in GL_{n}(\mathbb{K})$ ($u_{A}$ est bijective)
- $\text{Ker }A = \{ 0 \}$ ($u_{A}$ est injective)
- $\mathrm{Im}\space A = \mathbb{K}^{n}$ ($u_{A}$ est surjective)
- $rg(A) = n$ ($rg(u_{A})=n$)

## 4. Théorème du rang
#### Théorème
$$\forall \in \mathcal{M}_{n, p}(\mathbb{K}), rg(A) + \dim \text{Ker }A = p$$

Démonstration : 
On applique le théorème du rang à $u_{A}$

#### Corollaire : 
Le rang d'une matrice est invariant par toutes opérations élémentaires sur les lignes ou les colonnes de $A$

#### Théorème
On peut revenir aux espaces vectoriels de dimension finie et muni de bases $e$ et $f$
Soit $u \in \mathcal{L}(E, F)$, 
On a $rg(u) = rg(Mat_{e, f}(u))$

Démonstration : Les deux peuvent se calculer en échelonnant les colonnes de la même matrice

