# Chapitre 4 : Optimisation sous contrainte
#### Définition
Soit $f \in \mathbb{R}^{\mathbb{R}^{2}}$, 
Soit $(x, y) \in \mathbb{R}^{2}$, 
Une matrice Hétienne est la matrice $Hf(x, y) \in \mathcal{M}_{2(\mathbb{R})}$ telle que :
$$Hf(x, y) = \begin{pmatrix}
\frac{\delta^{2}f}{\delta x^{2}}& \frac{\delta^{2}f}{\delta xy
} \\
\frac{\delta^{2}f}{\delta yx} & \frac{\delta^{2}f}{\delta y^{2}}
\end{pmatrix}$$
On note $\mathcal{H}f$ l'ensembles des matrices hétiennes de $f$

#### Théorème
Soit $f \in \mathbb{R}^{\mathbb{R}^{2}}$, 
Soit $(x, y) \in \mathbb{R}^{2}$, 
Soit $Hf(x, y) \in \mathcal{M}_{2}(\mathbb{R})$ la matrice Hétienne de $f$, 
$$\forall f \in \mathbb{R}^{\mathbb{R}^{2}}, \forall(x, y) \in \mathbb{R}^{2}, \forall Hf(x, y) \in \mathcal{H}f, |Hf| \geq 0 \text{ et } \frac{\delta^{2}f}{\delta x^{2}} \geq 0 \Rightarrow $$
$f$ est convexe

Pour $\frac{\delta^{2}f}{\delta x^{2}} \leq 0$, $f$ est concave. 

#### Exemple
Déterminer les extremums : 
$$f(x, y) = 2x^{2} + 3y^{2}-xy$$

Domaine de définition : 
- $\mathbb{R}^{2}$

Calcul des dérivés partielles
$$\frac{\delta f}{\delta x} = 4x -y$$
$$\frac{\delta f}{\delta y} = 6y-x$$
$$\frac{\delta^{2}f}{dx^{2}} = 4$$
$$\frac{\delta^{2}f}{dy^{2}}= 6$$
$$\frac{\delta^{2} f}{dxy} =-1 $$
$$\frac{\delta^{2} f}{dyx} =-1$$


On calcule la matrice Hétienne de $f$ : 
$$Hf(x, y) = \begin{pmatrix}
4&-1 \\
-1&6
\end{pmatrix}$$
Alors,
$$\det(Hf(x, y)) = \Delta Hf(x, y) = 4 \times 6 - (-1)\times(-1) = 23>0$$

On détermine des points stationnaires : 
$$\begin{cases}
\frac{\delta f}{\delta x} = 0 \\
\frac{\delta f}{\delta y} = 0
\end{cases} \Leftrightarrow \begin{cases}
4x-y=0 \\
6y-x=0
\end{cases} \Leftrightarrow \begin{cases}
4x = y \\
6y = x
\end{cases} \Leftrightarrow \begin{cases}
y = 0 \\
x = 0
\end{cases}$$

Comme
$$\forall (x, y) \in \mathbb{R}^{2}, \Delta Hf(x, y) > 0 \text{ et } \frac{\delta^{2} f}{\delta x^{2}} > 0$$
$f$ est convexe

Ainsi le max de cette fonction est : $(0, 0)$


#### Exercice
On établit l'équation : 
$$0 = 6x + 3y - 60 \Leftrightarrow y = -2x + 20$$
$$U(x, y) = \frac{1}{4}x^{2}y$$
$$U(x, -2x+20) = \frac{1}{4}x^{2}(20-2x) = -\frac{1}{2}x^{3} + 5 x^{2}$$
On cherche les Points stationnaires : 
On dérive : 
$$\frac{\delta U}{\delta x} = 0 = -\frac{3}{2}x^{2} + 10 x$$
$x = 0$
Si $x \neq 0$, 
$$10 - \frac{3}{2}x =0 \Leftrightarrow x = \frac{20}{3}$$

On a : $x = 0$ ou $x = \frac{20}{3}$

#### Exercice
$$U(x, y) = \frac{1}{4}x^{2}y$$
1. Calcul du TMS
$$TMS(x, y) = \frac{\frac{\delta U(x, y)}{\delta x}}{\frac{\delta U(x, y)}{\delta y}} = \frac{\frac{1}{2}xy}{\frac{1}{4}x^{2}} = 2 \frac{y}{x}$$
2. Interprétation du $TMS$ :
   $TMS(x, y)$ l'opposé de la tangente à la courbe d’indifférence en (x, y)
3. $60 = 6x + 3y \Leftrightarrow y = 20 - 2 x$ 
4. La pente de la tangente est égale a la pente du budget au panier optimal.
   Alors, 
   $$- TMS(x, y) = -2 \Leftrightarrow - \frac{2y}{x} = -2\Leftrightarrow y = x$$
5. Retrouver le panier optimal
   $$\begin{cases}
y = x \\
60 = 6x + 3y
\end{cases} \Leftrightarrow \begin{cases}
x=\frac{20}{3} \\
y=\frac{20}{3}
\end{cases}$$




# Lagrangien
#### Définition
Soit $f$ une fonction objectif et $g$ une fonction de contrainte.
Le Lagrangien associé a ce problème d'optimisation est la fonction à 3 variables définie par :
$$L(x, y, \lambda) = f(x, y) + \lambda g(x, y)$$

#### Remarque
Le $\lambda$ est appelé le multiplicateur de Lagrange

#### Définition
On dit que la contrainte $g$ est qualifiée en, $(x_{0}, y_{0})$ ssi au moins l'une des deux dérivées partielles de $g$ n'est pas nulle en $(x_{0}, y_{0})$. 

#### Exemple
Est-ce que la contrainte $f(x) = 3x^{2}y-2xy$ est qualifiée en $(0,0)$ en $(0, 1)$

$$\frac{\delta f}{\delta x} = 6yx - 2y$$
$$\frac{\delta f}{\delta y} = 3x^{2} -2x$$
On évalue la premiere en $(0, 0)$ et en $(0, 1)$ : 
1. $0$
2. $-2$

On évalue la deuxième en $(0, 0)$ et en $(0, 1)$ : 
1. $0$
2. $0$ (pas besoin de vérifier)

#### Théorème
Si le problème d'optimisation d'objectif $f$ et de contrainte $g$ admet une solution $(x_{0}, y_{0})$ (max ou min), point intérieur de $D$, et que la contrainte est qualifiée en ce point, alors il existe $\lambda_{0} \in \mathbb{R}$, tel que : 
$$\begin{cases}
\frac{\delta L(x_{0}, y_{0}, \lambda_{0})}{\delta x} = 0 \\
\frac{\delta L(x_{0}, y_{0}, \lambda_{0})}{\delta y} = 0 \\
\frac{\delta L(x_{0}, y_{0}, \lambda_{0})}{\delta \lambda} = 0
\end{cases}$$
#### Exercice
$$f(x, y) = x^{2} + y^{2}-2xy - 40x-20y$$
Sous la contrainte : 
$$g(x, y) = y + x - 15$$
$$\frac{\delta g}{\delta x}(y) =  1$$
$$\frac{\delta g}{\delta y}(x) = 1$$
$$\forall \lambda \in \mathbb{R}, \forall t \in \{ x, y \}, \frac{\delta}{\delta t} g(\lambda) = 1 \neq 0$$

2. 
Il existe $\lambda \in \mathbb{R}$ tel que : 
$$L(x, y, \lambda) =f(x, y) = x^{2} + y^{2}-2xy - 40x-20y + \lambda y +\lambda x - 15\lambda  $$
et :
$$\begin{cases} 
\frac{\delta L(x, y, z)}{\delta x} = 0 \\
\frac{\delta L(x, y, z)}{\delta y} = 0 \\
\frac{\delta L(x, y, z)}{\delta \lambda} = 0
\end{cases} \Leftrightarrow \begin{cases}
2x-2y-40+\lambda = 0 \\
2y-2x-20 + \lambda = 0 \\
y + x - 15 = 0
\end{cases}$$
Alors,
$$\begin{cases}
2x-2y+\lambda = 40 \\
-2x+2y+\lambda = 20 \\
x + y = 15
\end{cases} \sim_{L} \begin{pmatrix}
2&-2&1&40 \\
-2&2&1&20 \\
1&1&0&15
\end{pmatrix} \sim_{L}$$
$$\begin{pmatrix}
2&-2&1&40 \\
0&4&-1&-10 \\
0&0&2&60 \\
\end{pmatrix}$$
Alors, 
$$\begin{pmatrix}
1&0&0&10 \\
0&1&0&5 \\
0&0&1&30
\end{pmatrix}$$
Ainsi, 
$$\begin{cases}
x = 10 \\
y = 5 \\
\lambda = 30
\end{cases}$$
Il y a donc un seul point stationnaire : 
$$(x, y, \lambda) = (10, 5, 30)$$
3. Conclusion 
