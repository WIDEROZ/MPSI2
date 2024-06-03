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
\left| f(X) - f(X_{0})\right| = \left| \frac{xy}{x^{2}+y^{2}} - \frac{x_{0}y_{0}}{x_{0}^{2}+y_{0}^{2}}\right|
$$
$$
= \frac{\left| xy(x_{0}^{2}+y_{0}^{2})- x_{0}y_{0}(x^{2}+y^{2})\right|}{\left| (x^{2}+y^{2})(x_{0}^{2}+y_{0}^{2})\right|}
$$
(il faut majorer le numérateur et minorer le dénominateur)
On a : 
$$\left| xy(x_{0}^{2}+y_{0}^{2})- x_{0}y_{0}(x^{2}+y^{2})\right| $$
$$\leq \left| xy(x_{0}^{2}+y_{0}^{2})-x_{0}y_{0}(x^{2}+y^{2})\right|$$
$$+ \left| x_{0}y_{0}(x_{0}^{2}+y_{0}^{2}) - x_{0}y_{0}(x^{2}+y^{2})\right|$$
$$\leq \left|x_{0}^{2}+y_{0}^{2}\right|(\left| xy-x_{0}\right|+\left| x_{0}y-x_{0}y_{0}\right|)$$
$$+ \left| x_{0}y_{0}\right|(\left| x^{2}-x_{0}^{2}\right|+\left| y^{2} - y_{0}^{2}\right|)$$
$$\leq \left| x_{0}^{2}-y_{0}^{2}\right|\left| y\right| \left| x-x_{0}\right|+ \left| x_{0}^{2}+y_{0}^{2}\right|\left| x_{0}\right|\left| y-y_{0}\right|\left| x+x_{0}\right|\left| x-x_{0}\right|$$
$$+\left| x_{0}y_{0}\right|\left| y+y_{0}\right|\left| y-y_{0}\right|\leq c \space d(X_{0}, X)$$
avec $c >0$
$$\leq \frac{\left|\left| X_{0} \right|\right|^{3}}{2} \leq d(X_{0}, X) \leq \frac{\left|\left| X_{0} \right|\right|^{3}}{2} $$
$$\leq d(X_{0}, X) \left| x_{0}y_{0}\right|2\left|\left| X_{1} \right|\right| \leq d(X_{0}, X)$$

Ainsi, 
$$\exists c'>0, \left| f(X) - f(X_{0})\right| \leq c' d(X_{0}, X)$$
Soit $\varepsilon>0$
On pose : $\alpha = \min\left( \frac{\left|\left| X_{0} \right|\right|}{2}, \frac{\varepsilon}{c'} \right)$
On a pour tout $X \in \mathbb{R}^{2}$ tel que $d(X_{0},X) \leq \alpha$, 
$$\left| f(X)-f(X_{0})\right| \leq c' \frac{\varepsilon}{c'} = \varepsilon$$
Ainsi, 
$f$ est continue en tout $X_{0} \neq (0, 0)$

#### Remarque
Bientôt on aura avec les théorèmes de construction des fonctions continues que permettent d'éviter ces majorations fastidieuses

En revanche la continuité en $(0, 0)$ ne peut pas s'étudier avec une construction.

#### Remarque
Intuitivement : Il est utile de regarder ce qui se passe quand $X$ tend vers $(0, 0)$ suivant une direction donnée. Si $f$ est continue en $(0, 0)$ on devrait avoir des limites directionnelles finies et égales

Excal 8.
Regardons les limites suivant les axes de coordonnées : elles sont nulles ce qui ne nous avant pas trop. 
Regardons la première bissectrice!

Pour $x \neq 0$, $f(x, x) = \frac{1}{2}$
on comprend que $f$ n'est pas continue en $(0, 0)$
On va montrer proprement cela : 
$$\exists \varepsilon >0, \forall \alpha >0, \exists X \in \mathbb{R}^{2}, d(0, X) = \left|\left| X \right|\right|  \leq \alpha \text{ et } \left| f(X) \right| > \varepsilon$$
On pose : $\varepsilon = \frac{1}{4}$
Soit $\alpha  >0$, 
En posant : $X_{\alpha} = \frac{1}{\sqrt{ 2 }}(\alpha, \alpha)$
On a : 
- D'une part : $\left|\left| X_{\alpha} \right|\right| = \alpha$
- D'autre part : $f(X_{\alpha})= \frac{1}{2}$ Donc, $\left| f(X_{\alpha})\right| > \varepsilon$

Ainsi, $f$ n'est pas continue en $(0, 0)$

#### Définition
$f$ est continue sur $U$ ssi elle est continue en tout point de $U$

#### Exemple
$$f_{2} : \begin{cases}
 \mathbb{R}^{2} \to \mathbb{R} \\
X = (x, y) \mapsto \frac{\sin(xy - 2x +y^{3})}{1+x^{2}y^{2}}
\end{cases}$$
est continue sur $\mathbb{R}^{2}$ (peut être fait à la main mais de manière beaucoup plus rapide par construction)

#### Définition
On note : $\mathcal{C}_{\mathbb{R}}^{0}(U)$ l'ensemble de fonctions continues sur $U$

#### Théorème
Soit $f, g \in \mathbb{R}^{U}$, $\lambda , \mu \in \mathbb{R}$ et $X_{0} \in U$
(Rappel $U$ est un ouvert de $\mathbb{R}^{2}$)

Si $f$ et $g$ sont continues en $X_{0}$ (resp sur $U$)
Alors, 
- $\lambda f + \mu g$ est continue en $x_{0}$ (resp sur $U$)
- $fg$ est continue en $x_{0}$ (resp sur $U$)

Si de plus $g$ ne s'annule pas en $X_{0}$ 
Alors, 
- $\frac{f}{g}$ est continue en $x_{0}$ (resp sur $U$)

#### Corollaire
$$\mathcal{C}^{0}_{\mathbb{R}}(U)\underset{sev}{\subset}\mathbb{R}^{U}$$
et même c'est une sous algèbre. 

#### Remarque
Si $g$ est continue en $X_{0}$ et $g(X_{0}) \neq 0$,
Il existe un $\varepsilon>0$ tel que : $B = B_{o}(X_{0}, \varepsilon) \subset U$
et $g$ ne s'annule pas sur $B$, donc, $\frac{f}{g}$ est définie au moins sur l'ouvert $B$

#### Théorème
Avec les bonnes hypothèses sur les domaines, la composée de fonction de deux variables continue est continue. 

Soit $U$ un ouvert

On a trois cas : 
##### Cas 1
Pour $I$ un intervalle non trivial de $\mathbb{R}$,

Pour $x, y \in \mathcal{C}_{\mathbb{R}}^{0}(I)$, 
Pour $f \in \mathcal{C}^{0}_{\mathbb{R}}(U)$, 
Si $\gamma(I) \subset U$,
Alors
$$
t \mapsto f(\gamma(t)) = f(x(t), y(t))
$$
est continue sur $U$

##### Cas 2
Pour $V$ un ouvert,

Pour $\varphi, \psi \in \mathbb{C}_{\mathbb{R}}^{0}(V)$,
Pour $f \in \mathbb{C}_{\mathbb{R}}^{0}(U)$, 
Si $(\varphi, \psi)(V) \subset U$, 
Alors, 
$$(u, v) \mapsto f(\varphi(u, v), \psi(u, v))$$
est continue sur $V$

##### Cas 3
Pour $I$ un intervalle non trivial de $\mathbb{R}$,

Pour $f \in \mathcal{C}_{\mathbb{R}}^{0}(U)$, 
Pour $g \in \mathcal{C}_{\mathbb{R}}^{0}(I)$, 
$f(U) \subset I$,
$$g \circ f$$
est continue sur $U$

##### Remarque
Le formalisme général  sera donné l'an prochain

#### Propriété
Les projections : 
$$\begin{cases}
(x, y) \mapsto x \\
(x, y) \mapsto y
\end{cases}$$
sont continues sur $\mathbb{R}^{2}$

#### Corollaire
Toute fonction polynôme en $x,y$ est continue sur $\mathbb{R}^{2}$.

#### Corollaire
Pour $U$ un ouvert, 
Pour $f \in \mathcal{C}_{\mathbb{R}}^{0}(\mathbb{R}^{2})$ et $g \in \mathcal{C}_{\mathbb{R}}^{0}(U)$,
telles que $0 \notin g(U)$, 
$$\frac{f}{g}$$
est continue sur $U$

# II. Dérivées partielles
Soit $f : U \to \mathbb{R}$,
avec $U$ un ouvert de $\mathbb{R}^{2}$, 
et $X_{0} = (x_{0}, y_{0}) \in U$, 

#### Définition
Les applications partielles de $f$ en $X_{0}$ sont : 
$$\begin{cases}
x \mapsto f(x, y_{0}) \\
y \mapsto f(x_{0}, y)
\end{cases}$$
Si la première $f(\cdot, y_{0})$ est dérivable en $x_{0}$, on note son nombre dérivé ainsi :
$$
\frac{\partial f}{\partial x} (x_{0}, y_{0})
$$
on l'appelle (abus) la dérivée partielle de $f$ par rapport à $x$ au point $(x_{0}, y_{0})$, de même pour la dérivée partielle de $f$ par rapport à $y$ en $(x_{0}, y_{0})$, nombre dérivé si il existe de $f(x_{0}, \cdot)$ en $(x_{0}, y_{0})$ noté : 
$$\frac{\partial f}{\partial y} (x_{0}, y_{0})$$

#### Remarque
L'existence de ces deux dérivées partielles en $(x_{0}, y_{0})$ n’entraîne pas la continuité en $(x_{0}, y_{0})$ car cela ne dépend que des valeurs prises par $f$ sur "la croix". 


#### Exemple
$$
f_{1} : (x, y) \mapsto \begin{cases}
\frac{xy}{x^{2}+y^{2}} \text{ si }(x, y) \neq (0, 0) \\
0 \text{ si } (x, y) = (0, 0)
\end{cases}
$$
On a l'existence de $\frac{\partial f_{1}}{\partial x}(0, 0) = 0$ 
et $\frac{\partial f_{1}}{\partial y}(0, 0) = 0$ sans la continuité en $(0, 0)$

#### Définition
On dit que $f$ est de classe $\mathcal{C}^{1}$ sur $U$ ssi elle admet des dérivées partielles en tout point de $U$ et :
$$\begin{cases}
\frac{\partial f}{\partial x} : (x, y) \mapsto \frac{\partial f}{\partial x} (x, y) \\
\frac{\partial f}{\partial y} : (x, y) \mapsto \frac{\partial f}{\partial y} (x, y)
\end{cases}$$
sont continues sur $U$.

#### Remarque
Abus : Dans 
$$\frac{\partial f}{\partial x} (x, y)$$
Les deux $x$ ne sont pas les mêmes : l'un est la coordonnée générique et l'autre un réel fixé. 

#### Notation : 
L'ensemble des fonction de classe $\mathcal{C}^{1}(U)$ est noté : 
$$\mathcal{C}_{\mathbb{R}}^{1}(U)$$

#### Théorème
$$\mathcal{C}_{\mathbb{R}}^{1}(U) \subset \mathcal{C}_{\mathbb{R}}^{0}(U)$$
ie
Toute fonction de classe $\mathcal{C}^{1}$ est continue. 

Idée de la démonstration : 
Pour $f \in \mathcal{C}^{1}_{\mathbb{R}}(U)$, $(x_{0}, y_{0}) \in U$,
Pour $(x, y) \in U$, 
Assez proche de $(x_{0}, y_{0})$ (dans la boule de centre $(x_{0}, y_{0})$)

$$\begin{array}{rl}
\left| f(x, y) - f(x_{0}, y_{0})\right|&\leq |f(x, y)- f(x_{0}, y)| \\
&+ \left| f(x_{0}, y) - f(x_{0}, y_{0}) \right| \\
&\leq \left| x - x_{0}\right|\left| \frac{\partial f}{\partial x} (c, y)\right| \\
&+ \left| y-y_{0}\right|\left| \frac{\partial f}{\partial y} (x_{0}, d)\right|
\end{array}$$
Par le théorème des accroissement finis. 

On pourra trouver un $M$ tel que
$$\begin{array}{rl}
\left| f(x, y)-f(x_{0}, y_{0})\right|& \leq M(\left| x  -x_{0}+y-y_{0}\right| ) \\
&\leq \sqrt{ 2 } M \left|\left| x-x_{0}, y-y_{0} \right|\right| 
\end{array}$$
au voisinage de $(x_{0}, y_{0})$
ce qui entraîne la continuité de $f$ en $(x_{0}, y_{0})$. 

#### Théorème
$\mathcal{C}_{\mathbb{R}}^{1}(U)$ est stable par CL et produit.
Le quotient de deux éléments de $\mathcal{C}_{\mathbb{R}}^{1}(U)$ dont le dénominateur ne s'annule pas est élément de $\mathcal{C}_{\mathbb{R}}^{1}(U)$

#### Corollaire
$$\mathcal{C}_{\mathbb{R}}^{1}(U) \underset{sev}{\subset} \mathcal{C}_{\mathbb{R}}^{0}(U) \underset{sev}{\subset} \mathbb{R}^{U}$$
et même sous algèbre

Démonstration :
Conséquence des résultats sur les fonctions d'une variable puisque les dérivés partielles sont des dérivées de fonctions d'une variable. 

#### Remarque
On aurait aussi un résultat ponctuel au point $(x_{0}, y_{0})$. 

#### Remarque
La composition est plus subtile. 

#### Généralisation des relations de comparaison
