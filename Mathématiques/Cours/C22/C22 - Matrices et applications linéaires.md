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
$$M = (A|)$$