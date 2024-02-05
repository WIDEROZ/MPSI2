# Topologie dans $\mathbb{R}$ et $\overline{\mathbb{R}}$
# Propriété 
Une partie qui admet un plus grand élément admet une borne supérieure qui est égale à ce plus grand élément.

# Définition
Si $A \subset \mathbb{R}$ admet une borne supérieure b alors
$$b \in A \Leftrightarrow b = max(A)$$

# Propriété
Si $A \subset \mathbb{R}$ admet une borne inférieure et supérieure alors : 
$$inf(A) \leq sup(A)$$
égaux si A est un singleton

# Propriété de la borne supérieure / inférieure dans $\mathbb{R}$
- Toute partie non vide et majorée de $\mathbb{R}$ admet une borne supérieure.
- Toute partie non vide et minorée de $\mathbb{R}$ admet une borne inférieure.

# Définition de $\overline{\mathbb{R}}$
On définit : $\mathbb{R} \cup \{ - \infty, + \infty \}$ avec une relation d'ordre prolongeant R tel que : 
- $-\infty$ < $\mathbb{R}$
- $+ \infty$ > $\mathbb{R}$

# Propriété de la borne supérieure / inférieure dans $\overline{\mathbb{R}}$ 
Toute partie de A admet une borne supérieure
Pour $A \subset \mathbb{R}$ :
- Si $A \neq \varnothing$ et A est majorée, $sup_{\overline{\mathbb{R}}}(A) = sup_{\mathbb{R}}(A)$
- Si A est non majorée, $sup_{\overline{\mathbb{R}}}(A) = + \infty$
- $sup_{\overline{\mathbb{R}}}(\varnothing) = - \infty < + \infty = inf_{\overline{\mathbb{R}}}(\varnothing)$ 


# Théorème
$\mathbb{N}$ n'est majoré par aucun réel

# Archimédianité de $\mathbb{R}$
$$\forall a>0, \forall b \in \mathbb{R}, \exists n \in \mathbb{N}, b < na$$
# Propriétés
- Une partie de $\mathbb{Z}$ est majoré dans $\mathbb{R}$ ssi elle est majoré dans $\mathbb{Z}$
- Toute partie bornée dans $\mathbb{Z}$ bornée dans $\mathbb{R}$
- Toute partie de $\mathbb{Z}$ non vide et majorée dans $\mathbb{R}$ admet un plus grand élément

# Définition de la partie entière supérieure et inférieure

$$\forall x \in \mathbb{R}, \lfloor x \rfloor = max\{n \in \mathbb{Z}|n\leq x\} = max(\mathbb{Z}\cap]- \infty, x]) $$

$$\forall x \in \mathbb{R}, \lceil x \rceil = min\{n \in \mathbb{Z} | x \leq n\}=min(\mathbb{Z} \cap [x, + \infty[)$$
# Propriétés des parties entières
$$\forall x \in \mathbb{Z}, \lfloor x \rfloor = \lceil x \rceil = x$$
$$\forall x \in \mathbb{R} \backslash \mathbb{Z},  = \lfloor x \rfloor < x < \lceil x \rceil $$


$$\forall x \in \mathbb{R} \backslash \mathbb{Z}, \lfloor x \rfloor = \lceil x \rceil - 1 $$
$$\forall x \in \mathbb{R} \backslash \mathbb{Z}, \lceil x \rceil = \lfloor x \rfloor + 1 $$



Pour $x \in \mathbb{R}$
- $\lfloor x \rfloor$ est l'unique entier $n$ tel que $n \leq x < n+1$
- $\lceil x \rceil$ est l'unique entier $n$ tel que $n-1<x\leq n$

# Définition des approximations décimales
L'approximation décimale de $x$ par default a $10^{-k}$ près est définie par : 
$$max\left\{  \frac{k}{10^n};k \in \mathbb{Z} \text{ et } \frac{k}{10^n}\leq x  \right\} = max\left( \left( \frac{1}{10^n} \mathbb{Z} \right) \cap ]- \infty, x] \right) = \frac{ \lfloor 10^n  x \rfloor}{10^n} $$

L'approximation décimale de $x$ par excès a $10^{-k}$ près est définie par : 
$$min\left\{ \frac{k}{10^n}; k\in \mathbb{Z} \text{ et } x\leq \frac{k}{10^n} \right\} = min\left( \left( \frac{1}{10^n} \mathbb{Z} \right) \cap [x, + \infty[ \right) = \frac{\lceil 10^n x \rceil}{10^n}$$

# Théorème : densité de $\mathbb{Q}$ et $\mathbb{R} \backslash \mathbb{Q}$ dans $\mathbb{R}$ 
Tout intervalle ouvert non vide dans $\mathbb{R}$ contient des rationnels et des irrationnels
On dit que $\mathbb{Q}$ et $\mathbb{R}\backslash\mathbb{Q}$ sont denses dans $\mathbb{R}$

# Définition de la convexité
Une partie $A$ de $\mathbb{R}$ est convexe ssi : 
$$ \forall x,y \in A, (x\leq y \Rightarrow [x, y] \subset A) $$

# Théorème
Les parties convexes de $\mathbb{R}$ sont les intervalles

___
# SUITES
# Propriétés
Pour $u = (u_{n})_{n} \in \mathbb{R}^{\mathbb{N}}$,
$$ \text{u est majorée} \Leftrightarrow \forall n \in \mathbb{N}, \exists M \in \mathbb{R}, u_{n} \leq M $$
$$ \text{u est croissante} \Leftrightarrow \forall n \in \mathbb{N}, u_{n} \leq u_{n+1} \Leftrightarrow \forall n\in \mathbb{N}, (u_{n}) \uparrow $$
$$ \text{u est stationnaire} \Leftrightarrow \exists n_{0} \in \mathbb{N}, \forall n\geq n_{0}, u_{n} = u_{n_{0}} $$
$$ \text{u est périodique} \Leftrightarrow \exists k \in \mathbb{N}^*, \forall n \in \mathbb{N}, u_{n+k} = u_{n}$$
On note $|u|$ la suite : $(|u_{n}|)_{n}$
On a alors : 
$$ \text{u est bornée} \Leftrightarrow \text{|u| est majorée} \Leftrightarrow \exists M \in \mathbb{R}_{+}, \forall n \in \mathbb{N}, |u_{n}|\leq M $$

# Définition de la limite d'une suite réelle
Soit $(u_{n}) \in \mathbb{R}^{\mathbb{N}}$ et $l \in \mathbb{R}$ 
On note :
$$u_{n} \underset{n \to + \infty}{\longrightarrow} l$$
Lorsque :
$$\forall \epsilon > 0, \exists N \in \mathbb{N}, \forall n \geq N, |u_{n} - l| \leq \epsilon$$
Ou encore :
$$\forall \epsilon > 0, \exists N \in \mathbb{N}, \forall n \geq N, u_{n} \in [l-\epsilon, l + \epsilon]$$

# Propriété
Pour $(u_{n}) \in \mathbb{R}^\mathbb{N}$ et $l \in \mathbb{R}$, 
$$u_{n} \longrightarrow l \Leftrightarrow |u_{n} - l| \longrightarrow 0$$

# Propriété
Toute suite convergente est bornée

# Définition de la limite infinie
Soit $(u_{n}) \in \mathbb{R}^\mathbb{N}$,
On note : 
$$u_{n} \underset{n \to + \infty}{\longrightarrow} + \infty$$
Lorsque :
$$ \forall A \in \mathbb{R}, \exists N \in \mathbb{N}, \forall n \geq N, u_{n} \geq A$$

# Théorème de l'unicité de la limite
Si une suite admet une limite $l \in \overline{\mathbb{R}}$ alors elle est unique

# Opérations sur les limites réelles
$$\text{Pour}  \lim_{  n \to + \infty } u_{n} = l \space \text{ et} \lim_{ n \to + \infty } v_{n} = l' $$

$$\left. \begin{array}{|c | c|} 
\hline
l  & -\infty & + \infty & + \infty & \pm \infty & \pm \infty & \mathbb{R} & \mathbb{R} & \mathbb{R}   \\ \hline
l' & -\infty & + \infty & - \infty & 0^+ \text{ où } 0^- & \mathbb{R} & \pm \infty & \mathbb{R}\backslash \{0\} & 0^+ \text{ où } 0^- \\ \hline
u + v & -\infty & + \infty & F.I. & \pm \infty & \pm \infty & \pm \infty &l + l' & l + l' \\ \hline
u \times v & + \infty & + \infty & - \infty & F.I. & sgn(l) \times sgn(l') \space \infty &  sgn(l) \times  sgn(l') \space \infty  & l \times l' & l \times l' \\ \hline
\frac{u}{v} & F.I. & F.I. & F.I. & sgn(l) \times sgn(l') \space \infty & sgn(l) \times sgn(l') \space \infty & 0^+ \text{ où } 0^- & \frac{l}{l'} & sgn(l) \times sgn(l') \space \infty
\\ \hline
\end{array}\right.$$




$$\text{Pour } \lim_{ n \to \infty } n^\alpha = l $$
$$ \begin{array}{|c | c|}
\hline
\alpha \in & l\\ \hline
]- \infty, 0[ & 0 \\ \hline
\{0\} & 1 \\ \hline
]0, + \infty[ & + \infty
\\ \hline
\end{array} $$


# Linéarité de la limite
Pour $(u_{n})$, $(v_{n})$ $\in \mathbb{R}^\mathbb{N}$ avec des limites finies et $\lambda$, $\mu$ $\in \mathbb{R}$
$$\lim(\lambda u + \mu v) = \lambda \lim u + \mu \lim v $$

# Définition des limites par valeurs supérieures / inférieures
Pour $(u_{n}) \in \mathbb{R}^\mathbb{N}$ et $l \in \mathbb{R}$
On dit que u tend vers l par valeur supérieure lorsque
$$\lim u = l^+ \Leftrightarrow u_{n} \underset{>}{\longrightarrow} l \Leftrightarrow \exists N \in \mathbb{N}, \forall n\geq N, u_{n} > l $$

Réécriture 
$$\lim u = l^+ \Leftrightarrow \forall \epsilon > 0, \exists N \in \mathbb{N}, \forall n\geq N, l < u_{n} \leq l-\epsilon$$

# Théorème du passage a la limite dans une inégalité large
Soient $(u_{n})$, $(v_{n})$ $\in \mathbb{R}^\mathbb{N}$ 
Si $\lim u = l \in \overline{\mathbb{R}}$ et $\lim v = l' \in \overline{\mathbb{R}}$ alors
$$\forall n \in \mathbb{N}, u_{n}\leq v_{n} \Rightarrow l\leq l'$$

# Théorème de convergence par encadrement
Soient $(u_{n}), (v_{n}), (w_{n}) \in \mathbb{R}^\mathbb{N}$
Si $\lim u = \lim v = l \in \mathbb{R}$ alors
$$\forall n \in \mathbb{N}, u_{n} \leq w_{n} \leq v_{n} \Rightarrow w \longrightarrow l $$

# Théorème de divergence par minoration
Soient $(u_{n}), (v_{n}) \in \mathbb{R}^\mathbb{N}$ 
$$\forall n \in \mathbb{N}, u_{n} \leq v_{n} \Rightarrow (\lim u = + \infty \Rightarrow \lim v = +\infty)$$

(Marche avec $-\infty$)

# Théorème de la limite monotone
Toute suite réelle croissante et majorée (décroissante et minorée) converge. 
Toute suite réelle croissante et non majorée (décroissante et non minorée) tends vers $+\infty$ ($-\infty$). 

# Définition des suites adjacentes
Deux suites sont adjacentes si elles vérifient : 
- $u \uparrow$
- $v\downarrow$
- $v_{n} - u_{n} \underset{n \to + \infty}{\longrightarrow} 0$

# Théorème des suites adjacentes
Deux suites adjacentes sont convergentes et ont la même limite

# Lemme
Si $u$ est croissante et converge vers $l$ alors
$$\forall n \in \mathbb{N}, u_{n}\leq l$$

# Propriété sur la position des suites adjacentes
Si $u$ et $v$ sont adjacentes et l est leur limite commune,
$$\forall n, m \in \mathbb{N}, u_{n} \leq l \leq w_{n}$$

# Définition d'une suite extraite
Une suite extraite de la suite : $u = (u_{n})_{n \in \mathbb{N}}$ est obtenue avec une application strictement croissante $\phi : \mathbb{N} \to \mathbb{N}$. La suite extraite correspondant a $\phi$ est alors la suite : 
$$ u \circ \phi = (u_{\phi(n)})_{n \in \mathbb{N}} $$
On appelle extractrice l'application $\phi$ strictement croissante de $\mathbb{N}$ vers $\mathbb{N}$ 

# Proposition, extractions successives
Une suite extraite (ici $\Phi$) d'une suite extraite de u (ici $u \circ \phi$) est une suite extraite de u. 
$$(u \circ \phi) \circ \Phi = u \circ \phi \circ \Phi$$

# Théorème : Stabilité de la limite par extraction
Si une suite $u$ tends vers une limite $l \in \overline{\mathbb{R}}$, alors toute suite extraite de $u$ tends vers $l$.

# Corollaire de la stabilité de la limite par extraction
Si deux suites extraites de $u$ ont une limite différente alors $u$ n'a pas de limite. 

# Théorème de convergence par les suites extraites de rang pair et impair
Soit $u \in \mathbb{R}^\mathbb{N}$
Si ses suites extraites de rang pair et impair : $(u_{2k})_{k}$ et $(u_{2k+1})_{k}$ tendent vers une même limite $l \in \overline{\mathbb{R}}$, alors la suite tend aussi vers $l$. 

# Théorème de Bolzano Weierstrass Réel
De toute suite bornée on peut en extraite une suite convergente. 

# Définition de la densité d'une partie de $\mathbb{R}$ dans $\mathbb{R}$
Soit $A \subset \mathbb{R}$
On dit que A est dense ssi elle rencontre tout intervalle ouvert non vide $I$

# Propriété de la densité d'une partie de $\mathbb{R}$ dans $\mathbb{R}$
Soit $A \subset \mathbb{R}$
A est dense dans $\mathbb{R}$ ssi
$$\forall x \in \mathbb{R}, \exists(a_{n}) \in A^{\mathbb{N}}, a_{n} \underset{n \to + \infty}{\longrightarrow} x $$

# DEMANDER A QQN LE COURS
# Propriété
Soit $A \subset \mathbb{R}$ bornée non vide et $b \in \mathbb{R}$  Alors
$$b = sup(A) \Leftrightarrow \left\{ \begin{array}{l} \text{b marjore a} \\
\exists(a_{n}) \in A^{\mathbb{N}}, a_{n} \to b \end{array} \right. $$

# Propriété (Cas infini)
Soit $A \subset \mathbb{R}$
Alors A est non majoré ssi
$$(\exists(a_{n}) \in A^{\mathbb{N}}, a_{n} \to + \infty)$$

# Propriété
Soit $f$ une fonction réelle
Si $E \subset D_{f}$ est stable par $f$, i.e. vérifiant : $f(E) \subset E$ alors toute suite définie par $u_{0} \in E$ et la relation de récurrence : 
($\forall n \in \mathbb{N}, u_{n+1} = f(u_{n})$) est bien définie pour tout $\mathbb{N}$ et tous ses termes sont des éléments de $E$

# Théorème de la limite fixe
Soit $f$ une fonction réelle
Si une suite vérifiant $\forall n \in \mathbb{N}, u_{n+1} = f(u_{n})$ est convergente de limite $l$ et la fonction $f$ est continue en $l$, alors $l$ est un point fixe de $f$ i.e. $f(l) = l$

# Propriété : monotonie par croissance
Soit $f$ une fonction réelle
Si $f$ est croissante sur une partie de $E \subset D_{f}$ stable par $f$, toute suite $u$ vérifiant $\forall n \in \mathbb{N}, u_{n+1} = f(n)$ et $u_{0} \in E$ est monotone.

# Propriété Hors programme
Soit $f$ une fonction réelle
Si $f \downarrow$ et $E \subset D_{f}$ et stable par $f$ alors pour u vérifiant $\forall n \in \mathbb{N}, u_{n+1} = f(n)$ et $u_{n} \in E$, les suites $(u_{2k})$ et $(u_{2k+1})$ sont de monotonies "opposées"

# Définition de la limite de suites a valeur complexes
Soit $u \in \mathbb{C}^\mathbb{N}$ et $l \in \mathbb{C}$.
On dit que $u_{n}$ tend vers $l$ ssi
$$\forall \epsilon > 0, \exists N \in \mathbb{N}, \forall n \geq N, |u_{n}-l|\leq \epsilon $$
On dit alors que la suite est convergente

# Propriété de la limite par partie réelle et imaginaire
Pour $u \in \mathbb{C}^\mathbb{N}$ et $l \in \mathbb{C}$, 
$$u \longrightarrow l \Leftrightarrow (Re(u) \longrightarrow Re(l) \text{ et } Im(u) \longrightarrow Im(l)  )$$

# Théorème : unicité de la limite
Si une suite complexe admet une limite $l \in \mathbb{C}$, alors cette limite est unique

# Propriété
Pour $a \in \mathbb{C}$, la suite géométrique $(a^n)_{n}$ converge ssi $a = 1$ ou $|a| < 1$. 

# Opération sur les limites complexes
$$ \text{Pour } (u_{n}), (v_{n}) \in \mathbb{C}^\mathbb{N} \text{ tel que } \lim u = l \in \mathbb{C} \text{ et } \lim v = l' \in \mathbb{C} $$
$$\text{Pour } \lambda, \mu \in \mathbb{C}$$
$$\text{On a alors :}$$
$$\begin{array}{| c | c |}
\hline
\lambda u + \mu v & \lambda l  + \mu l' \\ \hline
u \times v & l \times l' \\ \hline
\frac{u}{v} & \frac{l}{l'}
\\ \hline
\end{array}
\begin{array}{l}
 \\
 \\
\text{ Si } l' \neq 0 \text{ et } v_{n} \neq 0
\end{array}
$$

# Définition des suites bornées complexes
Soit $(u_{n}) \in \mathbb{C}^\mathbb{N}$, 
$u$ est bornée ssi :
$$\exists M \in \mathbb{R_{+}}, \forall n \in \mathbb{N}, |u_{n}|\leq M$$

# Théorème de Bolzano Weierstrass complexe
De toute suite complexe bornée, on peut en extraire une suite convergente. 