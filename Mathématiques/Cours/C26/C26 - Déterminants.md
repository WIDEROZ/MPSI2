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
#### Prélude
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


Démonstration : 
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
On définit : 
$$\det_{e} : \begin{cases}
E^{n} \to \mathbb{K} \\
(x_{i})_{i = 1}^{n} \mapsto = f(e)\sum_{\sigma \in S_{n}} \epsilon(\sigma)\prod_{j = 1}^{n}e_{\sigma(j)}^{*}(x_{j})
\end{cases}$$

Pour montrer que $\mathcal{A}_{n}(E)$ est une droite vectorielle, comme on a déjà vu que 
$$f(x_{1}, \dots, x_{n})= f(e)\sum_{\sigma \in S_{n}} \epsilon(\sigma)\prod_{j = 1}^{n}e_{\sigma(j)}^{*}(x_{j})$$
Il suffit de voir que $\det_{e} \in \mathcal{A}_{n}(E) \setminus \{0  \}$
Pour $\sigma \in S_{n}$ fixé, l'application
$$(x_{i})_{i =1}^{n} \mapsto \prod_{j = 1}^{n}e_{\sigma(j)}^{*}(x_{j})$$
Comme les $e_{\sigma(j)}^{*}(x_{j})$ sont linéaires, cette application est $n$-linéaire.
Par combinaison linéaire de formes $n$-linéaires, $\det_{e}$ est $n$-linéaire. 
Montrons que $\det_{e}$ est alternée en montrant qu'elle est antisymétrique (elle est déjà $n$-linéaire)
Soit $\sigma' \in S_{n}$, 
Pour $(x_{i})_{i= 1}^{n} \in E^{n}$, on a :
$$\det_{e}(x_{\sigma'(i)})_{i = 1}^{n} = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}e_{\sigma(j)}^{*}(x_{\sigma'(j)})$$
On fait un changement de var : 
$$\left[ \! \left[ \begin{array}{l}
j =  (\sigma')^{-1}(k)\\
k = \sigma'(j)
\end{array} \right.\right.$$
Alors, 
$$\det_{e}(x_{\sigma'(i)})_{i = 1}^{n}  = \sum_{\sigma \in S_{n}}e(\sigma) \prod_{k = 1}^{n} e^{*}_{\sigma(\sigma'^{-1}(k))}(x_{k})$$
Donc, 
An faisant un autre changement de variable : 
$$\left[\! \left[ \begin{array}{l}
\sigma = \phi \circ \sigma ' \\
\phi = \sigma \circ (\sigma')^{-1}
\end{array} \right. \right.$$
$\sigma \mapsto \phi \circ \sigma'$ est une bijection de $S_{n}$ vers $S_{n}$ par le lemme
Alors on a :
$$\det_{e}(x_{\sigma'(i)})_{i = 1}^{n}  = \sum_{\phi \in S_{n}}\epsilon(\phi \circ \sigma') \prod_{k = 1}^{n} e^{*}_{\phi(k)}(x_{k})$$
$$= \epsilon(\sigma') \sum_{\phi \in S_{n}}\epsilon(\phi) \prod_{k = 1}^{n} e^{*}_{\phi(k)}(x_{k}) = \epsilon (\sigma')\det_{e}(x)$$
En particulier en prenant pour $\sigma'$ les transpositions, pour toute transposition $\tau \in S_{n}$
$$\det_{e}(x_{\tau(1)}, \dots, x_{\tau(n)}) = -\det_{e}(x)$$
ie $\det_{e}$ est alternée
Ainsi, 
$$\det_{e} \in \mathcal{A}_{n}(E)$$
Et
$$\det_{e}(e) = \sum_{\sigma \in S_{n}} \epsilon(\sigma) \prod_{j = 1}^{n}e_{\sigma(j)}^{*}(e_{j}) = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}\delta_{\sigma(j), j}$$
Ainsi, le seul produit non nul est celui correspondant à $\sigma = Id_{[\![1, n]\!]}$
Finalement : 
$$\det_{e}(e) = \epsilon(Id_{[\![1, n]\!]}) \prod_{j = 1}^{n}1 = 1$$
Ainsi en particulier,
$$\det_{e} \in \mathcal{A}_{n}(E) \setminus \{ 0 \}$$

Donc avec ma formule $\star$,
$$\mathcal{A}_{n}(E) = Vect(\det_{e})$$
La formule $\star$ s'écrit : 
$$\forall f \in \mathcal{A}_{n}(E), f = f(e)\det_{e}$$
De plus $\det_{e}$ est l'unique $f \in \mathcal{A}_{n}(E)\setminus \{  0 \}$ vérifiant $f(e) = 1$

___
Pour achever le point $2$, il reste à montrer la deuxième formule pour $\det_{e}$
Soit $x \in E^{n}$,
On a : 
$$\det_{e}(x) = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}e^{*}_{\sigma(j)}(x_{j})$$
On fait un ch de var : 
$$\left[\! \left[ \begin{array}{l}
j = \sigma^{-1}(i) \\
i = \sigma(j)
\end{array} \right. \right.$$
Alors, 
$$\det_{e}(e)= \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{i = 1}^{n}e_{i}^{*}(x_{\sigma^{-1}(i)})$$
Avec le ch de var: 
$$\left[ \! \left[ \begin{array}{l}
\sigma = \phi^{-1} \\
\phi = \sigma^{-1}
\end{array}\right. \right.$$
On a : 
$$= \sum_{\phi\in S_{n}} \epsilon(\phi^{-1})\prod_{i = 1}^{n}e_{i}^{*}(x_{\phi^{-1}})$$
Or pour $\phi \in S_{n}$, $\epsilon(\phi^{-1}) = \epsilon(\phi)^{-1} = \epsilon(\phi)$
car $\epsilon(\phi) \in \{  \pm 1 \}$
Donc finalement, 
$$\det_{e}(e) = \sum_{\phi \in S_{n}} \epsilon(\phi) \prod_{i  = 1}^{n}e_{i}^{*}(x_{\phi(i)})$$

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

## 2. Interprétation matricielle
Si on de donne la famille de $x \in E^{n}$, 
Pour sa matrice dans la base $e$ :
$$A = (a_{i,j})_{i, j} = Mat_{e}(x) = (e_{i}^{*}(x_{j}))_{i, j}$$
On a alors, 
$$\det_{e}(x) = \sum_{\sigma  \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}a_{\sigma(j), j} = \sum_{\phi \in S_{n}}\epsilon(\phi)\prod_{i = 1}^{n}a_{i, \phi(i)}$$

Interprétation : 
On prend un coefficient par lignes et par colonne, on fait le produit puis on multiplie par la signature de la permutation sur les lignes (colonnes) qui ramène ces coefficients sur la diagonale, puis on somme le tout. 

#### Propriété
Soit $E$ un ev de dim $n \in \{ 1, 2, 3 \}$ et $e$ une base de $E$, 

- Cas ou $n=1$,
  Si $x = (x_{1})$ avec $x_{1} \in E$ et $Mat(e)(x) =(a)$ ie $(x_{1} = ae_{1})$*
  $$\det_{e}(x) = a$$
- Cas ou $n = 2$, 
  Si $x = (x_{1}, x_{2}) \in E^{2}$ et  :
  $$Mat_{e}(x) = \begin{pmatrix}
   a&b \\
   c&d \end{pmatrix}$$
   Alors, 
   $$\det_{e}(x) = ad - bc$$
- Cas ou $n = 3$, 
  Si $x = (x_{1}, x_{2}, x_{3}) \in E^{3}$, et
  $$Mat_{e}(x) = \begin{pmatrix}
  a&b&c \\
  d&e&f \\
  g&h&i\end{pmatrix}$$
  Alors, 
  $$\det_{e}(x) = aei + dhc + gbf - gec-ahf-idb$$

#### Calcul de det par la règle de Sarrus
Excal 4 IMPORTANT

ATTENTION ne marche pas pour une matrice de dim $\geq 4$

#### Remarque
Pour $n= 2$, on retrouve l'expression $ad-bc$ dont on sait qu'elle est non nulle ssi $A$ est inversible. Ce n'est pas un hasard !!!!!

#### Remarque
Pour $n \geq 4$, 
La méthode du pivot fournit un calcul beaucoup plus efficace que la formule usuelle. 

## 3. Retour vers la géométrie
On a $A = \mathcal{A}(e_{1}, e_{2})\det_{e}$
Si on prend $e$ une BOND, $\mathcal{A}(e_{1}, e_{2}) = 1$
Donc, $\mathcal{A} = \det_{e}$

En supposant que les notions géométriques usuelles dans le plan $\mathcal{P}$ soient connues

#### Propriété
Si $e = (e_{1}, e_{2})$ est une BOND de $\mathcal{P}$ et $ABCD$ est un parallélogramme (éventuellement dégénéré) alors, 
- $\det_{e}(\overrightarrow{AB},\overrightarrow{AD})$ est l'aire algébrique de ce parallélogramme. 

avec la convention que dans les cas non dégénérés : 

- l'aire est strictement positiva ssi le parallélogramme est dans le sens direct. 

#### Analogue en dimension 3 :
#### Propriété
Si $e$ est une BOND, de l'espace usuel $E$ et $p$ le parallélogramme s'appuyant sur $(u, v, w) \in E$ alors,
- $\det_{e}(u, v, w)$ est le volume algébrique de $p$ 

Avec la convention que :

- Pour $(u, v, w)$ une base de $E$, ($p$ non dégénéré) $\det_{e}(u, v, w)>0$ ssi la base $(u, v, w)$ est directe


## 4. Bases et déterminant
#### Propriété : Formule de changement de base
Pour $e, e'$ deux bases de $E$, 
$$\det_{e'} = \det_{e'}(e)\det_{e}$$
Démonstration : ez

#### Corollaire : Relation de Chasles
Pour $e, e', e''$ trois bases de $E$, 
$$\det_{e}(e')\det_{e'}(e'') = \det_{e}(e'')$$

Démonstration : Par la prop précédente

#### Corollaire
Pour deux bases de $E$, $e$ et $e'$, 
$(\det_{e'}(e)\det_{e}(e') =1)$ donc, 
$\det_{e}(e')\neq 0$
et 
$$\det_{e'}(e) = \det_{e}(e')^{-1}$$

#### Conséquence
Soit $e$ une base de $E$, 
Pour $x \in E^{n}$, 
Si $x$ est une base, $\det_{e}(x) \neq 0$, 

Si $x$ est liée, on a vu en début de chapitre que comme $\det_{e} \in \mathcal{A}_{n}(E)$, alors $\det_{e}(x) = 0$

On a donc : 

#### Propriété
Soient $e$ une base de $E$ et $x \in E^{n}$,
Alors,
$$x \text{ est une base de E} \Leftrightarrow \det_{e}(x) \neq 0 $$

#### Exemple
Soit
$$x = \begin{pmatrix}
\begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
3 \\
2 \\
1
\end{pmatrix}, \begin{pmatrix}
0 \\
1 \\
0
\end{pmatrix}
\end{pmatrix} \in (\mathbb{R}^{3})^{3}$$
$$\det_{can_{\mathbb{R}^{3}}}(x) = 1 \times 2 \times 0 + 2 \times 1 \times 0 + 3\times 3 \times 1- 0 \times 2 \times 3 - 1\times1 \times 1 - 0 \times 3 \times 2$$
Donc, 
$$\det_{can_{\mathbb{R}^{3}}}(x) = 8$$
Donc, $x$ est une base de $\mathbb{R}^{3}$


## 5. Direction d'un espace vectoriel
Ici $\mathbb{K} = \mathbb{R}$, 
Soit $e$ une vase de $E$
Alors, il y a deux camps : 
- Les bases de $e'$ "pour", ie celles tq $\det_{e}(e')>0$
- Les bases de $e'$ "contre", ie celles tq $\det_{e}(e')<0$

Choisir une orientation c'est choisir un camp !!!!!!!!!!!!!!

#### Remarque
On fait ce choix en décrétant qu'une base donnée est directe et alors pour $e'$ une autre base on dit que c'est direct si $\det_{e}(e') > 0$
et indirect si $\det_{e}(e') < 0$

#### Reformulation mathématique :
Soit $\mathcal{B}(E)$ l'ensemble des bases de $E$. 
On définit une relation sur $\mathcal{B}(E)$ ainsi : 
$$\forall e, e' \in \mathcal{B}(E), e\mathcal{R} e' \Leftrightarrow \det_{e}(e') >0$$
On montre facilement que $\mathcal{R}$ est une relation d'équivalence
La relation $\mathcal{R}$ a deux classes d'équivalence, orienter $E£ c'est choisir une de ces classes dont les éléments sont les bases bases directes. Les autres bases sont dites indirectes. 

#### Rappel
Dans $\mathbb{R}^{3}$ et $\mathbb{R}^{2}$ il y a une convention, mais ce n'est qu'une convention

# III. Determinant d'un endomorphisme
## 1. Définition
#### Belle Propriété
$$\forall u \in \mathcal{L}(E), \exists ! \lambda \in \mathbb{K}, \forall f \in \mathcal{A}_{n}(E), \forall x \in E^{n}, f(u(x)) = \lambda f(x)$$

#### Définition
Ce $\lambda$ est appelé le déterminant de $u$ et est noté : $\det(u)$

#### Propriété
Si $e$ est une base de $E$, 
$$\det(u) = \det_{e}(u(e))$$

#### Démonstration des deux prop précédentes
On raisonne par analyse-synthèse : 

Soit $u \in \mathcal{L}(E)$, 
##### Analyse
Soit $\lambda \in \mathbb{K}$ tq $\forall f \in \mathcal{A}_{n}(E), \forall x \in E^{n}, f(u(x)) = \lambda f(x)$
Comme $\det_{e} \in \mathcal{A}_{n}(E)$ et $e \in E^{n}$,
$$\lambda = \lambda \det_{e}(e) = \det_{e}(u(e))$$

##### Synthèse
Posons $\lambda = \det_{e}(u(e))$, 
Soit $f \in \mathcal{A}_{n}(E)$, 
L'application :
$$g : \begin{cases}
E^{n} \to \mathbb{K} \\
x \mapsto f(u(x)) = f(u(x_{1}), \dots, u(x_{n}))
\end{cases}$$
Par $n$-linéarité de $f$ et linéarité de $u$, $g$ est $n$-linéaire
Elle est clairement alternée. 
Ainsi, $g \in \mathcal{A}_{n}(E)$
Par la propriété : 
$$\begin{array}{rl}
g &= g(e)\det_{e} \\
&= f(u(e))\det_{e} \\
&= f(e)\det_{e}(u(e))\det_{e} \\
&= \lambda f(e) \det_{e} \\
&= \lambda f
\end{array}$$

Ainsi, pour tout $x \in E^{n}$, $f(u(x)) = g(x) = \lambda {f(x)}$

#### Remarque
On peut par la cette formule calculer $\det(u)$ à partir de $Mat_{e}(u)$

## 2. Premières propriétés
#### Propriété
$$\det(0_{\mathcal{L}(E)}) = 0 \text{ et } \det(Id_{E}) = 1$$

Démonstration : 
Pour une base $e$ de $E$, 
$$\begin{array}{rl}
\det(0_{\mathcal{L}(E)}) &= \det_{e}(0_{\mathcal{L}(E)}(e)) \\
&= \det_{e}(0_{E}, \dots, 0_{E}) \\
&= 0
\end{array}$$
par linéarité de $\det_{e}$. 

$$\det(Id_{E}) = \det_{e}(e) = 1$$

#### Propriété
$$\forall u \in \mathcal{L}(E), \forall \lambda \in \mathbb{K}, \det(\lambda u) = \lambda^{n} \det(u)$$

Démonstration : 
Soit $e$ une base de $E$, 
Alors, 
$$\begin{array}{rl}
\det(\lambda) &= \det_{e}(\lambda u(e)) \\
&= \det_{e}(\lambda u(e_{1}), \dots, \lambda u(e_{n})) \\
&= \lambda^{n}\det_{e}(u(e)) \\
&= \lambda^{n}\det(u)
\end{array}$$

#### Corollaire
$$\forall \lambda \in \mathbb{K}, \det((\lambda Id_{E})) = \lambda^{n}$$

Démonstratio : ez

#### Propriété
$$\forall u \in \mathcal{L}(E), u \in GL(E) \Rightarrow \det(u) \neq 0$$

Démonstration : 
Soit $u \in \mathcal{L}(E)$, 
Alors, 
$$\begin{array}{rl}
u \in GL(E) &\Leftrightarrow u(e) \text{ est une base} \\
&\Leftrightarrow \det_{e}(u(e)) \neq 0 \\
& \Leftrightarrow \det(u) \neq 0
\end{array}$$

## 3. Determinant et composition
#### Propriété
$$\forall u, v \in \mathcal{L}(E), \det(v \circ u) = \det(v)\det(u)$$

Démonstration : 
Soit $e$ une base de $E$, 
Comme $\det_{e} \in \mathcal{A}_{n}$, 
$$\begin{array}{rl}
\det(v \circ u) &= \det_{e}(v(u(e))) \\
&= \det(v)\det_{e}(u(e)) \\
&= \det(v)\det(u)
\end{array}$$

#### Corollaire
$$\forall u, v \in \mathcal{L}(E), \det(v \circ u) = \det(u \circ v)$$

Démonstration : ez

#### Corollaire
$$\forall u \in GL(E), \det(u^{-1}) = \frac{1}{\det(u)}$$

Démonstration : ez

#### Propriété
L'application $u \mapsto \det(u)$ est un morphisme de groupe surjectif de $(GL(E), \circ)$ vers $(\mathbb{K}^{*}, \times)$, 

Démonstration : 
Elle est bien définie car si $u \in GL(E)$, $\det(u) \neq 0$, 
C'est un morphisme par une propriété précédente
Pour la surjectivité : 
Soit $\lambda \in \mathbb{K}^{*}$
On prend une base $e$ de $E$ et puis on définit $u \in GL(E)$ par 
$$\begin{cases}
u(e_{1}) = \lambda e_{1} \\
\forall i \geq 2, u(e_{i}) = e_{i}
\end{cases}$$
Facile de voir que $\det(u) = \lambda$,

#### Corollaire
$$\forall u, v \in GL(E), \det(v^{-1} \circ u \circ v) = \det(v \circ u \circ v^{-1}) = \det(u)$$

# IV. Determinant d'une matrice carrée
## 1. Définition
#### Définition
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$, 
et $u_{A}$ l'endomorphisme canoniquement associé à $A$, 
On appelle déterminant de $A$ le scalaire :
$$\det(A) = \det(u_{A})$$

#### Proposition
$$\det(A) = \sum_{\sigma \in S_{n}} \epsilon (\sigma) \prod_{j = ⚡ 1}^{n}a_{\sigma(j), j} =\sum_{\phi \in S_{n}} \epsilon (\phi) \prod_{i = 1}^{n}a_{i, \phi(i)} $$

#### Notation
$$\det(A) = |a_{i, j}|_{i, j} $$

#### Corollaire
Pour $a, b, \dots \in \mathbb{K}$ on a : 
$$\det((a)) = a$$
$$\left| \begin{array}{c}
a&b \\
c&d 
\end{array} \right| = ad-bc$$
$$\left| \begin{array}{c}
a&b&c \\
d&e&f \\
g&h&i
\end{array} \right| = aei + dhc+gbf - ceg - fha-ibd$$

## 2. Cas des endomorphismes d'un espace abstrait
#### Propriété
Soit $u \in \mathcal{L}(E)$, et $e$ un base de $E$
alors, $\det(Mat_{e}(u)) = \det(u)$

Démonstration : 
On pose $A = Mat_{e}(u)$, 
On a :
$$\det(u) = \det_{e}(u(e))$$
$$= \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}e^{*}_{\sigma(j)}(u(e_{j})) = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n} a_{\sigma(j), j} = \det A$$


#### Corollaire
$$\det : \mathcal{M}_{n}(\mathbb{K}) \to \mathbb{K}$$
est un invariant de similitude

Démonstration : 
Soit $A, B \in \mathcal{M}_{n}(\mathbb{K})$ semblables, 
On a vu qu'il existe deux bases de $E$ (abstrait)
et $u \in \mathcal{L}(E)$ tel que, 
$$\begin{cases}
A = Mat_{e}(u) \\
B = Mat_{e'}(u)
\end{cases}$$
On a alors,
$$\det(A) = \det(u) = \det(B)$$
Ainsi : 
$$\det(A) = \det(B)$$
Par transitivité de "$=$".


## 3. Propriété
#### Propriété
1. $\det(0_{\mathcal{M}_{n}(\mathbb{K})}) = 0$
2. $\det(I_{n}) = 0$
3. $\forall A \in \mathcal{M}_{n}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \det(\lambda A) = \lambda^{n}\det(A)$
4. $\forall A \in \mathcal{M}_{n}(\mathbb{K}), A \in GL_{n}(A) \Leftrightarrow \det(A) \neq 0$
5. $\forall A, B \in \mathcal{M}_{n}(\mathbb{K}), \det(BA) = \det(B)\det(A)$
6. $\forall A \in GL_{n}(\mathbb{K}), \det(A^{-1}) = \frac{1}{\det(A)}$

#### Rappel
Un système est dit de Cramer ssi il n'admet qu'une solution

#### Propriété
Un système linéaire de $n$ équations à $n$ inconnues est de Cramer ssi la matrice de son système homogène associé est de determinant non nul

## 4. Déterminant et transposition
#### Propriété
$$\forall A \in \mathcal{M}_{n}(\mathbb{K}), \det(A^{T}) = \det(A)$$

Démonstration : 
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$
alors, 
$$\det(A^{T}) = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}A^{T}[\sigma(j), j] = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}a_{j, \sigma(j)} = \det(A)$$


#### Conséquence
Une matrice antisymétrique d'ordre <u>impair</u> ($n$ impair) n'est pas inversible. 

Démonstration : 
Soit $A \in \mathcal{A}_{n}(\mathbb{K})$ avec $n$ impair
$$\det(A) = \det(A^{T}) = \det(-A) = (-1)^{n}\det(A) = - \det(a)$$
Donc, 
$$\det(A) = 0$$

# V. Calcul du déterminant d'une matrice
## 1. Un outil important
#### Propriété
Le déterminant d'une matrice est celui de ses vecteurs colonnes (resp. lignes) dans la base canonique. 
Le déterminant matriciel
$$\det : \begin{cases}
\mathcal{M}_{n}(\mathbb{K}) \to \mathbb{K} \\
M \mapsto \det(M)
\end{cases}$$
est une application qui est "$n$-linéaire alternée" par rapport aux colonnes (resp. lignes) de sa variable. 

## 2. Premières conséquences
#### Propriété
Pour des matrices carrés, on a :
1. Si une colonne (resp. ligne) d'une matrice est nulle, sont determinant est nul. 
2. Si une matrice a deux colonnes (resp. lignes) identiques, son déterminant est nul. 
3. Si une colonne (resp. ligne) d'une matrice est CL des autres, alors son déterminant est nul.
4. Le déterminant d'une matrice diagonale est le produit de ses coefficients diagonaux

Démonstration : 
1, 2, 3 : ez

4. Par $n$-linéarité par rapport aux colonnes, on sort 1 par un des coefficients diagonaux : 
   Pour $\lambda_{1}, \lambda_{2}, \dots \in \mathbb{K}$, 
   excal 


## 3. Effet des opérations élémentaires
#### Propriétés
Pour une matrice carrée : 
1. $L_{i} \leftrightarrow L_{j}$
   Un échange de deux lignes (resp. colonnes) ie une transposition de lignes (rep. colonnes) change son déterminant en son opposé
2. $L_{i} \leftarrow \lambda L_{i}$
   Une dilatation de facteur $\lambda$ sur une ligne (colonne) multiplie son déterminant par $\lambda$
3. $L_{i} \leftarrow L_{i} + \lambda L_{j}$
   Une transvection sur les lignes (rep. colonnes) ne change pas son déterminant
4. L'ajout à une ligne (rep. colonne) d'une CL des autres lignes (resp. colonnes) ne change pas le déterminant.

Démonstration : 
1. Par antisymétrie du déterminant par rapport aux lignes (resp. colonnes) 
2. Par linéarité par rapport à $L_{i}$
3. En utilisant la linéarité avec des notations évidentes : 
   $$i\left| \begin{array}{c}
L_{1} \\
L_{i} + \lambda L_{j} \\
L_{n}
\end{array} \right|   =\left| \begin{array}{c}
L_{1} \\
\vdots \\
L_{n}
\end{array} \right| + \lambda \left| \begin{array}{c}
L_{1} \\ 
\vdots \\
L_{j} \\
\vdots \\
L_{j} \\
\vdots \\
L_{n}
\end{array} \right| \begin{array}{l}
 \\
 \\
i \\
 \\
j \\
 \\
 \\


\end{array} $$
4. On pourrait ajouter à une ligne une CL 

#### Matrice de transposition
On note pour $i \neq j$, 
$$P_{(i, j)} = \text{Excal 6}$$

Alors pour $A \in \mathcal{M}_{n}(\mathbb{K})$, la matrice obtenue par l'opération élémentaire $L_{i} \leftrightarrow L_{j}$
est : $A' = P_{(i, j)}A$
Donc, 
$$\det(A') = \det(P_{(i, j)})\det(A)$$
Or, 
$$\det(P_{(i, j)}) = \epsilon((i \space j))  1 \times \dots \times 1 = -1$$
C'est la formule du det

#### Matrice de Dilatation
$$\text{Excal 7}$$
Si on multiplie cette matrice a gauche par $A \in \mathcal{M}_{n}(\mathbb{K})$, 
On obtiens l'opération de dilatation de $A$

On a ainsi le det de cette matrice est :
$$1 \times \dots \times 1 \times \lambda \times 1 \times \dots \times 1 = \lambda$$
(car c'est une matrice diagonale)


#### Matrice de transvection
$$\text{Excal 8}$$
Si on multiplie cette matrice a gauche par $A \in \mathcal{M}_{n}(\mathbb{K})$, 
On obtiens l'opération de transvection de $A$

On a ainsi le det de cette matrice est :
avec la formule du det : $1$

#### Remarqu
On peut exprimer simplement ces matrices à l'aide de $I_{n}$ et des matrices de la base canonique de $\mathcal{M}_{n}(\mathbb{K})$


## 4. Algorithme du pivot
### a. Cas des matrices triangulaires
Si on part d'une matrice triangulaire supérieure inversible (en faisant un pivot par ligne) la décente est déjà faite et par la remontée comme il n'y a pas d'échanges de lignes on n'utilise que des transvections qui :
- ne change pas le déterminant
- ne change pas des coefficients diagonaux

Ainsi, le déterminant de la matrice initiale est celui de la matrice diagonale obtenue a la fin de la remontée et donc le produit des coefficients diagonaux de la matrice triangulaire supérieur.

Par ailleurs si on a une matrice triangulaire supérieure non inversible alors au moins un coefficient diagonal est nul et son déterminant qui est nul est encore égal au produit des coefficients diagonaux. 

Aussi vrai pour la matrice triangulaire inférieur par transposition.

#### Propriété
Le déterminant d'une matrice triangulaire est le produit de ses coefficients diagonaux

Démonstration : $\uparrow$


### b. Cas général
En effectuant la descent du pivot et en mémorisant les modifications éventuelles du déterminant on arrive a une matrice triangulaire supérieure dont on connait le déterminant.

## 5. Développement par rapport a une ligne ou colonne
#### Définition
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$ et $k, l \in [\![1,n]\!]$, 
On note :
$$\mathrm{ext}(A, k, l)$$
la matrice extraite de $A$ obtenue en supprimant sa $k^{\text{ieme}}$ ligne et sa $l^{\text{ieme}}$ colonne

#### Définition
On note : 
$$\mathrm{cof}(A, k, l) = (-1)^{k+l}\det(\mathrm{ext}(A, k, l))$$
qu'on appelle le cofacteur de $A$ associé à la $k^{\text{ieme}}$ ligne et $l^{\text{ieme}}$ colonne

#### Remarque
Pour trouver le facteur $(-1)^{k+l}$ on utilise mentalement le schema suivant : 
$$\text{Excal 9}$$


#### Théorème
Pour $k \in [\![1,n ]\!]$ fixé, 
$$\det(A) = \sum_{l =1}^{n}a_{k, l}\mathrm{cof}(A, k, l)$$
Pour $l \in [\![1,n]\!]$ fixé, 
$$\det(A) = \sum_{k = 1}^{n}a_{k, l} \mathrm{cof}(A, k, l)$$

#### Lemme 1
Le théorème est vrai lorsqu'on développe par rapport a la dernière ligne : 

$$\left| \begin{array}{c}
a_{1, 1} &\dots &\dots&a_{1, n} \\
 \\
 \\
a_{n-1, 1}&\dots &\dots& a_{n-1, n} \\
0&\dots&0&1
\end{array} \right| $$

#### Lemme 2
Théorème vrai pour le développement par rapport a $L_{k}$ de :
$$k - \overset{l_{0}}{\left| \begin{array}{c}
&&&qq \\
0& \dots&0&1&0&\dots&0 \\
&&&qq
\end{array} \right|} $$


#### Exercice
$$A = \left| \begin{array}{c}
1&2&3 \\
4&5&6 \\
7&8&10
\end{array} \right| $$

A calculer
1. Par development par rapport à $L_{1}$
2. Par development par rapport à $C_{2}$
3. Par la règle de Sarus
4. Avec la méthode du pivot par colonne


1. 
$$1  \times \left| \begin{array}{c}
5&6 \\
8&10
\end{array} \right| - 2 \times \left| \begin{array}{c}
4&6 \\
7&10
\end{array} \right| + 3 \times \left| \begin{array}{c}
4&5 \\
7&8
\end{array} \right| = 2 + 4 - 9 = -3$$
2. 
$$- 2 \times \left| \begin{array}{c}
4&6 \\
7&10
\end{array} \right| + 5 \left| \begin{array}{c}
1&3 \\
7&10
\end{array} \right| - 8 \left| \begin{array}{c}
1&3 \\
4&6
\end{array} \right| =4 - 55 +48= -3$$
3. 
$$\begin{array}{l}
\det(A) &= 1\times 5 \times 10 + 4 \times 8 \times 3 + 7 \times 2 \times 6 \\
& \space\space\space - 3 \times 5 \times 7 - 6 \times 8 \times 1 - 10 \times 2 \times 4 \\
&= -3
\end{array}$$
4. 
$$A = \begin{pmatrix}
1&0&0 \\
4&-3&-6 \\
7&-6&-11
\end{pmatrix} \begin{array}{l}
 \\
C_{2} \leftarrow C_{2}- 2 C_{1} \\
C_{3} \leftarrow C_{3} - 3C_{1}
\end{array} = \begin{pmatrix}
1&0&0 \\
4&-3&0 \\
7&-6&1
\end{pmatrix} $$
$C_{3} \leftarrow C_{3} - 2 C_{2}$



Ainsi 
$$\left| \begin{array}{c}
1&2&3 \\
4&5&6 \\
7&8&10
\end{array} \right| = \left| \begin{array}{c}
1&0&0 \\
4&-3&0 \\
7&-6&1
\end{array} \right| = 1 \times (-3) \times 1 = -3 $$
Car c'est une matrice triangulaire

## 6. Matrices triangulaires par blocs
#### Théorème
Le déterminant d'une matrice par blocs est le produit des déterminants des blocs diagonaux

Démonstration : 
Idée :
- Pour le cas de 2 blocs Excal 11., par récurrence sur $p$
- Pour le cas général : par récurrence a partir de la matrice avec 2 blocs.

#### Exemple
$$\text{Excal 10}$$

#### Corollaire
Le déterminant d'un diagonale par blocs est le produit des determinants dans des blocs diagonaux

## 7. Déterminant de Vandermonde
#### Définition
Un déterminant de Vandermonde (VDM) est un déterminant de la forme :
$$V_{n}(\lambda_{1}, \dots, \lambda _{n}) =\left| \begin{array}{c}
1&1&\dots&1 \\
\lambda_{1}&\lambda_{2}&\dots&\lambda_{n} \\
\lambda_{1}^{2}&\lambda_{2}^{2}&\dots&\lambda_{n}^{2} \\
\vdots&\vdots&\vdots&\vdots \\
\lambda_{1}^{n-1}& \lambda_{2}^{n-1}& \dots & \lambda_{n}^{n-1}
\end{array} \right|  $$
ou $\lambda_{1}, \dots, \lambda_{n} \in \mathbb{K}$.


#### Proposition
$$\forall \lambda_{1}, \lambda_{n} \in \mathbb{K}, V_{n}(\lambda_{1}, \dots, \lambda_{n}) = \prod_{1 \leq i \leq j \leq n}(\lambda_{j}- \lambda_{i})$$

Démonstration : 
Pour $n=1$ c trivial
Pour $n\geq 2$, 
Soient $\lambda_{1}, \dots, \lambda_{n} \in \mathbb{K}$, 
On va du bas vers le haur pour les opération des lignes :
$$V_{n}(\lambda_{1}, \dots, \lambda_{n}) = \left| \begin{array}{c}
1&\dots&1 \\
\lambda_{1}-\lambda_{n}&\dots&0 \\
\vdots&&\vdots \\
\vdots&&\vdots \\
\lambda_{1}^{n-3}(\lambda)&\dots&0 \\
\lambda_{1}^{n-2}(\lambda_{1}-\lambda_{n})&\dots& 0
\end{array} \right| \begin{array}{l}
 \\
 \\
 \\
 \\
 \\
L_{n-1} \leftarrow L_{n-1} - \lambda_{n}L_{n-2} \\
L_{n} \leftarrow L_{n} - \lambda_{n}L_{n-1}
\end{array}$$
Si on fait un développement par rapport à $C_{n}$
$$= (-1)^{n+1}\left| \begin{array}{c}
\lambda_{1}-\lambda_{n}& \lambda_{2} - \lambda_{n} & \dots & \lambda_{n-1}-\lambda_{n} \\
\lambda_{1}(\lambda_{1}-\lambda_{n})& \lambda_{2}(\lambda_{2}-\lambda_{n})&\dots&\dots \\
 \\ \\

\lambda_{1}^{n-2}(\lambda_{1}-\lambda_{n})&\dots&\dots&\lambda_{n-1}^{n-2}(\lambda_{n-1}-\lambda _{n})
\end{array} \right| $$
Par linéarité par rapport à $C_{1}, \dots, C_{n-1}$, 
$$= (-1)^{n+1}(\lambda_{1}-\lambda_{n})(\lambda_{2}-\lambda_{n})\dots(\lambda_{n-1}-\lambda_{n}) \left| \begin{array}{c}
1&1&\dots&1 \\
\lambda_{1}&\lambda_{2}&\dots&\lambda_{n} \\
\vdots&\vdots&&\vdots \\
\lambda_{1}^{n-2}&\lambda_{2}^{n-2}&\dots & \lambda_{n-1}^{n-2}
\end{array} \right| $$
$$= \prod_{i=1}^{n-1}(\lambda_{n}-\lambda_{i})V_{n-1}(\lambda_{1}, \dots, \lambda_{n-1})$$
$$= \prod_{1\leq i \leq j \leq n}(\lambda_{j}-\lambda_{i})V_{1}(\lambda_{1}) = \prod_{1\leq i \leq j \leq n}(\lambda_{j}-\lambda_{i})$$


# VI. Comatrice
#### Définition
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$,
Sa comatrice est la matrice de ses cofacteurs : 
$$\mathrm{Com}(A) (\mathrm{cof}(A, i, j))_{1\leq i, j \leq n}$$


#### Théorème
$$\forall A \in \mathcal{M}_{n}(\mathbb{K}), (\mathrm{Com}(A))^{T}A = \det(A)I_{n}$$
En particulier si $A \in GL_{n}(\mathbb{K})$, 
$$A^{-1} = \frac{1}{\det(A)}(\mathrm{Com}(A))^{T}$$

Démonstration : 
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$ et $C = (\mathrm{Com}(A))^{T}A$ 
Pout $j \in [\![1,n]\!]$, 
$$C[j,j] = \sum_{k = 1}^{n}\mathrm{cof}(A, k, j)a_{k, j} = \det(A)$$
Pour $i, j \in [\![1,n]\!]$ avec $i \neq j$
$$C[i, j] = \sum_{k = 1}^{n}\mathrm{cof}(A, k, i)a_{k, j}$$
On remplace $L_{i}$ par $L_{j}$ : 
$$= \left| \begin{array}{c}
a_{1, 1}& \dots & a_{1, n} \\
\vdots&&\vdots \\
a_{i-1, 1}&\dots&a_{j, n} \\
a_{j, 1}&\dots&a_{i+1, n} \\
a_{i+1, 1}&\dots&a_{i+1, n} \\
\vdots&&\vdots \\
a_{n, 1}& \dots&a_{n, n}
\end{array} \right|  = 0$$
Car on a deux lignes identiques

Ainsi,
$$C = \det(A)I_{n}$$


#### Corollaire
Soit,
$$A = \begin{pmatrix}
a&b \\
c&d
\end{pmatrix} \in GL_{2}(\mathbb{K})$$
Alors, 
$$A^{-1} = \frac{1}{ad-bc}\begin{pmatrix}
d&-b \\
-c&a
\end{pmatrix}$$

Démonstration : 
$$\begin{array}{l}
\mathrm{cof}(A, 1, 1) = +d \\
\mathrm{cof}(A, 1, 2) = -c \\
\mathrm{cof}(A, 2, 1) = -b \\
\mathrm{cof}(A, 2, 2) = +a
\end{array}$$
Donc, 
$$\mathrm{Com}(A) = \begin{pmatrix}
d&-c \\
-b&a
\end{pmatrix} \text{ et } \mathrm{Com}(A)^{T} = \begin{pmatrix}
d&-b \\
-c&a
\end{pmatrix}$$
et 
$\det(A) = ad-bc$ ce qui conclut par le th précédent.

#### Remarque
Le théorème précédent est inefficace pour calculer l'inverse d'une matrice (Utiliser le pivot !!!!)






















$$\left| \begin{array}{c}

\end{array} \right| $$