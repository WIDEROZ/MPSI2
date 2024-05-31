On se place dans un $\mathbb{R}$ espace vectoriel $E$. 

# Introduction
Pour faire de l'analyse sur $E$ et pour cela définir une notion de distance qu'on déduira d'une norme : 
Pour $x, y \in E$, 
$$d(x, y) = \left|\left| x-y\right| \right|$$
Les espaces vectoriels normés (evn) généraux seront vus l'an prochain. 
Pour faire de la géométrie, par exemple manipuler des angles, ou du moins la notion d'orthogonalité. 
On va munir $E$ d'un produit scalaire noté : 
$$<x, y> \text{(ou } (x | y)\text{)}$$

#### Questions
Soient $x, x', y, y' \in E$ et $\lambda \in \mathbb{R}$,
Si on a un tel produit scalaire : 
1. $\left| \left| x\right|\right| = ?$ 
2. $x \perp y \Leftrightarrow ?$
3. $\widehat{(x, y)} = ?$
4. Dans $\mathbb{R}^{2}, \mathbb{R}^{3}$, $<x, y> = ?$
5. Quelles sont les propriétés de $<\cdot, \cdot>$
6. Peut on retrouver le produit scalaire avec la norme? 
7. Quels axiomes pour un produit scalaire? 

Alors, 
1. $\left| \left| x\right|\right| = \sqrt{ <x, x> }$ et $\left| \left| x\right|\right|^{2}$ puis $\left| \left| x\right|\right|\geq 0$
2. $x \perp y \Leftrightarrow <x, y> = 0$
3. $\widehat{(x, y)}$ pour un angle non orienté $\alpha$ entre les vecteur $x$ et $y$
   $\cos(\alpha)= \frac{<x, y>}{\left| \left| x\right|\right|\space \left| \left| y\right|\right|}$ et donc, $\alpha = \arccos\left( \frac{<x, y>}{\left| \left| x\right|\right| \space \left| \left| y\right|\right|} \right)$ 
   C'est légèrement hors programme
4. Dans $\mathbb{R}^{2}$, $x = (x_{1}, x_{1})$ (de même pour $y$)
   $<x, y>_{can_{\mathbb{R}^{2}}} = x_{1}y_{1} + x_{2}y_{2}$
   Dans $\mathbb{R}^{3}$, 
   $<x, y>_{can_{\mathbb{R}^{3}}} = x_{1}y_{1}+x_{2}y_{2}+x_{3}y_{3}$
   Si on prend la base canonique de $\mathbb{R}^{2}$ ou $\mathbb{R}^{3}$ on a leur base canoniques qui sont orthonormées. 
   $\left|\left| x \right|\right|_{can_{\mathbb{R}^{2}}} = \sqrt{ x_{1}^{2}+x_{2}^{2} }$ alors $\left|\left| x \right|\right| = \left| x_{1}\right|^{2} + \left| x_{2}\right|^{2}$ (th ed pythagore)
5. 
   + $<x, y> = <y, x>$ (symétrie)
   
   + $<\lambda x + x', y> = \lambda<x, y> + <x', y>$ linéaire à gauche
   $<x, \lambda y + y'> = \lambda<x, y> + <x, y'>$ linéaire à droite
   Le produit scalaire est donc bilinéaire
   + $<x, y> \geq 0$ 
   + Si $x \neq 0$, $<x, x> > 0$ 
___
6. 
$$ \begin{array}{rl}\left|\left| x+y \right|\right|^{2} &= <x+y, x+y> \\ &= <x, x> + <x, y> + <y, x> + <y, y> \\ &= \left|\left| x \right|\right|^{2} + 2 <x, y> + \left|\left| y \right|\right|^{2}\end{array}$$
Alors, 
$$<x, y> = \frac{1}{2}(\left|\left| x+y \right|\right|^{2} - \left|\left| x \right|\right| ^{2}-\left|\left| y \right|\right| ^{2} )$$
Formule de polarisation

7. 
   + Bilinéaire
   + Symétrique
   + Définie positivement


# I. Produit scalaire
## 1. Définition
#### Définition
Un produit scalaire sur un ev réel $E$ est une forme bilinéaire, symétrique et définie positivement qu'on note :
$$<\cdot, \cdot>$$
c'est à dire : 
1. $$<\cdot, \cdot> : E \times E \to \mathbb{R}$$

2. $$\forall x, y \in E, <y, x> = <x, y>$$
3. $$\forall x \in E, <x, \cdot> \in \mathcal{L}(E, \mathbb{R})$$
   $$\forall y \in E, <\cdot, y> \in \mathcal{L}(E, \mathbb{R})$$
   par symétrie
4. $$\forall x \in E, \begin{cases}
    <x, x> \geq 0 \\
    <x, x>=0 \Leftrightarrow x = 0 \end{cases}$$
    On a plus : 
    $$\begin{cases}
    \forall x \in E, <x, 0> = 0 \\
    \forall y \in E, <0, y> = 0
    \end{cases}$$

#### Remarque
On utilise les notations $(x | y)$ ou $x \cdot y$

#### Définition
Un espace préhilbertien réel est un ev réel muni d'un produit scalaire (PS) $(E, <\cdot, \cdot>)$ 
Un espace euclidien est un préhilbertien réel de dimension finie. 

#### Exercice
Vérifier que les PS "canoniques" sur $\mathbb{R}^{2}$ et $\mathbb{R}^{3}$ rappelés en intro sont bien des PS

#### Exercice
Montrer que 
$$((x, y, z), (x', y', z')) \mapsto 2xx'+xy'+yx'+yy'+3zz'$$
est un PS sur $\mathbb{R}^{3}$

#### Exercice
Montrer que :
$$(P, Q) \mapsto P(0)Q(0)+P(1)Q(1) + P(2)Q(2)$$
est un produit scalaire sur $\mathbb{R}_{2}[X]$

#### Remarque
La restriction d'un PS à un sous espace vectoriel de $E$ est encore un produit scalaire. 

## 2. Trois exemples fondamentaux
### a. $\mathbb{R}^{n}$
Soit $n \in \mathbb{N}^{*}$,
Le produit scalaire canonique sur $\mathbb{R}^{n}$

#### Proposition
$$<\cdot, \cdot>_{can} : \begin{cases}
(\mathbb{R}^{n})^{2} \to \mathbb{R} \\
((x_{i})_{i = 1}^{n}, (y_{i})_{i = 1}^{n}) \mapsto \sum_{i = 1}^{n} x_{i}y_{i}
\end{cases}$$
est un PS sur $\mathbb{R}^{n}$ appelé : produit scalaire canonique sur $\mathbb{R}^{n}$

Démonstration : exo

#### Remarque
$$(\mathbb{R}^{n}, <\cdot, \cdot>_{can}) \text{ est euclidien}$$

#### Remarque : Interprétation matricielle IMPORTANT
Si on identifie $\mathbb{R}^{n}$ à $\mathcal{M}_{n, 1}(\mathbb{R})$, 
et en particulier les matrices à une ligne et une colonne aux réels, 
$$\forall X, Y \in \mathbb{R}^{n}, <X, Y>_{\mathrm{can}} = X^{T}Y$$

#### Exercice
Soit $A \in GL_{n}(\mathbb{R})$, 
Montrer que :
$$(X, Y) \mapsto <AX, AY>$$
est un PS sur $\mathbb{R}^{n}$

### b. $L^{2}$
Le produit scalaire "$L^{2}$" sur $\mathbb{C}_{\mathbb{R}}^{0}([a, b])$

#### Proposition
Pour $a < b$, 
$$<\cdot, \cdot>_{2} : \begin{cases}
(\mathcal{C}_{\mathbb{R}}^{0}([a, b]))^{2} \to \mathbb{R} \\
(f, g) \mapsto \int _{a}^{b} fg 
\end{cases}$$
est un produit scalaire qu'on appelle produit scalaire $L^{2}$

Démonstration : en exo
Soit $f, g \in \mathcal{C}_{\mathbb{R}}^{0}([a, b])$, et $\lambda \in \mathbb{R}$, 
$$\left< f, \lambda g \right>  = \lambda \int _{a}^{b} fg = \lambda \left< f, g \right>  $$
$$\left< f+f', g+g' \right>  \int _{a}^{b}fg + \int _{a}^{b} fg'  + \int _{a}^{b} f'g + \int_{a}^{b}f'g'  $$
$$= \left< f, g \right> + \left< f, g' \right> + \left< f', g \right> + \left< f', g' \right> $$


$$\left< f, f \right> = \int _{a}^{b} f \times f$$
Comme $f^{2} > 0$, et que $a < b$, 
$$\left< f, f \right> \geq 0$$


#### Exercice
PS $L^{2}$ avec poids
Soient $a <b$ et $w \in \mathcal{C}_{\mathbb{R}}^{0}([a, b])$ strictement positive sur $[a, b]$
Alors, 
$$<\cdot , \cdot>_{L^{2}} : \begin{cases}
(\mathcal{C}_{\mathbb{R}}^{0}([a, b]))^{2} \to \mathbb{R} \\
(f, g) \mapsto \int _{a}^{b} fgw 
\end{cases}$$
est un PS
C'est le PS canonique sur $\mathcal{C}_{\mathbb{R}}^{0}([a, b])$, 


### c. $\mathcal{M}_{n, p}(\mathbb{R})$
Le produit scalaire sur $\mathcal{M}_{n, p}(\mathbb{R})$

#### Propriété
Pour $n, p \in \mathbb{N}^{*}$,
$$(A, B) \mapsto \mathrm{tr}(A^{T}B)=\sum_\underset{1 \leq j \leq p}{1 \leq i \leq n} A[i, j]B[i, j]$$
est un PS sur $\mathcal{M}_{n, p}(\mathbb{R})$
appelé PS canonique sur $\mathcal{M}_{n, p}(\mathbb{R})$

Démonstration :
C'est seulement le PS lorsqu'on identifie $\mathcal{M}_{n, p}(\mathbb{R})$ à $\mathbb{R}^{np}$ en tant qu'ev. 


# II. Norme associé à un PS
On considère ici un préhilbertien réel $(E, <\cdot, \cdot>)$

## 1. Définition
#### Définition
La norme associé au PS $<\cdot, \cdot>$ est l'application : 
$$\left|\left| \cdot \right|\right| : \begin{cases}
E \to \mathbb{R} \\
x \mapsto \left|\left| x \right|\right| = \sqrt{ <x, x> }
\end{cases}$$

#### Proposition
1. Séparation
   $$\forall x \in E, \left|\left| x \right|\right| =0 \Leftrightarrow x = 0$$
2. Homogénéité : 
   $$\forall x \in E, \forall \lambda \in \mathbb{R}, \left|\left| \lambda x \right|\right| = \left| \lambda \right| \space \left|\left| x \right|\right|  $$

Démonstration : 
1. Soit $x \in R$, 
   On le démontre par équivalence :
   $x = 0$ ssi $<x, x> = 0$ car $<\cdot, \cdot> \in E^{*}$
   ssi
   $$\left|\left| x \right|\right| = \sqrt{ \left< x, x \right>  } = 0$$
2. Soit $x \in E$, et $\lambda \in \mathbb{R}$, 
   $$\left|\left| \lambda x \right|\right| = \sqrt{ \left< \lambda x, \lambda x \right>  } = \left| \lambda\right|\left|\left| x \right|\right|  $$


#### Exemples
Norme associé au PS classique
1. Pour $\mathbb{R}^{n}$ avec le PS canonique : 
   $$\forall x = (x_{i})_{i = 1}^{n} \in \mathbb{R}^{n}, \left|\left| x \right|\right|  = \sqrt{ \sum_{i = 1}^{n} x^{2}_{i} }$$
2. Sur $\mathcal{C}_{\mathbb{R}}^{0}([a, b])$ avec le PS $L^{2}$
   $$\forall f \in \mathcal{C}_{\mathbb{R}}^{0}([a, b]), \left|\left| f \right|\right|  = \sqrt{ \int _{a}^{b}f^{2}  }$$
3. Sur $\mathcal{M}_{n, p}(\mathbb{R})$ muni du PS canonique
   $$\forall A \in \mathcal{M}_{n, p}(\mathbb{R}), \left|\left| A \right|\right|  = \sqrt{ \sum_{i, j} A[i, j]^{2}}$$


## 2. Inégalités classiques
On aimerait que la norme vérifie l'inégalité triangulaire :
Excal 1
Comme les deux membres sont positifs, 
$$\begin{array}{rl}
\left|\left| x + y \right|\right| \leq \left|\left| x \right|\right| + \left|\left| y \right|\right| & \Leftrightarrow \left|\left| x+y \right|\right|^{2}  \\
&\leq (\left|\left| x \right|\right| + \left|\left| y \right|\right| )^{2} \\
&\Leftrightarrow <x+y, x+y>  \\
&\leq (\left|\left| x \right|\right| + \left|\left| y \right|\right| )^{2} \\
&\Leftrightarrow \left|\left| x \right|\right|^{2} + \left|\left| y \right|\right|^{2} + 2 <x, y> \\
&\leq   \left|\left| x \right|\right|^{2} + \left|\left| y \right|\right|^{2}+2\left|\left| x \right|\right|\space \left|\left| y \right|\right|  
\end{array}$$
Ainsi, comme : 
$$\boxed{2 >0}$$
OMG 720 no scoped (clap)
$$\boxed{\left|\left| x + y \right|\right| \leq \left|\left| x \right|\right| + \left|\left| y \right|\right| \Leftrightarrow (2) :  <x, y> \space\leq \left|\left| x \right|\right| \space \left|\left| y \right|\right|}$$
Et on a aussi vu au passage que :
$$\boxed{<x+y, x+y> = \left|\left| x \right|\right| ^{2}+\left|\left| y \right|\right| ^{2} + 2 <x, y>}$$
qui permet d'exprimer $<x, y>$ à l'aide de la norme


#### Propriété
$$\forall x, y \in E, <x, y> = \frac{1}{2}(\left|\left| x+y \right|\right| ^{2} -\left|\left| x \right|\right| ^{2}-\left|\left| y \right|\right| ^{2})$$

#### Remarque
Cela signifie que la norme associé à un PS détermine de manière unique ce PS ie deux PS qui ont la même norme sont égaux. 

On va maintenant prouver $(2)$
Pour tous $x, y \in E$,
Comme : $\left|\left| -x \right|\right| = \left|\left| x \right|\right|$ (car $\left| -1\right| = 1$)
alors, on aura aussi pour tous $x, y$ : 
$$-<x, y> = <-x, y> \space\leq \left|\left| -x \right|\right| \left|\left| y \right|\right| = \left|\left| x \right|\right| \left|\left| y \right|\right|$$
Donc, 
$$\left| <x, y> \right| \leq \left|\left| x \right|\right|\left|\left| y \right|\right|  $$

Cette inégalité de <u>Cauchy-Schwartz</u> est très important en pratique. 

#### Théorème (Inégalités classiques)
1. <u>Inégalité de Cauchy-Schwartz</u>
   $$\forall x, y \in E, \left| <x, y>\right| \leq \left|\left| x \right|\right| \left|\left| y \right|\right| $$
2. <u>Inégalité de Minkowski</u> (dite triangulaire)
   $$\forall x, y \in E, \left|\left| x+y \right|\right| \leq \left|\left| x \right|\right| +\left|\left| y \right|\right| $$
3. <u>Cas d'égalités</u>
   1. Il y a égalité ssi $x$ et $y$ sont linéairement indépendants
   2. Il y a égalité ssi $x$ et $y$ sont positivement liés ie : $(\exists \lambda \in \mathbb{R}_{+}, y = \lambda x) \text{ ou }(\exists \lambda \in \mathbb{R}_{+}, x = \lambda y)$ ce qui équivaut à : $(y =0) \text{ ou } (\exists \lambda \in \mathbb{R}_{+}, x =\lambda y)$


Démonstration :
###### Inégalité de Cauchy-Schwartz 
Soient $x, y \in E$

Par disjonction de cas : 
Soit $y = 0$, comme $\left| 0\right|=0$, l'inégalité est vraie

Soit $y \neq 0$, 
On définit la fonction polynomiale de degré 2 :
$$f : \lambda \mapsto \left|\left| x+y \right|\right| ^{2} = \left|\left| y \right|\right| ^{2}\lambda^{2}+2<x, y>\lambda+\left|\left| x \right|\right| ^{2}$$

Comme le trinôme $f$ est à valeur dans $\mathbb{R}_{+}$, son discriminant est négatif ou nul ie : 
$$\Delta = 4<x, y>^{2}-4\left|\left| y \right|\right| ^{2}\left|\left| x \right|\right| ^{2}\leq 0$$

Alors
$$<x, y>^{2} \leq (\left|\left| x \right|\right| \left|\left| y \right|\right| )^{2}$$
Donc, 
$$\left| <x, y> \right| \leq \left| \left|\left| x \right|\right| \left|\left| y \right|\right| \right| = \left|\left| x \right|\right| \left|\left| y \right|\right| $$
Ainsi, 
$$\forall x, y \in E, \left| <x, y>\right| \leq \left|\left| x \right|\right| \left|\left| y \right|\right|$$
De plus l'égalité entre ssi $\Delta = 0$ ie ssi le trinôme admet une racine ie ssi :
$$(\exists \lambda \in \mathbb{R}, x = -\lambda y)$$
ie ssi $(x, y)$ est liée.

Ainsi, 
Dans tous les cas : 
$$\boxed{\begin{array}{c}
\left| <x, y> \right| \leq \left|\left| x \right|\right| \left|\left| y \right|\right|\\\\
\text{Avec égalité ssi } (x, y) \text{ est liée}
\end{array}}$$

___
###### Inégalité de Minkowski
Soient $x, y \in E$
On a déja vu que l'inégalité triangulaire équivaut à
$$<x, y> \leq \left|\left| x \right|\right|\left|\left| y \right|\right|$$
ce que est impliqué par CS car $<x, y> \leq \left| <x, y>\right|$
Ainsi, l'inégalité triangulaire est prouvée
De plus l'égalité dans l'inégalité

ce qui équivaut à : 
$$\begin{cases}
\left| <x, y>\right| = \left|\left| x \right|\right| \left|\left| y \right|\right| \\
<x, y> = \left| <x, y>\right| 
\end{cases}$$
ie à ce que :
$$\begin{cases}
(y = 0) \text{ ou } (\exists \lambda \in \mathbb{R}, x = \lambda y) \\
<x, y> \geq 0
\end{cases}$$
ie à $(y = 0)$ ou
$$\begin{cases} y \neq 0 \\
\exists \lambda \in \mathbb{R}, x = \lambda y \\
\lambda {\left|\left| y \right|\right| ^{2}} \end{cases}$$

#### Remarque
Voir sur le poly un preuve par double implication de ce cas d'égalité

#### Avant-première
Notion de norme d'un EV :
C'est une application : $\left|\left| \cdot \right|\right| : E \to \mathbb{R}_{+}$
tel que
$$\begin{cases}
\forall x \in E, \left|\left| x \right|\right|=0 \Leftrightarrow x = 0 &\text{Séparation}\\
\forall x \in E, \forall \lambda \in \mathbb{R},\left|\left| \lambda x \right|\right| =\left| \lambda\right|\left|\left| x \right|\right|  & \text{Homogénéité}\\
\forall x, y \in E, \left|\left| x+y \right|\right| \leq \left|\left| x \right|\right| +\left|\left| y \right|\right| & \text{Inégalité triangulaire}
\end{cases}$$

Tout PS fournit une norme
Cependant il existe des normes ne provenant pas d'un PS

#### Exercice
$$\begin{cases}
N_{1} : (x, y) \mapsto \left| x\right| + \left| y\right| \\
N_{\infty} : (x, y) \mapsto \max(\left| x\right|, \left| y\right|)
\end{cases}$$

Sont deux normes sur $\mathbb{R}^{2}$

## 3. Cas particuliers de l'inégalité de Cauchy Schwartz
### a. Inégalité de Cauchy Schwartz usuelle dans $\mathbb{R}^{n}$
Pour deux vecteurs
$$\begin{rcases}
x = (x_{i})_{i=1}^{n} \\
y = (y_{i})_{i=1}^{n}
\end{rcases} \in \mathbb{R}^{n}$$
on a :
$$\left| <x, y>_{\mathrm{can}}\right| \leq \left|\left| x \right|\right| \left|\left| y \right|\right| $$
ie 
$$\left( \sum_{i=1}^{n}x_{i}y_{i} \right) \leq \sqrt{\left( \sum_{i=1}^{n}x_{i}^{2} \right)\left( \sum_{i=1}^{n}y_{i}^{2} \right)} \leq \left( \sum_{i=1}^{n}x_{i}^{2} \right)\left( \sum_{i=1}^{n}y_{i}^{2} \right)$$
En appliquant cela à $(\left| x_{i}\right|)_{i = 1}^{n}$ et $(\left| y_{i}\right|)_{i=1}^{n}$


#### Propriété
$$\forall (x_{i})_{i = 1}^{n}, (y_{i})_{i=1}^{n} \in \mathbb{R}^{n}, \left( \sum_{i=1}^{n}|x_{i}y_{i} |\right)^{2} \leq \left( \sum_{i=1}^{n}x_{i}^{2} \right)\left( \sum_{i=1}^{n}y_{i}^{2} \right)$$

#### Exercice
Démontrer à la main (sans ce th) que pour $a, b, c, d \in \mathbb{R}$,
$$(ac+bd)^{2} \leq (a^{2}+b^{2})(c^{2}+d^{2})$$

### b. Inégalité de Cauchy Schwartz pour un PS $L^{2}$
#### Propriété
$$\forall f, g \in \mathcal{C}_{\mathbb{R}}^{0}([a, b]), \left( \int _{a}^{b} \left| fg\right|  \right)^{2} \leq \left( \int _{a}^{b}f ^{2} \right)\left( \int _{a}^{b} g^{2}  \right)$$


#### Exercice
Soit $a > 0$ et $f \in \mathcal{C}_{\mathbb{R}}^{0}([0, a])$ tel que $f(0) = 0$
Montrer que 
$$\int_{0}^{a} f^{2} \leq \frac{a^{2}}{2} \int _{0}^{a} (f')^{2}  $$

## 4. Distance
#### Définition
Soit $(E, <\cdot, \cdot>)$ un préhilbertien réel
La distance (préhilbertien ou euclidienne) entre deux vecteurs $x, y \in E$ est : 
$$d(x, y) = \left|\left| y-x \right|\right| $$
La distance sur $E$ est l'application : 
$$d : \begin{cases}
E^{2} \to \mathbb{R} \\
(x, y) \mapsto d(x, y)
\end{cases}$$

#### Propriété
1. Symétrie
   $$\forall x, y  \in E, d(x, y) = d(y,x)$$
2. Séparation
   $$\forall x, y \in E, d(x, y) = 0 \Leftrightarrow x = y$$
3. Inégalité triangulaire
   $$\forall x, y, z \in E, d(x, z) \leq d(x, y) + d(y, z)$$

Démonstration : en exo


# III. Orthogonalité
Soit $(E, <\cdot , \cdot>)$ un espace préhilbertien réel. 
## 1. Définitions
#### Définition
$x, y \in E$ sont dits orthogonaux ssi $<x, y> = 0$ 
on note : $x \perp y$

#### Exemple
Dans $\mathbb{R}^{2}$ avec le produit scalaire canonique : 
$$(1, -2) \perp (4, 2)$$

Excal 2.

#### Exercice
Démontrer que tous les vecteurs orthogonaux à $(1, -2)$
sont $Vect(v)$

#### Exercice
Décrire l'ensemble des vecteurs orthogonaux à $u(1,1,1)$ 

Deux manières : 
- Soit : On résout le système : $x + y + z = 0$ 
- Soit : On calcule le noyau de $v \mapsto <u, v>$

On trouve : 
$$Vect((-1, 0, 1), (-1, 1, 0))$$

#### Exercice
Dans $E = \mathcal{C}^{0}_{\mathbb{R}}([0, 1])$ muni du PS $L^{2}$, décrire l'ensemble des fonctions orthogonales à la fonction constante : $\mathbb{1} :x \mapsto 1$
Excal 3. 
C'est le sous espace vectoriel des fonctions d'intégrales nulles : 
$$\left\{  f \in \mathcal{C}_{\mathbb{R}}^{0}([0, 1]) \left|  \int _{0}^{1} f = 0   \right\}\right.$$

#### Remarque
Dans ces trois exemples l'ensemble des vecteurs orthogonaux est un sev qui est un supplémentaire de $Vect(u_{0})$
Sera-ce toujours le cas ?
Oui par les résultats du cours sur les formes linéaires et hyperplans.

Attention : Si on prend plus qu'un vecteur on n'obtiens pas forcément un supplémentaire du ssev qu'ils engendrent, lorsque la dimension est infinie


#### Définition
Pour $X \in \mathcal{P}(E)$, on appelle orthogonal de $X$ l'ensemble : 
$$X^{\perp} = \{ y \in E \left| \forall x \in X, <x, y>  = 0\right.\}$$


#### Propriété
1. $\forall X \subset E, X^{\perp}$ est ssev de $E$
2. $\varnothing^{\perp} = E$
3. $0^{\perp} = E$
4. $E^{\perp} = \{ 0 \}$
5. Pour tout $F \underset{sev}{\subset}E$, $F \cap F^{\perp} = \{ 0 \}$ ie $F$ et $F^{\perp}$ sont en somme directe (mais pas forcément supplémentaires)
6. $\forall X, Y \subset E, X \subset Y \Rightarrow X^{\perp} \supset Y^{\perp}$
7. $\forall X \subset E, X^{\perp} = (Vect(X))^{\perp}$
8. $\forall X \subset E, X^{\perp \perp} \supset X$
9. $\forall X, Y \subset E, (X \cup Y)^{\perp}= X^{\perp} \cap Y^{\perp}$
10. $\forall X, Y \subset E, (X \cap Y)^{\perp}= X^{\perp} + Y^{\perp}$

Démonstration : exo

#### Définition : Parties orthogonales
On dit que $X, Y \subset E$ sont orthogonales ssi 
$$\forall (x, y) \in X \times Y, <x, y> = 0$$
ssi : 
$$X \subset Y^{\perp}$$
ssi :
$$Y \subset X^{\perp}$$

#### Exemples
Deux droites de $\mathbb{R}^{3}$ peuvent être orthogonales. Mais aucune ne peut être orthogonales de l'autre.

## 2. Famille de vecteurs
#### Définition
Une famille quelconque de vecteurs de $E$ est dite orthogonale ssi ses vecteurs sont deux à deux orthogonaux

#### Définition
Un famille quelconque $(e_{i})_{i \in I}$ de vecteurs de $E$ est dite orthonormale (orthonormée) ssi elle est orthogonale et tout ses vecteurs sont de norme $1$. 

###### Reformulation
$$\forall i, j \in I, <e_{i}, e_{j}> = \delta_{i, j}$$

#### Exemple Important
Les bases canoniques de $\mathbb{R}^{n}$ et $\mathcal{M}_{n, p}(\mathbb{R})$ sont orthonormées pour leurs produits scalaires canoniques. 

#### Exercice
Soit $E = \mathcal{C}_{\mathbb{R}}^{0}([0, 2\pi])$ avec le PS $L^{2}$, 
On définit : 
$$\forall n \in \mathbb{N}, f_{0, n} : \begin{cases}
[0, 2\pi] \to \mathbb{R} \\
t \mapsto \cos(t)
\end{cases}$$
$$\forall n \in \mathbb{N}^{*}, f_{1, n} : \begin{cases}
[0, 2\pi] \to \mathbb{R} \\
t \mapsto \cos(nt)
\end{cases}$$

On note : 
$$I = (\{ 0 \} \times \mathbb{N}) \sqcup (\{ 1 \} \times \mathbb{N}^{*})$$
###### 1. Montrons que : $(f_{i, n})_{(i, n) \in I}$ est orthogonale
On pose :
$$I = \int _{0}^{2\pi} \cos(t)\cos(nt) \, dt$$
On effectue une IPP : 
$$\begin{cases}
u = \cos(nt) \\
dv = \cos(t)dt
\end{cases} \text{ et } \begin{cases}
du = -n\sin(nt)dt \\
v = \sin(t)
\end{cases}$$
Alors, 
$$I = [\cos(nt)\sin(t)]_{0}^{2\pi} + n\int _{0}^{2\pi}\sin(nt)\sin(t)  \, dt $$
On fais une deuxième IPP : 
On pose : 
$$J = \int _{0}^{2\pi} \sin(nt)\sin(t) \, dt$$
$$\begin{cases}
u = \sin(nt) \\
dv = \sin(t)dt
\end{cases} \text{ et } \begin{cases}
du = n\cos(nt)dt \\
v = -\cos(t)
\end{cases}$$
Alors, 
$$J = n\int _{0}^{2\pi} \cos(nt)\cos(t) \, dt - [] $$

###### 2. Déterminer les constantes $\alpha_{i, n} > 0$ tq $(\alpha_{i, n}f_{i, n})_{(i, n) \in I}$ sont orthonormées



#### Propriété
Une famille orthogonale de vecteurs non nuls est libre
Une famille orthonormée est donc libre

Démonstration : exo

#### Corollaire
Dans $E$ euclidien de dimension $n$, toute famille orthonormé de $n$ vecteurs est une base qu'on appelle base orthonormée ($BON$)

#### Théorème de Pythagore
Si $(x_{i})_{i = 1}^{p} \in E^{p}$ est une famille orthogonale finie, alors, 
$$\left|\left| \sum_{i = 1}^{n} x_{i} \right|\right|^{2} = \sum_{i = 1}^{p} \left|\left| x_{i} \right|\right| ^{2} $$

Démonstration : 
$$\left|\left| \sum_{i =1}^{p}x_{i} \right|\right| ^{2} = \left<\sum_{i = 1}^{p}x_{i}, \sum_{j = 1}^{p}x_{j}\right> = \sum_{i = 1}^{p}\sum_{j=1}^{p} <x_{i}, x_{j}> $$
$$= \sum_{i = 1}^{p} <x_{i}, x_{i}> = \sum_{i=1}^{p} \left|\left| x_{i} \right|\right| ^{2}$$


#### Théorème : Réciproque du théorème de Pythagore pour deux vecteurs
Pour $x, y \in E$, 
$$\left|\left| x+y \right|\right|^{2} = \left|\left| x \right|\right| ^{2} + \left|\left| y \right|\right| ^{2}  \Rightarrow <x, y> = 0$$

Démonstration : par l'identité de polarisation

# IV. Orthonormalisation

#### Lemme IMPORTANT :
Soit $(e_{i})_{i = 1}^{p}$ une famille orthonormale de $E$ et $f \in E \setminus Vect(e_{i})_{i = 1}^{p}$

Alors il existe un unique $e_{p +1} \in E$ tel que :
1. La famille : $(e_{i})_{i= 1}^{p+1}$ est orthonormée
2. $Vect(e_{i})_{i = 1}^{p+1} = Vect(e_{1}, \dots, e_{p}, f)$
3. $\left<e_{p+1}, f \right>>0$

qui est donné par la formule : 
$$e_{p+1} = \left|\left| f-\sum_{i = 1}^{p} \left< f, e_{i} \right>e_{i} \right|\right|^{-1}\left( f-\sum_{i = 1}^{p} \left< f, e_{i} \right>e_{i} \right) $$
EXCAL 3. 

Démonstration : 
Par analyse synthèse : 
###### Analyse
Soit $e_{p+1} \in E$ vérifiant 1. 2. et 3.
Par le 2. : $e_{p+1} \in Vect(e_{1}, \dots, e_{p}, f)$
Donc, il s'écrit :
$$e_{p+1} = \sum_{i = 1}^{p} \lambda_{i} e_{i} + \lambda f$$
avec $\lambda_{1}, \dots, \lambda_{p}, \lambda \in \mathbb{R}$, 
Soit $j \in [\![1, p]\!]$, comme $(e_{i})_{i = 1}^{p+1}$ est orthonormale, 
$$0 = \left< e_{j}, e_{j-1} \right> = \lambda_{j} + \lambda \left< f, e_{j} \right>  $$
Donc, 
$$\lambda_{j} = - \lambda \left< f, e_{j} \right> $$

Donc en reportant dans la formule de $e_{p+1}$ : 
$$e_{p+1} = \lambda \left( f-\sum_{i = 1}^{p} \left< f, e_{i}\right>e_{i}\right) = \lambda u$$
Comme $\left|\left| e_{p+1} \right|\right|=1 = \left| \lambda\right|\left|\left| u \right|\right|$
Donc, $\left|\left| u \right|\right| \neq 0$ ie $u \neq 0$
Donc, 
$$\left| \lambda \right| = \frac{1}{\left|\left| u \right|\right| }$$

Comme : $e_{p+1} \perp Vect(e_{i})_{i = 1}^{p}$, 
$$1 = \left< e_{p+1}, e_{p+1} \right> = \left< e_{p+1}, \lambda \left( f-\sum_{i = 1}^{p} \left< f, e_{1} \right>e_{1}  \right) \right> = \lambda \left< e_{p+1}, f \right> >0$$


Or $\left< e_{p+1}, f \right> >0$ 
Donc, $\lambda >0$ et $\lambda = \left| \lambda\right| = \frac{1}{\left|\left| u \right|\right|}$
Donc, 
$$e_{p+1} = \frac{1}{\left|\left| u \right|\right| }u$$

###### Synthèse 
On pose $e_{p+1} = \frac{1}{\left|\left| u \right|\right|}u$
Avec 
$$u = f- \sum_{i = 1}^{p} \left< f, e_{i} \right> e_{i}$$
On sait que : $(e_{i})_{i = 1}^{p}$ est ON donc, 
Pour $f \in [\![1, p]\!]$
$$\left< e_{p+1}, e_{p} \right> = \frac{1}{\left|\left| u \right|\right| } (\left< f, e_{j} \right> -\left< f, e_{j} \right> ) =0$$

Finir la suite en exo.

#### Théorème : Procédé d'orthonormalisation de Gran-Schmidt
Pour toute famille $(f_{i})_{i \in I}$ de $E$ (où $I = [\![1, m]\!]$ ou $I = \mathbb{N}$) il existe une unique famille orthonormée $(e_{i})_{i \in I}$ tq 
$$\forall p \in I, \begin{cases}
Vect(e_{i})_{i \leq p} = Vect(f_{i})_{i \leq p} \\
\left< e_{p}, f_{p} \right> >0
\end{cases}$$

Cette famille est obtenue par la construction par récurrence suivante : 
Si $I = [\![1, m]\!]$, $e_{1} = \frac{1}{\left|\left| f_{1} \right|\right|}f_{1}$
Si $I = \mathbb{N}$, $e_{0} = \frac{1}{\left|\left| f_{0} \right|\right|}f_{0}$

et pour $p \in I$, 
$$e_{p+1}  = \frac{1}{\left|\left| u_{p+1} \right|\right| }u_{p+1}$$
avec 
$$u_{p+1} = f_{p+1}-\sum_{i \leq p} \left< f_{p+1}, e_{i} \right> e_{i}$$

#### Exemple des polynômes orthogonaux
$E = \mathcal{C}^{0}([a, b])$
Pour $f, g \in E$,
$$\left< f,g  \right>_{w} = \int _{a}^{b} fgw$$

On orthonormalise la famille libre : $(t \mapsto t^{n})_{n \in \mathbb{N}}$,
on obtiens une suite de fonctions polynômes $(P_{n})$ qui est orthogonale mais historiquement on retravaille en général pas sur la famille normée. 

# V. Bases orthonormé d'un espace euclidien
Soit $(E, \left< \cdot , \cdot \right>)$ un espace euclidien
## 1. Corollaires du procédé d'orthonormalisation de Gran-Schmidt
#### Corollaire
Tout espace euclidien possède des bases orthonormés

Démonstration : 
Comme il est de dimension finie, il admet des bases et il suffit d'en orthonormaliser une. 

#### Corollaire : Théorème de la BON incomplète
Toute famille orthonormée de $E$ peut être complété en une base orthonormé. 

Démonstration :
On complète la famille en une base, on l'orthonormalise et les vecteurs de la famille de départ sont inchangés. 

## 2. Calculs en coordonnés
#### Propriété : Calculs en base orthonormé
Soit $e = (e_{i})_{i=1}^{n}$ une BON de $E$, 
On note : $(x_{i})_{i = 1}^{n} = (e^{*}_{i}(x))_{i=1}^{n}$
les coordonnés de $x \in E$ dans la base $e$, 
Alors, 
$$\forall x \in E, \forall i \in [\![1, n]\!], x_{i} = \left< x, e_{i} \right> $$
$$\forall x, y \in E, \left< x, y \right> = \sum_{i = 1}^{n} x_{i}y_{i}$$
$$\forall x \in E, \left|\left| x \right|\right| = \sqrt{ \sum_{i = 1}^{n} x_{i}^{2} }$$

Démonstration : $\oplus$ $\square$ $\otimes$ PYTHON IS TRASH CYKA

# VI. Projections orthogonales
## 1. Supplémentaire orthogonal d'un sous espace de dimension finie
#### Propriété
Soit $F \underset{sev}{\subset}E$ de dim finie d'un espace préhilbertien $(E, \left< \cdot, \cdot \right>)$
Alors, 
$$E = F\oplus F^{\perp}$$
Dans ce cas : $F^{\perp}$ est appelé le supplémentaire orthogonal de $F$

#### Exemple
$$\mathcal{C}^{0}_{\mathbb{R}}([a, b]) = Vect(x \mapsto 1) \oplus (Vect(x \mapsto 1))^{\perp}$$

#### Propriété : Cas euclidien
Supposons que $E$ est euclidien
on note $\dim E = n$ qui existe par définition de euclidien
Soit $F \underset{sev}{\subset}E$, 
Par ce qui précède on a : $E = F \oplus F^{\perp}$, 
Donc, 
$$\dim F^{\perp} = n - \dim F$$
$$F^{\perp \perp} = F$$
ATTENTION $2$ est en général faux

#### Exemple
Dans $\mathbb{R}^{3}$ usuel l'orthogonal d'une droite est un plan et vice versa

Soit $X \subset E$,
$$X^{\perp} = \{ y \in E | \forall x \in X, \left< x, y \right> = 0 \}$$

#### Propriété
Soit $E$ euclidien et $e$ une BON de $E$
1. Soit $n = \sum_{i} a_{i}e_{i} \in E$ non nul
   Alors, $n^{\perp}$ est un hyperplan d'équation : 
   $\sum_{i}a_{i}x_{i}$ dans la BON $e$
2. Soit $H$ un hyperplan d'équation $\sum a_{i}x_{i} = 0$ dans la BON $e$. 
   Alors son supplémentaire orthogonal est : $Vect\left( \sum_{i} a_{i}e_{i} \right)$

## 2. Projections orthogonales sur un sous espace vectoriel de dimension finie
#### Définition
Soit $E$ préhilbertien et $F \underset{sev}{\subset} E$ de dimension finie.
On sait que $E = F \oplus F^{\perp} = F \overset{\perp}{\oplus} F^{\perp}$
la projection sur $F$ parallèlement à $F^{\perp}$ est appelée la projection orthogonale sur $F$. 

#### Proposition
Avec les notation et hypothèses ci-dessus, si $(e_{i})_{i = 1}^{p}$ est une BON du ssesp $F$ alors, 
$$\forall x \in E, p_{F}(x) = \sum_{i = 1}^{p} \left< x, e_{i} \right> e_{i}$$

#### Proposition
Cas particulier des hyperplans en dimension finie
Soit $E$ euclidien et $u \in E \setminus \{ 0 \}$ 
Alors, la projection orthogonale sur l'hyperplan $H= u^{\perp}$ est :
$$p_{H} : \begin{cases}
E \to E \\
x \mapsto x - \frac{\left< x, u \right>}{\left|\left| u \right|\right| ^{2}}u 
\end{cases}$$

#### Remarque
$$\left< x, \frac{u}{\left|\left| u \right|\right| } \right> \frac{u}{\left|\left| u \right|\right| } = \frac{\left< x, u \right>}{\left|\left| u^{2} \right|\right| ^{2}} u$$
$\frac{u}{\left|\left| u \right|\right|}$ BON de $Vect(u)$
$\left< x, \frac{u}{\left|\left| u \right|\right|} \right>$ projection $\perp$ sur $Vect(u)$ 

#### Propriété : Inégalité de Bessel
Avec les notations et hyperplan de la définition : 
$$\forall x \in E, \left|\left| p_{F}(x) \right|\right| \leq \left|\left| x \right|\right| $$

Démonstration : Pythagore
$$x = p_{F}(x) - (x-p_{F}(x))$$
les deux composantes sont orthogonales donc, 
$$\left|\left| x \right|\right| ^{2} = \left|\left| p_{F}(x) \right|\right| ^{2} + \left|\left| x-p_{F}(x) \right|\right| ^{2} \geq \left|\left| p_{F}(x) \right|\right|^{2} $$


## 3. Distance d'un vecteur à un sous-espace vectoriel
#### Définition
Soient $E$ un préhilbertien, $Y \in \mathcal{P}(E) \setminus \{ 0 \}$ et $x \in E$
La distance de $x$ à $Y$ est : 
$$d(x, Y) = \inf_{y \in Y}(x, y)$$
Qui existe grâce à la propriété de la borne inférieure

### Théorème 
Soit $E$ un préhilbertien et $F \underset{sev}{\subset} E$ de dimension finie. 
Pour tout $x \in E$, la distance de $x$ à $F$ est réalisée et $p_{F}(x)$ est l'unique élément de $F$ qui la réalise ie 
$$\begin{cases}
d(x, p_{F}(x)) = d(x, F) \\
\forall y \in F, (d(x, y) = d(x, Y)\Rightarrow y = p_{F}(x))
\end{cases}$$

Démonstration : 
On a : $p_{F}(x) \in F$ par définition de $p_{F}$
et pour $y \in F$, 
$$d(x, y) = \left|\left| x-y \right|\right| = \left|\left| x-p_{F}(x) + p_{F}(x)-y \right|\right| $$
Comme : $x-p_{F}(x) \in F^{\perp}$ et $p_{F} - y \in F$
On a par pythagore : 
$$\left|\left| x-p_{F}(x) + p_{F}(x)-y \right|\right|^{2} = \left|| x-p_{F}(x)\right||^{2} + \left|\left| p_{F}(x) - y \right|\right| ^{2}$$
$$\geq \left|\left| x-p_{F}(x) \right|\right|^{2} = d(x, p_{F}(x))^{2}$$

avec égalité ssi $y = p_{F}(x)$

Pour tout $y \in F$, 
$$d(x, y) \geq d(x, p_{F}(x))$$
avec égalité ssi $y = p_{F}(x)$
Donc, 
$$\begin{array}{rl}
d(x, p_{F}(x))&=\min_{y \in F} d(x, y) \\
&= inf_{y \in F} d(x, y) \\
&= d(x, F)
\end{array}$$
Et si $y \in F$ vérifie : $d(x, y) = d(x, F)$ 
Alors, 
$$d(x, y) = d(x, p_{F}(x)) \text{ Ainsi, }y = p_{F}(x)$$

#### Propriété
Soit $E$ euclidien, $H$ est un hyperplan de $E$ et $u$ normal à $H$ 
Alors, 
$$\forall x \in E, d(x, H) = \frac{\left| \left< x, u \right> \right|}{\left|\left| u \right|\right| }$$

Dans une BON si $H$ est d'équation : $\sum_{i} a_{i}x_{i} = 0$ alors, 
$$d(x, H) = \frac{\left| \sum_{i}a_{i}x_{i}\right|}{\sqrt{ \sum_{i}a_{i}^{2} }}$$
