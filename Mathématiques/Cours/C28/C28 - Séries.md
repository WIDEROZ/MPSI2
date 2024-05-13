# Introduction
## Zénon
La flèche a une vitesse de $1m.s^{-1}$
et elle atteint la cible en $1 s$
mais aussi en $\frac{1}{2}+\frac{1}{4} + \frac{1}{8}+ \dots$ s
On peut formaliser le fait que $\frac{1}{2} + \frac{1}{4} + \frac{1}{8} + \dots = 1$ 
$$S_{n} = \sum_{k = 1}^{n} \frac{1}{2^{k}} = \frac{\frac{1}{2} - \left( \frac{1}{2} \right)^{n+1}}{1-\frac{1}{2}} \to \boxed{1} \text{ : C'est la somme de la série}$$
On dira que la série
$$\sum_{ n \geq 1} \boxed{\frac{1}{2^{n}}} \text{ : terme général de la série}$$
converge 

## Quick et Flupke
Quick et Flupke jouent aux cubes d'arrête : 
- $1 m$
- $\frac{1}{2} m$
- $\frac{1}{3} m$
- ...
- $\frac{1}{n} m$

Quick : Je peux tous les empiler dans la grande chambre
Flupke : Menteur! Moi je peux tous les peindre avec un nombre fini de pots et même tous les remplir avec le lac d'Annecy. (Ou une petite piscine)

Est ce que ces séries convergent ?
$$\sum_{n \geq \frac{1}{n}} \frac{1}{n}$$
(Série harmonique)
$$\sum_{n \geq 1} \frac{1}{n^{2}}$$
$$\sum_{ n\geq 1} \frac{1}{n^{3}}$$

$$\begin{array}{rl}
S_{2^{p}} = \sum_{n \geq 1} \frac{1}{n} &=1 \\
&+\frac{1}{2} \\
&+ \left( \frac{1}{3} + \frac{1}{4} \right)  \\
&+ \left( \frac{1}{5} + \frac{1}{6} + \frac{1}{7} + \frac{1}{8} \right) \\
&+ \dots \\
&+\left( \frac{1}{2^{p-1}+1} + \dots + \frac{1}{2^{p}}\right) \\
&\geq 1+ \frac{1}{2}p \to + \infty
\end{array}$$
Ainsi, par minoration, $(S_{2^{p}})$ diverge

Comme la suite extraite : $(S_{2^{p}})_{p}$ de $(S_{n})_{n}$ est divergente ie n'admet pas de de limite finie et qu'elle est croissante : 
$$\lim_{ n \to \infty }S_{n} = + \infty $$
ie 
$$\sum_{n = 1}^{\infty} \frac{1}{n} = + \infty$$
___
Notons pour $n \in \mathbb{N}$, 
$$T_{n} = \sum_{k = 1}^{n} \frac{1}{k^{2}}$$
On a alors pour $n \geq 1$, 
$$T_{n} = 1+ \sum_{k= 1}^{n} \frac{1}{k^{2}}$$
$$T_{n} \leq 1+ \sum_{k = 2}^{n} \frac{1}{k(k-1)} = 1+ \sum_{k = 2}^{n} \frac{1}{k-1}-\frac{1}{k} = 1+\left( 1-\frac{1}{n} \right)$$
Donc, 
$$1+ \sum_{k = 2}^{n} \frac{1}{k(k-1)} = 2 + \frac{1}{n} \leq 2$$
De plus, $(T_{n}) \uparrow$
Etant croissante et majorée, $(T_{n})$ converge ie 
$$\boxed{\sum_{n \geq 1} \frac{1}{n^{2}} \text{ converge}}$$
et de même, 
$$\boxed{\sum_{n=1}^{+ \infty} \frac{1}{n^{2}} \in [1, 2]}$$
Retenir : 
$$\boxed{\zeta(2) = \sum_{n = 1}^{+ \infty}} \frac{1}{n^{2}} = \frac{\pi^{2}}{6}$$