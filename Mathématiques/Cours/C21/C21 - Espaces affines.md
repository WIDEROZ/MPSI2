# Historique de l’enseignent
Excalidraw 1
# I. Structures affine d'un espace vectoriel
Soit $E$ un $\mathbb{K}$-ev,

On considère parfois les éléments de $E$ comme des points et on note ici : $A, B, \dots$ et on note leur ensemble : $\mathcal{E}(=E)$ 
Lorsqu'on les considère comme des vecteurs on les notes : $\vec{u}, \vec{v}, \dots$ et on note leur ensemble $E$
$A = \vec{v}$ mais on le dit pas, on dit a la place : $\vec{v} = \overrightarrow{OA}$

#### Définition
Pour $A, B \in \mathcal{E}$, 
On note :
$$\overrightarrow{AB} = B-A \in E$$
En appelant $\vec{u}= \overrightarrow{AB}$, on a $A+\vec{u} = B$

#### Propriété : Relation de Chasles
$$\forall A, B, C \in \mathcal{E}, \overrightarrow{AB} + \overrightarrow{BC} = \overrightarrow{AC}$$
ou dit autrement : 
$$\forall M, A,B \in \mathcal{E}, \overrightarrow{AB} = \overrightarrow{MB} - \overrightarrow{MA}$$

#### Propriété
L'action
$$\begin{cases}
\mathcal{E}\times E \to \mathcal{E} \\
(A, \vec{u}) \mapsto A+\vec{u}
\end{cases}$$
vérifie : 
$$\forall A \in \mathcal{E}, A + \overrightarrow{0} = A$$
$$\forall A \in \mathcal{E}, \forall \vec{u}, \vec{v} \in E, (A + \vec{u})+\vec{v} = A+(\vec{u}+\vec{v})$$

#### Définition
L'application : 
$$T_{\vec{u}} : \begin{cases}
\mathcal{E} \to \mathcal{E} \\
A \mapsto A + \vec{u}
\end{cases}$$
est appelée la translation de vecteur $\vec{u}$

Excal 2

#### Propriété
L'application : 
$$\tau : \begin{cases}
(E, +) \to (\mathcal{S}(\mathcal{E}), \circ ) \\
\vec{u} \mapsto T_{\vec{u}}
\end{cases}$$
est un morphisme de groupes injectif

Démonstration : 
Soit $\vec{u}, \vec{v} \in E$, 
Montrons que $T_{\vec{u}} \circ T_{\vec{v}} = T_{\vec{u}+\vec{v}}$
On compose deux éléments de $\mathcal{E}^{\mathcal{E}}$, 
Donc, $T_{\vec{u}} \circ T_{\vec{v}} \in \mathcal{E}^{\mathcal{E}}$. Par ailleurs $T_{\vec{u} + \vec{v}} \in \mathcal{E}^{\mathcal{E}}$
Soit $A \in \mathcal{E}$, Alors
$$\begin{array}{cl}
(T_{\vec{u}}\circ T_{\vec{v}})(A)
&=T_{\vec{u}}(T_{\vec{v}}(A)) \\
&= T_{\vec{u}}(A+\vec{v}) \\
&= (A + \vec{v}) + \vec{u} \\
&= A + (\vec{v} + \vec{u}) \\
&= A + (\vec{u}+\vec{v}) \\
&= T_{\vec{u} +\vec{u}}(A)
\end{array}$$

Ainsi, pour $\vec{u} \in E$,
$$T_{\vec{u}} \circ T_{\vec{v}} = T_{\overrightarrow{0}} = Id_{\mathcal{E}}$$
et donc, 
$$T_{-\vec{u}}\circ T_{\vec{u}} = T_{-\vec{u}} \circ T_{-(-\vec{u})} = Id_{\mathcal{E}}$$
Ainsi, $T_{-\vec{u}} \in \mathcal{S}(\mathcal{E})$ 
Ainsi $\tau$ est bien définie
De plus le calcul précédent montrer que c'est un morphisme de groupe

Soit $\vec{u} \in E$ tel que $T_{\vec{u}} = Id_{\mathcal{E}}$
En prenant $A = \overrightarrow{0}$ (on se sert de $\mathcal{E} = E$), 
$$\vec{0} = T_{\vec{u}}(\vec{0}) = \vec{0} + \vec{u} = \vec{u}$$
Ainsi, $\text{Ker }\tau = \{ \vec{0} \}$
Donc, $\tau$ est injectif

#### Exemple
$T_{(1, 0)} : \mathbb{R}^{2} \to \mathbb{R}^{2}$, Excal 3

$$T_{(a, b, c)} : \begin{cases}
\mathbb{R}^{3} \to \mathbb{R}^{3} \\
(x, y, z) \mapsto (x+a, y+b, z+c)
\end{cases}$$
$$T_{X^{4}} : \begin{cases}
\mathbb{K}_{4}[X] \to \mathbb{K}_{4}[X] \\
P(X) \mapsto P(X) + X^{4}
\end{cases}$$
$$T_{\cos} : \begin{cases}
\mathcal{C}^{\infty}(\mathbb{R}) \to \mathcal{C}^{\infty}(\mathbb{R}) \\
f \mapsto f + \cos = x \mapsto f(x) + \cos(x)
\end{cases}$$


# Avertissement
A partir de maintenant on ne distingue plus points et vecteurs dans les notations.

# II. Sous espaces affines d'un espace vectoriel de $E$
#### Définition
Un sous espace affine est une partie $\mathcal{F}$ de $E$ telle qu'il existe $a \in E$ et $F\underset{\text{sev}}{\subset}E$ 
vérifient
$$\mathcal{F} = a + F = \{ a + x ; x \in F \}$$

#### Remarque importante
Avec ces notations, $a\in\mathcal{F}$, ($\mathcal{F} \neq \varnothing$)
et on peut remplacer $a$ par un point quelconque $b$ de $\mathcal{F}$.

Pour tout élément $a+x$ de $\mathcal{F}$ (avec $x \in F$)
On a : $a+x = b-b+a+x$
Or $b \in \mathcal{F}$ donc il s'écrit $b = a + y$ avec $y \in F$
et donc, $a+x = b+y-x$
avec $y-x \in F$, 
Ainsi, $a+x \in b + F$ 
Ainsi $a+F \subset b + F$
De manière analogue on a prouvé que $b+F \subset a+F$
Donc, 
$$\mathcal{F} = b + F$$

#### Propriété
Soit $\mathcal{F} = a+F$ avec $\begin{cases}a \in E \\ F\underset{\text{sev}}{\subset} E\end{cases}$
Alors, le $F$ de cette écriture est unique, 
ie si $\mathcal{F} = b + G$ avec $\begin{cases}b \in E \\ G \underset{\text{sev}}{\subset} E\end{cases}$
Alors $G = F$

Cet unique sev de $E$ est appelé la direction de $\mathcal{F}$

Plus précisément : 
$$F = \{ c-b ; c, b \in \mathcal{F} \}$$


Démonstration : 
Il suffit de prouver la formule 
(qui détermine $F$ de manière unique)

Soit $x \in F$, 
Alors $x = (a + x)-a$ 
$a+x \in \mathcal{F}$ et $a \in \mathcal{F}$ par définition de $\mathcal{F}$ puisque $x \in \mathcal{F}$
Donc, 
$$x \in \{ c-b ; c, b \in \mathcal{F} \}$$
Ainsi,
$$F \subset \{ c-b ; c, b \in \mathcal{F} \}$$

Soient $c, b \in \mathcal{F}$ et $x = c-b$, 
Alors, 
$$\begin{cases}
c = a+ z \\
b = a + y
\end{cases}$$
avec $y, z \in F$, Donc, $x = z -y \in F$, (car $F \underset{\text{sev}}{\subset} E$)
Ainsi on a l'inclusion inverse donc, 
$$F = \{ c-b ; c, b \in \mathcal{F} \}$$

#### Exemple
Les singletons $\{ a \}$ où $a \in E$
Sont des ssesp affine de $E$
($\{ a \} = a + \{ 0 \}$) $\{ 0 \}\underset{\text{sev}}{\subset} E$ et $a \in E$
- $E$ est un ssesp affine de lui même : $E = 0_{E} + E$


#### Propriété
Tout sous espace vectoriel de $E$ est aussi un sous espace affine de $E$

Démonstration : 
Soit $F \underset{\text{sev}}{\subset} E$, Alors $F = 0_{E} + F$


#### Remarque 
$\varnothing$ n'est pas un ssesp affine de $E$

#### Définition 
Pour $\mathcal{F}, \mathcal{F}'$ deux ssesp affine de $E$,
on dit qu'ils sont parallèles ss'ils ont la même direction. 
Par flexion-extension, 
on dit que $\mathcal{F}$ (de direction $F$)
est parallèle a $\mathcal{F}'$ (de direction $F'$) 
lorsque $F \subset F'$

#### Notation
$$\mathcal{F} // \mathcal{F}^{'}$$

#### Exemple
Droites parallèles dans $\mathbb{R}^{2}$ ou $\mathbb{R}^{3}$
Plans parallèles dans $\mathbb{R}^{3}$
Droite parallèle a un plan dans $\mathbb{R}^{3}$

#### Remarque
Si $\mathcal{F}$ est un ssesp affine de $E$ de direction $F$, alors $\mathcal{F} // F$ 
ie tout ssesp affine est parallèle a direction 

#### Exemple
Dans $\mathbb{R}^{3}$ soit $D$ de représentation cartésienne : $\begin{cases}x  = 1 \\ y = 1\end{cases}$
et $P$ d'équation $z = \pi$
Alors, $D // P$

Dans $\mathbb{R}^{3}$ on a comme ssesp affine : 
+ les singletons
+ Les droites affines
+ Les plans affines ($ax+by+cz = d$ $(a, b, c, d) \neq 0$ et $a, b, c, d \in \mathbb{R}$)
+ $\mathbb{R}^{3}$

Dans $\mathbb{R}^{2}$ on a : 
- Les singletons
- Les droites vectorielles
- $\mathbb{R}^{2}$


#### Définition : Dimension
Soit $\mathcal{F}$ un ssesp affine de $E$ de direction $F$
On dit que $\mathcal{F}$ est de dimension finie ssi $F$ l'est et dans ce cas on définit la dimension de $\mathcal{F}$ par : 
$$\dim \mathcal{F} = \dim F$$

#### Remarque
On a classé les ssesp affine de $\mathbb{R}^{2}$ et $\mathbb{R}^{3}$ par leur dimension


#### Théorème
Une intersection de ssesp affines de $E$ est : 
- Soit $\varnothing$
- Soit un ssesp affine dont la direction est : l'intersection des directions des ssesp affines dont on prend l'intersection

Démonstration : 
Soit $(\mathcal{F}_{i})_{i \in I}$ une famille de ssesp affines de $E$
On pose
$$\mathcal{F} = \bigcap_{i \in I} \mathcal{F}_{i}$$
Par disjonction de cas : 
Si $\mathcal{F} = \varnothing$ c'est fini
Sinon, 
Soit $a \in \mathcal{F}$, 
On note pour tout $i \in I$, $F_{i}$ la direction de $\mathcal{F}_{i}$
On pose, 
$$F = \bigcap_{i \in I} F_{i}$$
qui est un sev de $E$ ($\cap$ de sev)

Montrons que $\mathcal{F} = a + F$
Soit $y \in \mathcal{F}$ et
Soit $i \in I$, comme
$$\mathcal{F}= \bigcap_{i \in I} \mathcal{F}_{i}$$
$a \in \mathcal{F}_{i}$
Comme $y \in \mathcal{F}$, 
$y \in \mathcal{F}_{i}$, donc $y-a \in \mathcal{F}_{i}$
Ainsi,
$$y-a \in \bigcap_{i \in I}F_{i} = F$$
Donc, 
$$y \in a + F$$

Soit $y \in a + F$, 
Il s'écrit $y = a +x$ avec $x \in F$
Pour $i \in I$ on a $a \in \mathcal{F}_{i}$
et $x \in F_{i}$ donc, $a+x \in \mathcal{F}_{i}$
Ainsi $y=a+x \in \mathcal{F}$

On a prouvé que $\mathcal{F} = a + F$
Donc, C'est un ssesp affine de direction $F$

#### Exemple
Dans $\mathbb{R}^{3}$ l'intersection de deux plans affine peut être : 
- Vide 
- Une droite affine
- Un plan affine

# III. Hyperplans affines et représentations cartésiennes
#### Définition
Un hyperplan affine est un ssesp affine de $E$ dont la direction est un hyperplan vectoriel de $E$

#### Exemple
$$\begin{array}{cl}
\mathcal{H} &= \{ f \in \mathcal{C}_{\mathbb{R}}^{42}(\mathbb{R}) | f(e) = \pi \} \\
&= (x \mapsto \pi) + \{ f \in \mathcal{C}^{42}_{\mathbb{R}}(\mathbb{R}) | f(e) = 0 \}
\end{array}$$
Forme linéaire sur $\mathbb{C}^{42}_{\mathbb{R}}(\mathbb{R})$

#### Cas de la dimension finie
Soit $E$ de dim finie $n$, muni d'une base $e = (e_{i})_{i = 1}^{n}$
Soit $\mathcal{H}$ un hyperplan affine de $E$ : 
$\mathcal{H} = a + H$ ou $H$ est un hyperplan vectoriel de $E$
On prend une équation de $H$ dans $e_{i}$
$$\sum_{i = 1}^{n}a_{i}x_{i} = 0$$
($\forall i \in I, a_{i} \in \mathbb{K}$)
ou $(x_{i})_{i = 1}^{n}$ est la famille des coordonnées de $x$ dans $E$
Pour $x \in E$,
$$\begin{array}{cl}
x \in \mathcal{H} &\Leftrightarrow x \in a + H \\
&\Leftrightarrow x - a \in \mathcal{H} \\
&\Leftrightarrow \sum_{i = 1}^{n}\lambda_{i}(x_{i}-a_{i}) = 0 \\
& \Leftrightarrow \sum_{i = 1}^{n} \lambda_{i}x_{i} = \sum_{i = 1}^{n}\lambda_{i}a_{i} = \mu \text{ (}\sum_{i = 1}^{n}\lambda_{i}a_{i} \text{ est une constante})
\end{array}$$
Ainsi $\mathcal{H}$ est défini par l'équation
$$\mu = \sum_{i = 1}^{n}\lambda_{i}x_{i}$$
avec les $\lambda_{i}$ non tous nuls

Réciproquement supposons que
$(\lambda_{i})_{i = 1}^{n} \in \mathbb{K} \setminus \{ (0)_{i=1}^{n} \}$ et $\mu \in \mathbb{K}$,
et
$$\mathcal{H} = \left\{  x \in E \left| \sum_{i = 1}^{n} \lambda_{i}x_{i} = \mu \right. \right\}$$
Alors, $\mathcal{H}\neq \varnothing$, en prenant un $i_{0} \in [\![1, n]\!]$ tel que $\lambda_{i_{0}} \neq 0$, et $x$ de coordonné $(\delta_{i, i_{0}} \frac{u}{\lambda_{i_{0}}})_{i=1}^{n}$
On a : $a \in \mathcal{H}$, 
Puis on pose $H$ l'hyperplan vectoriel d'équation : 
$$\sum_{i = 1}^{n} \lambda_{i}x_{i}=0$$
et en remontant les 3 dernières équivalences précédentes, on voit que 
Pour $x \in E$, $x \in \mathcal{H} \Leftrightarrow x \in a + H$
Donc, $\mathcal{H} = a + H$
Donc $\mathcal{H}$ est un hyperplan affine de direction
$$H = \left\{  x \in E \left| \sum_{i = 0}^{n} \lambda_{i}x_{i} = 0 \right.  \right\}$$
On a montré la propriété suivante : 

#### Propriété
Soit $E$ de dimension finie muni d'une base $e$,
Les hyperplans affines de $E$ sont les ensembles de la forme ($(x_{i})_{i=1}^{n}$ coordonnées dans $e$)
$$\left\{  x \in E \left| \sum_{i=1}^{n}\lambda_{i}x_{i} =\mu \right. \right\}$$
ou les $\lambda_{i} \in \mathbb{K}$ sont non tous nuls et $\mu \in \mathbb{K}$
De plus la direction d'un tel hyperplan est 
$$\left\{  x \in E \left| \sum_{ i =1}^{n} \lambda_{i}x_{i}=0 \right.  \right\}$$

#### Remarque
On le sait deja dans $\mathbb{R}^{3}$ et dans $\mathbb{R}^{2}$

#### Exemple
###### $\mathbb{R}^{2}$
Les hyperplans affines sont les droites affines définie par les équations : $ax+bc = c$
avec $a, b, c \in \mathbb{R}$ et $(a, b)\neq 0$
La direction d’une telle droite est la droite vectorielle d’équation $ax+by =0$

###### $\mathbb{R}^{3}$ a rappeler


#### Corollaire
Les équations d'hyperplan affines sont uniques a facteur de proportionnalité non nul près 

#### Corollaire
En dimension finie $n$, 
Tout ssesp affine de dimension $n-m$ possède une représentation cartésienne formée de $m$ équations d'hyperplans affines et on obtiens une représentation cartésienne de sa direction en "supprimant" le second membre de ces "équations"

#### Remarque
En général on a une infinité de représentations cartésiennes

#### Exemple
Une droite de $\mathbb{R}^{3}$ possède des représentations cartésiennes de la forme : 
$$\begin{cases}
ax+by+cz = d \\
a'x+b'y+c'z = d'
\end{cases} \text{ avec } \begin{cases}
(a, b, c) \neq (0, 0, 0) \\
(a', b', c') \neq (0, 0, 0)
\end{cases}$$
Sa direction est définie par la représentation : 
$$\begin{cases}
ax+by+cz = 0 \\
a'x+b'y+c'z = 0
\end{cases}$$

#### Exercice
Montrer en dimension $n$ l'intersection de $m$ hyperplans affines est soit vide soit un ssesp affine de dimension $\geq n-m$

#### Exercice
Trouver une représentation paramétrique du plan de $\mathbb{R}^{3}$ d'équation : $x + y + z = 1$
-> Voir feuille de TD

# IV. Equations linéaires avec second membre
#### Propriété
Soit $u \in \mathcal{L}(E, F)$ et $a \in F$,
Alors l'ensemble est solutions de l'équation d'inconnue $x \in E$ : 
$(E) : u(x) = a$ est soit vide soit un ssesp affine de $E$

###### Reformulation : 
La "solution générale" de $(E)$ est somme d'une solution particulière et de la "solution générale" de : 
$$(H) : u(x) = 0$$


Démonstration : 
Soit $a \not\in \mathrm{Im}(u)$ et alors $\{ x \in E | u(x) = a \} = \varnothing$
Soit $a \in \mathrm{Im}(u)$
Il existe donc $x_{0} \in E$ tq $u(x_{0}) = a$ (une solution particulière)
Pour $x \in E$, 
$$\begin{array}{cl}
u(x) = a &\Leftrightarrow u(x) = u(x_{0}) \\
& \Leftrightarrow u(x-x_{0}) = 0 \\
& \Leftrightarrow x - x_{0} \in \text{Ker }u \\
& \Leftrightarrow x \in x_{0} + \text{Ker }u
\end{array}$$


#### Exemple

1. On retrouve ce qu'on sait sur les systèmes linéaires que l'on avait obtenu par la méthode du pivot qui donne directement l'ensemble des solutions comme un ssesp affine


2. $EDL_{1}$ ou $EDL_{2}$
Comprendre que les théorèmes du cours (variation de la constante...) permettent d'exprimer l'ensembles des solutions (toujours non vide avec nos hypothèses) comme un ssesp affine 
- Droite affine de $\mathcal{C}^{1}_{\mathbb{K}}(I)$ pour les $EDL_{1}$
  $(E) : y' + a(x)y = b(x)$ 
  $$\phi : \begin{cases} \mathcal{C}^{1}_{\mathbb{K}}(I) \to \mathcal{C}^{0}_{\mathbb{K}}(I) \\ y \mapsto y' + a(x)y\end{cases} \in \mathcal{L}(\mathcal{C}^{1}_{\mathbb{K}}(I), \mathcal{C}^{0}_{\mathbb{K}}(I))$$
  $(E) \Leftrightarrow \phi(y) = b$
- Plan affine de $\mathcal{C}^{2}_{\mathbb{K}}(I)$ pour les $EDL_{2}$
  $(E) : y'' + ay' + by = f(x)$
  $$\psi : \begin{cases} \mathbb{C}^{2}_{\mathbb{K}}(I) \to \mathbb{C}^{0}_{\mathbb{K}}(I) \\ y \mapsto y'' + ay' + by \end{cases} \in \mathcal{L}(\mathbb{C}^{2}_{\mathbb{K}}(I), \mathbb{C}^{0}_{\mathbb{K}}(I))$$
  
3. Polynômes d'interpolation
   $x_{0}, \dots, x_{n} \in \mathbb{K}$ différents
   $y_{0}, \dots, y_{n} \in \mathbb{K}$
   $$\theta : \begin{cases} \mathbb{K}[X] \to \mathbb{K}^{n+1} \\ P \mapsto (P(x_{0}), \dots, P(x_{n})) \end{cases} \in \mathcal{L}(\mathbb{K}[X], \mathbb{K}^{n+1})$$
   L'ensemble des solutions de $\theta(x) = y$ est : $L + \text{Ker }(\phi)$
   Avec, 
   $$L = \sum_{j = 0}^{n}y_{j} \prod_{i \neq j} \frac{X - x_{i}}{x_{j}-x_{i}} + \mathbb{K}[X]\prod_{i=0}^{n}(X-x_{i})$$

# V. Repères affines
#### Définition
Un repère affine d'un ssesp affine $\mathcal{F}$ de $E$ (Éventuellement $\mathcal{F} = E$) est la donnée : 
- D'une origine de $\mathcal{F}$
- D'une base de la direction $F$ de $\mathcal{F}$, ${(u_{i})}_{i \in I}$

#### Propriété
Avec les notations précédentes : 
Tout point $x \in \mathcal{F}$ s'écrit de manière unique
$$x = a + \sum_{i \in I} \lambda_{i}u_{i}$$
avec $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$

C'est une représentation paramétrique de $\mathcal{F}$

#### Définition
La famille $(\lambda_{i})_{i \in I}$ est la famille de coordonnées de $x$ dans la le repère affine $(a, (u_{i})_{i \in I})$ 

#### Exemple dans $\mathbb{R}^{2}$
On note $R_{2} = (0, (e_{1}, e_{2}))$
le repère canonique de $\mathbb{R}^{2}$

Soit $a = (2, -1)$, $u_{1} = (-1, 1)$, $u_{2} = (1, 2)$
Mais $(a, (u_{1}, u_{2}))$ est un espace affine de $\mathbb{R}^{2}$

#### Exercice
Quels sont les coordonnées $(x', y')$ du point $m=(x, y) \in \mathbb{R}^{2}$

Résoudre l'équation suivante : 
$$(x', y') = a + x(-1, 1) + y(1, 2)$$
Pivot sur $x$ et $y$

#### Exemple
$$\mathcal{F} = \{ (x, y) \in \mathbb{R}^{2} | y = x+1 \}$$
On a la direction de $\mathcal{F}$ :
$$F= \{ (x, y) \in \mathbb{R}^{2} | y = x \} = Vect\begin{pmatrix}
1 \\
1
\end{pmatrix}$$
et $a = (0, 1) \in \mathcal{F}$
Donc, $(a, (u))$ est un repère affine de $\mathcal{F}$ qui admet la représentation paramétrique : 
$$\begin{cases}
x = \lambda \\
y = 1 + \lambda
\end{cases}$$
avec $\lambda \in \mathbb{R}$,
ie
$$\mathcal{F} = \{ (0, 1) + \lambda(1, 1);\lambda \in \mathbb{R} \} = (0, 1) + \mathbb{R}(1, 1) (= \{ (\lambda, \lambda +1); \lambda \in \mathbb{R} \})$$
Un autre repère affine de $\mathcal{F}$ est : $((1, 2), (-42, 42))$

#### Autre notation
$(a, u_{1}, u_{2})$ au lieu de $(a, (u_{1}, u_{2}))$

#### Remarque
Avoir un repère ou une représentation paramétrique c'est la même chose. 
(Vérifier que la famille de vecteurs obtenue a partir d'une représentation paramétrique est bien une base)

#### Exercice
Trouver un repère et une représentation paramétrique du ssesp affine de $\mathbb{R}^{4}$ défini par l'équation : 
$$x+2y+3z=4$$
C'est un hyperplan affine donc de dimension $4-1 = 3$
Avec $x, y, z, t \in \mathbb{R}$
Le système est donc déjà échelonné réduit donc l'ensemble des solutions est :
$$\begin{pmatrix}
x \\
y \\
z \\
t
\end{pmatrix} \in
\begin{pmatrix}
4 \\
0 \\
0 \\
0
\end{pmatrix} + \mathbb{R}\begin{pmatrix}
-2 \\
1 \\
0 \\
0
\end{pmatrix}+ \mathbb{R}\begin{pmatrix}
-3 \\
0 \\
1 \\
0
\end{pmatrix} + \mathbb{R}\begin{pmatrix}
0 \\
0 \\
0 \\
1
\end{pmatrix}$$
