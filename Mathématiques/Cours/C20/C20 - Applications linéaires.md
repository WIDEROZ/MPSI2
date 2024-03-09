Soit $\mathbb{K} = \{ \mathbb{R}, \mathbb{C} \}$, 

# I. Généralités
## 1. Définition
#### Définition
Une application linéaires est un morphisme d'espace vectoriel
ie, une application entre des $\mathbb{K}$-ev qui préserve $+$ et $\cdot$ 
ie : $u : E \to F$ avec $E, F$ deux $\mathbb{K}$-ev
et : 
$$\forall x, y \in E, u(x+y) = u(x)+u(y)$$
$$\forall x \in E, \forall \lambda \in \mathbb{K}, u(\lambda x) = \lambda u(x)$$

#### Notation
L'ensemble des applications linéaires de $E \to F$ est noté : $$\mathcal{L}(E, F)$$

#### Remarque
C'est en particulier un morphisme de groupe : de $(E, +)$ vers $(F, +)$

#### Conséquence
$u \in \mathcal{L}(E, F)$ préserve les CL ie
$$\forall(x_{i})_{i \in I} \in E^{I}, \forall(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}, u\left( \sum_{i \in I} \lambda_{i}x_{i} \right) = \sum_{i \in I}\lambda_{i}u(x_{i})$$

La preuve se ferait par recurrence sur : $|\{ i \in I | \lambda_{i}\neq 0 \}|$

#### Propriété : Caractérisation des applications linéaires
Soit $u \in F^{E}$, avec $E$ et $F$ des $\mathbb{K}$-ev
Alors, 
$$u \in \mathcal{L}(E, F) \Leftrightarrow \forall x, y \in E, \forall \lambda \in \mathbb{K}, u(\lambda x+y) = \lambda u(x) + u(y)$$

#### Remarque
Dans les cas ou les calculs sont conséquents il est parfois préférable de montrer séparément la préservation de l'addition et celle de la multiplication externe

#### Exemple
###### Applications linéaires :
$$\begin{cases}
\mathbb{K}[X] \to \mathbb{K}[X] \\
P \mapsto P'
\end{cases}$$

Généralement, les dérivations sont linéaires : 
$$\begin{cases}
\mathcal{C}^{1}(I) \to \mathcal{C}^{0} \\
f \mapsto f'
\end{cases}$$
et 
$$\begin{cases}
\mathcal{C}^{\infty} \to \mathcal{C}^{\infty}(I) \\
f \to f^{(k)}
\end{cases}$$

Pour $\lambda \in \mathbb{R}$, 
$$\lambda \cdot Id_{\mathbb{R}^{2}} :  \begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (\lambda x, \lambda y)
\end{cases}$$
Pour $(x, y), (x', y') \in \mathbb{R}^{2}$ et $\mu \in \mathbb{R}$, 
$$\lambda Id_{\mathbb{R}^{2}}(\mu(x, y) + (x', y')) = \lambda Id_{\mathbb{R}^{2}}((\mu x+x', \mu y+y'))$$
$$  = (\lambda(\mu x + x', \lambda (\mu y + y')))= (\lambda\mu x + \lambda x', \lambda \mu y + \lambda y') $$
$$= \mu(\lambda x, \lambda y)+(\lambda x', \lambda y') = \mu((\lambda Id_{\mathbb{R}^{2}})((x, y))) + (\lambda Id_{\mathbb{R}^{2}})((x', y'))$$

(L'image de la CL est la CL des images)

#### Propriété
Soit $E$ un $\mathbb{K}$-ev et $\lambda \in \mathbb{K}$
Alors, 
$$\lambda Id_{E} \in \mathcal{L}(E, E)$$

Démonstration : en exo
(en copiant la précédente et en remarquant que c'est plus facile)

#### Conséquence
$$\begin{cases}
E \to E \\
x \mapsto 0
\end{cases}
\text{ et } Id_{E}
\text{ sont linéaires}$$

#### Propriété
Si $E, F$ sont des $\mathbb{K}$-ev, 
$$\begin{cases}
E \to F \\
x \mapsto \to 0
\end{cases}$$

#### Exemple de $\mathbb{R}^{2}$
Pour $(x_{0}, y_{0}) \in \mathbb{R}^{2}$, 
$$u_{x_{0}, y_{0}} : \begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (x_{0}, y_{0})
\end{cases}$$

###### Analyse : 
Supposons $u_{x_{0}, y_{0}}$ linéaire, 
Alors :
$$u_{x_{0}, y_{0}}((0, 0)) + u_{x_{0}, y_{0}}((0, 0)) = u_{x_{0}, y_{0}}((0, 0) + (0, 0))= u_{x_{0}, y_{0}}((0, 0))$$
$$(x_{0} + y_{0}) + (x_{0}, y_{0}) = (x_{0}, y_{0})$$
Donc, 
$$\begin{cases}
x_{0} = 2x_{0} \\
y_{0} = 2y_{0}
\end{cases}$$

Ainsi,
$$x_{0} = y_{0} = 0$$

###### Synthèse
L'application nulle est bien linéaire

#### Propriété
Une application constante entre deux ev est linéaire ssi elle est nulle. 

#### Propriété
$$\forall u \in \mathcal{L}(E, F), u(0_{E}) = 0_{F}$$

Démonstration :
Soit $u \in \mathcal{L}(E, F)$, 
$u$ est linéaire est en particulier un morphisme de groupe pour $+$ donc envoie le neutre de $E$ sur le neutre de $F$

#### Exemple (ENCORE SUR $\mathbb{R}^{2}$ BORDEL)
$$\begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (y, y)
\end{cases}$$
est linéaire, 
$$\begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (x^{2},y ^{3})
\end{cases}$$
n'est pas linéaire, 
$$\begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (x, 1)
\end{cases}$$
n'est pas linéaire


#### Exemple / Exercice (fait en cours)
##### Pour $\mathbb{R}^{2}$
Soit $a, b \in \mathbb{R}$, 
$$\phi_{a, b} : \begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (ax + by, cx+dy)
\end{cases}$$
C'est bien une application linéaire
Démonstration : 
Soit $a,b \in \mathbb{R}$,
Soit, $(x, y), (x', y) \in \mathbb{R}^{2}$, 
On a : 
$$\phi((x+x', y+y')) = (a(x+x') + b(y+y'), c(x + x')+d(y+y'))$$
et
$$\phi((x, y)) + \phi((x' + y')) = (ax+by, cx+dy) + (ax'+by', cx' + dy')$$
$$= (a(x + x') + b(y+y'), c(x+x')+d(y+y'))$$
Ainsi, $\phi_{a, b}$ est bien un morphisme pour $+$
$$\phi(\lambda(x, y)) = \lambda \phi((x, y))$$
(Flemme d'écrire le calcul)
Ainsi, $\phi_{a, b}$ est bien linéaire.


##### Pour $\mathcal{M}_{2}(\mathbb{R})$
On a donc en identifiant les vecteurs de $\mathbb{R}^{2}$ : $(x, y)$ aux matrices colonnes : $\begin{pmatrix}x \\ y\end{pmatrix}$
$$u_{a, b} : \begin{cases}
\mathcal{M}_{2}(\mathbb{R}) \to \mathcal{M}_{2}(\mathbb{R}) \\
\begin{pmatrix}
x \\
y
\end{pmatrix} \mapsto \begin{pmatrix}
a&b \\
c&d
\end{pmatrix}\begin{pmatrix}
x \\
y
\end{pmatrix}
\end{cases}$$

#### Question : Existe t-il d'autres applications linéaires de $\mathbb{R}^{2} \to \mathbb{R}^{2}$ 
##### Analyse
Soit $u \in \mathcal{L}(\mathbb{R}^{2}, \mathbb{R}^{2})$, 
Pour $(x, y) \in \mathbb{R}^{2}$, 
$$u((x, y)) = u(x(1, 0) + y(0, 1)) \overset{\text{lin}}{=} x(u((1, 0))) + y(u((0, 1)))$$

En notant : 
$$\begin{cases}
(a, c) = u((1, 0)) \\
(b, d) = u((0, 1))
\end{cases}$$
On a : 
$$u((x, y)) = x(a, c) + y(b, d) = (ax+by, cx + dy)$$

##### Synthèse (Déjà faite)


#### Propriété
$$\mathcal{L}(\mathbb{R}^{2}, \mathbb{R}^{2}) = \left\{ \begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (ax+by, cx+d)
\end{cases} ; a, b, c, d \in \mathbb{R}\right\}$$

#### Remarque
Il y a 4 degré de liberté

#### Question : Parmi les similitudes du plan euclidien $\mathbb{R}^{2}$, lesquelles sont linéaires?
Ce sont :
$Id_{\mathbb{R}^{2}}$ et les similitudes de centre $(0, 0)$
(Le montrer en exo)

#### Question
Soit $E$ un $\mathbb{K}$-ev, 
Quels sont les éléments de $\mathcal{L}(\mathbb{R}, E)$?

Ce sont les : 
$$u_{v} : \begin{cases}
\mathbb{R} \to E \\
\lambda \mapsto \lambda v
\end{cases}$$
ou $v$ parcourt $E$


Démonstration : 
###### Analyse
Soit $u \in \mathcal{L}(\mathbb{R}, E)$, 
Pour $x \in \mathbb{R}$, 
$$u(x) = u(x\cdot 1) = xu(1)$$
Donc, 
$u = u_{v}$ en prenant $v = u_{1}$

###### Synthèse
Les $u_{v}$ sont clairement linéaires

<u>Excalidraw 1</u> 

#### Remarque
L'image de $u(\mathbb{R})$ est une droite vectorielle (lorsque $v \neq 0$), $Vect(v)$

##### Exemple
Soient $E, F$ deux $\mathbb{K}$-ev
et 
$$P_{1} : \begin{cases}
E \times F \to E \\
(x, y) \mapsto x
\end{cases}$$
$$P_{2} : \begin{cases}
E \times F \to F \\
(x, y) \mapsto y
\end{cases}$$
Montrons que $P_{1}$ et $P_{2}$ sont linéaires : 
#### Quelles sont les application de $\mathbb{R}^{3}$ vers $\mathbb{R}^{2}$
Ce sont les : 
$$\begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{2} \\
(x, y, z) \mapsto (ax + by + cz, dx + ey + fz)
\end{cases}$$
ou $a, b, c, d, e, f \in \mathbb{R}$

#### Propriété
$$\begin{cases}
\mathcal{M}_{n,p}(\mathbb{K}) \to \mathcal{M}_{n, p}(\mathbb{K}) \\
A \mapsto A^{T}
\end{cases}$$
est linéaire

#### Question : La conjugaison dans $\mathbb{C}$ est elle linéaire
$$\text{conj} : \begin{cases}
\mathbb{C} \to \mathbb{C} \\
z \mapsto \overline z
\end{cases}$$
Elle est seulement $\mathbb{R}$ linéaire mais pas $\mathbb{C}$ linéaire
Demonstration : exo

#### Théorème
Soient $E, F$ deux $\mathbb{K}$-ev
Alors $\mathcal{L}(E, F)$ est un $\mathbb{K}$-ev par les opérations $+$ et $\cdot$ usuelles
$\left(\begin{array}{cl} u + v : &x \mapsto u(x)+v(x) \\ \lambda u :& x \mapsto \lambda(u(x))\end{array}\right)$

Démonstration : 
C'est un sev de $F^{E}$ : 
- $O_{F^{E}}$ est linéaire (deja vu) donc $\mathcal{L}(E, F) \neq \varnothing$
- $\mathcal{L}(E, F)$ est stable par $+$
Soient $u, v \in \mathcal{L}(E, F)$, 
Alors $u + v \in F^{E}$ existe et pour : 
$x, y \in E$ et $\lambda \in F$, 
$$(u+v)(\lambda x+y)=u(\lambda x+y)+v(\lambda x+y)$$
par définition de $+_{F^{E}}$. 
Puis comme $u, v$ sont linéaires : 
$$= (\lambda(u(x))+u(y))+(\lambda(v(x))+v(y))$$
Par les calculs dans $F$ :
$$ = \lambda(u(x)+v(y))+(u(y)+v_{y})$$
Par définition de $+_{F^{E}}$, 
$$= \lambda((u+v)(x))+(u+v)(y)$$
Donc, 
$$u+v \in \mathcal{L}(E, F)$$

- $\mathcal{L}(E, F)$ est stable par $\cdot$
Soit $u \in \mathcal{L}(E, F)$, et $\mu \in \mathbb{K}$
Alors, $\mu u \in F^{E}$ et pour $x, y \in E$ et $\lambda \in K$,
$$ \begin{array}{cl}
(\mu u)(\lambda x+y)&=\mu(\lambda u(x) + u(y)) \\
&= \mu(\lambda u(x) + u(y)) \\
&= (\mu \lambda)u(x) + \mu u(y) \\
&= (\lambda \mu)u(x) + \mu u(y) \\
&=\lambda((\mu u)(x)) + (\mu u)(y)
\end{array}$$
Donc, $\mu u \in \mathcal{L}(E, F)$


#### Propriété
Soit $E, F$ deux ev et $E' \underset{sev}{\subset} E$ 
Alors, 
1. $$\forall u \in \mathcal{L}(E, F), u|_{E'} \in \mathcal{L}(E', F)$$
2. $$\text{rest}_{E'} : \mathcal{L}(E, F) \to \mathcal{L}(E', F) \text{ est linéaire}$$
   ie $\text{rest}_{E'} \in \mathcal{L}(\mathcal{L}(E, F), \mathcal{L}(E', F))$ 

Démonstration : exo


## 2. Composition d'application linéaire
#### Théorème
La composée de deux applications linéaires est linéaires, ie : 
$$\forall u \in \mathcal{L}(E, F), \forall v \in \mathcal{L}(F, G), v \circ u \in \mathcal{L}(E, G)$$

#### Théorème
La composition est bilinéaire : 
1. 
$$\forall u \in \mathcal{L}(E, F), \forall v_{1}, v_{2} \in \mathcal{L}(F,G), \forall \lambda \in \mathbb{K},$$
$$(\lambda v_{1}+v_{2}) \circ u = \lambda(v_{1}\circ u)+v_{2}\circ u$$
2. 
$$\forall u_{1}, u_{2} \in \mathcal{L}(E, F), \forall \lambda \in \mathbb{K}, \forall v\in \mathcal{L}(F, G),$$
$$v\circ (\lambda u_{1}+u_{2}) = \lambda(v\circ u_{1})+v\circ u_{2}$$

Démonstration : 
1. 
Soient $u \in \mathcal{L}(E, F)$, $v_{1}, v_{2} \in\mathcal{L}(F, G)$ et $\lambda \in \mathbb{K}$
Comme $\mathcal{L}(F, G)$ est un ev, $\lambda v_{1}+v_{2} \in \mathcal{L}(F, G)$
et par le théorème précédent :
$(\lambda v_{1}+v_{2})\circ u \in \mathcal{L}(E, G)$
De même $v_{1}\circ u, v_{2}\circ u \in \mathcal{L}(E, G)$,
LLL est un espace vectoriel donc $\lambda(v_{1}\circ u) + v_{2} \circ u \in \mathcal{L}(E, G)$
Pour montrer que ces applications de $E$ vers $G$ sont égales, on prend $x \in E$ et on montre qu'elles en sonnent la même image : 
$$\begin{array}{cl}
((\lambda v_{1}+v_{2})\circ u)(x) &= (\lambda v_{1}+v_{2})(u(x))  \\
&= \lambda(v_{1}(u(x)))+v_{2}(u(x)) \\
&= \lambda((v_{1}\circ u)(x)) + (v_{2}\circ u)(x) \\
&= (\lambda(v_{1}\circ u)+v_{2}\circ u)(x)
\end{array}$$
Ainsi : 
$$(\lambda v_{1}+v_{2})\circ u = \lambda(v_{1}\circ u) + v_{2} \circ u$$

###### Remarque importante
On a pas utilisé la linéarité de $u, v_{1}, v_{2}$

2. 
Soient $u_{1}, u_{2} \in \mathcal{L}(E, F)$, $\lambda \in \mathbb{K}$ et $v \in \mathcal{L}(F, G)$ 
De même que dans le 1., 
$$v\circ (\lambda u_{1}+u_{2}) \text{ et } \lambda(v\circ u_{1}) + v\circ  u_{2}$$
Sont des éléments de $\mathcal{L}(E, G)$
Soit $x \in E$,
On a alors : 
$$\begin{array}{cl}
(v\circ (\lambda u_{1}+u_{2}))(x) & = v((\lambda u_{1}+u_{2})(x)) \\
&= v(\lambda(u_{1}(x))+u_{2}(x)) \\
&=\lambda v(u_{1}(x)) + v(u_{2}(x)) \\
&=\lambda(v\circ u_{1}(x)) + (v \circ u_{2})(x) \\
&=(\lambda(v\circ u_{1})+v\circ u_{2})(x)
\end{array}$$

#### Reformulation du théorème
$E, F, G$ étant fixés on définit : 
$$\text{comp} : \begin{cases}
\mathcal{L}(E, F) \times \mathcal{L}(F, G) \to \mathcal{L}(E, G) \\
(u, v) \mapsto v \circ u
\end{cases}$$
Le résultat précédent s'écrit : 
1. 
$$\forall u \in \mathcal{L}(E, F), \text{comp}(u, \cdot) \text{ est linéaire}$$
ie
$$\forall u \in \mathcal{L}(E, F), \text{comp}(u, \cdot) \in \mathcal{L}(\mathcal{L}(F, G), \mathcal{L}(E, G))$$
2. 
$$\forall v \in \mathcal{L}(F, G), \text{comp}(\cdot, v) \text{est linéaire}$$
ie
$$\forall v \in \mathcal{L}(F, G), \text{comp}(\cdot, v) \in \mathcal{L}(\mathcal{L}(E, F), \mathcal{L}(E, G))$$

Montrer que :
$$v \mapsto \text{comp}(\cdot, v) \in \mathcal{L}(\mathcal{L}(F, G), \mathcal{L}(\mathcal{L}(E, F), \mathcal{L}(E, G)))$$
et 
$$u \mapsto \text{comp}(u, \cdot) \in \mathcal{L}(\mathcal{L}(E, F), \mathcal{L}(\mathcal{L}(F, G), \mathcal{L}(E, G)))$$

#### Théorème
Soit $u \in \mathcal{L}(E, F)$ bijective
Alors, $u^{-1}$ est linéaire (ie $u^{-1} \in \mathcal{L}(F, E)$)
(La réciproque d'une application linéaire bijective est automatiquement linéaire)

Démonstration : 
Soient $x',y' \in F$ et $\lambda \in \mathbb{K}$, 
Alors en notant $x = u^{-1}(x')$ et $y=u^{-1}(y')$
$$\begin{array}{cl}
u^{-1}(\lambda x'+y')&=u^{-1}(\lambda u(x)+u(y)) \\
&=u^{-1}(u(\lambda x+y)) \\
&= \lambda x + y \\
&=\lambda(u^{-1}(x')) + u^{-1}(y')
\end{array}$$
Ainsi, $u^{-1} \in \mathcal{L}(F, E)$

#### Définition
$u \in \mathcal{L}(E, F)$ bijective
est appelée un isomorphisme d'espace vectoriels

#### Exemple
$$\begin{cases}
\mathcal{M}_{n,p}(\mathbb{K}) \to \mathcal{M}_{n, p}(\mathbb{K}) \\
A \mapsto A^{T}
\end{cases}$$
est un isomorphisme d'ev
$$
\begin{cases}
\mathbb{R}^{2} \to \mathbb{R}^{2} \\
(x, y) \mapsto (y, x)
\end{cases}
$$
est un isomorphisme d'ev
on dira que c'est un automorphisme de $\mathbb{R}^{2}$

#### Exercice
Montrer que l'image directe ou réciproque d'un sev par une application linéaire est un sev
Soit $E, I$ des $\mathbb{K}$-ev, 
Soit $F \underset{\text{sev}}{\subset} E$, 
Soit $\phi \in\mathcal{L}(F, I)$, 
Mq $\mathrm{Im}(\phi) \underset{\text{sev}}{\subset} I$
- Comme $F$ est un ev et que $\phi(0)=0$, $\mathrm{Im}(\phi) \neq \varnothing$ 
- ''