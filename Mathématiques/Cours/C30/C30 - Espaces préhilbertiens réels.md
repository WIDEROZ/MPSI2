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
    <x, x> \Leftrightarrow x = 0 \end{cases}$$
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
