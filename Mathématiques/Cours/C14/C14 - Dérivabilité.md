# I. Nombre dérivé, fonction dérivé
## Introduction
Soit $I$ in intervalle non trivial,
Soit $a \in I$,
Soit $f:I \to \mathbb{R}$, 

Excalidraw 1.
Pente de la sécante : 
$$\frac{\Delta y}{\Delta x} = \frac{f(x)-f(a)}{x-a}\to l$$
Cas où $l = + \infty$ : Tangente verticale.


## 1.
#### Définition
On appelle taux d’accroissement de $f$ en $a$ la fonction : 
$$(T_{a}f)(x) = \left\{ \begin{array}{l}
I\backslash\{a\} \to \mathbb{R}\\
x \mapsto (T_{a}f)(x) = \frac{f(x)-f(a)}{x-a}
\end{array} \right.$$

Si on fait le changement de variable "$x = a+h$"
On obtiens une autre fonction taux d'accroissement : 
$\forall h \in (I-a)\backslash \{0\}$, 
$$(\tilde{T}_{a}f)(h) = \frac{f(a+h)-f(a)}{h}$$

#### Définition
La fonction $f$ est dérivable an $a$ ssi $(T_{a}f)(x)$ (resp $(\tilde{T}_{a}f)(h)$) admet une limite finie quand $x$ tend vers $a$ (resp. $h$ tend vers $0$)

Dans ce cas cette limite est appelée de nombre dérivé de $f$ en $a$ et est noté $f'(a)$ 

##### Remarque
Plus besoin de préciser $x \underset{\neq}{\to} a$ car $T_{a}f$ n'est pas définie en $a$

#### Remarque utile
Lorsque $f$ est dérivable en $a$, $T_{a}f$ est prolongeable en une fonction continue en $a$ en posant : 
$$(T_{a}f)(a) = f'(a)$$


##### Remarque
Comme la dérivabilité est définie par une limite, c'est une notion locale ie si $\eta > 0$, $f$ est dérivalbe en $a$ ssi $f|_{[a-\eta, a+\eta]\cap I}$ l'est

#### Définition
Soit $f:D_{f}\to \mathbb{R}$ et $a \in D_{f}$. 
S'il existe $\eta > 0$ tq $D_{f} \cap [a - \eta, a + \eta]$ 
Soit un intervalle non trivial, on dit que $f$ est dérivable en $a$ ssi $f|_{[a-\eta, a+\eta]\cap D_{f}}$ l'est. 

#### Exemple
$\cos$ est dérivable en $0$ et $\cos'(0) = 0$ 
Soit $x \in [-\frac{\pi}{2}, \frac{\pi}{2}]\backslash \{0\}$, 
On a : 
$$|(T_{0}\cos)(x)| = \left|\frac{\cos(x)-1}{x}\right| \leq \frac{|\cos x-1|}{|x|} \times (\cos x + 1)$$
car $\cos(x) \geq 0$ Donc $\cos x + 1 \geq 1$
$$|(T_{0}\cos)(x)| \leq \frac{|\sin^2(x)|}{|x|}=\left( \frac{|\sin x|}{|x|} \right)^2 |x|$$


Comme $\underset{\underset{\neq}{x\to 0}}{x \to 0}$,
$\underset{x\to0}{ (T_{0}\cos)(x) \to 0}$ 
Ainsi $\cos$ est dérivable en $0$
et $\cos'(0) = 0$

#### Exemple
$\sin$ est dérivable en $0$ et $\sin'(0) = 1$ 
Commençons par mq : 
$$\forall x \in ]-\frac{\pi}{2}, \frac{\pi}{2}[, |x| \leq |\tan x|$$
On admet que la longueur d'une ligne brisée joignant 2 points d'un cercle est supérieure ou égale à la longueur de l"arc le plus court les joignant. 

Excalidraw 2.
On a alors : $2|\tan x| \geq 2|x|$ Donc $|\tan x|\geq |x|$

Soit $x \in ]0, \frac{\pi}{2}[$, 
Alors, 
$$|(T_{0}\sin)(x)-1| = \left|\frac{\sin x}{x} -1\right| = 1-\frac{\sin x}{x}$$
Comme $x > 0$ et $\tan x > 0$, $\tan x \geq x$
Et $\cos x > 0$, donc $\sin x \geq x\cos x$

Donc,
$$|(T_{0}\sin)(x)-1| \leq 1- \cos x \underset{x \to 0}{\longrightarrow} 0$$
Donc, 
$$(T_{0}\sin)(x) \underset{x \to 0^+}{\longrightarrow} 1$$

et comme $\sin$ est impaire
$$(T_{0}\sin)(x) \underset{x \to 0^-}{\longrightarrow} 1$$
Et finalement, 
$$\lim_{ x \to 0 } (T_{0}\sin)(x) = 1 $$
ie 
$\sin$ est dérivable en $0$ et $\sin'(0) = 1$




##### Exercice
Mq $x \mapsto -1$ est dérivable en $\pi$
et $x \mapsto 2x$ est dérivable en $\sqrt{ 2 }$ 

#### Exemple
Mq $\sqrt{ \cdot }$ et $|\cdot|$ ne sont pas dérivables en 0. 

##### Pour $\sqrt{ \cdot }$
Soit $x > 0$
On a
$$\frac{\sqrt{ x }-\sqrt{ 0 }}{x-0} = \frac{1}{\sqrt{ x }} \underset{x \to 0}{\longrightarrow} + \infty$$
Donc $\sqrt{ \cdot }$ n'est pas dérivable en $0$ 
(Son graphe admet une tangente verticale en $0$)

Soit $a > 0$, 
Pour $x \in \mathbb{R}_{+} \backslash\{a\}$, $\sqrt{ x } + \sqrt{ a } \neq 0$
$$\frac{\sqrt{ x }-\sqrt{ a }}{x-a} = \frac{1}{\sqrt{ x  } + \sqrt{ a } }\underset{x \to a}{\longrightarrow} \frac{1}{2\sqrt{ a }}$$


Ainsi $\sqrt{ \cdot }$ est dérivable en $a$ et 
$$\sqrt{ \cdot }'(a) = \frac{1}{2\sqrt{ a }}$$

##### Pour $|\cdot|$
Soit $x > 0$, 
$$(T_{0}|\cdot|)(x) = \frac{|x|-0}{|x|} = 1 \underset{x \to 0^+}{\longrightarrow} 1$$

par parité de $|\cdot|$, 
$$(T_{0}|\cdot|)(x) \underset{x \to 0^-}{\longrightarrow} -1$$
Comme $1 \neq -1$, $|\cdot|$ n'est pas dérivable

(On dira que $|\cdot|$ est dérivable a gauche et a droite en $0$)

Soit $a > 0$, 
Pour $x \in \mathbb{R}_{+}\backslash\{a\}$, 
$$(T_{a}|\cdot|)(x) = 1 \underset{x \to a}{\longrightarrow} 1$$
Donc $|\cdot|$ est dérivable en $a$ et $|\cdot|'(a) = 1$
Par parité, pour $a < 0$
$$|\cdot|'(a) = -1$$

## 2. Interprétation géométrique
Comme on l'a déja vu en intro, 
$(T_{a}f)(x)$ est la pente de la sécante qui passe par $(a, f(a)) \in \mathcal G_{f}$ et $(x, f(x)) \in \mathcal G_{f}$ 

La fonction est dérivable en $a$ ssi ses pentes ont l=une limite quand $x \underset{\neq}{\longrightarrow} a$
Dans ce cas, comme toutes ces droites passant par $(a, f(a))$ on obtient une droite "limite" :
- passant par $(a, f(a))$
- de pente $f'(a)$

#### Définition
La tangente a $\mathcal{G}_{f}$ au point de coordonnés $(a, f(a))$ est cette droite passant par $(a, f(a))$ de pente $f'(a)$ 

##### Reformulation géométrique
$f$ est dérivable en $a$ ssi son graphe admet une tangente (non verticale) en $(a, f(a))$ et dans ce cas le nombre dérivé $f'(a)$ est la pente de cette tangente. 


#### Exercice
Etudier la dérivabilité en $0$ de :
$$x \mapsto x\sin \frac{1}{x}$$
$$x \mapsto x^2 \sin \frac{1}{x}$$ 
prolongées par continuité en $0$. 
après avoir tracé leurs graphes au voisinage de $0$. 

#### Propriété
Si $f$ est dérivable en $a$, l'équation de la tangente de $\mathcal{G}_{f}$ en $(a, f(a))$ est : 
$$y = f(a) + f'(a)(x-a)$$

## 3. Développements limité d'ordre 1
Idée : 
Supposons $f$ dérivable en $a$
alors $f$ est approchée à l'ordre $1$ par la fonction affine : 
$$x \mapsto f(a) + f'(a)(x-a)$$
et réciproquement

Ce qu'on formalise ainsi : 

#### Propriété : Dérivabilité par $DL_1$
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
$$\forall h \in I\backslash {a \cap V}, f(a+h) = f(a) + f'(a)h+h\epsilon(h)$$

Ce qu'on peut noter avec le petit $o$ : 
$$f(a+h) \underset{h \to 0}{=} f(a) + f'(a)h + o(h)$$

On restreint avec les $x$ : 
$$f(x) \underset{x \to a}{=} f(a) + f'(a)(x-a) + o(x-a)$$

##### Démonstration : 
$\Leftarrow$ : triviale
$\Rightarrow$ : Supposons $f$ est dérivable en $a$
Alors pour $x \in I\backslash\{a\}$, 
$$f(x) = f(a) + f'(a)(x-a) + (x-a)\epsilon(x-a)$$
en posant :
$$\epsilon(h) = \frac{f(a+h)-f(a)}{h}-f'(a) \underset{h \to 0}{\longrightarrow} 0 $$


ATTENTION : On verra plus tard les $DL_{n}(a)$ et il est faux qu'une fonction admettant un $DL_{n}(a)$ soit dérivable $n$ fois en $a$ 
L'équivalence de la propriété n'est vraie qu'a l'ordre $1$


#### Propriété : CN ponctuelle de continuité pour la dérivabilité
Si $f$ est dérivable en $a$ alors elle est continue en $a$ 
(Réciproque fausse)

##### Démonstration
Supposons $f$ dérivable en $a$
Elle admet un $DL_{1}(a)$ 
$$f(a+h) \underset{h \to 0}{=} f(a) + f'(a)h + o(h)$$
Donc 
$$f(a+h) \underset{h \to 0}{\longrightarrow} f(a)$$

#### Remarque
La continuité en $a$ équivaut à l'existence d'un $DL_{0}(a)$
$$f(a+h) \underset{h \to 0}{=} f(a) + o(1)$$
car $o(1)$ est une fonction qui tend vers $0$ lorsque $h \to 0$ 

#### Remarque
Il existe des fonctions explicites continues sur $[0, 1]$ et dérivables nulle part (Fonction de Weierstraß)

## 4. Dérivés à gauche et à droite
#### Définition
On dit que $f$ est dérivable à gauche (resp. à droite) en $a$ ssi : 
- $I \cap ]- \infty, a[ \neq 0$ (resp. $]a, +\infty[ \neq 0$)
- $f|_{I\cap]a, + \infty[}$ (resp. $f|_{]- \infty, a[}$) est dérivable en $a$

Cela équivaut à ce que $\lim_{x \to a^-} (T_{a}f)(x)$ existe dans $\mathbb{R}$ 
(resp. $x \to a^+$)

#### Définition
Cette limite est appelée le nombre dérivé à gauche de $f$ en $a$ et noté $f'(a)$ (resp. à droite)

#### Exemple
$|\cdot-a|$ est dérivable à gauche et à droite en $a$, mais pas dérivable en $a$ 

Interprétation géométrique :
$\mathcal{G}_{f}$ admet une demi-tangente en $(a, f(a))$
excalibur 3.

#### Propriété
- Si $a = min(I)$ (resp. $max(I)$)
    Alors le dérivabilité de $f$ en $a$ équivaut à sa dérivé à droite (resp. à gauche) en $a$
- Sinon
    La dérivabilité de $f$ en $a$ équivaut à ce qu'elle soit à la fois dérivable à gauche et à droite en $a$ et que de plus $f'_{g}(a) = f'_{d}(a)$ 

Demo : ez

## 5. Dérivabilité sur un intervalle
#### Définition
$f$ est dérivable sur $I$ ssi elle est dérivable en tout point de $I$. 
Si c'est le cas on appelle fonction dérivé la fonction qui, pour tout $x \in I$ fait correspondre le nombre dérivé $f'(x)$ en $f$ en $x$ 

$$f': \left\{ \begin{array}{l}
I \to \mathbb{R} \\
x \mapsto f'(x)
\end{array} \right.$$


#### Extension
$f:D_{f} \to \mathbb{R}$, 
$f$ est dérivable ssi elle l'est en tout point de $D_{f}$. 

#### Remarque
Plus généralement si $A \subset D_{f}$ dire que $f$ est dérivable sur $A$ est ambigu cela pourrait vouloir dire : 
- Soit que $f$ est dérivable pour tout $x \in A$ 
- Soit que $f|_{A}$ est dérivable

et ces deux notions ne sont pas équivalentes ($|\cdot|$ n'est pas dérivable en tout $x \in \mathbb{R}_{+}$, mais $|\cdot||_{R_{+}}$ est dérivable)

Cependant elle sont équivalente lorsque $A$ est un ouvert de $\mathbb{R}$ ie $A$ est réunion d'intervalles ouverts, par exemple $A = \mathbb{R}^*$ 

#### Définition
Deux intervalles $I_{1}, I_{2}$ sont séparés ss'il existe $s \in \mathbb{R}$ tq
$$\forall(x, y) \in I_{1} \times I_{2}, x < s < y$$
ou 
$$\forall(x, y) \in I_{1} \times I_{2}, x > s > y$$


#### Propriété
Si $f:D_{f} \to \mathbb{R}$ et $D_{f}$ est réunion finie d'intervalle non triviaux séparés deux a deux, alors elle est dérivable ssi elle l'est sur chacun de ses intervalles. 

#### Propriété
Il est immédiat que toute fonction constante est dérivable sur son domaine et de dérivée nulle

#### Propriété
Si $f$ est dérivable sur $I$ elle est continue sur $I$

## 6. Opérations
#### Théorème
Soient $f$ et $g$ définies sur $I$ avec $a \in I$ et $\lambda, \mu \in \mathbb{R}$. 
Si $f$ et $g$ sont dérivables en $a$ (resp sur $I$) Alors
1. La CL $\lambda f + \mu g$ l'est et
    $$(\lambda f + \mu g)'(a) = \lambda f'(a) + \mu g'(a)$$
2. Le produit $fg$ l'est :
    $$(fg)'(x) = f'(a)g(a) + f(a)g'(a)$$
3. Si $g \neq 0$ (resp $\forall x \in I, g(x) \neq 0$)
    alors $\frac{f}{g}$ l'est et
    $$\left( \frac{f}{g} \right)'(a) = \frac{f'(a)g(a) - f(a)g'(a)}{(g(a))^2}$$

##### Démonstration
1.
Pour $x \in I\backslash \{a\}$, 
$$T_{a}(\lambda f + \mu g) = \lambda T_{a}f + \mu T_{a}g$$
Par linéarité de la limite

2.
Soit $x \in I \backslash\{a\}$,
$$(T_{a}(fg))(x) = \frac{f(x)g(x)-f(a)g(a)}{x-a} = \frac{(f(x)-f(a))g(x)+f(a)(g(x)-g(a))}{x - a}$$
$$(T_{a}(fg))(x) = (T_{a}f)(x)g(x)+f(a)(T_{a}g)(x) $$
Comme $g$ est dérivable en $a$, elle est continue en $a$, ie $g(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} g(a)$ 
Comme $f$ est dérivable en $a$,
$$(T_{a}f)(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} f'(a)$$
et par produit de limites, 
$$(T_{a}f)(x)g(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} f'(a)g(a)$$
Comme $g$ est dérivable en $a$,
$$(T_{a}g)(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} g'(a)$$
et par CL
$$f(a)(T_{a}g)(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} f(a)g'(a)$$

Enfin par somme de limites, 
$$(T_{a}(fg))(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} f'(a)g(a)+f(a)g'(a)$$
3.
Supposons que $g'(a) \neq 0$, 
Comme $g$ est dérivable en $a$, elle est continue en $a$, donc non nulle au voisinage de $a$
Soit $x$ "assez proche" de $a$ et différent de $a$. 
On a : 
$$\left( T_{a}\left( \frac{1}{g} \right) \right)(x) = \frac{\frac{1}{g(x)}- \frac{1}{g(a)}}{x - a} = - \frac{\frac{g(x)-g(a)}{g(x)g(a)}}{x-a} = - \frac{(T_{a}g)(x)}{g(x)g(a)}$$
$g$ étant continu en $a$, $g(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} g(a)$
Pour CL et quotient de limites

#### Corrollaire
Toute fonction polynôme est dérivable sur $\mathbb{R}$ et pour $n \in \mathbb{N}^*$, 
$$(x \mapsto x^n)' = (x \mapsto nx^{n-1})$$
et
$$(x \mapsto 1)' = (x \mapsto 0)$$
Toute fonction rationnelle est dérivable sur son intervalle de définition

Démonstration :
Soit $u : x \mapsto 1$ 
Pour $a \in \mathbb{R}$, 
Soit $x \in \mathbb{R}\backslash\{a\}$,
$$(T_{a}u) = \frac{1-1}{x-a} = 0$$ Donc
$$(T_{a}u)(x) \underset{x \to a}{\longrightarrow} 0$$

Ainsi $u$ est dérivable sur $\mathbb{R}$ et $u' = 0_{\mathbb{R}^\mathbb{R}}$
___
Soit $i : x \mapsto x$, 
Soit $a \in \mathbb{R}$, 
Pour $a \neq x$, 
$$(T_{a}i)(x) = \frac{x-a}{x-a} = 1 \underset{x \to a}{\longrightarrow} 1$$
Donc $i$ est dérivable en tout $a \in \mathbb{R}$

___
Par produit successif, pour $n \in \mathbb{N}^*$, 
$x \mapsto x^n$ est dérivable sur $\mathbb{R}$, par CL toute fonction polynôme est dérivable sur $\mathbb{R}$. 
Par quotient toute fonction rationnelle est dérivable sur son domaine de définition.

___
Soit $n \in \mathbb{N}^*$, On note $f:x \mapsto x^n$ 
Soit $a \in \mathbb{R}$. Pour $x \neq a$, 
$$(T_{a}f)(x) = \frac{x^n-a^n}{x - a} = \sum_{k = 0}^{n-1}x^ka^{n-k-1} \underset{x \to a}{\longrightarrow} \sum_{k = 0}^{n-1} a^ka^{n-k-1} \underset{x \to a}{\longrightarrow}na^{n-1}$$

Donc $f$ est dérivable sur $\mathbb{R}$ et
$$\forall x \in \mathbb{R}, f'(x) = nx^{n-1}$$


#### Théorème
Soient $I$ et $J$ deux intervalles non triviaux et $f:I \to \mathbb{R}$, $g : J \to \mathbb{R}$ telles que $f(I) \subset J$ et $a \in I$. 
Si $f$ est dérivable en $a$ (resp. sur $I$)
et $g$ est dérivable en $f(a)$ (resp. sur $J$)
alors $(g \circ f)$ est dérivable en $a$ (resp sur $I$) et
$$(g \circ f)'(a) = g'(f(a))\times f'(a)$$
resp. 
$$(g \circ f)' = (g' \circ f)f'$$

Demonstration
Le résultat "par intervalles" découle du résultat ponctuel. 
Supposons que
$f$ est dérivable en $a$
$g$ est dérivable sur $f(a)$

Soit $x \in I\backslash\{a\}$, Alors 
$$(T_{a}(g \circ f))(x) = \frac{(g \circ f)(x) - (g \circ f)(a)}{x - a} = (T_{f(a)}g)(f(x))(T_{a}f)(x)$$
En ayant prolongé par continuité $(T_{f(a)}g)$ en $f(a)$ ($f$ et $g$ sont dérivables donc $lim_{f(a)} (T_{f(a)}g) \in \mathbb{R}$)

Par continuité en posant : 
$$(T_{f(a)}g)(f(a)) = g'(f(x))$$

En effet si $f(x) \neq f(a)$, 
$$\frac{g(f(x))-g(f(a))}{x-a} = \frac{g(f(x))-g(f(a))}{f(x)-f(a)} \times \frac{f(x)- f(a)}{x-a}$$
si $f(x) = f(a)$, 
$$\frac{g(f(x)) - g(f(a))}{x-a} = 0 = (T_{f(a)}g)(f(x)) \times 0 = (T_{f(a)}g)(f(x)) (T_{a}f)(x)$$
Puis comme $f$ est dérivable en $a$, elle est continue en $a$ ie $f(x) \underset{x \to a}{\longrightarrow} f(a)$ 
Par continuité de $T_{f(a)}g$ en $f(a)$,  
$(T_{f(a)}g)(y) \underset{y \to f(a)}{\longrightarrow} g'(f(a))$
Par composition de limites : 
$$(T_{f(a)}g)(f(x)) \underset{x \to a}{\longrightarrow} g'(f(a))$$
Par dérivabilité de $f$ en $a$, 
$$(T_{a}f)(x) \underset{x \to a}{\longrightarrow} f'(a)$$
Enfin, par produit de limites, 
$$(T_{a}(g \circ f))(x) \underset{x \to a}{\longrightarrow} g'(f(a))f'(a)$$

#### Proposition
$\cos$ et $\sin$ sont dérivables sur $\mathbb{R}$
$$\cos' = - \sin$$
$$\sin' = \cos$$

Démonstration
Soit $a \in \mathbb{R}$, 
Pour $h \in \mathbb{R}$, 
$$\cos(a+h) = \cos(a)\cos(h) - \sin(a)\sin(h)$$
Comme $\cos$ et $\sin$ sont dérivable en $0$, 
par CL $\cos(a + \cdot)$ est dérivable en $0$, 
et $(\cos(a+\cdot))'(0) = \cos(a)\cos'(0)-\sin(a)\sin'(0) = -\sin(a)$
Or pour $h \neq 0$, 
$$(\tilde{T}_{a}\cos)(h) = \frac{\cos(a+h)-\cos(a)}{h} = (T_{a}\cos(a + \cdot))(h)$$
$$(\tilde{T}_{a}\cos)(h) \underset{h \to 0}{\longrightarrow} (\cos(a+ \cdot))'(0) = - \sin(a)$$
Donc $\cos$ est dérivable en $a$
et $\cos'(a) = - \sin(a)$ 

La meme pour $\sin$ 


#### Propriété
- Tout polynôme trigonométrique est dérivable sur $\mathbb{R}$
- Toute fonction rationnelle trigonométrique est dérivable sur son domaine de définition

Démonstration : 
Par produit, pour tout $p, q \in \mathbb{N}$, 
$\cos p \sin q$ est dérivable sur $\mathbb{R}$,
Par CL tout polynôme trigonométrique l'est. 
Par quotient toute fonction rationnelle trigonométrique l'est.

#### Propriété
$exp$, $ch$, $sh$ et $th$ sont dérivables sur $\mathbb{R}$ et 
$$\begin{array}{l}
exp' = exp \\
ch' = sh \\
sh' = ch \\
th' = \frac{1}{ch^2} = 1 - th^2
\end{array}$$

Démonstration
$\exp$ est dérivable et $\exp' = \exp$ par définition. 

Pour $x \in \mathbb{R}$, $ch(x) = \frac{e^x + e^{ -x }}{2}$
et $x \mapsto e^{ -x }$ est la compos"r de $x \mapsto -x$ et $\exp$ donc dérivable
Par CL, $ch$ est dérivable

#### Corollaire
- Polynômes trigonométriques hyperboliques
- Fonctions rationnelles trigonométriques hyperboliques
Dérivables


## 7. Théorème des fonctions réciproques
#### Théorème
Soient $f$ continue et strictement monotone sur un intervalle non trivial $I$ et $a \in I$
Par le TFR (continu), 
$f$ admet une fonction réciproque : 
$$f^{-1} : f(I) \to \mathbb{R}$$

Si $f$ est dérivable en $a$ (resp sur $I$) et $f'(x) \neq 0$ (resp. $\forall x \in I, f'(x) \neq 0$)
alors $f^{-1}$ est dérivable en $f(a)$ (resp sur $f(I)$)
et $(f^{-1})'(f(a)) = \frac{1}{f'(a)}$ (resp. $(f^{-1})' = \frac{1}{f' \circ f^{-1}}$)

Démonstration :
Le théorème global (sur $f(I)$) se déduis de théorème ponctuel : 
Supposons que $f$ est dérivable en $a$ et que $f'(a) \neq 0$
Soit $y \in f(I) \backslash \{f(a)\}$ et $x = f^{-1}(y)$.
On a :
$$(T_{f(a)}(f^{-1}))(y) = \frac{f^{-1}(y) - f^{-1}(f(a))}{y - f(a)} = \frac{f^{-1}(f(f^{-1}(y))) - f^{-1}(f(a))}{f(f^{-1}(y)) - f(a)}$$
$$(T_{f(a)}(f-1))(y) = \frac{f^{-1}(y)-a}{f(f^{-1}(y))- f(a)} = \frac{1}{(T_{a}f)(f^{-1}(y))}$$


Comme $f$ est dérivable en $a$, 
$$(T_{a}f)(x) \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} f'(a)$$
et comme $f'(a) \neq 0$, 
$$\frac{1}{(T_{a}f)(x)} \underset{x \underset{\neq}{\longrightarrow} a}{\longrightarrow} \frac{1}{f'(a)}$$
Par continuité de $f^{-1}$, $f^{-1}(y) \underset{y \to f(a)}{\longrightarrow} f^{-1}(f(a)) = a$
et par injectivité de $f^{-1}$ :
$$\forall y \in f(I) \backslash\{f(a)\}, f^{-1}(y) \neq a$$

Par composition de limites
$$(T_{f(a)}(f^{-1}))(y) = \frac{1}{(T_{a}f)(f^{-1}(y))} \underset{y \underset{\neq}{\longrightarrow} f(a)}{\longrightarrow} \frac{1}{f'(a)}$$



##### Remarque
Si $f$ est dérivable sur un intervalle non trivial $I$ et $\forall x \in I, f'(x) > 0$ alors on a directement toute les autres hypothèses. ($f$ strictement croissante et $\forall x \in I, f'(x) \neq 0$)
Idem pour $f'(x)<0$.


# II. Rolle et accroissements finis
## 1. Théorème de Rolle
#### Lemme CN d'extremum global sur un intervalle
Soit $f$ dérivable sur un intervalle $I = ]a, b[$ ou $a, b \in \overline{\mathbb{R}}$ 
Si $f$ admet un maximum global en $c \in ]a, b[$ alors $f'(c) = 0$
Idem pour le minimum


Démonstrraiton :
Supposons que $f$ admette un maximum en $c \in I$ 
Excalibur 4.
Soit $x \in ]a, c[$, 
On a $f(x)-f(c)\leq 0$ et $x-c < 0$, 
Donc
$$(T_{c}f)(x)\geq 0$$
Donc
$$f'(x) = \lim_{ x \underset{<}{\longrightarrow} c} (T_{c}f)(x)\geq 0 $$

Soit $x \in ]c, b[$. On a $(T_{c}f)(x) = \frac{f(x)-f(c)}{x-c} \leq 0$
Donc
$$f'(x) = \lim_{ x \underset{>}{\longrightarrow} c } (T_{c}f)(x) \leq 0 $$
Ainsi 
$$f'(x) = 0$$
Dans le cas du minimum on applique ce résultat à $-f$. 

#### Remarque
Ne fonctionne pas sur un "bord"
excalibur 5

#### Remarque



#### Théorème de Rolle
Soit $f : [a, b] \to \mathbb{R}$, $(a<b)$,
tq : 
$$\left\{ \begin{array}{l}
f(a) = f(b) \\
f \text{ continue sur } [a, b] \\
f \text{ dérivable sur } ]a, b[
\end{array}\right.$$
Alors 
$$\exists c \in ]a, b[, f'(c) = 0$$
excalibur 6.


Démonstration : 
Comme $f$ est continue sur le segment elle admet un max en $x_{0} \in [a, b]$ et un min en $x_{1} = [a, b]$ (th des bornes atteintes).

Si $x_{0} \in ]a, b[$ ou  $x_{1} \in ]a, b[$, le lemme conclut
Sinon le max et le min sont atteints au bord et ont donc la même valeur $f(a) = f(b)$ donc la fonction est constante et admet aussi, max en $\frac{a+b}{2}$,et encore par le lemme, 
$$f'\left( \frac{a+b}{2} \right) = 0$$


#### Remarque
On utilise souvent ce résultat pour obtient l'existence de $0$ d'une fonction. 

#### Exercice
Soit $f : I \to \mathbb{R}$ tq $f(a) = f(b) = f(c)$
avec $a<b<c$ et $f$ deux fois dérivable sur $I$.
Alors $f''(x)$ s'annule en un point $d \in ]a, c[$ 

Démonstration : 
Deux application du théorème de Rolle à $f$ fournissent $x_{1} \in ]a, b[$ et $x_{2} \in ]b, c[$ tq $f'(x_{1}) = f'(x_{2}) = 0$
Une dernière application du Théorème de Rolle à $f$ sur $[x_{1}, x_{2}]$ fournit $d \in ]x_{1}, x_{2}[$ tq $f'(d) = 0$

#### Remarque
Pour prouver l’existence d'un 0 de $f$ if faut chercher une primitive $F$ de $f$ qui prend la même valeur en deux points. 

Reformulation :
Soit $f$ continue sur $[a, b]$, tq $\int_{a}^b  f =0$ 
Alors il existe $c \in ]a, b[$ tq $f(c) = 0$ 

## 2. Egalité des accroissements finis
#### Théorème
Soit $f : [a, b] \to \mathbb{R}$, $(a<b)$,
tq : 
$$\left\{ \begin{array}{l}
f \text{ continue sur } [a, b] \\
f \text{ dérivable sur } ]a, b[
\end{array}\right.$$
Alors, 
$$\exists c \in ]a, b[, f'(c) = \frac{f(b)-f(a)}{b-a}$$

Excalibur 7.

Démonstration : 
On applique le théorème de Roll a une fonction auxiliaire
$$\phi : \left\{ \begin{array}{l}
[a, b] \to \mathbb{R} \\
x \mapsto f(x) - \frac{f(b)-f(a)}{b-a}(x-a)
\end{array} \right.$$
Comme somme de $f$ et d'une fonction affine (donc dérivable)
$\phi$ est continue sur $[a, b]$ et dérivable sur $]a, b[$. et de plus $\phi(a) = \phi(b)$ et $\phi(b) = f(b) - \left(\frac{f(b)- f(a)}{b - a} \right)(b - a) = f(a)$
On peut appliquer le théorème de Rolle à $\phi$ ce qui fournit $c \in ]a, b[$ tq $\phi'(c) = 0$. 
Or, pour $x \in ]a, b[$, 
$$\phi'(x) = f'(x) - \frac{f(b)-f(a)}{b-a}$$
Donc
$$f'(c) = \frac{f(b)-f(a)}{b - a}$$


#### Remarque
$$\frac{f(b)- f(a)}{b -a}$$
est le taux d'accroissement d'ou le nom du théorème

#### Remarque
On peut reformuler le théorème : 
$$f(b)-f(a) = f'(c)(b - a)$$
$$f(b) = f(a) + f'(c)(b - a)$$

#### Remarque
Interprétation cinématique
Soit $a, b \in \mathbb{R}$, 
Si $t \mapsto f(t)$ représente la position d'un point sur une droite en fonction du temps. 
alors $f'(t)$ est la vitesse instantanée au temps $t$ et $\frac{f(b)-f(a)}{b - a}$ est la vitesse moyenne entre les temps $a$ et $b$. 
Il existe un instant tel que la vitesse instantanée soit égale à la vitesse moyenne du parcours 

#### Application : Radar tronçon
###### Remarque : Egalité de la moyenne
Si $f$ est continue sur $[a, b]$, 
il existe $c \in ]a, b[$ tq
$$f(c) = \frac{1}{b-a} \int_{a}^b f$$

Démonstration : conséquence immédiate du théorème des accroissements finis.

## 3. Limite de la dérivée
#### Théorème de la limite de la dérivée
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

Démonstration : 
Soit $x \in I \backslash \{a\}$, 
On a deux cas : 
- Si $x < a$, alors $f$ est continue sur $[x, a]$ (car $[x, a] \subset I$ puisque $I$ est convexe, puisque c'est un intervalle de $\mathbb{R}$)
    et elle est dérivable sur $]x, a[$ (de même $]x, a] \subset I$ donc $]x, a[ \subset I \backslash \{a\}$)
    En appliquant le TAF à $f$ entre $x$ et $a$ (ie à $f|_{[x, a]}$)n on obtiens un $c_{x} \in ]x, a[$ tel que $(T_{a}f)(x) = f'(x)$
    On a $x \leq c_{x} \leq a$
    Donc $c_{x} \underset{x \to a^-}{\longrightarrow} a^-$ (Théorème des gendarmes)
    Donc $f'(c_{x}) \underset{x \to a^-}{\longrightarrow} l$ ie $\lim_{ x \to a^- } (T_{a}f)(x) = l$
    
    De même en appliquant le TAF à $f|_{[a, x]}$

- Si $x > a$, alors 
    $$\lim_{ x \to a^+ } (T_{a}f)(x) = l $$
Finalement : 
$$\lim_{ x \underset{\neq}{\longrightarrow} a } (T_{a}f)(x) = l $$

## 4. Inégalité des A.F.
#### Théorème
Soit $f$ dérivable sur un intervalle non trivial $I$
Si $|f'|$ est majoré par un $k \in \mathbb{R}_{+}$, alors $f$ est k-lipschitzienne


Démonstration :
Supposons que $f' \leq k$ pour $k \in \mathbb{R}_{+}$ 
Pour $x, y \in I$ 
Quitte al es renommer on peut supposer que $x \leq y$
et
- Si $x = y$, $|f(x) - f(y)| = 0 \leq 0 = k|x-y|$ 
- Si $x<y$, en appliquant le $TAF$ à $f|_{[x, y]}$, on obtient $c \in ]x, y[$ tel que $f(x) - f(y) = f'(c)(x-y)$ 
    et on a alors
    $$|f(x) - f(y)| = |f'(c)||x-y| \leq |x - y|$$

## 5. Application aux suites récurrentes
#### Propriété : Convergence par contractance
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

Démonstration :
Excailbur 9.

1. Par l''absurde
Soit $\lambda'$ un point fixe de $f$ différent de $\lambda$
Alors $|\lambda - \lambda'| = |f(\lambda) - f(\lambda')| \leq k|\lambda - \lambda'| < |\lambda - \lambda'|$
car $|\lambda - \lambda'|>0$ et $k<1$

Contradiction 

2. Raisonnement direct
Soit $\lambda'$ un point fixe de $f$.
$$|\lambda - \lambda'| = |f(\lambda) - f(\lambda')|\leq k |\lambda - \lambda'|$$
Donc, 
$$(1-k)|\lambda - \lambda'| \leq 0$$
Comme $(1-k) > 0$
$$|\lambda - \lambda '| \leq 0$$
Donc $|\lambda - \lambda'| = 0$ ie $\lambda = \lambda'$

Ainsi, il y a un unique point fixe par $f$

Soit $u_{0} \in I$
et $(u_{n})$ définie par $(\forall n \in \mathbb{N}, u_{n+1} = f(u_{n}))$ 
On a alors pour $n \in \mathbb{N}^*$, 
$$|u_{n} - \lambda| = |f(u_{n-1})-f(\lambda)| \leq k|u_{n-1}-\lambda| \leq \dots \leq k^n|u_{0}-\lambda|$$
Par récurrence immédiate, sauf si l'énoncé demande explicitement une recurrence!

Comme $|k| = k <1, k^n \underset{n \to + \infty}{\longrightarrow} 0$ 
Par majoration, $u_{n} \underset{n \to + \infty}{\longrightarrow} \lambda$

#### Remarque
En général on montre la contractance avec l'inégalité précédente

### Compléments
On dit qu'un intervalle est fermé s'il contient toutes ses bornes finies
(ex $[0, + \infty[, [a, b], \dots$)

#### Théorème : Existence du point fixe par complétude (Hors programme)
Si $f$ est contractante sur un intervalle fermé $I$ et $f(I) \subset I$, alors $f$ admet un point fixe

Soit $f$ défini sur in intervalle non trivial $I$ possédant un point fixe $\lambda$ intérieur a $I$ dérivable en $\lambda$ et vérifiant : 
$$|f'(\lambda)| < 1$$
Alors il existe $V \in \mathcal V(\lambda)$ tel que $V \subset I$ et un $k \in [0, 1[$ tel que 
$$\forall x \in V, |f(x) - \lambda|\leq k|x - \lambda|$$


De plus si $u_{0} \in V$ et ($\forall n \in \mathbb{N}, u_{n+1} = f(u_{n})$) alors $(u_{n})$ est bien définie et vérifie : 
$$\forall n \in \mathbb{N}, |u_{n} - \lambda| \leq k^n|u_{0}-\lambda|$$
Donc en particulier $u_{n} \to \lambda$

($\lambda$ est un point fixe attractif)
excal 1

___
#### Application
Valeur approché de $\sqrt{ 2 }$ 
###### Sasha : 
Soit $x \in \mathbb{R}\backslash \{2\}$, tel que
$$f(x) = \frac{1}{2+x}$$
avec $\sqrt{ 2 }-1$ comme point fixe
$$f'(x) = \frac{-1}{(2+x)^2}$$
$$f'(\sqrt{ 2 } -1) = -\frac{1}{(1+\sqrt{ 2 })^2}$$


Excalibur 11.

###### Fred :
Soit $x \in \mathbb{R}\backslash\{0\}$, 
$$f(x) = \frac{x}{2} + \frac{1}{x}$$
$$f'(x) = \frac{1}{2} - \frac{1}{x^2}$$
$$f'(\sqrt{ 2 }) = 0$$
Super convergence


# III. Variation et extrema
Ici $f : I \to \mathbb{R}$ dérivable avec $I$ un intervalle non trivial 
#### Théorème
($I$ DOIT ETRE UN INTERVALLE)
Alors 
- $f$ est constante $\Leftrightarrow$ $f' = 0$ 
- $f$ est croissante $\Leftrightarrow$ $f' \geq 0$ 
- $f$ est décroissante $\Leftrightarrow$ $f' \leq 0$

et 
$f' > 0 \Rightarrow$ $f$ est strictement croissante
$f' < 0 \Rightarrow$ $f$ est strictement décroissante

Démonstration : 
Les 3 premières implications se déduisent directement de la définition de la dérivée. 
Par exemple si $f \downarrow$ tous les taux d’accroissement sont positifs ou nuls, donc par passage a la limite dans ces inégalités larges, $f'\leq0$

Pour leur Réciproque et les dernières implications on utilise le TAF
Par exemple : 
2. 
Supposons $f' > 0$
Soient $x, y \in I$, tq $x \leq y$. 
- Si $x = y$ alors $f(x) = f(y)$ donc $f(x) \leq f(y)$
- Si $x < y$ alors on applique le TAF à $f|_{[x, y]}$
    (elle est dérivable sur $[x, y]$ donc a fortiori continue sue $[x, y]$ et dérivable $]x, y[$)
    qui fournit un $c \in ]x, y[$, tq $f(y)-f(x) = f'(x)(y-x)$
    Or $f'(c) \geq 0$ et $y-x\geq0$, Donc $f(y) \geq f(x)$
Dans les 2 cas $f(x) \leq f(y)$
Ainsi $f$ est croissante. 
3. 
Prendre $-f$ dans le cas précédent $-f$ est donc croissante, et $f$ est donc décroissante

1. 
Si $f' = 0$, alors $f' \leq 0$ et $f'\geq 0$ donc $f$ est décroissante et croissante, donc elle est constante. 


4. 
Supposons $f' \geq 0$, 
En reprenant la preuve ci dessus ($f' \geq 0$)
En prenant $x< y$, on obtiens un $c \in ]x, y[$ tq
$$f(y)-f(x) = f'(c)(y-x) > 0$$
Donc 
$$f(x)<f(y)$$
Ainsi $f$ est strictement croissante

5. 
Supposons $f' <0$,
On applique cela à $-f$ et donc $f$ est strictement décroissante

#### Remarque
Pour la stricte monotonie les conditions ne sont pas nécessaires
Contre-exemple $x \mapsto x^3$ est strictement croissante sur $\mathbb{R}$
mais $f'(0) = 0$. 

#### Propriété
Si $f'\geq 0$ et s'annule en un nombre fini de points alors $f$ est strictement croissante

Démonstration : 
A faire pour un point d'annulation

#### Définition maximum et minimum
- $f$ admet un maximum (resp. min) (global) en $a$ ssi
    $$f(a) = max(f(I))$$

- $f$ admet un maximum (resp. min) local en $a$ ssi
    il existe $V \in \mathcal V (a)$ tq $f|_{V}$ admette un maximum (resp. min)

- $f$ admet un extremum ssi $f$ admet un maximum ou un minimum (globaux ou locaux)

- Un extremum est dit strict ssi la valeur $f(a)$ n'est atteinte qu'en $a$

#### Exemple
$x \mapsto x-x^2$ défini sur $\mathbb{R}$ admet un seul extremum (en $\frac{1}{2}$) qui est un maximum global strict

#### Rappel
L’existence d'un maximum global et d'un minimum global est assuré lorsque $f$ est continue sur un segment. 

#### Remarque
Pas de bonne CNS d'extremalité

#### Théorème : CN d'extremum local
Soit $f$ définie sur $I$ non trivial
Si $f$ admet un extremum local en un point $a$ intérieur à $I$ et $f$ est dérivable en $a$, alors $f'(a)$ 

Démonstration : 
Supposons que $f$ admette un extremum local en $a$ un point intérieur à $I$, et qu'elle soit dérivable en $a$. 

Il existe $V \in \mathcal V (a)$ tel que $V \subset I$ $f|_{V}$ admette un extremum global.
Comme $V = [a - \eta, a + \eta]$ avec $\eta >0$, on est dans les conditions su premier lemme de la section $II$, qui assure que $(f|_{V})'(a) = 0$ ie $f'(a) = 0$. 

#### Remarque
ATTENTION : cette condition nécessaire n'est pas suffisante
Contre-exemple : $f : x \mapsto x^3$

#### Remarque 
Faux si $a$ n'est pas intérieur
Exclalibur 5

#### Remarque
Une recherche d'extremum se fait en 2 temps :
- Celui des extremas intérieurs
- Celui des extremas aux bords

#### Définition
Un tel point annulant la dérivé de $f$ est appelé un point critique

#### Lemme
Si $g : I \to \mathbb{R}$ est continue et $g(a) > 0$, il existe $\eta>0$ tq $g|_{I \cap [a-\eta, a+\eta]} > 0$ 

Démonstration : 
Excal 12
Soit $g : I \to \mathbb{R}$ continue et $a \in I$ tq $g(x) > 0$
Comme $\frac{g(a)}{2}>0$, par définition de la continuité en $a$
il existe $\alpha>0$ tel que 
$$\forall x \in I \cap [a-\alpha, a+ \alpha], |g(x)-g(a)|\leq \frac{g(a)}{2}$$
Donc, 
$$\forall x \in I \cap [a-\alpha, a+ \alpha], g(x)\geq g(a) - g\left( \frac{a}{2} \right) > 0  $$



#### Théorème : CS d'extremum local
Soit $f$ de classe $\mathcal C^2$ sur $I$, (ie 2 fois dérivables et de dérivée seconde continue) et soit $a \in I$. 
Si $a$ est un point critique de $f$ et $f''(a)<0$ (resp. $f''(a) > 0$) alors $f$ admet un maximum (resp. minimum) local strict en $a$. 

Démonstration : 
Supposons $f'(a) = 0$ et $f''(a) < 0$,
$f''$ est continue sur $I$ et $f''(a) <0$ donc
il existe $V \in \mathcal V(a)$ tq $f''|_{I\cap V} < 0$

___
# RATTRAPER
___

# IV  Fonctions convexes
## 1. Remarques préliminaires (Lemmes)
#### Lemme 1
$$\forall x, y \in \mathbb{R}, x \leq y \Rightarrow [x, y] = \{(1-\lambda)x+\lambda y;\lambda \in [0, 1]\}$$

Démonstration
Soit $x, y \in \mathbb{R}$, 
tel que $x \leq y$, 
On raisonne par double inclusion : 

- "$\supset$"
Soit $\lambda \in [0, 1]$, 
Alors
$$(1-\lambda)x + \lambda y  = x + \lambda(y-x) \geq x$$
et
$$(1-\lambda)x + \lambda y = y - (1-\lambda)(y-x) \leq y$$
Donc, 
$$(1-\lambda)x + \lambda y \in [x, y]$$

Ainsi, 
$$\{(1-\lambda)x+\lambda y;\lambda \in [0, 1]\} \subset [x, y]$$

- "$\subset$" 
Soit,
$$f : \left\{ \begin{array}{l}
[0, 1] \to \mathbb{R}  \\
\lambda \mapsto (1-\lambda)x + \lambda y
\end{array} \right.$$
C'est une fonction polynôme donc continue et par le TVI $f([0, 1])$ est un intervalle donc est convexe

Or $f(0) = x$ et $f(1) = y$
Donc
$$[x, y] \subset f([0, 1]) = \{(1-\lambda)x+\lambda y; \in [0, 1]\}$$


Ainsi
$$[x, y] = \{(1-\lambda)x+\lambda y;\lambda \in [0, 1]\}$$

#### Lemme 2
Soit $g$ une fonction affine sur $\mathbb{R}$, 
Alors
$$\forall x, y \in \mathbb{R}, \forall \lambda \in [0, 1], g((1-\lambda)x + \lambda y) = (1-\lambda)g(x) + \lambda g(y)$$
Démonstration : prendre $g : x \mapsto ax + b$

## 2. Définitions et généralités
Soit $f : I \to \mathbb{R}$, avec $I$ un intervalle non trivial
Excalibur 13. 

#### Définition Convexité
$f$ est convexe ssi ses cordes sont situées au dessus de son graphe :
$$\forall x, y \in I, \forall \lambda \in [0, 1], f((1-\lambda)x + \lambda y) \leq (1-\lambda)f(x) + \lambda f(y)$$

###### Remarque
On voit que cela (caractérisation) équivaut à 
$$\forall x, y \in I, \forall \lambda \in [0, 1], (x < y \Rightarrow f((1-\lambda)x + \lambda y) \leq (1-\lambda )f(x)+\lambda f(y))$$

###### Démonstration :
Supposons que 
$$\forall x, y \in I, \forall \lambda \in [0, 1], (x < y \Rightarrow f((1-\lambda)x + \lambda y) \leq (1-\lambda )f(x)+\lambda f(y))$$
est vérifiée
Soit $x, y \in I$ et $\lambda \in [0, 1]$
Si $x\leq y$, On a l'inégalité de la convexité
Si $x = y$, cette inégalité est triviale
Si $x \geq y$, on applique la caractérisation à $x, y$ et $\mu = 1 - \lambda$
$$f((1-\mu)y + \mu x) \leq (1-\mu)f(y)+ \mu f(x)$$
ie
$$f((1-\lambda)x + \lambda y) \leq (1-\lambda)f(x) + \lambda f(y)$$

Conclusion : Pour montrer que $f$ est convexe on suppose que $x<y$

#### Définition
$f$ est concave ssi $f$ est non convexe


#### Exercice
montrer avec cette caractérisation que $|\cdot|$ est convexe par disjonction de cas


#### Explication de la terminologie
Une partie de $\mathbb{R}^2$ est une partie C tq $\forall A, B \in C, [AB]\subset C$ : 

Excalibur 14 IMPORTANT
$f$ est convexe ssi son épigraphe :
$$\mathcal E _{f} = \{(x, y \in \mathbb{R} | x \in I \text{ et } y \geq f(x))\}$$
est convexe

Excalibur 15
$$\sum_{i = 1}^n \lambda_{i}f(x_{i}) = \text{"Barycentre des images"} $$
$\lambda_{1}, \dots, \lambda_{n} \in [0, 1]$ ($\mathbb{R}_{+}$ suffit) tq
$$\sum_{i = 1}^n \lambda_{i} = 1$$
$$x = \sum_{i = 1}^n \lambda_{i}x_{i}$$
Barycentre des $x_{i}$

#### Théorème de Jensen
Supposons que $f$ est convexe
$$\forall n \in \mathbb{N}^*, \forall (x_{i})_{i = 1}^n \in I^n, \forall (\lambda_{i})_{i = 1}^n \in \mathbb{R}_{+}^n, \left( \sum_{i = 1}^n \lambda_{i} = 1 \Rightarrow f\left( \sum_{i = 1}^n \lambda_{i}x_{i} \right) \leq \sum_{i=1}^n \lambda_{i}f(x_{i}) \right)$$

Démonstration :
On procède par une démonstration par récurrence
$$A_{n} : \text{"} \forall n \in \mathbb{N}^*, \forall (x_{i})_{i = 1}^n \in I^n, \forall (\lambda_{i})_{i = 1}^n \in \mathbb{R}_{+}^n, \left( \sum_{i = 1}^n \lambda_{i} = 1 \Rightarrow f\left( \sum_{i = 1}^n \lambda_{i}x_{i} \right) \leq \sum_{i=1}^n \lambda_{i}f(x_{i}) \right) \text{"}$$

##### Initialisation :
Pour $x \in I$, 
$$f(1x) = f(x)\leq f(x) = 1f(x)$$
Donc $A_{1}$ est vraie

##### Hérédité
Soit $n \in \mathbb{N}^*$ tel que $A_{n}$, 
Soit $x_{1}, \dots, x_{n+1} \in I$ et $\lambda_{1} , \dots, \lambda_{n+1} \in \mathbb{R}_{+}$
tel que
$$\sum_{i = 1}^{n+1}\lambda_{i} = 1$$
Si $\lambda_{n+1} = 1$ alors $\lambda_{1} = \dots = \lambda_{n} = 0$
et l'inégalité s'écrit $f(1x_{n+1}) \leq 1f(x_{n+1})$
donc est vérifiée

Si $\lambda_{n+1} < 1$
Alors
$$S = \sum_{i = 1}^{n} \lambda_{i} > 0$$
Alors
$$\sum_{i = 1}^{n+1} \lambda_{i}x_{i} = S\left( \sum_{i = 1}^{n}\left( \frac{\lambda_{i}}{S} \right)x_{i} \right) + \lambda_{n+1}x_{n+1}$$
et
$$\sum_{i = 1}^{n+1} \lambda_{i}f(x_{i}) = S\left( \sum_{i = 1}^{n}\left( \frac{\lambda_{i}}{S} \right)f(x_{i}) \right) + \lambda_{n+1}f(x_{n+1})$$

Comme
$$\forall i\in [\![1, n]\!], \frac{\lambda_{i}}{S}\geq0 \text{ et } \sum_{i = 1}^{n} \frac{\lambda_{i}}{S} = 1$$
Par hypothèse de recurrence $A_{n}$, 
$$f\left( \sum_{i = 1}^n \left( \frac{\lambda_{i}}{S} \right) x_{i} \right) \leq \sum_{i = 1}^{n}\left( \frac{\lambda_{i}}{S} \right)f(x_{i})$$


Par définition de la convexité de $f$, 
Comme $S > 0, \lambda_{n+1}\geq 0$ et $S+ \lambda_{n+1} = 1$,
Alors
$$f\left( \sum_{i = 1}^{n+1} \lambda_{i}x_{i} \right) = f\left( S\left( \sum_{i = 1}^{n}\left( \frac{\lambda_{i}}{S} \right)x_{i} \right)+\lambda_{n+1}x_{n+1} \right)$$
$$\leq S f\left(\sum_{i = 1}^{n}\left( \frac{\lambda_{i}}{S} \right)x_{i}\right)+ \lambda_{n+1}f(x_{n+1})$$
$$\leq S \sum_{i = 1}^{n}\left( \frac{\lambda_{i}}{S} \right)f(x_{i}) + \lambda_{n+1}f(x_{n+1}) = \sum_{i = 1}^{n+1}\lambda_{i}f(x_{i})$$

Ainsi, on a prouvé $A_{n+1}$
Par récurrence le théorème est prouvé. 


#### Remarque
Dans l'énoncé de Jensen, il y a implicitement que : 

#### Lemme
Si $x_{1}, \dots, x_{n} \in I$ et $\lambda_{1}, \dots, \lambda_{n} \in \mathbb{R}_{+}$ avec
$$\sum_{i = 1}^{n} \lambda_{i} = 1$$
Alors
$$\sum_{i=1}^{n}\lambda_{i}x_{i} \in I$$

Qui se démontre par associativité du barycentre en effectuant l'hérédité par la convexité de $I$. ($1^{ere}$ égalité de l'hérédité)

#### Remarque
Ici on utilise la définition de convexité sous la forme équivalente. 
$$\forall x_{1}, x_{2} \in I, \forall \lambda d_{1}, \lambda_{2} \in \mathbb{R}_{+}, (\lambda_{1} + \lambda_{2} = 1 \Rightarrow f(\lambda_{1}x_{1} + \lambda_{2}+x_{2})\leq \dots)$$

#### Application
Inégalité arithmético-géométrique
$$\forall n \in \mathbb{N}^*, \forall(a_{i})_{i}^{n} \in (\mathbb{R}_{+})^n, \left( \prod_{i = 1}^n  a_{i}\right)^{\frac{1}{n}} \leq \frac{1}{n}\left( \sum_{i=1}^{n}a_{i} \right)$$
##### Rappel
Cas $n = 2$,
On a $(\sqrt{ a_{1} } - \sqrt{ a_{2} })^2 \geq 0$
Donc $\frac{a_{1} + a_{2}}{2} \geq \sqrt{ a_{1}a_{2} }$

Démonstration générale :
On admet pour l'instant la concavité de $\ln$
Soit $a_{1}, \dots, a_{n} \in \mathbb{R}_{+}$,
SI l'un d'entre eux est nul le membre de gauche est nul et l'inégalité est triviale
Sinon, comme $\ln$ est strictement croissante, l'inégalité voulue équivaut à : 
$$\frac{1}{n} \sum_{i = 0}^n\ln\left( a_{i} \leq \ln\left( \frac{1}{n}\sum_{i=0}^n a_{i} \right) \right)$$
qui est vraie par l'inégalité de Jensen appliqué à la fonction $-\ln$ aux points $a_{1}, .., a_{n}$ avec pour coefficients $\frac{1}{n}$.


On peut caractériser la convexité géométriquement

#### Théorème convexité par croissance des pentes
excalibur 16
Si $f$ est convexe, alors pour tout $x, y, y \in I$ tels que $x<y<z$, on a 
$$ \frac{f(y) - f(x)}{y - x} \overset{1.}{\leq} \frac{f(z)-f(x)}{z - x} \overset{2.}{\leq} \frac{f(z) - f(y)}{z -y} $$

Réciproquement

- Si pour tous $x, y, z \in I$, tq $x < y < z$ l'inégalité $1.$ est vérifiée, alors $f$ est convexe
- La même pour l'inégalité $2.$

Démonstration : 
Soit $x, y, z \in I$ tq $x < y < z$
Par le lemme 1, il existe $\lambda \in ]0, 1[$ tel que
$$y = (1-\lambda)x + \lambda z$$
Par convexité de $f$ :
$$\frac{f(y) - f(x)}{y - x} \leq \frac{(1-\lambda)f(x) + \lambda f(z)-f(x)}{((1-\lambda)x+\lambda z)-x} = \frac{f(z) - f(x)}{z-x}$$

Ainsi $1.$ est prouvé

Le premier point de la réciproque en remontant cette argumentation : 
Supposons $1.$ pour tous $x, y, z$ convenables
Soit $x, z \in I$, tels que $x < z$, 
et $\lambda \in [0, 1]$
On note $y = (1-\lambda)x + \lambda z$

Si $\lambda \in \{0, 1\}$ On a trivialement $f(y) \leq (1-\lambda) f(x) + \lambda f(z)$.
Si $\lambda \in ]0, 1[$ par le $1.$ 
$$\frac{f(y) - f(x)}{y - x}\leq \frac{f(z)-f(x)}{z - x}$$
$$\frac{f(z)-f(x)}{z - x} = \frac{((1-\lambda)f(x)+\lambda f(z))- f(x)}{((1-\lambda)x + \lambda z)-x} = \frac{((1-\lambda)f(x)+ \lambda f(z))-f(x)}{y - x}$$

On multiplie par $y - x>0$ et on ajoute $f(x)$, ce qui donne donne $$f(y)\leq (1-\lambda) f(x) + \lambda f(z)$$

Ainsi $f$ est convexe

#### Exercice
Montrer l'inégalité $2.$ et la réciproque de manière analogue

#### Reformulation du Théorème
$f$ est convexe ssi
Pour tout $a \in I$ la fonction, $T_{a}f$ est croissante sur $I\backslash\{a\}$ 

Démonstration en exo

#### Propriété
Supposons $f$ convexe
Pour une sécante en deux points à son graphe, le graphe est : 
- En dessous de la sécante entre les deux points d'intersection
- Au dessus de la sécante a l’extérieur des deux points d'intersection

Démonstration en exo

#### Complément Hors programme
##### Définition de stricte convexité
Lorsque
$$\forall x \neq y, \forall \lambda \in ]0, 1[, f((1-\lambda)x+\lambda y)<(1-\lambda)f(x)+\lambda f(y)$$


#### Exercice 
Montrer qu'une fonction strictement convexe admet au plus un minimum local, qui est depuis lorsqu'il existe, strict et global. 

## 3. Convexité et régularité
#### Propriété
Si $f$ (définie sur $I$) est dérivable
alors elle est convexe ssi $f'$ est croissante

Démonstration : 
Supposons $f : I \to \mathbb{R}$ dérivable, 
Supposons que $f$ est convexe, 
Soient $a < b$ deux points de $I$.
Soit $x \in ]a, b[$, 
Par croissance des pentes, 
$$(T_{a}f)(x) \leq \frac{f(b)-f(a)}{b-a} $$

En faisant tendre $x$ vers $a^+$ on a
$$f'(a) \leq \frac{f(b)-f(a)}{b - a}$$
et aussi pour $x \in ]a, b[$, 
$$\frac{f(b)-f(a)}{b-a} \leq (T{a}f)(x)$$
Quand $x \to b$, 
$$ \frac{f(b) - f(a)}{b-a} \leq f'(b)$$
Ainsi 
$$f'(a) \leq f'(b)$$

Comme $\forall a, b \in I, a< b \Rightarrow f'(a) \leq f'(b)$
Alors $f'$ est croissante

Supposons que $f'$ soit croissante
Soient $x, y \in I$ tq $x\leq y$
On pose, 
$$g : \left\{ \begin{array}{l}
[0, 1] \to \mathbb{R} \\
t \mapsto (1-t)f(x) + tf(y) - f((1-t)x + ty)
\end{array}\right.$$
Par composition d'une fonction affine avec $f$ et CL de cette composée avec une fonction affine, $g$ est dérivable. 
On a, pour $t \in [0, 1]$, 
$$g'(t) = -f(x)+f(y) + (-x+y)f'((1-t)x+ty)$$
$$g'(x) = (f(y)-f(x)) + (x-y)f'(x + t(y-x))$$
Comme $y-x>0$, $t \mapsto x + t(y-x)$ est croissante et, par composition avec $f'$ croissante (hypothèse) multiplication par $x-y < 0$ et addition d'une constante, $g'$ est décroissante

Comme $g(0) = g(1) = 0$
et $g$ est dérivable sur $[0, 1]$ donc a fortiori
Continue sur $[0, 1]$
Dérivable sur $]0, 1[$
Appliquer le théorème de Rolle qui nous dit qu'il existe $c \in ]0, 1[$
tq $g'(c) = 0$ 

Donc par croissance de $g'$ :
$$\left\{ \begin{array}{l}
\forall t \in [0, c], g'(t) \leq 0 \\
\forall t \in [c, 1], g'(t) \geq 0
\end{array} \right.$$

On a donc le tableau de variation : 
excali 17. 

#### Propriété
Soit $f$ dérivable sur $I$, 
Alors $f$ est convexe ssi son graphe est au dessus de ses tangentes

Idée Démonstration :
Exo
Excali 18


- $\Rightarrow$ : 
Supposons $f$ convexe, 
Soit $b <a$,
Pour $h<0$ "petit", 
$$(T_{a}f)(x)\leq(T_{a}f)(a+h)$$
par passage a la limite a droite quand $h \to 0^-$
$$(T_{a}f)(b) \leq f'(a)$$

Comme $b-a<0$, 
$$f(b)-f(a)\geq f'(a)(b-a)$$
Donc
$$f(b)\geq f(a) + f'(a)(b-a)$$
De même pour $b > a$
Ainsi $\mathcal G_{f}$ est au dessus de ses tangentes

- $\Leftarrow$ : Supposons $\mathcal{G}_{f}$ au dessus de ses tangentes
Soient $a, b \in I$ tq $a < b$
Excal 19
On a $f'(a)\leq \frac{f(b)-f(a)}{b-a}\leq f'(b)$

#### Propriété
Soit $f$ deux fois dérivable sur $I$,
Alors $f$ est convexe ssi $f'' \geq 0$ 

Démonstration
Comme $I$ est un intervalle, 
$$f''\geq0 \Leftrightarrow f'\uparrow$$

#### Propriété
Soit $f$ dérivable sur $I$,
Alors $f$ est convexe ssi $f'$ est strictement croissante 

#### Propriété
Soit $f$ deux fois dérivable sur $I$, 
Si $f''>0$ Alors $f$ est strictement convexe


#### Culture
$$\forall x \in \mathbb{R}_{+}, \Gamma(x) = \int_{0}^{+\infty} t^{x-1}e^{ -t } \, dt $$
$$\Gamma(1) = 1, \Gamma(2) = 2, \Gamma(3) = 3!$$
Donc
$$\forall n \in \mathbb{N}, \Gamma(n+1) = n!$$
Alors $\ln$ est le prolongement de $\space \space \cdot!$ sur $\mathbb{R}$
$\ln \Gamma$ est convexe (cela implique que $\Gamma$ l'est)
On dit que $\Gamma$ est logarithmiquement convexe. 

# V. Fonctions de classe $\mathcal C^k$ 
Soit $f: I \to \mathbb{R}$, 
et $k \in \mathbb{N}\cup\{\infty\}$

#### Définition
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

#### Remarque
On dit que $f$ est de classe $\mathcal{C}^k$ sur $I$ ou $f \in \mathcal{C}^k(I)$

#### Extension
Si $f : D_{f} \to \mathbb{R}$,
On dira qu'elle est de classe $\mathcal{C}^k$ sur $D_{f}$ 
ssi 
elle est $k$ fois dérivable et sa $k^{ieme}$ dérivée est continue sur $D_{f}$ lorsque $k \in \mathbb{N}$
et
de classe $\mathcal{C}^\infty$
ssi
elle est indéfiniment dérivable sur $D_{f}$

#### Exemple
$\exp, \cos, \sin, \text{ch}, \text{sh} \in \mathcal{C}^\infty(\mathbb{R})$ 
$\ln \in \mathcal{C}^\infty(\mathbb{R}_{+}^*)$

#### Rappel
On a convenu que $f^{(0)} = f$
Donc $C^0(I)$ est l'ensemble des fonctions continues sur $I$

#### Remarque
Si $f \in \mathcal{C}^k(I)$ et $p \in [\![0, k-1]\!]$

#### Théorèmes : Opérations
$\mathcal{C}^k(I)$ est stable par CL et produit. 
De plus si $f\in \mathcal{C}^k(I)$ ne s'annule pas sur $I$ alors $\frac{1}{f} \in \mathcal{C}^k(I)$

Démonstrations : 
La formule pour la combinaison linéaire est évidente par récurrence immédiate


#### Remarque
De plus si $f, g \in \mathcal{C}^k(I)$ et $\lambda, \mu \in \mathbb{R}$, 
Pour tout $p \in [\![0, k]\!]$, 
$$(\lambda f+\mu g)^{(p)} = \lambda f^{(p)} + \mu g^{(p)}$$

#### Formule de Leibniz
Soit $f, g \in \mathcal{C}^k(I)$, 
Soit $p \in [\![0, k]\!]$, 
$$(fg)^{(p)} = \sum_{i = 0}^{p}\binom{p}{i}f^{(i)} g^{(p-i)}$$


#### Exercice
Prouver la formule de Leibniz en copiant la preuve de la formule du binôme (la seule subtilité est la formulation de l'assertion de récurrence)

#### Exercice
On pose $f = \exp$ et $g : x \mapsto x^2+x+1$, 
Elles sont toutes les deux de classe $\mathcal{C}^\infty$ sur $\mathbb{R}$, 
Donc par produit, $h \in \mathcal{C}^\infty(\mathbb{R})$, 
Soit $n \in \mathbb{N}$, 
On calcule $h^{(n)}$ par la formule de Leibniz
$$h^{(n)} = \sum_{k = 0}^n \binom{n}{k} f^{(n - k)} g^{(k)} = f \sum_{k = 0}^2 \binom{n}{k} g^{(k)}$$
(Avec la convention usuelle $\binom{n}{k} = 0$ pour $k > n$)

Ainsi pour $x \in \mathbb{R}$, 
$$\ln^{(n)}(x) = e^{ x }\left( (x^2+x+1)+n(2x+1)+\frac{n(n-1)}{2}\times2 \right)$$
$$\ln^{(n)}(x) = e^{ x }(x^2+(2n+1)x+(n^2+1))$$

#### Corollaire
Les fonctions polynômes et rationnels sont de classe $\mathcal{C}^\infty$.

Démonstration :
$x \mapsto x$ et $x \mapsto 1$ sont clairement de classe $\mathcal{C}^\infty$
Par produit les $x \mapsto x^n$ le sont, 
Par CL les fonctions polynômes le sont. 
Par quotient les fonction rationnelles le sont. 

#### Corollaire du Corollaire
$\ln \in \mathcal{C}^\infty(\mathbb{R}_{+}^*)$ puisque sa dérivée est une fonction rationnelle. 

#### Théorème
Si $f \in \mathcal{C}^k(I)$, $g \in \mathcal{C}^k(J)$ et $f(I) \subset J$ 
Alors $g \circ f \in \mathcal{C}^k(I)$

#### Théorème : Corollaire des précédents
Les fonctions :
- polynômes
- trigonométriques
- rationnelles trigonométriques
- polynômes trigonométriques
- polynômes trigonométriques hyperbolique
- rationnelles trigonométriques hyperbolique

sont de classe $C^\infty$

#### Théorème
Supposons $k \geq 1$, 
si $f \in \mathcal{C}^k(I)$ et $f'$ ne s'annule pas sur $I$
Alors $f^{-1} \in \mathcal{C}^k(f(I))$

#### Exemple
$\arccos, \arcsin \in \mathcal{C}^\infty(]-1, 1[)$

#### Propriété
$$\forall \alpha \in \mathbb{R}, (x\mapsto x^\alpha) \in \mathcal{C}^\infty(\mathbb{R}_{+}^*)$$

#### Remarque
Certaines se prolongent en fonction de classes $\mathcal{C}^\infty$ sur des intervalles plus grands, mais attention : $F$ est continue sur $\mathbb{R}_{+}$ mais pas de classe $\mathcal{C}^1$ sur $\mathbb{R}_{+}$

#### Théorème : Prolongement de classe $\mathcal{C}^k$ 
Soit $f\in \mathcal C^k(I\backslash\{a\})$,
Si pour tout $0\leq p\leq k$, $f^{(p)}$ admet une limite finie 
Alors $f$ admet un unique prolongement de classe $\mathcal C^k$

#### Exercice Classique
$$x \mapsto x^3\sin \frac{1}{x}$$
se prolonge en fonction de classe $\mathcal{C}^1$ sur $\mathbb{R}$

Cette fonction est-elle de classe $\mathcal{C}^2$

#### Exercice Classique
$$f : \left\{ \begin{array}{l}
\mathbb{R} \to \mathbb{R} \\
x \mapsto \left\{ \begin{array}{l}
0 \text{ si } x \leq 0 \\
e^{ \frac{1}{x^2} } \text{ si } x > 0
\end{array} \right.
\end{array}\right.$$
Est-elle de classe $\mathcal{C}^\infty$ sur $\mathbb{R}$? 

# VI. Fonctions à valeurs complexes
## 1. Dérivabilité
Soit $f : I \to \mathbb{C}$, avec $I$ un intervalle non trivial.

#### Définition de la dérivabilité en $a \in I$
$f$ est dérivable en $a$ ssi $(T_{a}f)$ admet une limite finie en $a$ 
$(T_{a}f)$ est complexe

#### Proposition
$f$ est dérivable en $a$ ssi $\mathrm{Re}f$ est dérivable en $a$ et $\mathrm{Im}f$ est dérivable en $a$
et si c'est le cas, 
$$f'(a) = (\mathrm{Re}f)'(a)+ i(\mathrm{Im}f)'(a)$$

#### Théorème : Opération sur les fonctions dérivables et les compositions "possibles"
Revoir le chapitre sur les primitives

#### Remarque
Le TFR n'existe pas

#### Remarque
Attention Rolle et l'égalité des accroissements finis ne sont plus "vrais" 

#### Exemple
$$f : \left\{\begin{array}{l}
[0, 1] \to \mathbb{C} \\
t \mapsto e^{ i2\pi t }
\end{array}\right.$$
$f$ est bien :
- Continue sur $[0, 1]$
- Dérivable sur $]0, 1[$
Car c'est la restriction d'une fonction de classe $\mathcal{C}^\infty$ sur $\mathbb{R}$ 
et $f(0) = f(1)$
et
$$\forall t \in ]0, 1[, f'(t) = i 2\pi te^{ i 2 \pi t }\neq 0$$
Car le module est $2\pi$. 

Cependant l'inégalité des accroissements finis subsiste : 

#### Théorème : Inégalité des accroissements finis complexe
Si $f$ est dérivable sur $I$,
Soit $x\in I$, et pour un certain $k \in \mathbb{R}_{+}$,
Si $|f'(x)| \leq k$
Alors $f$ est k-lipschitzienne

#### Remarque
En appliquant l'inégalité réelle à $\mathrm{Re}f$ et $\mathrm{Im} f$, 
$$|\mathrm{Re}(f(x))-\mathrm{Re}(f(y))| \leq k |x-y|$$
$$|\mathrm{Im}(f(x))-\mathrm{Im}(f(y))| \leq k |x-y|$$
$$|f(x)-f(y)| = \sqrt{ |\dots|^2 + |\dots|^2 } \leq$$

## 2. Fonction complexes de classe $\mathcal{C}^k$
Soit $k \in \mathbb{N} \cup \{\infty\}$

#### Définition
Identique a celle des fonctions réelles, 
###### Notation : $\mathcal{C}_{\mathbb{C}}^k(I)$

#### Propriété
$$f \in \mathcal{C}_{\mathbb{C}}^{k}(I) \Leftrightarrow\mathrm{Re}f, \mathrm{Im}f \in \mathcal{C}_{\mathbb{R}}^k(I)$$

#### Conséquence
Les fonctions polynômes ou rationnelles à coefficient complexes (à variable réelle) sont de casse $\mathcal{C}^\infty$.

#### Composition
Les résultats du début du chapitre sur les primitives s'étendent facilement aux fonctions de classe $\mathcal{C}^k$

Ils sont rappelés dans le poly de ce chapitre.
(En particulier $(\exp \circ f)' = (\exp \circ f)f'$)
(Et les fonctions puissances sont de classe $\mathcal{C}^\infty$)

#### Théorème de prolongement de classe $\mathcal{C}^k$ 
Il s’énonce de la même manière que pour $\mathbb{R}$ 