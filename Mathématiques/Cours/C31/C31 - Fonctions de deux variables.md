Cadre : $\mathbb{R}^{2}$, $\left< \cdot, \cdot \right> = \left< \cdot, \cdot \right>_{\text{can}}$, $\left|\left| \cdot \right|\right|$ norme associé
On note : $X = \begin{pmatrix}x \\ y\end{pmatrix} = (x, y)$
Pour $X_{1}, X_{2} \in \mathbb{R}^{2}$,
$$\left< X_{1}, X_{2} \right> =x_{1}x_{2}+y_{1}y_{2}$$
$$\left|\left| X_{1} \right|\right| = \sqrt{ x_{1}^{2}+y_{1}^{2} }$$
$$d(X_{1}, X_{2}) = \sqrt{(x_{2}-x_{1})^{2}+(y_{2}-y_{1})^{2} } = \left|\left| \overrightarrow{X_{1}X_{2}} \right|\right|$$

On s'intéresse aux applications :
$$f : \begin{cases}
{U} \to \mathbb{R} \\
X = (x, y) \mapsto f(X) = f(x, y) \text{ (abus f((x, y))=f(x, y))}
\end{cases}$$
où $U \subset \mathbb{R}^{2}$

Excal 1

- Pour évier les études délicates aux points du bord de $U$ on imposera que $u$ n'ait pas de tels points ie $U$ est ouvert
(défini dans la section suivante)

- La continuité sera définie de manière analogue au cas d'une variable à l'aide de distance. 

# I. Ouverts de $\mathbb{R}^{2}$ et continuité
#### Définition
Pour $X_{0} \in \mathbb{R}^{2}$ et $r \in \mathbb{R}_{+}$, 
la boule ouverte (resp fermée) de centre $X_{0}$ et de rayon $r$ est :
$$
B_{o}(X_{0}, r) = \{ X \in \mathbb{R}^{2} | d(X_{0}, X) < r \}
$$
resp :
$$B_{f}(X_{0}, r) = \{ X \in \mathbb{R}^{2} | d(X_{0}, X) \leq r \}$$

#### Définition
Soit $A \subset \mathbb{R}^{2}$ et $X_{0} \in A$, 
On dit que $X_{0}$ est un point intérieur de $A$ ssi 
$$
\exists \varepsilon >0, B_{o}(X_{0}, \varepsilon) \subset A
$$
Excal 2

#### Remarque
Cela équivaut à : 
$$
\exists \varepsilon' >0, B_{f}(X_{0}, \varepsilon') \subset A
$$

#### Exemple
$A=[1, + \infty[ \times \mathbb{R}$ 
Quel est l'ensemble de ses points intérieurs. 

C'est $]1, + \infty[\times \mathbb{R}$, 
Démonstration : 
Par disjonction de cas : 
Soit $X_{0} = (x_{0}, y_{0}) \in A$, (ie $x_{0}\geq 1$)

Cas $x_{0} > 1$, 
On pose $\varepsilon = x_{0}-1>0$ et
et on a : $B_{o}(X_{0}, \varepsilon) \subset A$
En effet pour $X = (x, y) \in B_{o}(X_{0}, \varepsilon)$, 
$$\left|\left| X-X_{0} \right|\right| \leq \varepsilon$$
Alors, 
$$
\left|\left| X-X_{0} \right|\right| ^{2} = (x-x_{0})^{2}+(y-y_{0})^{2} \leq (x_{0}-1)^{2}
$$
Comme :
$$(x-x_{0})^{2}\leq (x-x_{0})^{2} + (y-y_{0})^{2}$$
Alors, 
$$(x-x_{0})^{2}\leq (x_{0}-1)^{2}$$
Donc, en prenant les racines : 
$$\left| x-x_{0}\right|\leq \left| x_{0}-1\right| = x_{0}-1$$
car $x_{0} \in A$
Or, 
$$x_{0}-x\leq x-x_{0}$$
Donc, 
$$x_{0}-x\leq x-x_{0}$$
Ainsi , 
$$x \geq 1$$
Donc,
$$\boxed{x \in A}$$
Ainsi, 
$X_{0}$ est un point intérieur de $A$

Cas $x_{0} = 1$ : 
Soit $\varepsilon>0$, 
Alors, 
$$X_{1} = \left( 1-\frac{\varepsilon}{2} , y_{0}\right) \in B_{o}(X_{0}, \varepsilon) \setminus A$$
En effet, 
$$\begin{array}{rl}
\left|\left| X_{1} - X_{0} \right|\right| &= \sqrt{ \left(  \left( 1-\frac{\varepsilon}{2}  \right)+1 \right)^{2} + (y_{0}-y_{0})} \\
&= \sqrt{ \frac{\varepsilon^{2}}{4} } \\
&= \frac{\varepsilon}{2} \leq \varepsilon
\end{array}$$
Donc, 
$$X_{1} \in B_{o}(X_{0}, \varepsilon)$$
et par ailleurs $1-\frac{\varepsilon}{2}< 1$
Donc, $X_{1} \not\in A$
Ainsi,
$$\forall \varepsilon >0, B_{o}(X_{0}, \varepsilon) \nsubseteq A$$
ie
$X_{0}$ n'est pas intérieur. 

#### Avant première SPE
L'ensemble des points intérieurs est appelé inérieur (mddrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr)
est noté $\overset{\space \space o}{A}$

Les points non intérieurs de $A$ forment la frontière ou bords de $A$ noté $\partial A$

#### Définition
$U \subset \mathbb{R}^{2}$ est un ouvert de $\mathbb{R}^{2}$ ssi tous ses points sont intérieurs


#### Exemple
$[1, +\infty[\times \mathbb{R}$ n'est pas ouvert mais $]1, + \infty[ \times \mathbb{R}$ est ouvert
(en fait : $\overset{\space \space o}{A}$ est toujours un ouvert (exo))
-> Excal 4


#### Exercice
1. Montrer que $\varnothing$ et $\mathbb{R}^{2}$ sont ouverts
2. Montrer qu'une réunion quelconque d'ouverts est un ouvert
3. Montrer que l'intersection d'un nombre fini d'ouverts est un ouvert

#### Remarque
1, 2, et 3 sont des axiomes d'une "topologie"

#### Exercice
Intermédiaire
Montrer que
$$\bigcup_{n \in \mathbb{N}^{*}} B_{o}\left( \left( \frac{1}{n}, 0 \right), \frac{1}{n} \right)= B_{o}\left( (1, 0), 1 \right) \text{ ouvert}$$
est ouvert
Excal 5.
$$\bigcap_{n \in \mathbb{N}^{*}} B_{o}\left( \left( \frac{1}{n}, 0 \right), \frac{1}{n} \right) = \varnothing$$
Mais, 
$$\bigcap_{n \in \mathbb{N}^{*}}B_{o}\left( (0, 0), \frac{1}{n} \right) = \{ (0, 0) \}$$
est non ouvert

#### Propriété
1. Une boule ouverte est un ouvert
2. Le complémentaire dans $\mathbb{R}^{2}$ d'une boule fermée est un ouvert

Démonstration :
Soit $B = B_{o}(X_{0}, r)$ 
avec $X_{0} \in \mathbb{R}^{2}$, et $r \in \mathbb{R}_{+}$, 
Montrons que tout point de $B$ est intérieur
Soit $X_{1} \in B$ (ie $d(X_{0}, X_{1}) < r$)
Excal 6. 

Soit $X \in B_{o}(X_{1}, \varepsilon)$, (ie $d(X_{1}, X) <\varepsilon$)
$$\begin{array}{rl}
d(X_{0}, X) &\leq d(X_{0}, X_{1}) + d(X_{1}, X) \\
&< d(X_{0}, X_{1}) + \varepsilon = r
\end{array}$$
$(\varepsilon = r - d(X_{0}, X_{1}))$
Ainsi, 
$X \in B$
Ainsi, $B_{o}(X_{1}, \varepsilon) \subset B$ avec $\varepsilon >0$
Donc, 
$X_{1}$ est intérieur à $B$
___
Soit $\bar{B} = B_{f}(X_{0}, r)$ avec $\begin{cases} X_{0} \in \mathbb{R}^{2} \\ r \in \mathbb{R}_{+} \end{cases}$
et $U = \mathbb{R}^{2} \setminus \bar{B}$
Excal 7
Soit $X_{1} \in U$, 
On pose : $\varepsilon = d(X_{0}, X_{1})-r>0$ $(X_{1} \not\in B)$

EXERCICE : Montrer que $B_{o}(X_{1}, \varepsilon) \subset U$

#### Définition
Une fonction de deux variables est une application : $f : U \to \mathbb{R}$ avec $U \subset \mathbb{R}^{2}$ qu'on supposera (cette année) toujours ouvert (sauf mention contraire explicite)

#### Définition
Le graphe de $f$ est : 
$$\mathcal{G}_{f} = \{ (x, y, f(x, y)); (x, y) \in U \}$$

#### Remarque
$$\mathcal{G}_{f} = \{ (x, y, f(x, y)); (x, y) \in U \} = \{ (X, f(X)) ; X \in U \}$$
En identifiant $\mathbb{R}^{3}$ à $\mathbb{R}^{2} \times \mathbb{R}$

Lorsque $U$ est un rectangle (produit d'intervalle) et même si ce n'est pas le cas, il peut être pratique de représenter un quadrillage de $U$ et de son image par $f$. 

Excal 8
Ces deux exemples de fonctions sont continues : 

#### Définition
Soit $f : U \to \mathbb{R}$ avec $U$ ouvert de $\mathbb{R}^{2}$ et $X_{0} \in U$
On dit que $f$ est continue en $X_{0}$ ssi 
$$\forall \varepsilon >0, \exists \alpha >0, \forall X \in U, d(X_{0}, X) \leq \alpha \Rightarrow \left| f(X) - f(X_{0})\right| \leq \varepsilon$$
ie
$$\forall \varepsilon > 0, \exists \alpha >0, f(B_{f}(X_{0}, \alpha) \cap U) \subset B_{f}(f(X_{0}), \varepsilon)$$

#### Exercice
Soit 
$$
f :\begin{cases}
\mathbb{R}^{2} \to \mathbb{R} \\
(x, y) \mapsto \begin{cases}
{\frac{xy}{x^{2}+y^{2}}} \text{ si } (x, y) \neq (0, 0) \\
0 \text{ si } (x, y) = (0, 0)
\end{cases}
\end{cases}
$$
Montrer que $f$ est continue en tout $(x_{0}, y_{0}) \neq (0, 0)$ mais pas en $(0, 0)$

Soit $X_{0} = (x_{0}, y_{0}) \neq (0, 0)$ et $X \in \mathbb{R}^{2}$
quitte à prendre $X$ proche de $X_{0}$ on peut supposer que $X \neq (0, 0)$

$$
\left| f(X) - f(X_{0})\right| = \left| \frac{xy}{x^{2}+y^{2}} - \frac{x_{0}y_{0}}{x^{2}+y^{2}}\right|
$$