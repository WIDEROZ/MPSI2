# Introduction
Pour une série : $\sum_{n \geq 0} a_{n}$
L'ordre des termes est crucial.
Par exemple on peut montrer que, 

#### Théorème
Pour une série $\sum a_{n}$ CV mais non ACV (on dit qu'elle est semi CV noté SCV) quitte à changer l'ordre des termes, on peut obtenir n'importe quoi : 
- Une série DV avec une suite des SP sans limite.
- Une série DV de somme $- \infty$ ou $+ \infty$
- Pour $S$ arbitraire, une série CV de somme $S$

EXCAL 1

On a :
$\sum a_{n}^{+} = + \infty$ et $\lim_{ n \to \infty }a_{n}^{+} = 0$
$\sum a_{n}^{-} = - \infty$ et $\lim_{ n \to \infty }a_{n}^{-} = 0$

Cas $S >0$, 
On pioche dans l'ordre les termes positifs jusqu'à dépasser $S$ puis on pioche dans les termes négatifs jusqu'à arriver en dessous de $S$, puis on remonte, etc...

#### Question
Quelles sont les séries CV telles que l'ordre des termes ne change ni la $CV$, ni la somme? (On dit que $\sum a_{n}$ est commutativement convergente noté : $CCV$)

#### Théorème
$$\sum a_{n}  \text{ CCV} \Leftrightarrow \sum a_{n} \text{ ACV} $$

#### Question 
Peut on définir la somme d'une famille non ordonnée de termes
Soit $(a_{i})_{i \in I}$ (avec $I$ partiellement infini voire très infini (non dénombrable))
Dans quel cas peut on parler de l'existence de $\sum_{i \in I} a_{i}$

# I. Familles de nombres positifs
## 1. $\overline{\mathbb{R}}_{+}$
On note : $\mathbb{R}_{+} \cup \{ + \infty \}$ muni de la relation d'ordre obtenu en rajoutant à $\mathbb{R}_{+}$ un plus grand élément $+ \infty$ ie en étendant l'ordre de $\mathbb{R}_{+}$ en posant : 
$$\forall x \in \overline{\mathbb{R}}_{+}, x \leq + \infty$$

Démonstration : 
Imédiate sur : $[0, + \infty] = \{ x \in \overline {\mathbb{R}}_{+} | 0 \leq x \leq + \infty \}$

Comme conséquence la propriété de la borne supérieure dans $\mathbb{R}$ : 
#### Proposition
1. Toute 