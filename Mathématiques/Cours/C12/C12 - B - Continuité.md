# I. Définitions
#### Propriété
Pour tout $\eta > 0$, $f$ est continue en a ssi $f|_{[a-\eta, a + \eta]}$ 



#### Exemple 18
Montrer que
$$\forall x \in \mathbb{R}, \left( 1 + \frac{x}{n} \right)^n \to e^{ x }$$

# III. Opération sur les fonctions continues
#### Théorème 20 :
Démonstration : 
On peut redémontrer dans le cadre de la continuité que si $g(a) \neq 0$ la fonction $g$ est non nulle en tout point d'un voisinage de $a$ (Intersecté avec $I$)

Exalibur 2

Supposons que $g(a) \neq 0$
Alors $\frac{|g(a)|}{2}> 0$
Par définition de la continuité en $a$, il existe $\alpha>0$ tel que
$$\forall x \in I \cap [a-\alpha, a+\alpha], g(x)\in\left[ g(a)- \frac{|g(a)|}{2}, g(a) + \frac{|g(a)|}{2} \right] \subset \mathbb{R}^*$$
En effet
$$|0-g(a)| = |g(a)| > \frac{|g(a)|}{2}$$
Donc
$$0 \in \left[ g(a)-\frac{|g(a)|}{2}, g(a) + \frac{|g(a)|}{2} \right]$$
C'est la boule de centre $g(a)$ et de rayon $\frac{|g(a)|}{2}$

Le reste est conséquence immédiate des opérations sur les limites. 

# IV. Continuité sur intervalle
#### Proposition 28 : $\sin$ et $\cos$ sont continues sur $\mathbb{R}$
Démonstration
Soit $a \in \mathbb{R}$, 
Pour $h \in \mathbb{R}$,
$$\sin(a + h) = \sin(a)\cos(h)+\sin(h)\cos(a)$$
Comme $\sin$ et $\cos$ sont continues en $0$ $h \mapsto \sin(a+h)$ est continue en 0 par combinaison linéaire
Donc : 
$$\sin(a+h) \underset{h \to 0}{\longrightarrow} \sin(a+0) = \sin(a) $$
$$\sin(x) \underset{x \to a}{\longrightarrow \sin(a)}$$
Donc $\sin$ est continue en $a$

De même $\cos$ est continue en $a$
(en utilisant $\cos(a+h) = \cos(a)\cos(h)-\sin(a)\sin(h)$)

#### Définition 29 
Interprétation géométrique
Pour $x \neq y$, 
$$\left|\frac{f(x)-f(y)}{x-y}\right|\leq k$$
i.e.
Excalibur 3
i.e.
les pentes des sécantes sont comprises entre $-k$ et $k$

#### Proposition 34
Démonstration
Soit $f$ $k$-lip. sur $I$ (pour un $k\in\mathbb{R}_{+}$)
Soit $a\in I$ :
Pour tout $x \in I$,
$$0 \leq |f(x)-f(a)|\leq k|x-a|$$
lorsque $x \to a$,
$$|x-a| \to 0$$
Donc
$$k|x-a| \to 0$$
Par le théorème des gendarmes
$$|f(x)-f(a)|\to 0$$
i.e.
$$f(x) \to f(a)$$
Ainsi $f$ est continue en $a$

# V. TVI
#### Théorème 36
Excalibur 4

# VI. Fonctions réciproques

# VII. Stricte monotonie et injectivité
#### Théorème 50

Démonstration (avec le lemme) :
Soit $I$ un intervalle, 
Soit $f \in \mathbb{R}^I$ continue
###### Sens direct :
Montrons que $SP$ est constante sur $I$
Pour $x, y \in I$ tel que $x \neq y$ 
On a :
$$(Txf)(y) = (Tyf)(x) \space \text{ donc } \space SP(x) = SP(y)$$

#### Lemme 51
Excalidraw 5
Idée de la preuve : Excalidraw 6

Soit $x \in \mathbb{R}$, 
Si $J = I \cap ]x, + \infty[$ est non vide
On applique le TVI à $(Txf)|_{J}$ 
Qui ne s'annule pas par injectivité de $f$, et est de signe constant
Ainsi $Txf$ est de signe constant à droite de $x$. 

De même $Txf$ est de signe constant à gauche de $x$ (Si la gauche existe)

S'il y a a la fois une droite et une gauche ($x$ n'est pas une borne)
Mq le signe de $Txf$ à gauche est celui de $Txf$ à droite, par l'absurde. 
Si ce n'était pas le cas, on aurait une situation, quitte a changer $f$ en $-f$, du type :
Excalibur 7.

# VII. Segments
#### Théorème 53
Démonstration : 
On note $[a, b]$ ($a < b$) un segment et $f$ une fonction continue sur $[a, b]$ 
On pose $\beta = sup(f([a, b])) \in \overline{\mathbb{R}}$
qui est $+ \infty$ si $f$ n'est pas majorée
qui appartient à $\mathbb{R}$ sinon (car $f([a, b])$ est alors une partie non vide et majorée de $\mathbb{R}$ (en utilisant la propriété de la borne supérieure))

Par la caractérisation séquentielle de la borne supérieure, il existe $(y_{n}) \in (f([a, b])^\mathbb{N}$, $y_{n} \underset{n \to + \infty}{\longrightarrow} \beta$ 
Pour chaque $n \in \mathbb{N}$, 
$y_{n}$ admet au moins un antécédent $x_{n} \in [a, b]$ par $f$. La suite $(x_{n})$ donc par la théorème de Bolzano-Weierstrass, il existe une suite bornée extraite $(x_{\phi(n)})$ convergente vers $l \in \mathbb{R}$
Comme $\forall n \in \mathbb{N}, a\leq x_{\phi(n)} \leq b$ 
Par stabilité des inégalités larges par passage à la limite $l \in [a, b]$ 
Comme $x_{\phi(n)} \underset{n \to + \infty}{\longrightarrow} l$ 
et $f$ est continue en $l$ (car $l \in [a, b]$)
Alors $y_{\phi(n)} = f(x_{\phi(n)}) \underset{n \to + \infty}{\longrightarrow} f(l)$ 
Or une suite extraite d'une suite qui admet une limite admet une même limite
et $y_{n} \underset{n \to + \infty}{\longrightarrow} \beta$
Donc $y_{\phi(n)} \underset{n \to + \infty}{\longrightarrow} \beta$ 
Par unicité de la limite $\beta = f(l)$
Donc d'une part $\beta < + \infty$ 
Donc $f$ est majoré
D'autre part puisque $\beta$ majore $f([a, b])$, 
$f$ admet un maximum en $l$

En appliquant ce résultat à $-f$, $f$ est minorée et admet un minimum. 

# IX. Fonctions à valeurs complexes
Soit $f:I\to \mathbb{C}$ (où $I$ est un intervalle non trivial et $a$ une borne de $I$)
Soit $l \in \mathbb{C}$, 

#### Définition
Pour $a \in \mathbb{R}$, 
$$\lim_{ x \to a } f(x) = l \Leftrightarrow \forall \epsilon>0, \exists \alpha > 0, \forall x \in I, (|x-a|\leq \alpha \Rightarrow |f(x)-l| \leq \epsilon)$$

Pour $a = + \infty$, 
$$\lim_{ x \to +\infty } f(x) = l \Leftrightarrow \forall \epsilon > 0, \exists A \in\mathbb{R}, \forall x \in I, (x \geq A \Rightarrow |f(x)-l|\leq \epsilon) $$

Pour $a = - \infty$, 
$$\lim_{ x \to - \infty } f(x) = l \Leftrightarrow \forall \epsilon >0, \exists B \in \mathbb{R}, \forall x \in I, (x \leq B \Rightarrow |f(x)-l|\leq \epsilon) $$

#### Proposition
$$\lim_{ a } f = l \Leftrightarrow (\lim_{ a } \mathrm{Re}(f) = \mathrm{Re}(l) \text{ et } \lim_{ a } \mathrm{Im}(f) = \mathrm{Im}(l)  ) $$

#### Définition de la continuité complexe
$f$ est continue en $a$ ssi $\lim_{ a } f$ existe

#### Propriétés : Opérations sur les limites et fonctions continues
La même que dans $\mathbb{R}$ 

#### Propriété composition a la source
On a aussi de même le fait qu'en composant $f$ continue en $a$ à la source par une fonction continue en $b$ 
$h : J \to \mathbb{R}$ tel que $h(J) \subset I$ et $h(b) = a$
On a alors : $f \circ h$ est continue en $b$ 

#### Propriété : Composition au but
Si $f$ est continue en a (resp sur $I$) 
Alors $|f|$ et $\exp \circ f$ le sont aussi
(et aussi $\mathrm{Re}(f)$ et $\mathrm{Im}(f)$, ce qu'on a vu plus haut)

###### Démonstration :
$$|f| = \sqrt{ (\mathrm{Re}(f))^2+(\mathrm{Im}(f)) ^2}$$
est la composé de $\sqrt{ \cdot }$ avec la somme de 2 produits de fonctions continues en $a$ (resp. sur $I$)
et 
$$\exp \circ f = (\exp \circ (\mathrm{Re}(f)))\times(\cos \circ (\mathrm{Im}(f)) + i \sin \circ (\mathrm{Im}(f)))$$

est un produit de composé de $\exp$ avec $\mathrm{Re}(f)$ puis d'une CL de composés de $\cos$ et $\sin$ avec $\mathrm{Im}(f)$ avec $Re(f)$ et $Im(f)$ continue en $a$ 

#### Théorème
L’image d’un segment par une fonction continue à valeurs complexes et une partie bornée de $\mathbb{C}$. 
i.e. : 
$$\exists M \in \mathbb{R}_{+}, \forall x \in [a, b], |f(x)|\leq M$$

Excalibur 7.