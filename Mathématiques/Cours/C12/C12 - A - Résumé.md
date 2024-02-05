# Définition des variables
Pour les énonces suivants on considérera toujours : 
$I$ un intervalle non trivial de $\mathbb{R}$
$$f : I \to \mathbb{R}$$
$a \in \overline{\mathbb{R}}$ tel que ($a \in I$ ou $a$ est une borne de $I$ on le précisera suivant ces deux cas)

# Définition du voisinage (Non universelle)
Pour $w \in \overline{\mathbb{R}}$, 
On a 3 cas :
- Si $w \in \mathbb{R}$ les voisinages spécifiques de w sont les $[w-\epsilon, w + \epsilon]$
  Ou $\epsilon >0$

- Si $w = - \infty$ les voisinages spécifiques de $w$ sont les $]- \infty, B]$ ou $B \in \mathbb{R}$ 

- Si $w = + \infty$ les voisinages spécifiques de $w$ sont les $[A, + \infty[$, ou $A \in \mathbb{R}$ 

# Notation du voisinage (du prof)
On notera $\mathcal{V}(w)$ l'ensemble des voisinages spécifiques de $w$ (Ensemble de parties de $\mathbb{R}$)

# Définition
Une propriété est dite vérifiée au voisinage de $w \in \overline{\mathbb{R}}$ ssi il existe un voisinage spécifique de $w$ que lequel la propriété soit vérifiée. 

# Définition de la limite
Soit $l \in \overline{\mathbb{R}}$
$$f(x) \underset{x\to a}{\longrightarrow} l \Leftrightarrow \forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), \forall x \in I, (x \in U \Rightarrow f(x) \in V)$$

# Théorème : unicité de la limite
Si $l, l' \in \overline{\mathbb{R}}$ vérifient
$$f(x) \underset{x \to a}{\longrightarrow} l \text{ et } f(x) \underset{x \to a}{\longrightarrow} l' \text{ alors } l = l'$$

# Propriété limite réelle dans le domaine de définition
Si $a \in I$ et $\lim_{ a } f = l$
Alors
$$l = f(a)$$
# Propriété limite bornée
Si $\lim_{ a } f =l \in \mathbb{R}$ 
Alors
$f$ est bornée au voisinage de $a$

# Propriété de la limite locale
La notion de limite est locale
Si $l \in \overline{\mathbb{R}}$ Pour tout $V \in \mathcal{V}(a)$
$$f(x) \underset{x \to a}{\longrightarrow} l \Leftrightarrow (f|_{_{V}})(x) \underset{x \to a}{\longrightarrow} l$$

# Propriété
$$\forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), \forall x \in D_{f} \cap W, (x \in U \Rightarrow f(x) \in V)$$

# Définition de la limite a droite et a gauche
On considère $g = f|_{I \cap ]a, + \infty[}$ resp ($g = f|_{I \cap ]- \infty, a[}$)
et on dit que $f$ admet une limite a droite (resp gauche) en $a$ ssi
$$g(x) \underset{x \to a}{\longrightarrow} l$$
On note alors
Limite a droite : 
$$g(x) \underset{x \to a^+}{\longrightarrow} l$$
$$g(x) \underset{\underset{>}{x \to a}}{\longrightarrow} l$$
Limite a gauche : 
$$g(x) \underset{x \to a^-}{\longrightarrow} l$$
$$g(x) \underset{\underset{<}{x \to a}}{\longrightarrow} l$$


# Définitions formelles de la limite a droite et a gauche
Cas $l \in \mathbb{R}$ : 
$$\lim_{a^+ } f = l \Leftrightarrow \forall \epsilon > 0 , \exists \alpha >0, \forall x \in I, (a < x \leq a + \alpha \Rightarrow |f(x)-l| \leq \epsilon) $$
$$\lim_{a^- } f = l \Leftrightarrow \forall \epsilon > 0 , \exists \alpha >0, \forall x \in I, (a-\alpha \leq x < a \Rightarrow |f(x)-l| \leq \epsilon) $$

Cas $l \in \overline{\mathbb{R}}$ : 
Si $l \in + \infty$ :
$$\lim_{ a^+ } f = + \infty \Leftrightarrow \forall \epsilon > 0, \exists \alpha > 0 , \forall x \in I, ( a < x \leq a + \alpha \Rightarrow f(x) > \epsilon )$$

$$\lim_{ a^- } f = + \infty \Leftrightarrow \forall \epsilon > 0, \exists \alpha > 0 , \forall x \in I, ( a + \alpha \leq x < a \Rightarrow f(x) > \epsilon )$$


# Extension
On suppose que $I$ est un intervalle non trivial, $a \in I$ et $f$ définies "au moins" sur $I\backslash \{a\}$ (elle peut ou non être définie en $a$)


# Définition : Limite par valeurs différentes
Soit $l \in \overline{\mathbb{R}}$ 
On dit que $f(x)$ tends par valeurs différentes lorsque : 
$$\forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), \forall x \in I\backslash \{a\}, (x \in U \Rightarrow f(x) \in V)$$
On note alors 
$$f(x) \underset{\underset{\neq}{x \to a}}{\longrightarrow} l$$
ou
$$\lim_{\underset{\neq}{ x \to a}} f(x) = l $$
# Propriété  : Caractérisation séquentielle des limites
Avec les notations précédentes
$$\lim_{ a} f = l \Leftrightarrow (\forall(u_{n})\in I^\mathbb{N}, (\lim_{ n \to \infty } u_{n} = a \Rightarrow \lim_{ n \to \infty } f(u_{n}) = l  )) $$

# Théorème : Opération sur les limites
Soit $f$ et $g$ deux fonctions tel que pour $l, l' \in \mathbb{R}$ 
$$\lim f = l \text{ et } \lim g = l'$$
On ait : 
- $$\lim f + g = l+l' $$
- $$\lim f \times g = l\times l' $$
- $$g \neq 0 \Leftrightarrow \lim \frac{f}{g} = \frac{l}{l'} $$
# Théorème : Composition de limites
Soit $I, J$ des intervalles non-triviaux, $a, b, l \in \overline{\mathbb{R}}$
Soit $f : I \to \mathbb{R}$ et $g : J \to \mathbb{R}$
Telles que $f(I) \subset J$ et $\lim_{ a } f = b$ et $\lim_{ b } g = l$ 
Alors
$$\lim_{ a }(g \circ f) = l $$

# Théorème : Stabilité des inégalités larges par passage a la limite
Soient $f, g : I \to \mathbb{R}$ admettant des limites en $a \in \overline{\mathbb{R}}$ et vérifiant : 
$$\forall x \in I, f(x)\leq g(x)$$
Alors
$$\lim_{ a } f \leq \lim_{ a } g  $$

# Théorème : Limite par encadrement (gendarmes)
Soit $f, g, h : I \to \mathbb{R}$
tel que $f$ et $h$ admettent la même limite $l$ en $a \in \overline{\mathbb{R}}$ et
$$\forall x \in \mathbb{R}, f(x)\leq g(x) \leq h(x)$$
Alors $g$ admet une limite en $a$ et
$$\lim_{ a } g = l $$

# Théorème de minoration ou majoration
Soient $f, g : I \to \mathbb{R}$
tel que
$$\forall x \in I, f(x)\leq g(x)$$
et $a$ un point ou une borne de $I$. 
Si $\lim_{ a } f = + \infty$, alors $g(x)$ tend aussi vers $+ \infty$ lorsque $x$ tend vers $a$.
(Même pour la minoration en $-\infty$)

# Théorème de la limite monotone
Soit $f : I \to \mathbb{R}$,
Soit $a$ une borne de $I$ tel que $a \notin I$ 
Si $f$ est monotone alors elle admet une limite $l \in \overline{\mathbb{R}}$ en $a$ 

# Corollaire du théorème de la limite monotone
Une fonction monotone admet une limite à droite et une limite à gauche en tout point de son intervalle de définition qui n'en est pas une borne. 

