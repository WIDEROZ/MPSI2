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
Soit $\zeta$ la fonction zeta de Riemann : 
$$\boxed{\zeta(2) = \sum_{n = 1}^{+ \infty} \frac{1}{n^{2}} = \frac{\pi^{2}}{6}}$$
$$\zeta(3) \in \mathbb{R}\setminus \mathbb{Q} \text{ et } \forall k \in \mathbb{N}^{*}, \zeta(2k+1) \in \mathbb{R} \setminus \mathbb{Q}$$

$$\forall k \geq 1, 0 \leq \frac{1}{k^{3}} \leq \frac{1}{k^{3}}$$
Donc, 
$$\forall n \in \mathbb{N}, 0 \leq \sum_{k = 1}^{n} \frac{1}{k^{3}} \leq \sum_{k = 1}^{n} \frac{1}{k^{2}}\leq 2$$
Comme, 
$$\sum_{k = 1}^{n} \frac{1}{k^{3}}$$
est croissante et majorée elle converge
$$\boxed{\sum_{n \geq 1 } \frac{1}{n^{3}} \text{ converge}}$$

## Imposture
$$S_{n} = \sum_{k = 1}^{n} \frac{n}{n^{2}+k^{2}}$$
a-t-elle une limite finie ?

- $S_{1} = \frac{1}{2}$
- $S_{2}= \frac{2}{5} + \frac{1}{4}$
- $S_{3} = \frac{3}{10} + \dots$

Ca n'a rien a voir avec une série.

#### Important
Quand on a une quantité dont le nombre de terme et les termes varient, CE N'EST PAS UNE SERIE!!!!
On a deux pistes : 
- La calculer en explicitant en fonction de $n$ (sans le signe $\sum$) 
- Reconnaître une somme de Riemann (Chapitre $29$) 


Ici pour $n \geq 1$, 
$$S_{n} = \frac{1}{n} \sum_{k = 1}^{n} \frac{1}{1+ \left( \frac{k}{n} \right)^{2}}= \frac{1}{n} \sum_{k = 1}^{n}f\left( \frac{k}{n} \right)$$
$$S_{n} \underset{n \to + \infty}{\longrightarrow} \int _{0}^{1} f = \int _{0}^{1} \frac{dx}{1+x^{2}} \, dx = [\arctan(x)]_{0}^{1} = \frac{\pi}{4}$$
$S_{n} \underset{n \to + \infty}{\longrightarrow} \int _{0}^{1} f$ est a prouver (en gros c'est la formule des rectangles)

Méthode de Simpson pour le calcul intégral en informatique

# I. Définitions
Soit $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$, 
#### Définition
Pour $(a_{n})_{n} \in \mathbb{K}^{\mathbb{N}}$, 
La série de terme général $a_{n}$, est notée :
$$\sum a_{n}$$
est la suite des sommes partielles : $(S_{n})_{n \in \mathbb{N}}$ de terme général : 
$$S_{n} = \sum_{k = 0}^{n} a_{k}$$
En conséquence on dit que $\sum a_{n}$ converge ou diverge ssi $(S_{n})_{n}$ converge ou diverge.

SI $\sum a_{n}$ converge, sa somme est : 
$$\sum_{n = 0}^{+ \infty} a_{n} = \lim_{ n \to \infty } S_{n}$$

#### Remarque
Il existe d'autre définitions de la série
mais les définitions : 
- Du T.G. (terme général) de la série
- Des S.P. (somme partielles) de la série
- De la C.V. ou D.V. (convergence ou divergence) de la série
- De la somme éventuelle

Toujours vous exprimer avec ce language universel

On appelle <u>nature</u> de la série le fait qu'elle converge. 

#### Exemple
La série : 
$$\sum \frac{1}{3^{n}}$$
converge.

Quelle est sa somme? 
$$\sum_{n=0}^{+\infty} \frac{1}{3^{n}}= \frac{1}{1-\frac{1}{3}}=\frac{3}{2}$$

#### Exemple
La nature de 
$$\sum (-1)^{n}$$
Pour $n \in \mathbb{N}$, 
$$\sum_{k = 0}^{n} (-1)^{k} = \frac{1-(-1)^{n+1}}{2}$$
$= 1$ si $n$ est pair et $0$ si $n$ 