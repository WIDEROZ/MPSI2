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
$$\begin{array}{rl}\left|\left| x+y \right|\right|^{2} &= <x+y, x+y> \\ &= <x, x> + <x, y> + <y, x> + <y, y> \\ &= \left|\left| x \right|\right|^{2} + 2 <x, y> + \left|\left| y \right|\right|^{2}\end{array}$$

