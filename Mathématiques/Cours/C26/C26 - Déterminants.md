# Introduction
On se place dans $\mathcal{P}$ le plan euclidien usuel
On prend deux vecteurs $u$ et $v$
Excal 1.
On veut définir l'aire de ce parallélogramme $\mathcal{A}(u, v)$
On se demande quelles propriétés doit vérifier $\mathcal{A}$
$$\mathcal{A}(0, v) = \mathcal{A}(u, 0)= 0$$
$$\mathcal{A}(2u, v) = 2\mathcal{A}(u, v)$$

$$\mathcal{A}(u, v) = \mathcal{A}(v, u) \space ??$$

Excal 2. 
$$A(w + v, u) = A(u , v) + \mathcal{A}(u, w)$$

Excal 3.
$$\mathcal{A}(u, v+ w) = \mathcal{A}(u, v) + \mathcal{A}(u, w)$$


Soit $e = (e_{1}, e_{2})$ une base orthonormée directe (BOND)
On a alors, 
$$\begin{cases}
\mathcal{A}(2u, v) = 2 \mathcal{A}(u, v) \\
\mathcal{A}(u, v+w) = \mathcal{A}(u, v) + \mathcal{A}(u, w) \\
\mathcal{A}(u, v) = -\mathcal{A}(v, u) \\
\mathcal{A}(e_{1}, e_{2}) = \mathbb{1} \\
\mathcal{A}(u, u) = \mathbb{0} \\
\mathcal{A}(0, u) = \mathcal{A}(u, 0) = \mathbb{0} \space \text{ (} \mathcal{A} \text{ est alternée)}
\end{cases}$$

Soit $u, v$ quelconques, 
On est les écrits dans la base $e$ : 
$$\begin{cases}
u = xe_{1}+ y e_{2} \\
v = x'e_{1}+y'e_{2}
\end{cases}$$
Alors, 
$$\begin{array}{rl}
\mathcal{A}(u, v) &= \mathcal{A}(xe_{1}+ye_{2}, x'e_{1}+y'e_{2}) \\

\end{array}$$
$$=\mathcal{A}(xe_{1}, x'e_{1}) + \mathcal{A}(xe_{1}, y'e_{2}) + \mathcal{A}(ye_{2}, x'e_{1}) + \mathcal{A}(ye_{2}, y'e_{2})$$
$$= xx'\mathcal{A}(e_{1}, e_{1}) + xy'\mathcal{A}(e_{1}, e_{2}) + yx'\mathcal{A}(e_{2}, e_{1}) + yy'\mathcal{A}(e_{2}, e_{2})$$
Ainsi, 
$$\mathcal{A}(u, v)= xy' - x'y := \det_{e}(u, v)$$

Extension de la méthode à l'espace usuel ($\mathbb{R}^{3}$)

$\mathcal{A}(u, v, w)$ (c'est le volume en fait)
Alors, 
$\mathcal{A}$ est trilinéaire (linéaire par rapport a chacunes des variables)
$\mathcal{A}$ est antisymétrique (Échanger 2 vecteurs change le signe)
$\mathcal{A}$ est alternée (Nul lorsque $2$ vecteurs sont égaux)

Exemple : $\mathcal{A}(e)=1$

###### Exercice
Si 
$$Mat_{e}(u) = \begin{pmatrix}
x \\
y \\
z
\end{pmatrix}, Mat_{e}(v) = \begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix}, Mat_{e}(w) = \begin{pmatrix}
x'' \\
y'' \\
z''
\end{pmatrix}$$
Calculer $\det_{e}(u, v, w)$. 




###### Exercice
1. $A$ antisymétrique $\Rightarrow$ $\mathcal{A}$ alternée
2. $\mathcal{A}$ alternée et bilinéaire $\Rightarrow$ $\mathcal{A}$ est antisymétrique


1. 
Supposons $\mathcal{A}$ antisymétrique
Pour $u \in \mathcal{P}$, $\mathcal{A}(u, u) = -\mathcal{A}(u, u)$
Donc, 
$$2\mathcal{A}(u, u) = 0$$
or $2 \neq 0$ donc, $\mathcal{A}(u, u) = 0$

###### Remarque :
Dans certains corps, $2 = 0$
chokbzez de bar

2. 
Supposons $\mathcal{A}$ alternée et bilinéaire, 
Pour $u, v \in \mathcal{P}$
$$\mathcal{A}(u, u) = \mathcal{A}(v, v) =0$$
Alors, 
$$0 = \mathcal{A}(u, u) + \mathcal{A}(v, v) = \mathcal{A}(u + v, u+v) = \mathcal{A}(u, v) + \mathcal{A}(v, u)$$
Ainsi, 
$$\mathcal{A}(u, v) = -\mathcal{A}(v, u)$$

# I. Formes $n$-linéaires alternées
#### Remarque
Dans tout ce chapitre, $E$ est un $\mathbb{K}$-ev de dimension finie : $\dim = n \in \mathbb{N}^{*}$

#### Définition
Une forme $n$-linéaire sur $E$ est une application $f : E^{n} \to \mathbb{K}$
qui est linéaire en chacune de ses composantes, ie : 
$$\forall (x_{i})_{i = 1}^{n} \in E^{n}, \forall k \in [\![1, n]\!], f(x_{1}, \dots, x_{k-1}, \cdot, x_{k+1}, \dots, x_{n}) \in E^{*}$$

#### Définition
Elle est de plus dite <u>alternée</u> ssi elle s'annule lorsque deux de ses composantes sont égales. ie
$$\begin{array}{c}
\forall(x_{i})_{i = 1}^{n} \in E^{n}, \forall(i, j) \in [\![1, n]\!]^{2},  \\
((i \neq j \text{ et } x_{i} = x_{j}) \Rightarrow f(x_{1}, \dots, x_{n}) = 0)
\end{array}$$

#### Définition
Elle est dite antisymétrique ssi l'échange de deux composantes fournit un résultat opposé :
$$\begin{array}{c}
\forall (x_{i})_{i = 1}^{n} \in E^{n}, \forall(i, j) \in [\![1, n]\!]^{2}, \\
(i<j \Rightarrow f(x_{1}, \dots, x_{i}, \dots, x_{j}, \dots, x_{n})  \\
= - f(x_{1}, \dots, x_{j}, \dots, x_{i}, \dots, x_{n}))
\end{array}$$

On généralise l'exemple précédent facilement : 

#### Proposition
Pour $f$ $n$-linéaire sur $E$,
$f$ est alternée ssi elle est antisymétrique

Démonstration en exo :
- $\Rightarrow$ :
Supposons que $f$ soit alternée : 
Soit $(x_{i})_{i = 1}^{n} \in E^{n}$,
Soit $(i, j) \in [\![1, n]\!]^{2}$ tq $i < j$, 
$$f(x_{1}, \dots, x_{i}, \dots, x_{j}, \dots x_{n}) + f(x_{1}, \dots, x_{j}, \dots, x_{i}, \dots, x_{n}) =$$
$$f(x_{1}, \dots, x_{i} + x_{j}, \dots, x_{i}+x_{j}, \dots, x_{n}) + f(x_{1}, \dots, 0, \dots, 0, \dots x_{n})$$
Comme $f$ est alternée, le truc au dessus est nul
Alors 
$$f(x_{1}, \dots, x_{i}, \dots, x_{j}, \dots x_{n}) =- f(x_{1}, \dots, x_{j}, \dots, x_{i}, \dots, x_{n})$$

- $\Leftarrow$ :
Supposons que $f$ soit antisymétrique, 
Soit $(x_{i})_{i = 1}^{n} \in E^{n}$,
Soit $(i, j) \in [\![1, n]\!]^{2}$ tq $i \neq j$ et $x_{i} = x_{j}$, 
On a deux cas : 
Soit $i < j$, 
alors, par antisymétrie, 
$$f(x_{1}, \dots, x_{i}, \dots, x_{j}, \dots, x_{n}) 
= - f(x_{1}, \dots, x_{j}, \dots, x_{i}, \dots, x_{n})$$
Donc, 
$$2f(x_{1}, \dots, x_{i}, \dots, x_{j}, \dots, x_{n}) = 0$$
Comme $2 \neq 0$,
$$f(x_{1}, \dots, x_{n}) = 0$$

#### Définition - Proposition
L'ensemble $\mathcal{A}_{n}(E)$ des formes $n$-linéaires alternées sur $E$ est un sous espace vectoriel de $\mathbb{K}^{E^{n}}$

Démonstration : 
- $\mathcal{A}_{n}(E) \subset \mathbb{K}^{E^{n}}$ par définition
- L'application nulle vérifie toutes les hypothèses de la définition alors, $\mathcal{A}_{n}(E) \neq \varnothing$

Soit $f, g \in \mathcal{A}_{n}(E)$ et $\lambda \in \mathbb{K}$, 
Flemme : $\lambda f + g \in \mathcal{A}_{n}(E)$ $\square$


#### Propriété
Soit $f \in \mathcal{A}_{n}(E)$, 
1. 
$$\forall(x_{i})_{i = 1}^{n} \in E^{n}, \forall \sigma \in S_{n}, f(x_{\sigma(1)}, \dots, x_{\sigma(n)}) = \epsilon(\sigma)f(x_{1}, \dots, x_{n})$$ 
2. L'image d'une famille liée par $f$ est nulle

Démonstration Idée : 
1. On écrit $\sigma$ comme produit de $k$ transpositions. Pour passer de $f(x_{1}, \dots, x_{n})$ à $f(x_{\sigma(1)}, \dots, x_{\sigma(n)})$ on fait alors $k$ échanges de vecteurs, donc, 
   $$f(x_{\sigma(1)}, \dots, x_{\sigma(n)}) = \epsilon()^{k}f(x_{1}, \dots, x_{n})$$
   Par ailleurs $\epsilon$ est un morphisme de $S_{n}$ vers $\{ \pm1 \}$ qui envoie toute transposition sur $-1$ donc, $\epsilon (\sigma) = (-1)^{k}$
2. L'un des vecteurs de la famille liée s'écrit comme CL des autres. On utilise la linéarité par rapport 


# II. Déterminants d'une famille de vecteurs dans une base
## 1. Résultats fondamentaux
#### Théorème
1. $\mathcal{A}_{n}(E)$ est une droite vectorielle
2. Pour toute base $e$ de $E$, l'application de $E^{n}$ vers $\mathbb{K}$
   $$\det_{e} : (x_{1}, \dots, x_{n}) \mapsto \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j= 1}^{n} e^{*}_{\sigma(j)}(x_{j})=\sum_{\phi \in S_{n}}\epsilon(\phi) \prod_{i  =1}^{n}e_{i}^{*}(x_{\phi(i)})$$
   Est l'unique vecteur directeur de $f$ vérifiant $f(e) = 1$
   Le scalaire $\det_{e}(x_{1}, \dots, x_{n})$ est appelé le determinant de la famille $(x_{i})_{i = 1}^{n}$ dans la base $e$
3. $\forall f \in \mathcal{A}_{n}(E), f=f(e)\det_{e}$


Démonstration du 2. : 
Soient $f \in \mathcal{A}_{n}(E)$ et $e$ une base de $E$, 
Soient $(x_{1}, \dots, x_{n}) \in E^{n}$,
On a alors, 
$$f(x_{1}, \dots, x_{n}) = f\left( \sum_{i = 1}^{n}e_{i_{1}}^{*}(x_{1})e_{i_{1}}, \dots, \sum_{i = 1}^{n}e_{i_{n}}^{*}(x_{n})e_{i_{n}} \right)$$
Par bilinéarité : ==Oui je suis raciste et j'aime les zizis==
$$= \sum_{1\leq i_{1} \leq \dots \leq i_{n}} \left( \prod_{j = 1}^{n}e_{i_{j}}^{*}(x_{j}) \right)f(e_{i_{1}}, \dots, e_{i_{n}})$$
$$= \sum_{\underset{\text{2 a 2 différents}}{1\leq i_{1} \leq \dots \leq i_{n}}} \left( \prod_{j = 1}^{n}e_{i_{j}}^{*}(x_{j}) \right)f(e_{i_{1}}, \dots, e_{i_{n}})$$
$$= \sum_{\sigma \in S_{n}} \prod_{j = 1}^{n} e_{\sigma(j)}^{*}(x_{j})f(e_{\sigma(1)}, \dots, e_{\sigma(n)})$$
$$= \sum_{\sigma \in S_{n}} \left( \prod_{j = 1}^{n} e_{\sigma(j)}^{*}(x_{j}) \right)\epsilon(\sigma) f(e_{1}, \dots, e_{n})$$
$$= f(e)\sum_{\sigma \in S_{n}} \epsilon(\sigma)\prod_{j = 1}^{n}e_{\sigma(j)}^{*}(x_{j})$$
$$= $$




##### Lemme
Soit $(G, \cdot)$ un groupe et $g \in G$
Alors les translations à gauche et à droite par $g$
$$l_{g} : \begin{cases}
G \to G \\
x \mapsto gx
\end{cases} \text{ et } r_{g} : \begin{cases}
G \to G \\
x \mapsto xg
\end{cases}$$
Sont bijectives

Démonstration : 
On définit :
$$l_{g^{-1}} : \begin{cases}
G \to G \\
x \mapsto g^{-1}x
\end{cases}$$
qui est facilement la réciproque de $l_{g}$ 
($l_{g^{-1}} \circ l_{g} = Id_{G}$ et $l_{g} \circ l_{g^{-1}} = Id_{G}$)

De même pour $r_{g}$ 

Ainsi, $r_{g}$ et $l_{g}$ sont bijectives. 

