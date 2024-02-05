# I. Intro
$I$ un intervalle non trivial de $\mathbb{R}$
$$f : I \to \mathbb{R}$$
$a \in \overline{\mathbb{R}}$ tel que ($a \in I$ ou $a$ est une borne de $I$)
On s’intéresse au comportment de $f(x)$ lorsque $x \in I$ est "proche" de $a$

#### Définition (Non universelle)
Pour $w \in \overline{\mathbb{R}}$, 
On a 3 cas :
- Si $w \in \mathbb{R}$ les voisinages spécifiques de w sont les $[w-\epsilon, w + \epsilon]$
  Ou $\epsilon >0$

- Si $w = - \infty$ les voisinages spécifiques de $w$ sont les $]- \infty, B]$ ou $B \in \mathbb{R}$ 

- Si $w = + \infty$ les voisinages spécifiques de $w$ sont les $[a, + \infty[$, ou $A \in \mathbb{R}$ 

#### Notation
On notera $\mathcal{V}(w)$ l'ensemble des voisinages spécifiques de $w$ (Ensemble de parties de $\mathbb{R}$)

#### Définition
Une propriété est dite vérifiée au voisinage de $w \in \overline{\mathbb{R}}$ ssi il existe un voisinage spécifique de $w$ que lequel la propriété soit vérifiée.

- Exemple : 
  La fonction $\exp$ est bornée au voisinage de $- \infty$ 
  il existe $B \in \mathbb{R}$ tel que $\exp|_{]- \infty, B]}$ soit bornée

- Exemple : 
  La fonction $\ln$ est strictement positive au voisinage de 2
  
  Mais il est faux de dire que la fonction est positive ou nulle au voisinage de 1.


#### Définition de la limite
Soit $l \in \overline{\mathbb{R}}$
$$f(x) \underset{x\to a}{\longrightarrow} l \Leftrightarrow \forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), \forall x \in I, (x \in U \Rightarrow f(x) \in V)$$

- Remarque
  La définition est équivalente a cela : 
  $$\forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), f(U \cap I) \subset V$$
  $$\forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), U \cap I \subset f^{-1}(V)$$


#### Remarque
Quand $a \in \mathbb{R}$ il est pratique de faire un "changement de var." : 
$$f(x) \underset{x \to a}{\longrightarrow} l \Leftrightarrow f(a + h) \underset{h \to 0}{\longrightarrow} l $$
ou encore : 
$$f(x) \underset{x \to a}{\longrightarrow} l \Leftrightarrow f(x) - l \underset{x \to a}{\longrightarrow} 0 \Leftrightarrow |f(x)-l| \underset{x \to a}{\longrightarrow} 0$$
Ce qu'on note souvent en majorant $|f(x) - l|$ par une quantité qui tend vers 0

# II. Suite du cours
#### Théorème : unicité de la limite
Si $l, l' \in \overline{\mathbb{R}}$ vérifient
$$f(x) \underset{x \to a}{\longrightarrow} l \text{ et } f(x) \underset{x \to a}{\longrightarrow} l' \text{ alors } l = l'$$

Démonstration identique à celle des suites

On introduit la notation : 
$$f(x) \underset{x \to a}{\longrightarrow} l = \lim_{ x \to a } f(x) = l $$


#### Propriété
Si $a \in I$ et $\lim_{ a } f = l$
Alors
$$l = f(a)$$

Démonstration : 
Cas ou $l \in \mathbb{R}$ : 
Supposons $a \in I$ et $\lim_{ a } f = l \in \mathbb{R}$
Par def de la limite
$$\forall \epsilon >0, \exists \alpha>0, \forall x \in I, |x - a| \leq \alpha \Rightarrow |f(x) - l|\leq \epsilon$$
Prenons pour tout $n \in \mathbb{N}$, "$\epsilon = \frac{1}{n+1}$". Cela fournit un $\alpha > 0$ tel que
$$\forall x \in I, (|x-a|\leq \alpha \Rightarrow |f(x) - l|\leq \epsilon)$$
En particulier comme $a \in I$ et $|a-a| = 0$
On obtiens
$$|f(x) - l |\leq \frac{1}{n+1}$$
En faisant tendre $n$ vers $+ \infty$ 
$$|f(a) - l| \leq 0$$


Ainsi $f(x) = l$

Cas ou $f(x) = l$ : 
On aurait alors
$$\forall A\geq 0 , \exists \alpha > 0 , dora\ll x \in I, |x - a|\leq \alpha \Rightarrow f(x)\geq A$$
Avec $x = a$ on obtiens : 
$$\forall A\geq 0, f(a)\geq A$$
Ce qui est impossible

Cas $l = - \infty$ :
Impossible de même.

#### Propriété
Si $\lim_{ a } f =l \in \mathbb{R}$ 
alors $f$ est bornée au voisinage de $a$

Démonstration : Comme les suites
Cas $a \in \mathbb{R}$ :
Soit $\epsilon = 1 > 0$
Donc il existe $\alpha > 0$ tel que
$$\forall x \in I \cap [a-\alpha, a + \alpha], f(x) \in [l-1, l+1]$$
Ainsi $f|_{I \cap [a-\alpha, a + \alpha]}$ est bornée

Cas $a = + \infty$ : 
Soit $\epsilon = 1 > 0$
Alors il existe $A \in \mathbb{R}$ tel que
$$\forall x \in I \cap [A, + \infty[, f(x) \in [l-1, l+1]$$
Donc $f|_{I \cap [A, + \infty[}$ est bornée

Cas $a = - \infty$ : De même

#### Propriété
La notion de limite est locale
Si $l \in \overline{\mathbb{R}}$ Pour tout $V \in \mathcal{V}(a)$
$$f(x) \underset{x \to a}{\longrightarrow} l \Leftrightarrow (f|_{V})(x) \underset{x \to a}{\longrightarrow} l$$

#### Extension
Soit $f : D_{f} \to \mathbb{R}$ et $a \in \overline{\mathbb{R}}$
S'il existe $W \in \mathcal{V}(a)$ tel que
$D_{f} \cap W$ soit un intervalle non trivial dont $a$ soit un élément ou une autre borne
On peut définir pour $l \in \overline{\mathbb{R}}$, le fait que
$$f(x) \underset{x \to a}{\longrightarrow} l$$

Par la propriété :

#### Propriété
$$\forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), \forall x \in D_{f} \cap W, (x \in U \Rightarrow f(x) \in V)$$


#### Définition de la limite a droite et a gauche
On considère $g = f|_{I \cap ]a, + \infty[}$ resp ($g = f|_{I \cap ]- \infty, a[}$)
et on dit que $f$ admet une limite a droite (resp gauche) en a ssi
$$g(x) \underset{x \to a}{\longrightarrow} l$$

On note alors
Limite a droite : 
$$g(x) \underset{x \to a^+}{\longrightarrow} l$$
$$g(x) \underset{\underset{>}{x \to a}}{\longrightarrow} l$$
Limite a gauche : 
$$g(x) \underset{x \to a^-}{\longrightarrow} l$$
$$g(x) \underset{\underset{<}{x \to a}}{\longrightarrow} l$$


#### Définitions formelles de la limite a droite et a gauche
Cas $l \in \mathbb{R}$ : 
$$\lim_{a^+ } f = l \Leftrightarrow \forall \epsilon > 0 , \exists \alpha >0, \forall x \in I, (a < x \leq a + \alpha \Rightarrow |f(x)-l| \leq \epsilon) $$
$$\lim_{a^- } f = l \Leftrightarrow \forall \epsilon > 0 , \exists \alpha >0, \forall x \in I, (a-\alpha \leq x < a \Rightarrow |f(x)-l| \leq \epsilon) $$

Cas $l \in \overline{\mathbb{R}}$ : 
A faire

#### Extension
On suppose que $I$ est un intervalle non trivial, $a \in I$ et $f$ définies "au moins" sur $I\backslash \{a\}$ (elle peut ou non être définie en $a$)



#### Définition : Limite par valeurs différentes
Soit $l \in \overline{\mathbb{R}}$ 
On dit que $f(x)$ tends par valeurs différentes lorsque : 
$$\forall V \in \mathcal{V}(l), \exists U \in \mathcal{V}(a), \forall x \in I\backslash \{a\}, (x \in U \Rightarrow f(x) \in V)$$
On note alors 
$$f(x) \underset{\underset{\neq}{x \to a}}{\longrightarrow} l$$
ou
$$\lim_{\underset{\neq}{ x \to a}} f(x) = l $$

- Exemple : 
  Soit $f : \mathbb{R}^* \to \mathbb{R}$ tel que
  $f(x) = x \sin\left( \frac{1}{x} \right)$
  Soit $\epsilon > 0$, 
  On pose $\alpha = \epsilon > 0$
  Soit $x \in \mathbb{R}^*$
  On a alors $|f(x)| = |x||\sin\left( \frac{1}{x} \right)| \leq \alpha = \epsilon$
  
  
  Donc
  $$\lim_\underset{\neq}{ x \to 0} f(x) = 0$$


#### Propriété
Caractérisation séquentielle des limites
Avec les notations précédentes
$$\lim_{ a} f = l \Leftrightarrow (\forall(u_{n})\in I^\mathbb{N}, (\lim_{ n \to \infty } u_{n} = a \Rightarrow \lim_{ n \to \infty } f(u_{n}) = l  )) $$

#### Théorème : Opération sur les limites
CL, produit, quotient
Enoncer les résultats et les démontrer (Même que les suites)

#### Théorème : Composition de limites
Soit $I, J$ des intervalles non-triviaux, $a, b, l \in \overline{\mathbb{R}}$
Soit $f : I \to \mathbb{R}$ et $g : J \to \mathbb{R}$
Telles que $f(I) \subset J$ et $\lim_{ a } f = b$ et $\lim_{ b } g = l$ 
Alors
$$\lim_{ a }(g \circ f) = l $$

#### Théorème : Stabilité des inégalités larges par passage a la limite
Soient $f, g : I \to \mathbb{R}$ admettant des limites en $a \in \overline{\mathbb{R}}$ et vérifiant : 
$$\forall x \in I, f(x)\leq g(x)$$
Alors
$$\lim_{ a } f \leq \lim_{ a } g  $$

#### Théorème : Limite par encadrement (gendarmes)
Soit $f, g, h : I \to \mathbb{R}$
tq $f$ et $h$ admettent la même limite $l$ en $a \in \overline{\mathbb{R}}$ et
$$\forall x \in \mathbb{R}, f(x)\leq g(x) \leq h(x)$$
Alors $g$ admet une limite en $a$ et
$$\lim_{ a } g = l $$

#### Théorème de minoration ou majoration
Soient $f, g : I \to \mathbb{R}$
tel que
$$\forall x \in I, f(x)\leq g(x)$$
et $a$ un point ou une borne de $I$. 
Si $\lim_{ a } f = + \infty$, alors $g(x)$ tend aussi vers $+ \infty$ lorsque $x$ tend vers $a$.
(Même pour la minoration en $-\infty$)

#### Théorème de la limite monotone
Soit $f : I \to \mathbb{R}$,
Soit $a$ une borne de $I$ tel que $a \notin I$ 
Si $f$ est monotone alors elle admet une limite $l \in \overline{\mathbb{R}}$ en $a$ 

#### Corollaire du th de la limite monotone
Une fonction monotone admet une limite à droite et une limite à gauche en tout point de son intervalle de définition qui n'en est pas une borne. 

###### Démonstration : 
En notant $f : I \to \mathbb{R}$ monotone et $a$  le point. On applique le TH précédent a $f|_{]- \infty, a[}$ et $f|_{]a, + \infty[}$ 

#### Remarque : 
Si $f \uparrow$, 
$$\lim_\underset{<}{ x \to a } f(x)\leq f(x) \leq \lim_{\underset{>}{ x \to a }} f(x)$$

Si $f  \downarrow$, 
$$\lim_{\underset{<}{ x \to a }} f(x) \geq f(x) \geq \lim_{\underset{<}{ x \to a }} f(x)$$
(preuve par stabilité de $\leq$ par passage a la limite.)

# III. Preuves
#### Théorème : Composition de limite
Excalibur 1.

