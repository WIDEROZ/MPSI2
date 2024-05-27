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
Si on a un tel produit scalaire : 
1. $\left| \left| x\right|\right| = ?$ 
2. $x \perp y \Leftrightarrow ?$
3. $\widehat{(x, y)} = ?$
4. Dans $\mathbb{R}^{2}, \mathbb{R}^{3}$, $<x, y> = ?$
5. Quelles sont les propriétés de $<\cdot, \cdot>$
6. Peut on retrouver le produit scalaire avec la norme? 
7. Quels axiomes pour un produit scalaire? 

1. $\left| \left| x\right|\right| = \sqrt{ <x, x> }$ et $\left| \left| x\right|\right|^{2}$ puis $\left| \left| x\right|\right|\geq 0$
2. $x \perp y \Leftrightarrow <x, y> = 0$
3. $\widehat{(x, y)}$ pour un angle non orienté $\alpha$ entre les vecteur $x$ et $y$
   $\cos(\alpha)= \frac{<x, y>}{\left| \left| x\right|\right|\left| \left| y\right|\right|}$ et donc, $\alpha = \arccos\left( \frac{<x, y>}{\left| \left| x\right|\right| \space \left| \left| y\right|\right|} \right)$ 
   C'est légerement hors programme