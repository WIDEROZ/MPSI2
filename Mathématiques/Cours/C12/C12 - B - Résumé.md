Soit $f \in \mathbb{R}^{D_{f}}$, 
Soit $I$ un intervalle non trivial, 

# Définition de la continuité en un point
On dit que $f$ est continue en $a$ ssi elle admet une limite en $a$ 

# Définition continuité en un point sur une restriction
Soit $a \in D_{f}$ 
Si il existe $\eta > 0$ tel que $D_{f} \cap [a-\eta, a + \eta]$ soit un intervalle non trivial
On dit que $f$ est continue en $a$ ssi $f|_{_{D_{f}\cap [a-\eta, a+\eta]}}$ l'est. 

# Propriété
La fonction $f$ est continue en $a$ ssi
$$\lim_{ \underset{\neq}{x \to a} } f(x) = f(a) $$

# Définition de la continuité a gauche et a droite
Soit $l \in \mathbb{R}$ et $a \in \mathbb{R}$, 
$f$ est continue a droite : 
$$\lim_{a^+ } f = l \Leftrightarrow \forall \epsilon > 0 , \exists \alpha >0, \forall x \in I, (a < x \leq a + \alpha \Rightarrow |f(x)-l| \leq \epsilon) $$
$f$ est continue à gauche : 
$$\lim_{a^- } f = l \Leftrightarrow \forall \epsilon > 0 , \exists \alpha >0, \forall x \in I, (a-\alpha \leq x < a \Rightarrow |f(x)-l| \leq \epsilon) $$

# Définition du prolongement par continuité
Si $f$ est définie sur $I \backslash \{a\}$ et possède une limite $l$ en $a$.
On définit alors le prolongement par continuité de $f$ en $a$ :
$$\tilde{f}|_{_{I\backslash\{a\}}} = f$$ et $\tilde{f}(a) = l$
Cette fonction est alors continue en $a$

# Propriété  : Caractérisation séquentielle
Soit $a \in I$,
$D_{f} = I$
$f$ est continue en $a$ ssi :
$$\forall(u_{n})\in I^\mathbb{N}, (\lim_{ n \to \infty } u_{n} = a \Rightarrow \lim_{ n \to \infty } f(u_{n}) = f(a)  ) $$

# Théorème de la limite fixe
Soit $l \in \mathbb{R}$, 
Soit $u = (u_{n}) \in \mathbb{R}^{\mathbb{N}}$, définie par :
$$\left\{ \begin{array}{l}
u_{0} \in I  \\
\forall n \in \mathbb{N}, \space u_{n+1} = f(u_{n})
\end{array} \right.$$
Si $u$ est bien définie pour tout $n \in \mathbb{N}$ (si $f(I) \subset I$)

Si $\lim u = l$ et $f$ est continue en $l$ alors : 
$$f(l) = l$$

# Théorème : Opération de fonctions pour la continuité en un point
Soit $f, g \in \mathbb{R}^I$ et $a \in I$, 
- Pour tout $\lambda, \mu \in \mathbb{R}$, $\lambda f + \mu g$ est continue en $a$
- $fg$ est continue en $a$
- Si $g(a) \neq 0$, il existe $\alpha > 0$ tel que $\frac{f}{g}$ soit définie sur $I\cap]a - \alpha, a + \alpha[$ et elle est continue en $a$

# Théorème : Composition de continuité
Soit $g \in \mathbb{R}^J$ et $f \in \mathbb{R}^I$ telle que $f(I) \subset J$ puis $I$ et $J$ des intervalles non triviaux
Soit $a \in I$, 
Si $f$ est continue en $a$ et $g$ est continue en $f(a)$ alors
$g \circ f$ est continue en $a$ 

# Définition
On dit que $f$ est continue sur $I$ ssi $f$ est continue en tout point de $I$

# Théorème
Les théorèmes précédents (opération de fonctions continues en un point et compositions de fonction continues en un point) fonctionnent

# Définition
On dit que $f$ est continue si
Pour tout $a \in D_{f}$, $f$ est continue en $a$ 
(càd il existe $\eta > 0$ tel que $D_{f} \cap [a-\eta, a+ \eta]$ soit un intervalle non trivial et que $f|_{_{D_{f}\cap[a-\eta, a+\eta]}}$ est continue en $a$)

# Propriété : Continuité de fonctions particulières
- Polynômes : 
  Toute fonction polynôme est continue sur $\mathbb{R}$
  Toute fonction rationnelle est continue sur son intervalle de définition
- Fonctions trigonométriques :
  $\sin$ et $\cos$ sont continues sur $\mathbb{R}$ 
  Tout polynôme trigonométrique est continu sur $\mathbb{R}$
  Toute fonction rationnelle trigonométrique est continue sur son intervalle de définition

# Définition : k-lipschitzienne
Pour $k \in R_{+}$, on dit que $f$ est lipschitzienne de rapport $k$ sur $I$ ssi
$$\forall(x, y) \in I^2, |f(x)-f(y)|\leq k|x-y|$$

# Propriété : Continuité lipschitzienne
Toute fonction lipschitzienne est continue

# Théorème des valeurs intermédiaires (TVI)
$f$ est continue sur $[a, b]$ où $a < b$ telle que $f(a)f(b) \leq 0$
Alors il existe $c \in [a, b]$ tel que $f(c) = 0$ 

##### Réécriture :
- $f$ est continue sur $[a, b]$ où $a < b$
- $f(a)f(b)\leq 0$ 

Alors il existe $c \in [a, b]$ tel que $f(c) = 0$ 

# Corollaire du TVI
- $f$ est continue sur $[a, b]$ où $a < b$
- $f(a)f(b)\leq 0$ 
- $f$ est strictement monotone

Alors il existe un unique $c \in [a, b]$ tel que $f(c) = 0$ 

# Théorème de la bijection
Si
- $f$ est continue
- $f$ est strictement monotone

Alors
$f$ induit une bijection $\tilde{f}:I\to f(I)$

On peut décrire $f(I)$ suivant des cas différents :
- Si $f$ est strictement croissante : 
  - Si $I = [a, b[$ alors $f(I) = [a, \lim_{b} f[$ 

etc...

# Théorème des fonctions réciproques (TFR)
Si
- $I$ un intervalle
- $f$ est continue
- $f$ est strictement monotone sur $I$

Alors
Il existe une unique fonction continue et strictement monotone (de même sens que $f$) sur $f(I)$ noté $f^{-1}$ et appelée fonction réciproque de $f$ telle que : 
$$\forall x \in I, f^{-1}(f(x)) = x  \space \text{ et } \space \forall y \in f(I), f(f^{-1}(y)) = y $$

# Théorème : Stricte monotonie et injectivité
Si
$f$ est continue sur $I$
Alors
$f$ est injective ssi $f$ est strictement monotone

# Lemme
Soit $f$ injective, et continue sur $I$, 
Alors pour tout $x \in I$, la fonction $Txf: I\backslash \{x\}\to \mathbb{R}$ définie par : $Txf(y) = \frac{f(y)-f(x)}{y-x}$ est non nulle et de signe constant sur $I \backslash \{x\}$. On note $\mathrm{SP}(x) \in \{\pm 1\}$ ce signe. 

# Théorème des bornes atteintes
Si $f$ est continue sur un segment
Alors elle est bornée et "atteint" ses bornes. 
($f$ admet un minimum et un maximum globaux)

# Théorème de l'image d'un segment par une application
L’image d’un segment par une application continue est un segment

___
Soit $f:I\to \mathbb{C}$
(où $I$ est un intervalle non trivial et $a$ une borne de $I$)
Soit $l \in \mathbb{C}$, 
# Définition de la limite complexe
Pour $a \in \mathbb{R}$, 
$$\lim_{ x \to a } f(x) = l \Leftrightarrow \forall \epsilon>0, \exists \alpha > 0, \forall x \in I, (|x-a|\leq \alpha \Rightarrow |f(x)-l| \leq \epsilon)$$

Pour $a = + \infty$, 
$$\lim_{ x \to +\infty } f(x) = l \Leftrightarrow \forall \epsilon > 0, \exists A \in\mathbb{R}, \forall x \in I, (x \geq A \Rightarrow |f(x)-l|\leq \epsilon) $$

Pour $a = - \infty$, 
$$\lim_{ x \to - \infty } f(x) = l \Leftrightarrow \forall \epsilon >0, \exists B \in \mathbb{R}, \forall x \in I, (x \leq B \Rightarrow |f(x)-l|\leq \epsilon) $$

# Proposition : Décomposition de la limite complexe
$$\lim_{ a } f = l \Leftrightarrow (\lim_{ a } \mathrm{Re}(f) = \mathrm{Re}(l) \text{ et } \lim_{ a } \mathrm{Im}(f) = \mathrm{Im}(l)  ) $$

# Définition de la continuité complexe
$f$ est continue en $a$ ssi $\lim_{ a } f$ existe

# Propriétés : Opérations sur les limites et fonctions continues
La même que dans $\mathbb{R}$ 

# Propriété composition a la source
On a aussi de même le fait qu'en composant $f$ continue en $a$ à la source par une fonction continue en $b$ 
$h : J \to \mathbb{R}$ tel que $h(J) \subset I$ et $h(b) = a$
On a alors : $f \circ h$ est continue en $b$ 

# Propriété : Composition au but
Si $f$ est continue en a (resp sur $I$) 
Alors $|f|$ et $\exp \circ f$ le sont aussi
(et aussi $\mathrm{Re}(f)$ et $\mathrm{Im}(f)$, ce qu'on a vu plus haut)

# Théorème
L’image d’un segment par une fonction continue à valeurs complexes est une partie bornée de $\mathbb{C}$. 
i.e. : 
$$\exists M \in \mathbb{R}_{+}, \forall x \in [a, b], |f(x)|\leq M$$
