# Définition : Taux d'accroissement
On appelle taux d’accroissement de $f$ en $a$ la fonction : 
$$(T_{a}f)(x) = \left\{ \begin{array}{l}
I\backslash\{a\} \to \mathbb{R}\\
x \mapsto (T_{a}f)(x) = \frac{f(x)-f(a)}{x-a}
\end{array} \right.$$

# Définition : Dérivabilité et nombre dérivé
La fonction $f$ est dérivable an $a$ ssi $(T_{a}f)(x)$ (resp $(\tilde{T}_{a}f)(h)$) admet une limite finie quand $x$ tend vers $a$ (resp. $h$ tend vers $0$)

Dans ce cas cette limite est appelée de nombre dérivé de $f$ en $a$ et est noté $f'(a)$ 

# Définition : Notion locale
Soit $f:D_{f}\to \mathbb{R}$ et $a \in D_{f}$. 
S'il existe $\eta > 0$ tq $D_{f} \cap [a - \eta, a + \eta]$ 
Soit un intervalle non trivial, on dit que $f$ est dérivable en $a$ ssi $f|_{[a-\eta, a+\eta]\cap D_{f}}$ l'est. 

# Définition : Tangente
La tangente a $\mathcal{G}_{f}$ au point de coordonnés $(a, f(a))$ est cette droite passant par $(a, f(a))$ de pente $f'(a)$ 

# Propriété : Equation de la tangente
Si $f$ est dérivable en $a$, l'équation de la tangente de $\mathcal{G}_{f}$ en $(a, f(a))$ est : 
$$y = f(a) + f'(a)(x-a)$$

# Propriété : Dérivabilité par $DL_1$
$f$ est dérivable en $a$ ssi :
Il existe : 
- $\alpha \in R$ 
- Un voisinage standard $V$ de $0$
- Une fonction $\epsilon$ définie sur $V = V \backslash \{0\}$ 

tels que : 
$$\forall x \in I \cap (a+V), f(x) = f(a) + \alpha(x-a) + (x-a)\epsilon(x-a)$$
et
$$\lim_{ 0 } \epsilon = 0$$
et dans le cas ou $f$ est dérivable en $a$, on a $\alpha = f'(x)$ 

Dans ce cas de dérivabilité, le $DL_{1}(a)$ peut se réécrire : 
$$\forall h \in I-a \cap $V, f(a+h) = f(a) + f'(a)h+h\epsilon(h)$$

Ce qu'on peut noter avec le petit $o$ : 
$$f(a+h) \underset{h \to 0}{=} f(a) + f'(a)h + o(h)$$

On restreint avec les $x$ : 
$$f(x) \underset{x \to a}{=} f(a) + f'(a)(x-a) + o(x-a)$$

# Propriété : CN ponctuelle de continuité pour la dérivabilité
Si $f$ est dérivable en $a$ alors elle est continue en $a$ 
(Réciproque fausse)

# Définition : Dérivabilité à gauche et à droite
On dit que $f$ est dérivable à gauche (resp. à droite) en $a$ ssi : 
- $I \cap ]- \infty, a[ \neq 0$ (resp. $]a, +\infty[ \neq 0$)
- $f|_{I\cap]a, + \infty[}$ (resp. $f|_{]- \infty, a[}$) est dérivable en $a$

# Définition : Nombre dérivé à gauche et a droite
Cette limite est appelée le nombre dérivé à gauche de $f$ en $a$ et noté $f'(a)$ (resp. à droite)

# Propriété
- Si $a = min(I)$ (resp. $max(I)$)
    Alors le dérivabilité de $f$ en $a$ équivaut à sa dérivé à droite (resp. à gauche) en $a$
- Sinon
    La dérivabilité de $f$ en $a$ équivaut à ce qu'elle soit à la fois dérivable à gauche et à droite en $a$ et que de plus $f'_{g}(a) = f'_{d}(a)$

# Définition : Dérivabilité sur un intervalle
$f$ est dérivable sur $I$ ssi elle est dérivable en tout point de $I$. 
Si c'est le cas on appelle fonction dérivé la fonction qui, pour tout $x \in I$ fait correspondre le nombre dérivé $f'(x)$ en $f$ en $x$ 

$$f': \left\{ \begin{array}{l}
I \to \mathbb{R} \\
x \mapsto f'(x)
\end{array} \right.$$
# Extension
$f:D_{f} \to \mathbb{R}$, 
$f$ est dérivable ssi elle l'est en tout point de $D_{f}$. 

# Définition : Intervalles séparés 
Deux intervalles $I_{1}, I_{2}$ sont séparés ss'il existe $s \in \mathbb{R}$ tq
$$\forall(x, y) \in I_{1} \times I_{2}, x < s < y$$
ou 
$$\forall(x, y) \in I_{1} \times I_{2}, x > s > y$$

# Propriété : Dérivabilité sur deux intervalles séparés
Si $f:D_{f} \to \mathbb{R}$ et $D_{f}$ est réunion finie d'intervalle non triviaux séparés deux a deux, alors elle est dérivable ssi elle l'est sur chacun de ses intervalles. 

# Propriété : Dérivable $\Rightarrow$ Continue
Si $f$ est dérivable sur $I$ elle est continue sur $I$

# Théorème : Opérations de fonctions
Soient $f$ et $g$ définies sur $I$ avec $a \in I$ et $\lambda, \mu \in \mathbb{R}$. 
Si $f$ et $g$ sont dérivables en $a$ (resp sur $I$) Alors
1. La CL $\lambda f + \mu g$ l'est et
    $$(\lambda f + \mu g)'(a) = \lambda f'(a) + \mu g'(a)$$
2. Le produit $fg$ l'est :
    $$(fg)'(x) = f'(a)g(a) + f(a)g'(a)$$
3. Si $g \neq 0$ (resp $\forall x \in I, g(x) \neq 0$)
    alors $\frac{f}{g}$ l'est et
    $$\left( \frac{f}{g} \right)'(a) = \frac{f'(a)g(a) - f(a)g'(a)}{(g(a))^2}$$

# Théorème : Dérivés de fonctions composés
Soient $I$ et $J$ deux intervalles non triviaux et $f:I \to \mathbb{R}$, $g : J \to \mathbb{R}$ telles que $f(I) \subset J$ et $a \in I$. 
Si $f$ est dérivable en $a$ (resp. sur $I$)
et $g$ est dérivable en $f(a)$ (resp. sur $J$)
alors $(g \circ f)$ est dérivable en $a$ (resp sur $I$) et
$$(g \circ f)'(a) = g'(f(a))\times f'(a)$$
resp. 
$$(g \circ f)' = (g' \circ f)f'$$

# Propriétés : Fonctions trigonométriques
- Tout polynôme trigonométrique est dérivable sur $\mathbb{R}$
- Toute fonction rationnelle trigonométrique est dérivable sur son domaine de définition

# Propriétés : Fonctions trigonométriques hyperboliques
- Tout polynôme trigonométrique hyperbolique est dérivable sur son domaine de définition
- Toute fonction rationnelle trigonométrique hyperbolique est dérivable sur son domaine de définition

# Théorème des fonctions réciproques
Soit $f$,
- Continue
- Strictement monotone 
- $I$ un intervalle non trivial
- $a \in I$
Par le TFR (continu), 
$f$ admet une fonction réciproque : 
$$f^{-1} : f(I) \to \mathbb{R}$$

### Ajout d'hypothèses supplémentaires :
- $f$ est dérivable en $a$ (resp sur $I$)
- $f'(x) \neq 0$ (resp. $\forall x \in I, f'(x) \neq 0$)

alors $f^{-1}$ est dérivable en $f(a)$ (resp sur $f(I)$)
et
$$(f^{-1})'(f(a)) = \frac{1}{f'(a)} \Longleftrightarrow (f^{-1})' = \frac{1}{f' \circ f^{-1}}$$

# Lemme CN d'extremum global sur un intervalle (Utile démonstration du TH de Rolle)
Soit $f$ dérivable sur un intervalle $I = ]a, b[$ ou $a, b \in \overline{\mathbb{R}}$ 
Si $f$ admet un maximum global en $c \in ]a, b[$ alors $f'(c) = 0$
Idem pour le minimum

# Théorème de Rolle
Soit $f : [a, b] \to \mathbb{R}$, $(a<b)$,
tq : 
$$\left\{ \begin{array}{l}
f(a) = f(b) \\
f \text{ continue sur } [a, b] \\
f \text{ dérivable sur } ]a, b[
\end{array}\right.$$
Alors 
$$\exists c \in ]a, b[, f'(c) = 0$$

# Théorème de l'égalité des accroissements finis
Soit $f : [a, b] \to \mathbb{R}$, $(a<b)$,
tq : 
$$\left\{ \begin{array}{l}
f \text{ continue sur } [a, b] \\
f \text{ dérivable sur } ]a, b[
\end{array}\right.$$
Alors, 
$$\exists c \in ]a, b[, f'(c) = \frac{f(b)-f(a)}{b-a}$$

# Théorème de la limite de la dérivée
Soit $I$ un intervalle non trivial, et $a \in I$.
Soit $f$,
- continue sur $I$
- dérivable sur $I\backslash\{a\}$ 

telle que $\lim_{ a } f' = l \in \overline{\mathbb{R}}$ 
Alors
$$\lim_{ x \to a } (T_{a}f)(x) = l$$
et cela entraîne que
- Si $l \in \mathbb{R}$, $f$ est dérivable en $a$ et $f'(a) = l$
- Si $l \notin \mathbb{R}$, $f$ n'est pas dérivable en $a$, mais son graphe admet une tangente verticale en $(a, f(a))$ 

# Théorème : k-lipschitzienne et dérivée
Soit $f$ dérivable sur un intervalle non trivial $I$
Si $|f'|$ est majoré par un $k \in \mathbb{R}_{+}$, alors $f$ est k-lipschitzienne

# Propriété : Convergence par contractance
Soit $f$ contractante sur un intervalle $I$, ie k-lipschitzienne avec $k < 1$ et telle que $f(I) \subset I$. 
On suppose que $f$ admet un point fixe $\lambda \in I$.
Alors
- Ce point fixe est unique
- Toute suite définie par 
    $$\left\{ \begin{array}{l} 
    u_{0} \in I \\
    \forall n \in \mathbb{N}, u_{n} = f(u_{n})
    \end{array} \right.$$
    est bien définie et converge vers $\lambda$
- $\forall n \in \mathbb{N}, |u_{n} - \lambda| \leq k^n|u_{0}-\lambda|$


# Théorème : Existence du point fixe par complétude (Hors programme)
Si $f$ est contractante sur un intervalle fermé $I$ et $f(I) \subset I$, alors $f$ admet un point fixe

Soit $f$ défini sur in intervalle non trivial $I$ possédant un point fixe $\lambda$ intérieur a $I$ dérivable en $\lambda$ et vérifiant : 
$$|f'(\lambda)| < 1$$
Alors il existe $V \in \mathcal V(\lambda)$ tel que $V \subset I$ et un $k \in [0, 1[$ tel que 
$$\forall x \in V, |f(x) - \lambda|\leq k|x - \lambda|$$


De plus si $u_{0} \in V$ et ($\forall n \in \mathbb{N}, u_{n+1} = f(u_{n})$) alors $(u_{n})$ est bien définie et vérifie : 
$$\forall n \in \mathbb{N}, |u_{n} - \lambda| \leq k^n|u_{0}-\lambda|$$
Donc en particulier $u_{n} \to \lambda$

($\lambda$ est un point fixe attractif)

# Théorème : Variations
($I$ DOIT ETRE UN INTERVALLE)
Alors 
- $f$ est constante $\Leftrightarrow$ $f' = 0$ 
- $f$ est croissante $\Leftrightarrow$ $f' \geq 0$ 
- $f$ est décroissante $\Leftrightarrow$ $f' \leq 0$

et 
$f' > 0 \Rightarrow$ $f$ est strictement croissante
$f' < 0 \Rightarrow$ $f$ est strictement décroissante

# Propriété stricte croissance
Si $f'\geq 0$ et s'annule en un nombre fini de points alors $f$ est strictement croissante

# Définition maximum et minimum
- $f$ admet un maximum (resp. min) (global) en $a$ ssi
    $$f(a) = max(f(I))$$

- $f$ admet un maximum (resp. min) local en $a$ ssi
    il existe $V \in \mathcal V (a)$ tq $f|_{V}$ admette un maximum (resp. min)

- $f$ admet un extremum ssi $f$ admet un maximum ou un minimum (globaux ou locaux)

- Un extremum est dit strict ssi la valeur $f(a)$ n'est atteinte qu'en $a$

# Théorème : CN d'extremum local
Soit $f$ définie sur $I$ non trivial
Si $f$ admet un extremum local en un point $a$ intérieur à $I$ et $f$ est dérivable en $a$, alors $f'(a)$ 

# Définition : Point critique
Un tel point annulant la dérivé de $f$ est appelé un point critique

# Lemme
Si $g : I \to \mathbb{R}$ est continue et $g(a) > 0$, il existe $\eta>0$ tq $g|_{I \cap [a-\eta, a+\eta]} > 0$ 

# Théorème : CS d'extremum local
Soit $f$ de classe $\mathcal C^2$ sur $I$, (ie 2 fois dérivables et de dérivée seconde continue) et soit $a \in I$. 
Si $a$ est un point critique de $f$ et $f''(a)<0$ (resp. $f''(a) > 0$) alors $f$ admet un maximum (resp. minimum) local strict en $a$. 


___
# RATTRAPER
___
# Lemme 1 (Convexité)
$$\forall x, y \in \mathbb{R}, x \leq y \Rightarrow [x, y] = \{(1-\lambda)x+\lambda y;\lambda \in [0, 1]\}$$

# Lemme 2 (Convexité)
Soit $g$ une fonction affine sur $\mathbb{R}$, 
Alors
$$\forall x, y \in \mathbb{R}, \forall \lambda \in [0, 1], g((1-\lambda)x + \lambda y) = (1-\lambda)g(x) + \lambda g(y)$$

# Définition : Convexité
$$\forall x, y \in I, \forall \lambda \in [0, 1], f((1-\lambda)x + \lambda y) = (1-\lambda)f(x) + \lambda f(y)$$

# Définition
$f$ est concave ssi $f$ est non convexe

# Théorème de Jensen
Supposons que $f$ est convexe
$$\forall n \in \mathbb{N}, \forall (x_{i})_{i = 1}^n \in I^n, \forall (\lambda_{i})_{i = 1}^n \in \mathbb{R}_{+}^n, \left( \sum_{i = 1}^n \lambda_{i} = 1 \Rightarrow f\left( \sum_{i = 1}^n \lambda_{i}x_{i} \right) \leq \sum_{i=1}^n \lambda_{i}f(x_{i}) \right)$$

# Lemme
Si $x_{1}, \dots, x_{n} \in I$ et $\lambda_{1}, \dots, \lambda_{n} \in \mathbb{R}_{+}$ avec
$$\sum_{i = 1}^{n} \lambda_{i} = 1$$
Alors
$$\sum_{i=1}^{n}\lambda_{i}x_{i} \in I$$

# Théorème convexité par croissance des pentes
Si $f$ est convexe, alors pour tout $x, y, y \in I$ tels que $x<y<z$, on a 
$$ \frac{f(y) - f(x)}{y - x} \overset{1.}{\leq} \frac{f(z)-f(x)}{z - x} \overset{2.}{\leq} \frac{f(z) - f(y)}{z -y} $$

Réciproquement

- Si pour tous $x, y, z \in I$, tq $x < y < z$ l'inégalité $1.$ est vérifiée, alors $f$ est convexe
- La même pour l'inégalité $2.$

## Reformulation du Théorème
$f$ est convexe ssi
Pour tout $a \in I$ la fonction, $T_{a}f$ est croissante sur $I\backslash\{a\}$ 

# Propriété
Supposons $f$ convexe
Pour une sécante en deux points à son graphe, le graphe est : 
- En dessous de la sécante entre les deux points d'intersection
- Au dessus de la sécante a l’extérieur des deux points d'intersection

# Définition de stricte convexité (Hors programme)
Lorsque
$$\forall x \neq y, \forall \lambda \in ]0, 1[, f((1-\lambda)x+\lambda y)<(1-\lambda)f(x)+\lambda f(y)$$

# Propriété : Convexité par variation de la dérivé
Si $f$ (définie sur $I$) est dérivable
alors elle est convexe ssi $f'$ est croissante

# Propriété : Convexité par position des tangentes
Soit $f$ dérivable sur $I$, 
Alors $f$ est convexe ssi son graphe est au dessus de ses tangentes

# Propriété : Convexité par le signe de la dérivée seconde
Soit $f$ deux fois dérivable sur $I$,
Alors $f$ est convexe ssi $f'' \geq 0$ 

# Propriété : Stricte convexité (Dérivée simple)
Soit $f$ dérivable sur $I$,
Alors $f$ est strictement convexe ssi $f'$ est strictement croissante 

# Propriété : Stricte convexité (Dérivée seconde)
Soit $f$ deux fois dérivable sur $I$, 
Si $f''>0$ Alors $f$ est strictement convexe


# Définition : Classes
Pour $k\in \mathbb{N}$,
On dit que $f$ est de classe $\mathcal C^k$ sur $I$
ssi
elle est $k$ fois dérivable sur $I$
et $f^{(k)}$ est continue sur $I$

On dit que $f$ est de classe $C^\infty$ sur $I$ 
ssi
elle est indéfiniment dérivable ce qui n'équivaut pas a ce que $f$ soit classe $\mathcal{C}^k$ pour tout $k \in \mathbb{N}$

On note $\mathcal{C}^k(I)(= \mathcal{C}_{\mathbb{R}}^k(I))$
l’ensemble des fonctions de classe $\mathcal{C}^k$ sur $I$. 

# Extension 
Si $f : D_{f} \to \mathbb{R}$,
On dira qu'elle est de classe $\mathcal{C}^k$ sur $D_{f}$ 
ssi 
elle est $k$ fois dérivable et sa $k^{ieme}$ dérivée est continue sur $D_{f}$ lorsque $k \in \mathbb{N}$
et
de classe $\mathcal{C}^\infty$
ssi
elle est indéfiniment dérivable sur $D_{f}$

# Théorèmes : Opérations sur les classes
$\mathcal{C}^k(I)$ est stable par CL et produit. 
De plus si $f\in \mathcal{C}^k(I)$ ne s'annule pas sur $I$ alors $\frac{1}{f} \in \mathcal{C}^k(I)$

# Corollaire
Les fonctions polynômes et rationnelles sont de classe $\mathcal{C}^\infty$.

# Corollaire du Corollaire
$\ln \in \mathcal{C}^\infty(\mathbb{R}_{+}^*)$ puisque sa dérivée est une fonction rationnelle. 

# Théorème Composition de classes
Si $f \in \mathcal{C}^k(I)$, $g \in \mathcal{C}^k(J)$ et $f(I) \subset J$ 
Alors $g \circ f \in \mathcal{C}^k(I)$

# Théorème : Corollaire des précédents
Les fonctions :
- polynômes
- trigonométriques
- rationnelles trigonométriques
- polynômes trigonométriques
- polynômes trigonométriques hyperbolique
- rationnelles trigonométriques hyperbolique

sont de classe $C^\infty$

# Théorème : réciproque d'une fonction de classe $\mathcal C^k$
Supposons $k \geq 1$, 
si $f \in \mathcal{C}^k(I)$ et $f'$ ne s'annule pas sur $I$
Alors $f^{-1} \in \mathcal{C}^k(f(I))$

# Propriété : Fonctions puissances de classe $\mathcal C^k$
$$\forall \alpha \in \mathbb{R}, (x\mapsto x^\alpha) \in \mathcal{C}^\infty(\mathbb{R}_{+}^*)$$

# Théorème : Prolongement de classe $\mathcal{C}^k$ 
Soit $f\in \mathcal C^k(I\backslash\{a\})$,
Si pour tout $0\leq p\leq k$, $f^{(p)}$ admet une limite finie 
Alors $f$ admet un unique prolongement de classe $\mathcal C^k$

# Définition de la dérivabilité complexe en $a \in I$
$f$ est dérivable en $a$ ssi $(T_{a}f)$ admet une limite finie en $a$ 
$(T_{a}f)$ est complexe

# Proposition
$f$ est dérivable en $a$ ssi $\mathrm{Re}f$ est dérivable en $a$ et $\mathrm{Im}f$ est dérivable en $a$
et si c'est le cas, 
$$f'(a) = (\mathrm{Re}f)'(a)+ i(\mathrm{Im}f)'(a)$$

# Théorème : Inégalité des accroissements finis complexe
Si $f$ est dérivable sur $I$,
Soit $x\in I$, et pour un certain $k \in \mathbb{R}_{+}$,
Si $|f'(x)| \leq k$
Alors $f$ est k-lipschitzienne

# Théorème : Opération sur les fonctions dérivables et les compositions "possibles"
Revoir le chapitre sur les primitives

# Définition
Identique a celle des fonctions réelles, 
###### Notation : $\mathcal{C}_{\mathbb{C}}^k(I)$

# Propriété
$$f \in \mathcal{C}_{\mathbb{C}}^{k}(I) \Leftrightarrow\mathrm{Re}f, \mathrm{Im}f \in \mathcal{C}_{\mathbb{R}}^k(I)$$

# Conséquence
Les fonctions polynômes ou rationnelles à coefficient complexes (à variable réelle) sont de casse $\mathcal{C}^\infty$.

# Composition
Les résultats du début du chapitre sur les primitives s'étendent facilement aux fonctions de classe $\mathcal{C}^k$
(A la source) 
(et au but avec  $\exp$)

# Théorème de prolongement de classe $\mathcal{C}^k$ 
Il s’énonce de la même manière que pour $\mathbb{R}$ 