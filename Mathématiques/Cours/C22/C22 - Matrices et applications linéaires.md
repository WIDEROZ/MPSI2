Soit $E, F, G, \dots$ des $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$ espaces vectoriels de dimension finie
# I. Matrice d'une application linéaire dans un couple de base
## 1. Définition et linéarité
### a. Définitions
#### Définition
La matrice d'une famille de vecteurs de $E$ : $x = (x_{j})_{j = 1}^{p}$ dans une base $e = (e_{i})_{i = 1}^{n}$ de $E$ est la matrice des coordonnées dans $e$ des vecteurs de $x$ : 
$$Mat_{e}(x) = \begin{pmatrix}
e_{i}^{*}(x_{j})
\end{pmatrix}_{i, j} = \text{Excal 1}$$

#### Remarque
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
$$Mat_{e,f}(u) = Mat_{j}(u(e))$$
Plus précisément : 
Si $e = (e_{j})_{j=1}^{p}$ et $f = (f_{i})_{i = 1}^{n}$ alors
$$Mat_{e, f}(u) = Mat_{j}(u(e_{1}), \dots, u(e_{p}))= \text{Exal 2}$$

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
L'application $Mat_{e, f} : \mathcal{L}(E, F) \to \mathcal{M}_{\dim F, \dim E}(\mathbb{K})$ est un isomorphisme d'espaces vectoriels

Démonstration : 
Soient $u, v \in \mathcal{L}(E, F)$ et $\lambda \in \mathbb{K}$, 
Alors, 
$$\begin{array}{cl}
Mat_{e, f}(\lambda u + v) &= Mat_{f}((\lambda u+v)(e)) \\
&= (f_{i}^{*}((\lambda u+v)(e_{j})))_{i, j}  \\
&= (f_{i}^{*}(\lambda(u(e_{j}))+v(e_{j}))) \\
&=  (\lambda f_{i}^{*}(u(e_{j}))+ f_{i}^{*}(v(e_{j})))_{i, j} \\
&= \lambda(f_{i}^{*}(u(e_{j})))_{i, j} + (f_{i}^{*}(v(e_{j}))) \\
&= \lambda Mat_{e, f}(u) + Mat_{e, f}(v)
\end{array}$$
Ainsi $Mat_{e, f}$ est linéaire,
Comme $\mathcal{L}(E, F)$ et $\mathcal{M}_{n, p}(\mathbb{K})$ sont de même dimension finie, il suffit de prouver (par exemple) que $Mat_{e, f}$ est injective ($\text{Ker }(Mat_{e, f}) = \{ 0_{\mathcal{L}(E, F)} \}$)

#### Remarque
Cet isomorphisme n'est pas canonique car il dépend du couple de bases choisi

