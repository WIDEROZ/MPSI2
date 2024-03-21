Soit $\mathbb{K} = \{ \mathbb{R}, \mathbb{C} \}$, 

# I. Généralités
## 1. Définition
#### Définition
Une applicacation linéaires est un morphisme d'espace vectoriel
ie, une applicacation entre des $\mathbb{K}$-ev qui préserve $+$ et $\cdot$ 
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
x \mapsto 0
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
(x, y) \mapsto (ax+by, cx+dy)
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
$$\psi : \begin{cases}
\mathbb{C} \to \mathbb{C} \\
z \mapsto \overline z
\end{cases}$$
Elle est seulement $\mathbb{R}$ linéaire mais pas $\mathbb{C}$ linéaire
Demonstration : exo
Soit $z, z' \in \mathbb{C}$ et $a, b, c, d \in \mathbb{R}$ tels que : 
$z = a+ib$ et $z' = c+id$
Soit $\lambda \in \mathbb{R}$, 
$\psi(z+z') = \overline{z+z'} = a-ib + c-id = \overline z + \overline{z'} = \psi(z) + \psi(z')$
$\psi(\lambda z) = \overline{\lambda z} =\lambda a - \lambda ib= \lambda(a-ib) = \lambda \psi(z)$

Ainsi, $\psi$ est $\mathbb{R}$ linéaire
mais si on prend : 
$\lambda' = i \in \mathbb{C}$, 
On a :
$\psi(\lambda' z) = \psi(iz) = \overline{iz} = -(b + ai)$
et
$\lambda' \psi(z) = i\psi(z) = i(a-ib) = b + ai$
or
$\psi(\lambda' z) \neq \lambda'\psi(z)$

Ainsi, $\psi$ n'est que $\mathbb{C}$ linéaire.


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
Alors, $\mu u \in F^{E}$ et pour $x, y \in E$ et $\lambda \in \mathbb{K}$,
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
Avec les notations, précédentes, 
1. 
Soit $u \in \mathcal{L}(E, F)$, 
Alors, 
$$v = u|_{E'} : \begin{cases}
E' \to F \\
x \mapsto u(x)
\end{cases}$$
Soit $x, y \in E'$ et $\lambda \in \mathbb{K}$,
Comme $E'$ est un ev, $x + \lambda y \in E'$ 
Alors, comme $E' \subset E$, $\forall e \in E, u(e) = v(e)$, 
Ainsi,
$$v(x + \lambda y) = u(x + \lambda y) =  u(x) + \lambda u(y) = v(x) + \lambda v(y)$$
Donc, $v \in \mathcal{L}(E', F)$

2. 
On pose $u = \text{rest}_{E'}$,
Soit $x, y \in \mathcal{L}(E, F)$, et $\lambda \in \mathbb{K}$
On a : 
$$u(x+\lambda y) = (x + \lambda y)|_{E'}$$
Comme c'est une application linéaire par le 1. : 
$$(x+ \lambda y)|_{E'} = x|_{E'} + \lambda y|_{E'}$$

Ainsi,
$$u \in \mathcal{L}(\mathcal{L}(E, F), \mathcal{L}(E', F))$$


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
$\mathcal{L}(E, G)$ est un espace vectoriel donc $\lambda(v_{1}\circ u) + v_{2} \circ u \in \mathcal{L}(E, G)$
Pour montrer que ces applications de $E$ vers $G$ sont égales, on prend $x \in E$ et on montre qu'elles ont la même image : 
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
Soit $\phi \in\mathcal{L}(E, I)$, 
Mq $\mathrm{Im}(\phi) \underset{\text{sev}}{\subset} F$
- Comme $F$ est un ev et que $\phi(0)=0$, $\mathrm{Im}(\phi) \neq \varnothing$ 
- On a bien $\mathrm{Im}(\phi) \subset F$ par définition
- Soit $x, y \in E$, et $\lambda \in \mathbb{K}$, 
On a par linéarité et par définition de $\mathrm{Im}(u)$ :
$$u(x + \lambda y) \in \mathrm{Im}(u) \subset F \text{ et } u(x) + \lambda u(y) \in \mathrm{Im}(u) \subset F$$
Ainsi $\mathrm{Im}(u)$ est stable par CL

Par la caractérisation des sev : $\mathrm{Im}(u) \underset{\text{sev}}{\subset} F$

# 3. Images directes et réciproques de sous espaces vectoriels

#### Propriété
Soit $E, F$ deux $\mathbb{K}$-ev, 
$u \in \mathcal{L}(E, F)$, 
$E' \underset{\text{sev}}{\subset} E, F' \underset{\text{sev}}{\subset} F$, 
Alors, 
$$u(E') \underset{\text{sev}}{\subset} F$$
$$u^{-1}(F') \underset{\text{sev}}{\subset} E$$

Démonstration : 
1. 
Comme $E' \underset{\text{sev}}{\subset} E$, $0_{E} \in E'$, 
Comme $u$ est linéaire $u(0_{E}) = 0_{F}$
Ainsi, 
$0_{F} \in u(E')$

2. 
Soient $y_{1}, y_{2} \in u(E')$, 
il existe un $x_{1}, x_{2} \in E'$ tq $\begin{cases} u(x_{1}) = y_{1}\\ u(x_{2}) = y_{2} \end{cases}$
Alors, 
$$\lambda y_{1} + y_{2} = \lambda u(x_{1})+u(x_{2}) = u(\lambda x_{1} + x_{2})$$
Comme $x_{1}, x_{2} \in E'$ et $E' \underset{\text{sev}}{\subset} E$, $\lambda x_{1}+x_{2} \in E'$
Donc, $\lambda y_{1} + y_{2} \in u(E')$, 
Par la caractérisation des sev, $u(E') \underset{\text{sev}}{\subset} F$


FAIRE LA DEUXIÈME EN EXO


#### Rappel
$$f : X \to Y, A \subset X \text{ et } B \subset Y$$
$$f(A) = \{ f(x) ; x \in A \}$$
$$f^{-1}(B) = \{ x \in X |f (x) \in B \}$$

#### Définition
Pour $u \in \mathcal{L}(E, F)$, 
Son noyau est : 
$$Ker(u) = u^{-1}(\{ 0 \}) = \{ x \in E | u(x) = 0 \}$$
$$\mathrm{Im}(u) = \{ u(x) ; x \in E \}$$


#### Propriété
Avec les notations précédentes
$$u \text{ surjective } \Leftrightarrow \mathrm{Im}(u) = F$$
$$u \text{ injective } \Leftrightarrow \text{Ker}(u) = \{ 0 \}$$
(Déjà vu avec un morphisme de groupe)

#### Exemple
$$ \phi :
\begin{cases}
\mathbb{K}[X] \to \mathbb{K}[X] \\
P \mapsto P'
\end{cases}
$$
a comme noyau : $\text{Ker}(\phi) = \mathbb{K}_{0}[X] = \mathbb{K}$
et comme image : $\mathrm{Im}(\phi) = \mathbb{K}[X]$
Donc, elle est non injective et surjective


Pour $E$ quelconque, et $\lambda \in \mathbb{K}$, 
Si $\lambda \neq 0$,
$$
\text{Ker}(\lambda Id) = \{ 0_{E} \}
$$
$$\mathrm{Im}(\lambda Id) = E$$
Sinon, 
$$\text{Ker}(0Id) = \text{Ker}(0_{E}) = E$$
$$\mathrm{Im}(0Id) = \mathrm{Im}(0_{E}) = \{ 0_{E} \}$$


Une similitude de $\mathbb{R}^{2}$ euclidien de centre $O$ étant bijective, vérifie : 
$$\text{Ker}(F) = \{ 0_{\mathbb{R}^{2}} \}$$
$$\mathrm{Im}(F) = \{ \mathbb{R}^{2} \}$$

Soit 
$$u : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{3} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto \begin{pmatrix}
x+2y+3z \\
4x+5y+6z \\
7x + 8y+9z
\end{pmatrix}
\end{cases}$$
On trouve $\text{Ker}(u)$ par la méthode du pivot : 
$$\begin{pmatrix}
1&0&-1 \\
0&1&2 \\
0&0&0
\end{pmatrix}$$
Qui est échelonnée réduite par lignes,
On sait que : 
(La seule inconnue secondaire est $z$ alors on la remplace par 1)
$$\text{Ker}(u) = \mathbb{R}\begin{pmatrix}
1 \\
-2 \\
1
\end{pmatrix} = Vect\begin{pmatrix}
1 \\
-2 \\
1
\end{pmatrix}$$

Pour $\mathrm{Im}(u)$ : 
Soit $Y = \begin{pmatrix}x'\\ y'\\ z'\end{pmatrix} \in \mathbb{R}^{3}$
Alors $Y \in \mathrm{Im}(u)$ ssi le système equivalent par lignes a cette matrice : 
$$\left[\begin{array}{ccc|c}
1&2&3&x' \\
4&5&6&y' \\
7&8&9&z'
\end{array}\right]$$
admet des solutions
Par la même méthode on obtiens 
$$\left[ 
\begin{array}{ccc|c}
1&2&3&x' \\
0&-3&-6&-4x' + y' \\
0&0&0&x'-2y'+z'
\end{array}\right]$$

Ainsi, le système est compatible ssi $x'-2y'+z' = 0$ Ainsi, 
$$\mathrm{Im}(u)= \left\{\left. \begin{pmatrix}
x' \\
y' \\
z'
\end{pmatrix} \in \mathbb{R}^{3} \right| x'-2y'+z =0 \right\}$$
est un plan vectoriel de $\mathbb{R}^{3}$

Donner une base de $\mathrm{Im}(u)$, 
Il suffit de trouver deux vecteurs non colinéaires, par exemple :
$$Vect\left(\begin{pmatrix}
1 \\
1 \\
1
\end{pmatrix}, \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}\right)$$

Pour $x + y + z + t +u = 0$
La matrice de ce système est déjà échelonnée réduite par lignes alors il existe des solutions et elles sont : 
$$Vect\begin{pmatrix}
\begin{pmatrix}
-1 \\
1 \\
0 \\
0 \\
0
\end{pmatrix}, \begin{pmatrix}
-1 \\
0 \\
1 \\
0 \\
0
\end{pmatrix}, \begin{pmatrix}
-1 \\
0 \\
0 \\
1 \\
0
\end{pmatrix}, \begin{pmatrix}
-1 \\
0 \\
0 \\
0 \\
1
\end{pmatrix}
\end{pmatrix}$$
maâloul
#### Aparté pivot
Pour trouver l'ensemble des solutions d'un pivot : 
on exprime chaque inconnue secondaires (ya plusieurs nombres sur la même colonne et aucun pivot sur cette même colonne) en fonction des inconnues principales (qui sont les pivots) dans la matrice homogène. 

Pour la solution particulière : on prend là où il y a des pivots. 

#### Exemple
Soit 
$$f : \begin{cases}
 \mathbb{R}^{2} \to \mathbb{R}^{2} \\
\begin{pmatrix}
x \\
y
\end{pmatrix} \mapsto \begin{pmatrix}
3x+4y \\
2y \\
9x
\end{pmatrix}
\end{cases}$$
1. Montrer que $f$ est linéaire
2. Déterminer son image et son noyau (est elle bijective?)

Soit $x, y, \alpha, \beta \in \mathbb{R}^{2}$, $\lambda, \mu \in \mathbb{R}$,
$\mathbb{R}^{2}$ est un ev

$$f\begin{pmatrix}
x + \lambda y \\
\alpha + \lambda y
\end{pmatrix} = \begin{pmatrix}
3(x + \lambda y) + 4(\alpha + \lambda \beta) \\
2(\alpha + \lambda \beta) \\
9(x + \lambda y)
\end{pmatrix} = \begin{pmatrix}
3x + 4\alpha + \lambda(3 y + 4 \beta) \\
2\alpha +\lambda2\beta \\
9x + \lambda9y
\end{pmatrix}$$
Donc, 
$$f\begin{pmatrix}
x + \lambda y \\
\alpha + \lambda \beta
\end{pmatrix} = \begin{pmatrix}
3x + 4\alpha \\
2\alpha \\
9x
\end{pmatrix} + \lambda \begin{pmatrix}
3y+4\beta \\
2\beta \\
9y
\end{pmatrix} = f\begin{pmatrix}
x \\
\alpha
\end{pmatrix} + \lambda f\begin{pmatrix}
y \\
\beta
\end{pmatrix}$$
Ainsi, $f \in \mathcal{L}(\mathbb{R}^{2}, \mathbb{R}^{2})$

2. Méthode rapide
Pour $X \in \mathbb{R}^{2}$ les coordonnées dans la base canonique de $\mathbb{R}^{3}$ de $f(X)$ en les coordonnées de $X$ dans la base canonique de $\mathbb{R}^{2}$

On a : 
$$A = \begin{pmatrix}
3&4 \\
0&2 \\
9&0
\end{pmatrix} \sim_{L} \begin{pmatrix}
3&4 \\
0&2 \\
0&-12
\end{pmatrix} \sim_{L} \begin{pmatrix}
3&4 \\
0&2 \\
0&0
\end{pmatrix}$$

Le système $f\begin{pmatrix} x \\ y \end{pmatrix} = 0$
est homogène sans inconnue secondaire, donc son ensemble de solution est : $\text{Ker}(f) = \left\{ \begin{pmatrix} 0 \\ 0 \end{pmatrix} \right\}$
Ainsi $f$ est injective

Pour $\begin{pmatrix} x' \\ y' \\ z' \end{pmatrix} \in \mathbb{R}^{3}$, 
$$M = \left[ 
\begin{array}{cc|c}
3&4&x' \\
0&2&y' \\
9&0&z'
\end{array}\right] \sim_{L} \left[ 
\begin{array}{cc|c}
3&4& \dots \\
0&2& \dots \\
0&0& -3x' + 6y'+z'
\end{array}\right]$$
Donc, 
$\mathrm{Im}(f)$ est le plan de $\mathbb{R}^{3}$ d'équation : $-3x'+6y'+z' = 0$
Donc, une base est : 
$$\begin{pmatrix}
\begin{pmatrix}
2 \\
1 \\
0
\end{pmatrix}, \begin{pmatrix}
1 \\
0 \\
3
\end{pmatrix}
\end{pmatrix}$$
(2 vecteurs non colinéaire -> Libre)
(2 = 2 -> Base de $\mathrm{Im}(f)$)

Comme $\mathrm{Im}(f)\neq \mathbb{R}^{3}$, $f$ n'est pas surjective, donc ce n'est pas un isomorphisme

## 4. Images de familles de vecteurs
#### Propriété
Soit $u \in \mathcal{L}(E, F)$, et $(x_{i})_{i \in I} \in E^{I}$,
Alors
$$u(Vect(x_{i})_{i \in I}) = Vect(u(x_{i}))_{i \in I}$$

Démonstration : 
$$u(Vect(x_{i})_{i \in I}) = \{ u(x) ; x \in Vect(x_{i})_{i \in I} \} $$
$$= \left\{  u\left( \sum_{i \in I}\lambda_{i}x_{i} \right) ; (\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)} \right\}$$
Comme $u$ est linéaire : 
$$= \left\{   \sum_{i \in I} \lambda_{i}u(x_{i}); (\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}  \right\} = Vect(u(x_{i}))_{i \in I}$$

#### Corollaire
L'image d'une famille génératrice par une application linéaire surjective engendre l'espace d'arrivée

Avec les notations précédentes, 
Si $(x_{i})_{i \in I}$ engendre $E$ et $u \in \mathcal{L}(E, F)$ est surjective 
alors $(u(x_{i}))_{i \in I}$ engendre $F$

Démonstration : 
Supposons que $(x_{i})_{i \in I}$ engendre $E$
Alors,
$$Vect(u(x_{i}))_{i \in >I} = u(Vect(x_{i})_{i \in I}) = u(E) = F$$
Car $(x_{i})_{i \in I}$ engendre $E$

#### Propriété
L'image d'une famille libre par application linéaire injective est libre

Démonstration : 
Soit $(x_{i})_{i \in I} \in E^{I}$, libre et $u \in \mathcal{L}(E, F)$ injective, 
Soit $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$, tq
$$S = \sum_{i \in I}\lambda_{i}x_{i} = 0$$
On a par linéarité de $u$,
$$u(S) = 0$$

Comme $u$ est linéaire injective,
$$\sum_{i \in I}\lambda_{i}u(x_{i}) = 0$$
Comme $(x_{i})_{i \in I}$ est libre, 
$$\forall i \in I, \lambda_{i}=0$$
Ainsi, 
$(u(x_{i}))_{i\in I}$ est libre


#### Corollaire
L'image d'une base de $E$ par un isomorphisme d'espace vectoriel de $E$ vers $F$ est une base de $F$

Démonstration : Immédiate avec le corollaire et la propriété précédente

## 4. Applications linéaires de rang fini
#### Définition
$u \in \mathcal{L}(E, F)$ est de rang fini ssi $\mathrm{Im}(u)$ est de $\dim$ finie. 
Si c'est le cas on défini le rang de $u$ par 
$$rg(u) = \dim(\mathrm{Im}(u))$$

#### Proposition
Soit $u \in \mathcal{L}(E, F)$ et $v \in \mathcal{L}(F, G)$
Alors, 
$$
\begin{rcases}
u \text{ de rang fini} \\
v \text{ injective}
\end{rcases} \Rightarrow 
\begin{cases}
v \circ  u \text{ de rang fini} \\
rg(v \circ  u) = rg(u)
\end{cases}
$$
et 
$$\begin{rcases}
u \text{ surjective} \\
v \text{ de rang fini} 
\end{rcases} \Rightarrow \begin{cases}
v \circ u \text{ est de rang fini} \\
rg(v \circ  u) = rg(v)
\end{cases}$$

#### Corollaire
Composer par un isomorphisme a la source ou au but ne change ni a la finitude du rang ni sa valeur éventuelle. 

# II. Endomorphismes
## 1. Définition
#### Définition
Soit $E$ un $\mathbb{K}$-ev
Un endomorphisme de $E$ est un élément de $\mathcal{L}(E, E)$. 

#### Notation :
On le note $\mathcal{L}(E) := \mathcal{L}(E, E)$

#### Exemple
$0=0_{\mathcal{L}(E)} : x \mapsto 0$
$Id(E) : x \mapsto x$
$\lambda Id_{E} ; \lambda \in \mathbb{K}$

Dans les exemples précédents, 
$d \in \mathcal{L}(\mathbb{K}[X])$
$u \in \mathcal{L}(\mathbb{R}^{3})$
Sont des endomorphismes
Mais, 
$f \in \mathcal{L}(\mathbb{R}^{2}, \mathbb{R}^{3})$
n'en est pas un

Il est évident que $\circ$ est une LCI sur $\mathcal{L}(E)$
(rappel : une composé d'application linéaire est linéaire)

#### Proposition
$$(\mathcal{L}(E), +, \circ) \text{ est un anneau}$$
pour $E$ un $\mathbb{K}$-ev non réduit à $\{ 0 \}$

Démonstration : 
Comme $(\mathcal{L}(E), +, \cdot)$ est un ev, en particulier $(\mathcal{L}(E), +)$ est un groupe abélien. 

De plus $\circ$ est une LCI, associative et admet $Id_{E}$ comme neutre avec $Id_{E} \neq 0_{\mathcal{L}(E)}$
Puisque $E \neq \{ 0 \}$
Par bilinéarité de $\circ$, $\circ$ est distributive par rapport à $+$


#### Proposition
Si $E$ est de dimension finie $n \geq 2$, alors $\mathcal{L}(E)$ n'est pas commutatif. 

Démonstration : 
Soit $n \in \mathbb{N}^{*}$,
Soit $(e_{i})_{i = 1}^{n}$ une base de $E$
Pour $x \in E$, $x$ s'écrit de manière unique : 
$$x = \sum_{i = 1}^{n} \lambda_{i}e_{i}$$
avec $(\lambda_{i})_{i =1}^{n} \in \mathbb{K}^{n}$

On pose : 
$$u(x) = \lambda_{1}e_{1} \text{ et } v(x) = \lambda_{2}e_{1}$$
ce qui définit : $u, v : E \to E$, 
Montrons qu'elles sont linéaires : 
Soient $x, y \in E$ et $\alpha \in \mathbb{K}$, 
On note $(\lambda_{i})_{i =1}^{n}$ et $(\mu_{i})_{i = 1}^{n}$ les coordonnées de $x$ et $y$ dan la base $e$
On a alors, 
$$\alpha x+ y = \alpha\left( \sum_{i = 1}^{n}\lambda_{i}x_{i} \right) + \sum_{i = 1}^{n}\mu_{i}e_{i}= \sum_{i = 1}^{n}(\alpha \lambda_{i} + \mu_{i})x_{i}$$
dans les coordonnées de $\alpha x+y$ sont : les $\alpha \lambda_{i} + \mu_{i}, i \in [\![1, n]\!]$
et 
$$\begin{array}{cl}
u(\alpha x + y) &= (\alpha \lambda_{1}+\mu_{1})e_{1} \\
&= \alpha(\lambda_{1}e_{1}) + \mu_{1}e_{1} \\
&= \alpha u(x) + u(y)
\end{array}$$
et de même $v(\alpha x + y) = \alpha v(x) + v(y)$

Ainsi, $u, v \in \mathcal{L}(E)$. 
et 
$$(u \circ  v)(e_{2}) = u(v(e_{2})) = u(e_{1}) = e_{1}$$
et 
$$(v \circ  u)(e_{2}) = v(u(e_{2})) = v(0) = 0 \neq (u \circ  v)(e_{2})$$
Ainsi, 
$$u \circ  v \neq v \circ  u$$



 
#### Rappel
$\mathcal{M}_{2}(\mathbb{R})$ est non commutatif
$$\begin{pmatrix}
1&0 \\
0&0
\end{pmatrix}\begin{pmatrix}
0&1 \\
0&0
\end{pmatrix} = \begin{pmatrix}
0&1 \\
0&0
\end{pmatrix}$$
$$\begin{pmatrix}
0&1 \\
0&0
\end{pmatrix}\begin{pmatrix}
1&0 \\
0&0
\end{pmatrix} = \begin{pmatrix}
0&0 \\
0&0
\end{pmatrix}$$


## 2. Projections de symétries
#### Voir le DM

## 3. Groupe linéaire
#### Définition
Les automorphismes sont les inversibles de l'anneau $\mathcal{L}(E)$. 
ie les éléments de $\mathcal{L}(E)^{\times}$
ie les $u \in \mathcal{L}(E)$ tel qu'il existe un $v \in \mathcal{L}(E)$ vérifiant
$$u \circ v = v\circ u = Id_{E}$$
On sait déjà que $(\mathcal{L}(E)^{\times}, \circ)$ est un groupe

#### Remarque
C'est un sous groupe de $S(E) = Bij(E, E)$

#### Définition
Le groupe des inversibles de $\mathcal{L}(E)$ est appelé groupe linéaire de $E$ est noté : 
$$GL(E) = \mathcal{L}(E)^{\times}$$


#### Propriété
Pour $u \in \mathcal{L}(E)$,
$$u \in GL(E) \Leftrightarrow u \text{ est bijectif}$$

Démonstration
$\Rightarrow$ : Car si $u$ est inversible alors $u^{-1}$ est aussi son application réciproque donc $u$ est bijectif. 

$\Leftarrow$ : Soit $u \in \mathcal{L}(E)$ bijectif
On a déjà vu que son application réciproque est automatiquement linéaire et c'est un élément de $\mathcal{L}(E)$, puis son inverse.

#### Remarque
Voir le DM : Une symétrie vectorielle de $E$ est un automorphisme. 

#### Exemple
Pour $\lambda \in \mathbb{K}$ et $E$ un $\mathbb{K}$ ev, 
$$\lambda Id_{E} \in GL(E) \Leftrightarrow \lambda \neq 0$$

(et si $\lambda \neq 0$, $(\lambda Id_{E})^{-1} = (\lambda^{-1}Id_{E}$))

$$\begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{3} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto \begin{pmatrix}
x+2y+3z \\
4x+5y+6z \\
7x+8y+9z
\end{pmatrix}
\end{cases} \not\in GL(\mathbb{R}^{3})$$
N'est pas injectif car son noyau $\neq \{ 0 \}$

Mais, 
$$\begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{3} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto \begin{pmatrix}
x+2y+3z \\
4x+5y+6z \\
7x+8y+10z
\end{pmatrix}
\end{cases} \in GL(\mathbb{R}^{3})$$

(en exo : Calculer son noyau, trouver $\{ 0 \}$ puis calculer son image et trouver $\mathbb{R}^{3}$ on voit que grace au théorème de rang un de ces deux faits suffit) 

$$
t_{n} : \begin{cases}
\mathcal{M}_{n}(\mathbb{K}) \to \mathcal{M}_{n}(\mathbb{K}) \\
A \mapsto A^{T}
\end{cases}
$$
(On a vu que $t_{n}$ est linéaire et $t^{2}_{n} = t_{n} \circ t_{n} = Id_{\mathcal{M}_{n}(\mathbb{K})}$)
Donc, $t_{n}$ est bijective,
Ainsi,  $t_{n} \in GL(\mathcal{M}_{n}(\mathbb{K}))$


$$
d : \begin{cases}
\mathbb{K}[X] \to \mathbb{K}[X] \\
P \mapsto P'
\end{cases}
$$
(Elle est surjective mais non injective) alors $d \not\in GL(\mathbb{K}[X])$


# III. Détermination d'une application linéaire
#### Proposition
Soit $E, F$ deux $\mathbb{K}$ ev,
et $e = (e_{i})_{i \in I}$ une base de $E$
et $f = (f_{i})_{i \in I}$ une famille d'éléments de $F$
$$\exists!u \in \mathcal{L}(E, F), \forall i \in I, u(e_{i}) = f_{i}$$

De plus on a les équivalences : 
$$u \text{ injective} \Leftrightarrow f \text{ est libre}$$
$$u \text{ surjective} \Leftrightarrow Vect(f) = F$$
$$u \text{ bijective} \Leftrightarrow f \text{ est une base de } F$$


Démonstration : 
- Analyse
Existence et unicité de $u$ par Analyse-Synthèse
Soit $u \in \mathcal{L}(E, F)$ telle que $u(e) = f$,
Soit $x \in E$, 
Il s'écrit dans la base $e$ : 
$$x = \sum_{i \in I}\lambda_{i}e_{i}$$
Avec $(\lambda i)_{i \in I} \in \mathbb{K}^{(I)}$, 
de manière unique. 
On a alors, par linéarité de $u$, 
$$u(x) = \sum_{i \in I}\lambda_{i}f_{i}$$
- Synthèse
Pour $x \in E$, en notant $(\lambda_{i})_{i \in I}$ ses coordonnées dans la base $e$, on pose
$$u(x) = \sum_{i \in I} \lambda_{i}f_{i}$$
Ce qui définit une application de $E$ vers $F$
- Montrons qu'elle est linéaire : 
Soient $x, y \in E$ et $\alpha \in \mathbb{K}$, 
On note $(\lambda_{i})_{i \in I}$ et $(\mu_{i})_{i \in I}$ leurs coordonnées dans $e$
Puis on calcule
$$\alpha x + y = \alpha \sum_{ i \in I} \lambda_{i}e_{i} + \sum_{i \in I} \mu_{i}e_{i}$$
(ce sont des sommes finies donc on peit utiliser la linéarité de $\sum$)
$$= \sum_{i \in I}(\alpha \lambda_{i} + \mu_{i})e_{i}$$
avec $(\alpha \lambda_{i} + \mu_{i})_{i \in I} \in \mathbb{K}^{(I)}$
$(\mathbb{K}^{(I)} \underset{\text{sev}}{\subset} \mathbb{K}^{I})$
Ainsi par définition de $u$, 
$$u(\alpha x + y) = \sum_{i \in I}(\alpha \lambda_{i} + \mu_{i})f_{i}$$
Somme finie $\uparrow$
$$= \alpha\sum_{i \in I} \lambda_{i}f_{i} + \sum_{i \in I} \mu_{i}f_{i} = \alpha u(x) + \lambda u(y)$$
Ainsi $u \in \mathcal{L}(E, F)$
- Montrons que $u(e) = f$ : 
Pour $j \in I$, la famille des coordonnées des $e_{j}$ dans $e$ sont : 
$(\delta_{i, j})_{i \in I}$ (car $\sum_{i \in I}\delta_{i, j}e_{i} = e_{j}$)
Donc,
$$u(e_{j}) = \sum_{i \in I} \delta_{i, j}f_{i} = f_{j}$$
Ainsi, $u(e) = f$ et $u$ convient
$$\square$$

De plus on a déjà vu que
$$u \text{ injective} \Rightarrow u(x) \text{ est libre}$$
$$u \text{ surjective} \Rightarrow u(x) \text{ est génératrice}$$
Donc, ici on a ces deux prop car une base est a la fois libre et génératrice. 


<u>Montrons les réciproques : </u>
Supposons que $f$ est libre
Soit $x \in E$ tel que $u(x)= 0$
Avec les notations précédentes, 
$$\sum_{i \in I} \lambda_{i}f_{i} = 0$$
Comme $f$ est libre, $(\forall_{i \in I}, \lambda_{i} = 0)$
$$x = \sum_{i \in I}\lambda_{i}e_{i}=0$$
Ainsi,
$\text{Ker }u = \{ 0 \}$, donc $u$ est injective
$$\square$$

Supposons que $f$ soit génératrice
Soit $z \in F$, il s'écrit : 
$$z = \sum_{i \in I}\lambda_{i}f_{i}$$
avec $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$
Comme $u(x) = f$, 
$$z = \sum_{i \in I}\lambda_{i}u(e_{i}) = u\left( \sum_{i \in I}\lambda_{i}e_{i} \right) \in \mathrm{Im}(u)$$
Ainsi, 
$F \subset \mathrm{Im}(u)$ donc, $F = \mathrm{Im}(u)$
ie $u$ est surjective
$$\square$$

#### Résumé
Une application linéaire est uniquement déterminée par l'image d'une base. 

#### Exemple
Il existe une unique application linéaire $u$ de $\mathbb{R}^{3} \to \mathbb{R}^{2}$ telle que : 
$$u\left(\begin{pmatrix}
1 \\
0 \\
0
\end{pmatrix}\right) = \begin{pmatrix}
4 \\
2
\end{pmatrix}, u\left(  \begin{pmatrix}
0 \\
1 \\
0
\end{pmatrix} \right) = \begin{pmatrix}
2 \\
4
\end{pmatrix}, u\left( \begin{pmatrix}
0 \\
0 \\
1
\end{pmatrix} \right) = \begin{pmatrix}
0 \\
0
\end{pmatrix}$$
Alors, 
$$u\left( \begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \right) = u  \begin{pmatrix}
x\begin{pmatrix}
1 \\
0 \\
0 
\end{pmatrix} + y \begin{pmatrix}
0 \\
1 \\
0
\end{pmatrix} + z\begin{pmatrix}
0 \\
0 \\
1
\end{pmatrix}
\end{pmatrix} $$
$$ = xu\begin{pmatrix}
1 \\
0 \\
0
\end{pmatrix}+ yu\begin{pmatrix}
0 \\
1 \\
0
\end{pmatrix}+ zu\begin{pmatrix}
0 \\
0 \\
1
\end{pmatrix} = \begin{pmatrix}
4x + 2y \\
2x + 4y
\end{pmatrix}$$
Remarque : 
$$\begin{pmatrix}
4&2&0 \\
2&4&0
\end{pmatrix}\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} = \begin{pmatrix}
4x+2y \\
2x+4y
\end{pmatrix}$$


#### Corollaire
Deux espaces de dimension finie sont isomorphes ssi ils ont la même dimension
(en dimension finie, la dimension est un invariant complet d'isomorphisme)

Démonstration : 
Soient $E, F$ de même dimension finie $n$, 
Alors il existe des bases : 
$$\begin{cases}
(e_{i})_{i = 1}^{n} \text{ de E} \\
(f_{i})_{i = 1}^{n} \text{ de F}
\end{cases}$$
Soit $u \in \mathcal{L}(E, F)$ l'unique application linéaire de $E$ vers $F$ tq $u(e) = f$
Comme $f$ est une base de $F$, $u$ est bijective (et linéaire) donc un isomorphisme. 
Ainsi, $E$ et $F$ sont isomorphes. 

Soient $E, F$ de dimension finie
Si $E$ est isomorphe a $F$
ie il existe un isomorphisme $u$ de $E$ vers $F$, alors l'image d'un base de $E$ est l'image d'une base de $F$, comme $E$ est de dimension finie $n$, la base départ et aussi celle d'arrivée sont de même cardinal
Donc, 
$$\dim F = n = \dim E$$


#### Exemple
$$\mathbb{K}_{35}[X] \approx \mathbb{R}^{36} \approx \mathcal{L}(\mathbb{R}^{6}, \mathbb{R}^{6}) \approx \mathcal{M}_{6, 6}(\mathbb{R}) \approx \mathcal{L}(\mathbb{R}_{5}[X], \mathcal{M}_{2, 3}(\mathbb{R}))$$
maâloul


#### Théorème (Second miracle de la dimension finie)
Soit $E$ et $F$ des $\mathbb{K}$ ev de <u>même</u> dimension <u>finie</u> 
Soit $u \in \mathcal{L}(E, F)$
Alors, 
$$u \text{ injective} \Leftrightarrow u \text{ surjective} \Leftrightarrow u \text{ bijective}$$

Démonstration : 
Soit $u$ injective, 
Soit $e$ une base de $E$
Comme $e$ est libre et $u$ est linéairement injective : 
$u(e)$ est libre, et comme elle a $n$ vecteurs et $\dim F = n$, $u(e)$ est une base de $F$, donc par le théorème précédent : 
$$u \text{ est bijective}$$

Soit $u$ surjective
Pour $e$ une base de $E$, 
Comme $e$ engendre $E$, et $u$ est linéaire surjective alors $u(e)$ a pour cardinal la dimension de $F$, $u(e)$ est une base, donc comme avant : 
$$u \text{ est bijective}$$


Supposons $u$ bijective : 
Trivial $\square$


#### Exemple

$$u : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{3} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto \begin{pmatrix}
x + 2y+3z \\
4x+5y+6z \\
7x + 8 y + 10z
\end{pmatrix}
\end{cases}$$
Il suffit de montrer que $u$ est linéaire injectif pour montrer que c'est un isomorphisme


#### Théorème
Soit $E$ un ev de dimension finie et $u \in \mathcal{L}(E)$, 
Si $u$ est inversible à gauche (resp. a droite) alors $u \in GL(E)$, 
et son inverse est alors son inverse à gauche (resp. a droite)
(ie : pour un endomorphisme $u$ est de dim finie
$u$ inversible a gauche $\Leftrightarrow$ $u$ est inversible $\Leftrightarrow$ $u$ est inversible a droite)

#### Remarque
ATTENTION : Ce résultat est faux en en dimension infinie

#### Exemple
En trouver un : 
$$\begin{cases}
\mathbb{K}[X] \to \mathbb{K}[X] \\
P \mapsto P'
\end{cases}$$


#### Rappel
Soit $A$ un anneau et $x \in A$, 
$$
x \text{ est inversible a gauche } \Leftrightarrow \exists y \in A, yx = 1_{A}
$$
$$x \text{ est inversible a droite} \Leftrightarrow \exists y \in A, xy = 1_{A}$$
$$x \text{ est inversible} \Leftrightarrow \exists y \in A, xy = yx = 1_{A}$$

Si $x$ est inversible, son inverse est unique et on le note : $x^{-1}$
$x^{-1}$ est inverse a gauche de $x$ et $x^{-1}$ est inverse a droite (ils sont uniques)

Si $x$ n'est pas inversible il peut y avoir pas ou un ou plusieurs inverses a gauche (rep. a droite)


#### Exercice
Le nombre d'inverse a gauche est soit $0$ soit $1$ soit $\infty$

#### Théorème
Soit $E, F$ deux $\mathbb{K}$ ev de dim finies $n$ et $p$
Alors $\mathcal{L}(E, F)$ est de dimension finie et
$$\dim(\mathcal{L}(E, F)) = np$$

Démonstration :
Soit $e = (e_{j})_{j = 1}^{n}$ une base de $E$,
Soit $f = (f_{i})_{i =1}^{n}$ une base de $F$,

Pour $(i_{0}, j_{0}) \in [\![1, n]\!] \times [\![1, p]\!]$, 
On définit $u_{i_{0}, j_{0}}$ comme l'unique élément de $\mathcal{L}(E, F)$ tq $u_{i_{0}, j_{0}}(e_{j_{0}}) = f_{i_{0}}$
$$\forall j \in [\![1, p]\!] \setminus \{ j_{0} \}, u_{i_{0}, j}(e_{j}) = 0$$

Montrons que $(u_{i, j})_{\underset{1 \leq j \leq p}{1 \leq i \leq n}}$ est une base de $\mathcal{L}(E, F)$
Soit $u \in \mathcal{L}(E, F)$, 
Pour tout $j \in [\![1, p]\!]$, 
On note $(a_{i, j})_{i = 1}^{n}$ les coordonnées de $u(e_{j})$ dans la base $f$
Alors, pour $x \in E$, $x$ s'écrit : 
$$x = \sum_{j=1}^{p}x_{j}e_{j}$$
Donc, 
$$u(x) = \sum_{j= 1}^{p}x_{j}u_{e_{j}} = \sum_{j = 1}^{p}x_{j} \sum_{i = 1}^{n} a_{i,j}f_{i}$$
$$= \sum_{\underset{1 \leq j \leq p}{1 \leq i \leq n}} a_{i, j}u_{i, j}(?)$$
Ainsi, 
$$u = \sum_{i, j}a_{i, j}u_{i, j}\left( \sum_{j' = 1}^{n}x_{j'}e_{j'} \right)$$
Montrons que $(u_{i, j})_{\underset{1\leq j \leq p}{1\leq i \leq n}}$ est libre, 
Soit $(\lambda_{i, j})_{i, j} \in \mathbb{K}^{[\![1,n]\!] \times [\![1, p]\!]}$
telle que 
$$\sum_{i, j} \lambda_{i,j} u_{i, j} = 0$$
Soit $j \in [\![1, n]\!]$, 
On a : 
$$0 = \sum_{i, j}\lambda_{i, j}u_{i, j}(e_{j_{0}}) = \sum_{i = 1}^{n}\lambda_{i, j}f_{i}$$
Comme $f$ est une base : elle est libre. 
$$\forall i \in [\![1, n]\!], \lambda_{i, j_{0}} = 0$$
Comme cela est valable pour tout $j_{0} \in [\![1,n ]\!] \times [\![1, p]\!], \lambda_{i, j} = 0$
Ainsi, $(u_{i, j})_{\underset{1\leq j\leq p}{1\leq i\leq n}}$ est libre. 
On avait vu qu'elle était génératrice, donc c'est une base de $\mathcal{L}(E, F)$.
$$\dim(\mathcal{L}(E, F)) = np$$


#### Théorème
Soit un ev $E$ décomposé en somme directe : $E = \underset{i = 1}{\overset{p}{\oplus}} E_{i}$, 
$F$ un autre ev, et pout tout $i \in [\![1, p]\!]$, $u_{i} \in \mathcal{L}(E_{i}, F)$,
Alors il existe une unique 
$$u \in \mathcal{L}(E, F) \text{ tq } \forall i \in [\![1, p]\!], u|_{E_{i}} = u_{i}$$

#### Remarque
Si les $E_{i}$ sont des droites c'est une reformulation du théorème de détermination d'une application linéaire par image d'une base.

# IV. Théorème du rang

#### Théorème
Soit $E, F$ deux $\mathbb{K}$-ev quelconques,
Soit $u \in \mathcal{L}(E, F)$, et $S$ un supplémentaire de $\text{Ker }u$ dans $E$
Alors il existe un isomorphisme de $S$ vers $\mathrm{Im}(u)$ : 
$$\tilde{u} : \begin{cases}
S \to \mathrm{Im}(u) \\
x \mapsto u(x)
\end{cases}$$

Démonstration : 
Comme $S \subset E, u(S) \subset u(E) = \mathrm{Im}(u)$
Donc l'application induite par $u$ de $S$ vers $\mathrm{Im}(u)$ est bien définie
$$\tilde{u} : \begin{cases}
S \to \mathrm{Im}(u) \\
x \mapsto u(x)
\end{cases}$$
Comme $u$ est linéaire, $\tilde{u}$ l'est aussi ie $\tilde{u} \in \mathcal{L}(S, \mathrm{Im}(u))$

<u>Montrons qu'elle est injective : </u>
Soit $x \in \text{Ker } \tilde{u}$, 
Comme $u(x) = \tilde{u}(x) = 0$,
$x \in \text{Ker }u$ et comme $\text{Ker }\tilde{u} \subset S$, $x \in S$.
Ainsi, $x \in \text{Ker }u \cap S$ or $\text{Ker }u$ et $S$ sont supplémentaires donc, $x = 0$


Ainsi $\text{Ker }\tilde{u} = \{ 0 \}$ donc $\tilde{u}$ est injectif

<u>Montrons qu'elle est surjective : </u>
Soit $y \in \mathrm{Im}(u)$, 
Par définition de $\mathrm{Im}(u)$, il existe $x \in E$ tel que $u(x) = y$, 
Comme $\text{Ker }u \oplus S = E$, 
$x$ s'écrit : $x = z+t$
avec $z \in \text{Ker }u$ et $t \in S$ 
Pa linéarité
$$u(t) = u(x-z) = u(x)-u(z) = y$$
Comme $t \in S$, $\tilde{u}(t) = u(t) = y$
Ainsi $\tilde{u}$ est surjective

#### Corollaire : Théorème (ou formule) du rang
Soit $E$ un ev de dimension finie et $F$ un ev quelconque.
Soit $u \in \mathcal{L}(E, F)$, 
Alors $u$ est de rang fini et $\dim(E)  = \dim\text{Ker }u + \text{rg }u$

Démonstration : 
Comme $E$ est de dim finie, il existe au moins un supplémentaire : $S$ de $\text{Ker }u$.
Par le théorème précédent il existe un isomorphisme de $S$ vers $\mathrm{Im}(u)$.
Or, $S \subset E$ et $E$ est de dimension finie donc, $S$ est de dim finie
Par contraposition, $\mathrm{Im}(u)$ est de dimension finie, donc $u$ est de rang fini égale a celle de $S$ : $rg(u) = \dim S$
Or $E = S \oplus \text{Ker }u$, 
Comme $E$ est de dimension finie, 
$$\dim E = \dim\text{Ker }u + \dim S = \dim \text{Ker }u + \text{rg }u$$


#### Remarque
##### Attention
Pour $u \in \mathcal{L}(E)$, $\text{Ker }u$ et $\mathrm{Im}(u)$ sont deux sev de $E$ et si ils sont de dim finie : 
$$\text{Ker }u + \dim\mathrm{Im}(u) = E$$
Mais en général $\text{Ker }u$ et $\mathrm{Im}(u)$ ne sont pas supplémentaires
(Cependant cela arrive, par exemple : pour les projecteurs)
##### Attention
A force de travailler dans $\mathcal{L}(E)$, il arrive qu'on oublie de quel espace (depart ou arrivé) on prend la dimension dans la formule du rang. 
C'est l'espace de <b><u>départ</u></b>. 

#### Exemple
$$d_{n} : \begin{cases}
\mathbb{K}_{n}[X] \to \mathbb{K}[x] \\
P \mapsto P'
\end{cases}$$
Comme $\mathbb{K}_{n}[X]$ est de dim finie : 
$$\dim \mathbb{K}_{n}[X] = \dim\text{Ker }d_{n} + \dim \mathrm{Im}(d_{n})$$
ie : 
$$n+1 = 1 + \dim \mathrm{Im}(d_{n}) \Leftrightarrow \mathrm{Im}(d_{n}) \text{ est de dimension }n$$
#### Remarque
$$\mathrm{Im}(d_{n}) = \mathbb{K}_{n-1}[X]$$
Si on considère $\tilde{d_{n}} : \mathbb{K}_{n}[X] \to \mathbb{K}_{n}[X]$ induite par $d_{n}$, $\mathrm{Im}(\tilde{d_{n}}) = \mathrm{Im}(d_{n})$ et $\text{Ker }\tilde{d}_{n} = \text{Ker }d_{n}$

et on a : 
$$\begin{cases}
\tilde{d}_{n} \in \mathcal{L}(\mathbb{K}_{n}[X]) \\
\text{Ker }\tilde{d}_{n} \cap \mathrm{Im}(\tilde{d}_{n}) = \mathbb{K}_{0}[X]\neq \{ 0 \}
\end{cases}$$

#### Exemple 
$$u : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{2} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto \begin{pmatrix}
x+2y+3z \\
2x+4y+6z
\end{pmatrix}
\end{cases}$$
$\text{Ker }u$ est le plan d'équation : $x+2y+3z = 0$
Donc $\dim\mathrm{Im}(u) = \dim \mathbb{R}^{3} - \dim \text{Ker }u = 3-2 = 1$
En fait : $\mathrm{Im}(u) = Vect\begin{pmatrix}1\\2\end{pmatrix}$

# V. Formes linéaires
#### Définition
Une forme linéaire sur $E$ est un élément de $E^{*} = \mathcal{L}(E, \mathbb{K})$

#### Remarque
Cet espace s'appel le <u>dual</u> de $E$
mais la dualité est (ce mot est hors programme)

#### Exemple
Forme linéaire nulle : 
$$\begin{cases}
E \to \mathbb{K} \\
x \mapsto 0
\end{cases}$$
Application intégrale : 
Pour $a, b \in \mathbb{K}$,
$$\begin{cases}
\mathcal{C}^{0}([a, b]) \to \mathbb{K} \\
f \mapsto \int_{a}^{b} f 
\end{cases}$$
Application d'évaluation des polynômes :
$$\begin{cases}
\mathbb{K}[X] \to \mathbb{K} \\
P \mapsto P(a) (= \tilde{P}(a))
\end{cases}$$
W rizz
Pour $a, b, c \in \mathbb{R}$,
$$f : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto ax+by+cz
\end{cases}$$
Ce sont les éléments de $\mathcal{L}(\mathbb{R}^{3}, \mathbb{R})$, 
Pour : 
$$e_{1}^{*} : \begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto x, e_{2}^{*} :\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto y, e_{3}^{*} : \begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto z$$
Sont trois formes finies sur $\mathbb{K}$. 
On a alors : 
$$f = ae_{1}^{*} + b e_{2}^{*} + c e_{3}^{*}$$
ie $e^{*} = (e_{1}^{*}, e_{2}^{*}, e_{3}^{*})$ engendre $E^{*}$, 
Or
$$\begin{array}{cl}
\dim E^{*} &= \dim \mathcal{L}(\mathbb{R}^{3}, \mathbb{R}) \\
&= \dim \mathbb{R}^{3} \dim \mathbb{R} \\
&= 3 \times 1 \\
&= 3
\end{array}$$
Comme $3=3$, $e^{*}$ est une base de $E^{*}$

Cette construction es générale

#### Définition / Propriété
Soit $E$ un $\mathbb{K}$-ev quelconque et $e = (e_{i})_{i \in I}$ un base de $E$ : 
Pour $x \in E$, 
On note $(x_{i})_{i \in I} \in \mathbb{K}^{I}$ ses coordonnées dans la base $e$. 
$x$ s'écrit : $x = \sum_{i \in I} x_{i}e_{i}$
On définit : pour $i \in I$, l'application 
$$e_{i}^{*} : \begin{cases}
E \to \mathbb{K} \\
x \mapsto x_{i}
\end{cases}$$
La forme coordonnée d'indice $i$ relative a la base $e$ : 
On a : 
$$\forall i \in I, e_{i}^{*} \in E^{*}$$

Démonstration : Du fait que $e_{i}^{*}$ est linéaire déjà vue deux fois dans des preuves précédentes a refaire de même. 


#### Remarque
$e_{i}^{*}$ est l'unique forme linéaire qui envoie pour tout $j \in J$, $e_{j}$ sur $\delta_{j}$ sur $\delta_{j,i}$ : $\forall i, j \in I, e_{i}^{*}(e_{j}) = \delta_{i, j}$

#### Propriété
Pour $e = (e_{i})_{i \in I}$ une base d'un ev $E$,
la famille $e^{*} = (e_{i}^{*})_{i \in I}$ est libre

Démonstration : 
Avec les notations précédentes
On prend $(\lambda_{i})_{i \in I}$ telle que : 
$$\sum_{i \in I}\lambda_{i}e_{i}^{*} = 0$$
Soit $y \in I$, on a alors, 
$$0 = \left( \sum_{i \in I}\lambda_{i}e_{i}^{*} \right)(e_{j}) = \sum_{i \in I}\lambda_{i}e^{*}_{i}(e_{j}) = \sum_{i \in I}\lambda_{i}\delta_{i, j} = \lambda_{j}$$
Ainsi, $\forall j \in I, \lambda_{j} = 0$
Donc, $(e_{i}^{*})_{i \in I}$ est libre


#### Remarque
Attention elle n'est pas génératrice en dimension infinie

#### Corollaire
Si $E$ est de <u>dimension finie</u>, et $e = (e_{i})_{i = 1}^{n}$ est une base de $E$,
Alors, $e^{*} = (e_{i}^{*})_{i = 1}^{n}$ est une base de $E^{*}$, appelée base duale de $e$

Démonstration : 
$e^{*}$ est une famille libre de $n$ vecteurs en dimension finie $n$, donc une base de $E^{*}$ (car $\dim E^{*} = \dim \mathcal{L}(E, \mathbb{K}) = \dim E$)

### Reformulation
En notant $(x_{i})_{i =1}^{n}$ les coordonnés des $x \in E$ dans la base $e$, toute forme linéaire $f$ sur $E$ s'écrit : 
$$f : \begin{cases}
E \to \mathbb{K} \\
x \mapsto \sum_{i = 1}^{n} a_{i}x_{i}
\end{cases}$$
avec $(a_{i})_{i = 1}^{n} \in \mathbb{K}^{n}$

#### Cas particuliers de $\mathbb{K}^{n}$
En prenant pour $e$ la base canonique, on voit que les formes linéaires sur $\mathbb{K}^{n}$ sont les application de la forme : 
$$\begin{cases}
\mathbb{K}^{n} \to \mathbb{K} \\
(x_{i})_{i = 1}^{n} \mapsto \sum_{i = 1}^{n} a_{i}x_{i}
\end{cases}$$
ou $(a_{i})_{i = 1}^{n}$ parcourt $\mathbb{K}^{n}$


#### Exemple
Dans $\mathbb{R}^{2}$, on pose : $e = ((1, 1), (1, -1)) (= (e_{1}', e_{2}'))$
Exprimer $e_{1}'^{*}$ et $e_{2}'^{*}$
Puis exprimer $f : (x, y)\mapsto 2x-y$
Dans la base $e'^{*}$

Soit $v = (x,y) \in \mathbb{R}^{2}$
On l'écrit comme CL de $e_{1}'$ et $e_{2}'$
$$v = (x, y) = \frac{x+y}{2}(1, 1) + \frac{x-y}{2}(1, -1)$$

#### Exemple
Les formes linéaires de $\mathbb{R}^{2}$
Sont les $(x, y) \mapsto ax+by$ avec ($a, b \in \mathbb{R}$) 
etc pour $\mathbb{R}^{n}$

# VI. Hyperplan
#### Définition
Soit $E$ un ev quelconque
Un hyperplan de $E$ est un noyau d'une forme linéaire non nulle sur $E$
ie 
$H= \text{Ker }f$ avec $f \in E^{*} \setminus \{ 0 \}$ 

#### Exemple
- Dans $\mathbb{R}_{2}$,
$f$ s'écrit $(x, y) \mapsto ax + by$
avec $(a, b) \neq (0, 0)$
Donc $H = \{ (x, y) \in \mathbb{R}^{2} | ax+by = 0 \}$
est une droite vectorielle de $\mathbb{R}^{2}$

- Dans $\mathbb{R}^{3}$
$f$ s'écrit : $(x, y, z) \mapsto ax+by+cz$
avec $(a, b, c) \neq (0, 0, 0)$
Donc, $H = \{ (x, y, z) \in \mathbb{R}^{3} | ax+by+cz =0 \}$
est un plan vectoriel de $\mathbb{R}^{3}$
On remarque que la dim de $H$ est celle de $E$ moins sur ces exemples en dimension finie

- $\left\{  f \in \mathcal{C}^{0}([a, b]) | \int _{a}^{b} f   \right\}$ est un hyperplan de $\mathcal{C}^{0}([a, b])$
- $\{ P \in \mathbb{K}[X] | P(42) = 0 \}$ est un hyperplan de $\mathbb{K}[X]$

#### Définition
Soit $E$ de dimension finie muni d'une base : $e = (e_{i})_{i = 1}^{n}$
Un hyperplan est défini par une équation de la forme : 
$$\sum_{i = 1}^{n}a_{i}x_{i} =0$$
avec les $a_{i}$ non tous nuls, 
En notant $(x_{i})_{i = 1}^{n}$ les coordonnées d'un vecteur $x \in E$
C'est une équation de $H$ relative a la base $e$

#### Remarque
Une telle équation dans la base $e$ n'est pas unique (mais elle l'est a proportionnalité près (a démontrer en exo))

#### Remarque
Ces équations sont linéaires et homogènes

#### Rappel
Interprétation dans $E^{*}$ : 
$H = \text{Ker }f$ et $f = \sum_{i = 1}^{n}a_{i}e^{*}_{i}$

#### Remarque (Hors programme)
Cela s'écrit $\forall i \in I, a_{i} = e_{i}^{**}(f)$
$$(e_{i}^{**})_{i \in I} = (e^{*}_{i})_{i \in I}^{*}$$
c'est une base biduale de $E^{**}$


#### Proposition
Soit $E$ un ev quelconque, 
$H$ un hyperplan de $E$
$D$ une droite de $E$ non incluse dans $H$.
Alors $E = H \oplus D$,

Démonstration : 
Soit $v \in D \setminus H$, 
Comme $0 \in H$, $v \neq 0$, 
Donc, $D = Vect(v)$, 
Soit $x \in D \cap H$, Comme $x \in D$, 
il s'écrit : $x= \lambda v$ avec $\lambda \in \mathbb{K}$

Montrons par l'absurde que $\lambda = 0$ : 
- Si $\lambda \neq 0$ : 
$v = \frac{1}{\lambda }x \in H$ car $H \underset{\text{sev}}{\subset} E$ CONTRADICTION
Donc $\lambda = 0$ donc $x = 0$
On a donc $D \cap H = \{ 0 \}$

Soit $f \in E^{*}$ tq $H = \text{Ker }f$
Soit $x \in E$, 
Montrons que $x \in D+H$, 
Comme $v \not\in H$ on a $f(v) \neq 0$
$$f(x) = \frac{f(v)}{f(v)}f(x) = \frac{f(x)}{f(v)}f(v) = f\left( \frac{f(x)}{f(v)}v \right)$$

On pose : 
$$\begin{cases}
d = \frac{f(x)}{f(v)} \in D \\
h = x- \frac{f(x)}{f(v)}v
\end{cases}$$
Et on a : 
$$f(h) = f(x) - f\left( \frac{f(x)}{f(v)v} \right) = f(x)-f(x) = 0$$
Donc, $h \in H$, 
et $x = d+h \in D+H$ 

<u>Autre preuve</u> :  faire une analyse synthèse. (en exo)




#### Corollaire
Tout supplémentaire d'un hyperplan est une droite

Démonstration : 
Soit $H$ un hyperplan d'un ev $E$, 
Soit $F$ un supplémentaire de $H$, 
On note $f \in E^{*} \setminus \{ 0 \}$ tq $\text{Ker }f = H$, 
Comme $f\neq 0$, $H \neq E$, 
Donc, $F \neq \{ 0 \}$
donc on peut prendre  $v\in F \setminus \{ 0 \}$, 
On note $D = Vect(v)$
Comme $v \in F \setminus \{ 0 \}$, et $F$ et $H$ sont en somme directe $v \not\in H$ donc, $D$ est une droite vectorielle non nulle dans $F$, par la prop précédente $D \oplus H = E$

Montrons que $F \subset D$, ce qui termine la preuve
Soit $x \in F$, 
Comme $E = F \oplus H$, $x$ s'écrit $x = x_{F} + x_{H}$ de manière unique
Or, $x = x + 0$ avec $x \in F$ et $0 \in H$
Donc, $x_{F} = x$
Comme, $E = D \oplus H$,- Si
$x$ s'écrit $x = x_{D} + \tilde{x}_{H}$ avec $x_{D} \in D$ et $\tilde{x}_{H} \in H$
Par ailleurs, $D \subset F$ donc $x_{D} \in F$
et $x = x_{D} + \tilde{x}_{H}$ avec $x_{D} \in F$ et $\tilde{x}_{H} \in H$
Donc, $x_{D} = x_{F} = x$
Ainsi $x \in D$. 


#### Proposition
Tout supplémentaire d'une droite est un hyperplan.

Démonstration : 
Soit $E$ un ev, $D$ une droite de $E$ et $S$ un supplémentaire de $D$ dans $E$, 
Soit $y$ un vecteur de $D$ : $(y)$ est une base de $D$, ce qui permet de définir la forme coordonnée $y^{*}$, 
Pour tout $x \in E$ s'écrit de manière unique :
$x = x_{D} + x_{S}$ avec $x_{D} \in D$ et $x_{S} \in S$
On admet que
$$p : \begin{cases}
E \to D \\
x \mapsto x_{D}
\end{cases}$$
est linéaire (voir le DM)
et on pose $F = y^{*} \circ p$, 
Montrons que $f$ convient ie $f$ est une forme linéaire non nulle ie
$$\begin{cases}
f \in E^{*}\setminus \{ 0 \} \\
\text{Ker }f = S
\end{cases}$$
Ce qui prouvera que $S$ est un hyperplan. 

1. Comme $p \in \mathcal{L}(E, D)$ et $y^{*} \in \mathcal{L}(D, \mathbb{K})$, Alors $f \in \mathcal{L}(E, \mathbb{K}) = E^{*}$ 
   $y = y_{D} + 0$, $y \in D$ et $0 \in S$, Donc, $y_{D} = y$ et $f(y) = y^{*}(y) = 1$ Donc, $0 \not\in E^{*}$
2. Soit $x \in \text{Ker }f$, on a $y^{*}(x_{D}) = 0$ ie $x_{D} = 0_{y}=0$ Donc, $x = x_{S} \in S$
3. Soit $x \in S$, on a alors $x = 0 + x$ avec $0 \in D$ et $x \in S$
   Donc par unicité de l'écriture de la somme directe , $x_{D} = 0$ donc $f(x) = y^{*}(x_{D}) = y^{*}(0)=0$ ie $x \in \text{Ker }f$

Ainsi, $S = \text{Ker }f$ avec $f \in E^{*} \setminus \{ 0 \}$ 
Donc, $S$ est un hyperplan de $E$. 

#### Corollaire
En dimension finie $n$, 
Les hyperplans sont les sev de dimension $n-1$

Démonstration : 
Soit $E$ un ev de dimension $n$, 
Soit $H$ un hyperplan de $E$, 
Alors, $H = \text{Ker }f$ avec $f \in \mathcal{L}(E, \mathbb{K}) \setminus \{ 0 \}$
Comme $f \neq 0$, $\mathrm{Im}(f) = \mathbb{K}$ (sev $\neq \{ 0 \}$ de $\mathbb{K}$)
Donc, $rg(f) = 1$, par la formule du rang

Soit $F \underset{\text{sev}}{\subset} E$ de dim $n -1$
Comme $E$ est de dimension finie, on peut prendre un supplémentaire $S$ de $F$ et $\dim S + \dim F = \dim E$
Donc, $\dim S = n - (n-1) = 1$, 
Par la proposition $F$ est un hyperplan. 

#### Exemple
On retrouve des cas déjà évoqués : 
les hyperplans de $\mathbb{R}^{2}$ sont les droites, les hyperplans de $\mathbb{R}^{3}$ sont les plan, les hyperplans de $\mathbb{R}^{4}$ sont les sev de dimension $3$ 

Aussi l'ensemble des polynômes dans terme constant est un hyperplan de $\mathbb{K}[X]$
un supplémentaire est $\mathbb{K}_{0}[X]$ (ie $\mathbb{K}= Vect(1)$)
un autre serait : $Vect(1+X)$

Idem avec "sans termes de degré $p$"
ie $\text{Ker }e_{p}^{*}$ en notant $(e_{n})_{n \in \mathbb{N}}$ la base canonique de $\mathbb{K}[X]$
un supplémentaire est : les polynômes de degré uniquement $p$ : $Vect(X^{p})$

$$\{ u \in \mathbb{R}^{\mathbb{N}} | u_{2}+3u_{7}+u_{10^{10}}=0 \}$$
est un hyperplan de $\mathbb{R}^{\mathbb{N}}$ car c'est : 
$\text{Ker}(u \mapsto u_{2} + 3 u_{7}+u_{10^{10}})\in(\mathbb{R}^{\mathbb{N}})^{*} \setminus \{ 0 \}$
Un supplémentaire est : $Vect((42)_{n \in \mathbb{N}})$

$$\left\{  f \in \mathcal{C}^{0}_{\mathbb{K}}([a,b]) \left| \int _{a}^{b} f = 0 \right. \right\}$$
est un hyperplan de $\mathcal{C}^{0}_{\mathbb{K}}([a, b])$
Un supplémentaire est : $Vect(1)$ (c'est les fonctions constantes sur $[a, b]$)


#### Propriété
En dimension finie, 
Deux équations dans un même hyperplan dans une base donnée sont proportionnelles (avec un coef de proportionnalité non nul)

Démonstration : 
Une équation de $H$ correspond exactement a l'écriture dans la base de $E$ fixée d'une forme linéaire de noyau $H$.
Comme les dormes linéaires sont proportionnelles par le théorème, les équations le sont aussi. (avec le coef de proportionnalité $\neq 0$)

###### Remarque
C'est conséquence du résultat plus général :

#### Théorème
Soit $H$ un hyperplan de $E$ quelconque, 
et $f, g \in E^{*} \setminus \{ 0 \}$ tel que : 
$H = \text{Ker }f = \text{Ker }g$
Alors il existe $\lambda \in \mathbb{K}^{*}$ tq $f = \lambda y$

Démonstration théorème :
Soit $v \in E \setminus H$ ($H \subsetneq E$) et $D = Vect(v)$, 
On sait que (résultat précédent)
$E = D \oplus H$
Sot $\lambda = \frac{f(v)}{g(v)}$
Soit $x \in E$, Il s'écrit $x = \alpha V + x_{H}$
avec $\alpha \in \mathbb{K}$ et $\alpha v \in D$ puis $x_{H} \in H$
et
$$\begin{array}{cl}
f(x) &= \alpha f(v) + f(x_{h}) \\
&= \lambda \alpha g(v) \\
&= \lambda(\alpha g(v) + g(x_{H})) \\
&= \lambda g(\alpha v + x_{H}) \\
&= \lambda g(x)
\end{array}$$
Ainsi, $f = \lambda g$. 


##### Lemme : 
Soit $E$ de dimension finie, $F \underset{\text{sev}}{\subset} E$ et $H$ un hyperplan de $E$
On a une alternative : 
- $F \subset H$ et $F \cap H = F$ 
- $F \nsubseteq H$ et $\dim(F \cap H) = \dim(F)-1$

Démonstration : 
Par disjonction de cas :
- Soit $F \subset H$ et $F \cap H = F$
- Soit $F \nsubseteq H$ 
On pose $f \in E^{*} \setminus \{ 0 \}$ tq $\text{Ker }f = H$
et on pose $g = f|_{F} \in F^{*}$ 
Comme $F \nsubseteq H$, $g \neq 0$ 
Donc, $\text{Ker }g$ est un hyperplan de $F$
Or, 
$$\begin{array}{cl}
\text{Ker }g &= \{ x \in F | g(x) = 0 \} \\
&= \{ x \in F | f(x) = 0 \} \\
&= \{ x \in F | x \in H \} \\
&= F \cap H
\end{array}$$

Comme $F$ est de dimension finie, 
$$\dim(F \cap H) = \dim \text{Ker }f = \dim F - 1$$



#### Théorème
Si $E$ est de dimension finie $n$, 
1. L'intersection de $m$ hyperplans de $E$ est de dimension au moins $n-m$
2. Tout sev de $E$ de $\dim$ $n-m$ peut s'écrire comme intersection de $m$ hyperplans

Démonstration du 1. : 
On utilise le lemme précédent et par récurrence rapide on a fini

Démonstration du 2. : 
Soit $F \underset{\text{sev}}{\subset} E$ de $\dim$ $n-m$,
Soit $(e_{m+1}, \dots, e_{n})$ une base de $F$
(existe car on est en dimension finie) 
qu'on complète (TBI car dim finie et $(e_{m+1}, \dots, e_{n})$ est libre) en une base : $(e_{1}, \dots, e_{m}, e_{m+1}, \dots, e_{n})$ 
En posant pour $i \in [\![1, m]\!]$, $H_{i} = \text{Ker }e_{i}^{*}$
On obtiens 
$$F = \bigcap_{i = 1}^{m}H_{i}$$

#### Application 
Une droite de $\mathbb{R}^{3}$ admet des représentations cartésiennes de la forme :
$$\begin{cases}
a_{1}x+b_{1}y+c_{1}z = 0 \\
a_{2}x+b_{2}y+c_{2}z = 0
\end{cases}$$
(Mais il y a beaucoup de choix possibles)

#### Remarque pratique (Rappel)
Si $F$ est l'intersection de $m$ hyperplan ces hyperplans sont en général donnés par des équations dans une base fixée ie $F$ est l'ensemble des solutions d'un système linéaire homogène de $m$ équations a $p$ inconnues
$$\begin{cases}
a_{1, 1}x_{1}+\dots+a_{1, n}x_{n} = 0 \\
\vdots \\
a_{1, n}x_{1} + \dots + a_{m, n}x_{n} = 0
\end{cases}$$

On applique la méthode du pivot  et a la fin de la décente on a une matrice de la forme échelonné réduite
Donc le système équivaut à un système à $r$ équations ou $r$ est le nombre de pivots et qui a $n-r$ inconnues secondaires donc, $\dim F = n-r$ avec $r\leq m$ ie $n-r\geq n-m$
C'est une autre preuve de 1.  qui fournit le nombre "minimal" d'équations pour représenter $F$
On dit qu'on a une représentation cartésienne de $F$

#### Exercice conceptuel
Comprendre que ces équations sont linéairement indépendantes en un sens (a préciser)


#### Exercice
Soit
$$u : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{4} \\
\begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \mapsto \begin{pmatrix}
2x+y-z \\
x-y-5z \\
y+3z \\
-x+2z
\end{pmatrix}
\end{cases}$$
Donner des représentations cartésiennes et des bases de $\text{Ker }u$ et $\mathrm{Im}(u)$

1. Pour $\text{Ker }u$ :
$$\begin{pmatrix}

\end{pmatrix}$$
A la fin de la décente on connais : 
$$\begin{cases}
\dim \text{Ker }u \\
\text{Une représentation cartésienne minimale de }\text{Ker }u
\end{cases}$$
à la fin de l'algorithme on connais une base de $\text{Ker }u$

2. Pour $\mathrm{Im}(u)$ : 
2 méthodes : 
- Pivot sur :
  
$$\left[ 
\begin{array}{ccc |c}
2 &1&-1&x' \\
1&-1&-5&y' \\
0&1&3&z' \\
-1&0&2&t'
\end{array}\right]$$
   A la fin de la décente on a par les conditions de compatibilité une représentation cartésienne de $\mathrm{Im}(u)$ pas forcément minimale. En appliquant le pivot a ce nouveau système, on peut trouver une représentation cartésienne minimale puis une base de $\mathrm{Im}(u)$

- Pivot par colonnes sur   $$\begin{pmatrix}
2&1&-1 \\
1&-1&-5 \\
0&1&3 \\
-1&0&2
\end{pmatrix}$$
  A la fin de la décente le vecteur non nuls forment une base de $\mathrm{Im}(u)$

#### Remarque
Il y a une méthode qui donne en même temps une base du noyau et une bases de l'image
$$\begin{pmatrix}
2&1&-1 \\
1&-1&-5 \\
0&1&3 \\
-1&0&2 \\ \hline
1&0&0 \\
0&1&0 \\
0&0&1
\end{pmatrix} \sim_{C} \begin{pmatrix}
2&0&0 \\
1&-3&-9 \\
0&2&6 \\
-1&1&3 \\ \hline
1&-1&1 \\
0&2&0 \\
0&0&2
\end{pmatrix} \sim_{C} \begin{pmatrix}
2&0&0 \\
1&-3&0 \\ 
0&2&0 \\
-1&1&0 \\ \hline
1&-1&4 \\
0&2&-6 \\
1&0&2
\end{pmatrix}$$
Miam quel bonheur : §?÷×÷×º÷ ̇º ̇×/º ̇÷º×N×º ̇×º ̇º ̇º ̇¿
Première eq par col :
$C_{2} \leftarrow 2C_{2} - C_{1}$
$C_{3} \leftarrow 2C_{3} + C_{1}$

Deusième eq par colone : 
$C_{3} \leftarrow C_{3} - 3 C_{2}$


Ainsi, 
$$\begin{pmatrix}
\begin{pmatrix}
2 \\
1 \\
0 \\
-1
\end{pmatrix},\begin{pmatrix}
0 \\
-3 \\
2 \\
1
\end{pmatrix}
\end{pmatrix} \text{ est une base de }\mathrm{Im}(u)$$
et
$$\begin{pmatrix}
2 \\
-3 \\
1
\end{pmatrix} \text{ est une base de }\text{Ker }u$$
(On prend le vecteur colonne en bas a droite de la matrice et on le divise par 2)





























$$\underset{i = }{\overset{ }{\oplus}}$$
$$[\![]\!]$$
$$\left[ 
\begin{array}{ccc |c}

\end{array}\right]$$