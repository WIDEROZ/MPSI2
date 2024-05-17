Soit $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$
Soit $a, b \in \mathbb{R}$, 
On suppose jusqu'à nouvel ordre que $\boxed{a < b}$

On cherche à intégrer des fonctions $f : [a, b] \to\mathbb{K}$
Et pour cela on veut trouver un sous-espace vectoriel de $\mathbb{K}^{[a, b]}$ pour lequel on puisse définir une notion d'intégrale qui vérifie les propriétés usuelles. 

On va construire un premier espace : $\boxed{\mathcal{E}_{\mathbb{K}}([a, b])}$ (fonctions en escaliers)

Excal 1
La définition de $\int_{a}^{b}f$ sera ici facile ainsi que les propriété usuelles.
Le problème c'est qu'il manque ici les fonctions continues non constantes!

On définira ensuite $\boxed{\mathrm{CPM}_{\mathbb{K}}( [a, b])}$ l'espace des fonctions continues par morceaux sur $[a, b]$ (qui contient à la fois les fonctions en escalier et les fonctions continues) et on exprimera toute les fonctions $\mathrm{CPM}$ comme "limite uniforme" d'une suite de fonctions en escalier : 
$$\psi_{n} \overset{\mathrm{CVU}}{\underset{[a, b]}{\longrightarrow}}$$ et on notera : 
$$\left( \int_{a}^{b} \psi_{n}  \right)_{n} \text{ CV}$$
on appellera $\int_{a}^{b}f$ la limite de cette suite en notant que ce nombre ne dépend pas de la suite : $(\psi_{n})$ choisie. 

# I. Continuité uniforme
## 1. Définition
Soit $I$ un intervalle non trivial de $\mathbb{R}$, 
Soit $f : I \to \mathbb{K}$. 
On dit que $f$ est uniformément continu sur $I$ ssi :
$$\forall \varepsilon >0, \exists \alpha > 0, \forall x, y \in I, | x - y| \leq \alpha \Rightarrow |f(x)-f(y)| \leq \varepsilon$$

#### Exercice
Ecrire la continuité de $f$ en $x_{0} \in I$, puis la continuité de $f$ sur $I$ en langage formel, 

$$\forall \varepsilon > 0, \exists \alpha > 0, |x - x_{0}| \leq \alpha \Rightarrow |f(x)-f(x_{0})| \leq \varepsilon $$
$$\forall \varepsilon > 0, \exists \alpha > 0, \forall x \in I, |x - x_{0}| \leq \alpha \Rightarrow |f(x)-f(x_{0})| \leq \varepsilon $$
