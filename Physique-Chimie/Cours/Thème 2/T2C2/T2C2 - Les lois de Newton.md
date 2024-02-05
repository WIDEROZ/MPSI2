# I. Rappel sur les forces
## 1. La masse inertielle
#### Définition
La masse inertielle d'un système est une grandeur physique positive, propre au système et qui caractérise sa résistance au changement du vecteur vitesse. 

#### Propriétés
La masse est un grandeur :
- Conservative : elle ne change pas par changement de référentiel et pour un système fermé la masse en constante.
- Extensive :
    La masse d'un système formé de $N$ points de masse $m_{i}$ est la somme des masses :
    $$m_{totale} = \sum_{i = 1}^Nm_{i}$$
    
    La masse d'un solide de volume $V$ et de masse volumique $\mu$ sa masse $m = \iiint \mu\,dV$. 
    Si le solide est homogène $\mu = cte \Rightarrow m = \mu V$

## 2. Les forces
#### Définitions
Une force est la modélisation de l'action exercé sur un système materiel. On représente une force par un vecteur qui représente la direction, le sens, le point d'application et l'intensité de cette action.
L'unité de la force est le $N$.
$$1\text{ N} = 1\text{ kg.m.s}^{-1}$$

#### Propriété
- Il existe des forces de contact et des forces à distance.
- Les forces sont additives :
    la résultante des forces sur un système est la somme de toutes les forces qu'y s'y appliquent. 

### a. Force gravitationnelle
ex 1
Soit $M_{1}, M_{2}$ deux points
Le force gravitationnelle de $M_{1}$ sur $M_{2}$ est : 
$$\vec{F}_{M_{1}\to M_{2}} = \frac{Gm_{1}m_{2}}{M_{2}M_{2}^2}\vec{u} = -G \frac{m_{1}m_{2}}{M_{1}M_{2}^3}\overrightarrow{M_{1}M_{2}}$$

$$G = 6,67.10^{-11} \text{ m}^3 \text{ kg}^{-1} \text{ s}^{-2}$$
La constante de gravitation. 

La force gravitationnelles est toujours attractive. 

#### Conséquence : Le poids
Sur terre :
$$\vec{P} = m\vec{g}$$
$m$ : la masse du système
$\vec{g}$ : l'accélération de pesanteur
$$\vec{g} = - \frac{GM_{T}}{R^2}\vec{u}_{r}$$
$R_{T}$ : Le rayon de la Terre. 
En première approximation $|\vec{g}| = cte$ 
excla2
## b. La force de Coulomb
$$\vec{F} = \frac{q_{1}q_{2}}{4\pi \epsilon_{0}} \times\frac{\overrightarrow{M_{1}M_{2}}}{M_{1}M_{2}^3} = \frac{q_{1}q_{2}}{4\pi \epsilon_{0}} \times \frac{\vec{u}}{M_{1}M_{2}^2}$$
$\epsilon_{0} = 8.85.10^{-12}$ $F.$$m^{-1}$ 
Permitivité diélectrique du vide
Cette force est attractive si $q_{1}q_{2} < 0$
Cette force est répulsive si $q_{1}q_{2}>0$ 

### c. Force de frottements fluide
excal 3

Si $|\vec{v}|$ est faible
$$\vec{F}_{f} = -h\vec{v}$$
est linéaire
Si $|\vec{v}|$ est élevée
$$\vec{F}_{f} = -\alpha v\vec{v}$$
$h$ et $\alpha$ : coefficients de frottements, ils dépendent du fluide et de la géométrie de l'objet. 

### d. Tension d'un fil
excal 4
$\vec{T}$ : tension du fil
- Son intensité dépend des autres forces
- $\vec{T}$ est toujours le long du fil vers le le point d'attraction

### e. Autres exemples
- Force de rappel d'un ressort : $\vec{F}_{el} = -k(l-l_{0})\vec{u}$ 
- Poussée Archimède : On a un solide dans un fluide, il subit une action opposé au poids du fluide qu'il remplace. $\vec{\pi} = - mf\vec{g}$ 
    $mf = V_{im}\mu_{f}$ 
    $V_{im}$ : volume du solide immergé dans le fluide
    $\mu_{f}$ : masse volumique du fluide
- Réaction d'un support $\vec{R}$ : (force de frottement)
    Opposé au mouvement
    $\vec{R} = \vec{N} + \vec{T}$
    Excla 5

# II. La $1^{ere}$ loi de Newton (Principe d’inertie)
#### Définition
Un point materiel de masse $m$ est dit isolé si il ne subit aucune action extérieure. C'est un état hypothétique. 
Un point materiel de masse $m$ est dit pseudo-isolé si la résultante des action qu'il subit est nulle. $\sum \vec{F} = \vec{0}$. 

#### Propriété
Il existe des référentiels appelés galiléens dans lesquels un système isolé est en mouvement rectiligne uniforme. 
Tout référentiel en translation rectiligne uniforme par rapport a un référentiel galiléen est aussi galiléen. 

##### Exemples de référentiels galiléens :
- Référentiel de Copernic :
    Origine : centre du système solaire
    3 axes orthogonaux qui pointent vers 3 étoiles lointaines
    Ce référentiel peut être considéré comme galiléen si les mouvements étudiés sont plus court que le temps de déplacement du soleil dans la galaxie (plusieurs milliers d'années)
- Le référentiel Héliocentrique :
    Origine : Centre du soleil
    3 axes orthogonaux qui pointent vers 3 étoiles lointaines
    Ce référentiel peut être considéré comme galiléen si les mouvements étudiés sont plus court que le temps de déplacement du soleil dans la galaxie (plusieurs milliers d'années)
- Le référentiel géo-centrique : 
    Origine : Centre de la terre
    3 axes orthogonaux qui pointent vers 3 étoiles lointaines
    Ce référentiel peut être considéré comme galiléen si les mouvements étudiés sont plus court que le temps de rotation de la terre autour du soleil (plusieurs mois)
- Référentiel terrestre : 
    Origine : centre de la terre
    3 axes orthogonaux fixes par rapport a la terre
    (en général) 1 axe sur l'axe Nord-Sud et les 2 autres dans le plan de l'équateur. 
    Il peut êrtre considéré comme galiléen pour des mouvements très courts (une ou deux heures)

# III. La $2^{eme}$ loi de Newton
#### Propriété
Soit $M$ un point de masse $m$ en mouvement dans un référentiel galiléen $\mathcal R$ 
$$\frac{d\vec{p}}{dt} = m \frac{d\vec{v}}{dt} = \sum_{i}\vec{F}_{i}$$
$\vec{p} = m\vec{v}$ : impulsion au quantité de mouvement
On l'appelle aussi :
- PFD (principe fondamental de la dynamique)
- RFD (résultante fondamentale de la dynamique)
- TQM (Théorème de la quantité de mouvement)

# IV. La $3^{eme}$ loi de Newton
Soit deux points $M_{1}$ et $M_{2}$, 
$\vec{F}_{M_{1} \to M_{2}}$ : Action de $M_{1}$ sur $M_{2}$
$$\vec{F}_{M_{1} \to M_{2}} = -\vec{F}_{M_{2}\to M_{1}}$$
$$\vec{F}_{M_{1}\to M_{2}} \wedge \overrightarrow{M_{1}M_{2}} = \vec{0}$$

C'est le principe d'action réciproque

# V. Système de 2 points matériels
Soit un système dormé de deux points $M_{1}(m_{1})$ et $M_{2}(m_{2})$ la masse totale est $m = m_{1} + m_{2}$ on se place dans un repère galiléen $\mathcal R$

## 1. Le centre d’inertie
#### Définition
Le centre d'inertie ou le centre de masse est le point $G$ tel que : 
$$m_{1} \overrightarrow{AM_{1}} + m_{2}\overrightarrow{AM_{2}} = (m_{1}+m_{2})\overrightarrow{AG} \Leftrightarrow m_{1} \overrightarrow{GM_{1}}+m_{2}\overrightarrow{GM_{2}} = \vec{0}$$
Soit $O$ le centre du référentiel, 
$$\overrightarrow{OG} = \frac{m_{1} \overrightarrow{OM_{1}}+m_{2}\overrightarrow{OM_{2}}}{m_{1}+m_{2}}$$

## 2. La résultante cinétique
#### Définition
On appelle résultante cinétique du système $\{M_{1},M_{2}\}$ la quantité de mouvement total : 
$$\vec{p} = \vec{p}_{1} + \vec{p}_{2}$$

$$\vec{p} = m_{1}\vec{v}_{M_{1}}+m_{2}\vec{v}_{M_{2}}$$
$$\vec{v}_{M_{1}} = \frac{d\overrightarrow{OM}}{dt})_{\mathcal R}$$
$$\vec{v}_{M_{2}} = \frac{d\overrightarrow{OM}}{dt}$$

## 3. Dynamique du système
excal 6
- Système $\mathcal{S} = \{M_{1}, M_{2}\}$
- Référentiel galiléen $\mathcal{R}_{g}$

Les forces subies par $\mathcal{S}$ sont de 2 types

- Les forces extérieures $\vec{F}_{ext}$ dont l'origine est externe au système $\mathcal{S}$
- Les forces intérieures
    $\vec{F}_{int} = \vec{F}_{1 \to 2} + \vec{F}_{2\to1}$

Appliquons le PFD aux 2 points sur $M_{1}$
$$m_{1} \frac{d\vec{v}_{1}}{dt})_{\mathcal{R}_{g}} = \vec{F}_{1}+\vec{F}_{2 \to 1}$$
$$m_{2} \frac{d\vec{v}_{2}}{dt})_{\mathcal{R}_{g}} = \vec{F}_{2}+\vec{F}_{1 \to 2}$$

On additionne : 
$$\frac{d}{dt}(m_{1}\vec{v}_{1}+m_{2}\vec{v}_{2}))_{\mathcal{R}_{g}} = \vec{F}_{1} + \vec{F}_{2} + \vec{F}_{1\to 2}\vec{F}_{2 \to1}$$
On pose :
$m = m_{1} + m_{2}$
$\vec{v}_{G} = v_{1}+v_{2}$ 
Avec $G$ le centre de masse

$$\frac{dm\vec{v}_{G}}{dt})_{\mathcal{R}_{g}} = \vec{F}_{ext}$$


#### Propriété : Théorème du centre d'inertie
Soit $\mathcal{S}$ un système de masse totale $m$ et de centre de masse $G$. 
$$\frac{dm\vec{v}_{G}}{dt})_{\mathcal{R}_{g}}= \frac{d\vec{p}_{\mathcal{S}}}{dt})_{\mathcal{R}_{g}} = \vec{F}_{ext}$$

# VI. Mouvement dans le champ de pesanteur
excal 7
PFD : 
$$m \frac{d^2\overrightarrow{OM}}{dt^2} = \vec{F}$$
Avec :
$\vec{F}$ : La somme des forces

Conditions initiales : 
- $\vec{v}(t = 0)$
- $\overrightarrow{OM}(t = 0)$

## 1. Sans frottements
Système : Point $M$ de masse $m$
Référentiel : Terrestre considéré galiléen

Bilan des forces : 
Poids : 
$\vec{P} = m\vec{g}$

Conditions initiales :
$\vec{v}(t = 0) = v_{0}\cos \alpha \space \space \vec{e}_{x}+v_{0}\sin \alpha \space \space \vec{e}_{z}$


Déterminons l'équation cartésienne de la trajectoire. 

1. Equation horaires
    PFD : 
    $$m \frac{d^2\overrightarrow{OM}}{dt^2} = m\vec{g} = - mg\vec{e}_{z}$$
    On intègre une fois :
    $$\frac{d\overrightarrow{OM}}{dt} = -gt\vec{e}_{z}+ \vec{v}(t = 0)$$
    $$\frac{d\overrightarrow{OM}}{dt} = \vec{v} = v_{0}\cos (\alpha) \vec{e}_{x} + (v_{0} \sin(\alpha)-gt)\vec{e}_{z}$$
    On intègre encore :
    $$(v_{0}\cos(\alpha)t + x(t = 0))\vec{e}_{x}+\left( v_{0}\sin (\alpha)t - \frac{g}{2}t^2 + z(t = 0) \right)\vec{e}_{z}$$
    
$$ \left\{ \begin{array}{l} \frac{d^2x}{dt^2} = 0 \\ \frac{d^2y}{dt^2} = 0 \\ \frac{d^2z}{dt^2} = g \end{array} \right.$$
$$\left\{ \begin{array}{l}
\frac{dx}{dt} = v_{0}\cos \alpha \\
\frac{dy}{dt} = 0 \\
\frac{dz}{dt} = gt + v_{0}\sin \alpha
\end{array} \right.$$
$$\left\{ \begin{array}{l}
x(t) = v_{0}\cos(\alpha)t \\
y(t) = 0 \\
z(t) = v_{0} \sin (\alpha) t + \frac{1}{2} gt^2
\end{array} \right.$$


2. On exprime $t$ en fonction de $x$
    $t = \frac{x}{v_{0}\cos \alpha}$

3. On remplace $t$ dans $z(t)$
    $$z = x\sin \alpha - \frac{1}{2}g \frac{x^2}{(v_{0}\cos \alpha)^2}$$
    $$z = -\frac{1}{2} g \frac{x^2}{(v_{0}\cos \alpha)^2} + x\tan \alpha$$


Portée de tir
$x_{p} = x(z = 0)$
$$\Leftrightarrow -\frac{1}{2}g \frac{x^2}{(v_{0}\cos \alpha)^2}+ x \tan \alpha = 0 \Leftrightarrow x = 0 \text{ ou }-\frac{1}{2}g \frac{x}{(v_{0}\cos \alpha)^2}+ \tan \alpha = 0$$
$$x = \frac{2}{g}v_{0}^2\cos^2(\alpha)\tan(\alpha) = \frac{v_{0}^2}{g}2\cos \alpha \sin \alpha$$
$$x_{p} = \frac{v_{0}^2}{g}\sin(2\alpha)$$

- Parabole de sûreté
exal 8

On suppose $v_{0} = cte$, $\alpha$ qui varie
à quelle conditions un point $M_{1}(x_{1}, z_{2})$, n'est pas touché?

Il faut résoudre
$$z_{1} = -\frac{1}{2}g \frac{x_{1}^2}{(v_{0}\cos \alpha)^2} + x_{1}\tan \alpha$$
S'il existe $\alpha$ tel que l'équation est résolue alors $M_{1}$ est touché, sinon $M_{1}$ n'est pas touché. 
$$\frac{1}{\cos^2\alpha} = 1 + \tan \alpha$$
$$z_{1} = -\frac{1}{2}g \frac{x_{1}^2}{v_{0}^2}(1 + \tan^2 \alpha) + x_{1} \tan \alpha$$

On pose $u = \tan \alpha$ et on a une equation sur $u$
$$-\frac{1}{2}g^2 \frac{x_{1}^2}{v_{0}^2}u^2 + x_{1}u - z_{1} \frac{1}{2}g \frac{x_{1}^2}{v_{0}^2} = 0$$
$M_{1}$ n'est pas touché si le discriminant est négatif (pas de solutions réelles)
$$\Delta = x_{1}^2-4 \frac{1}{2}g \frac{x_{1}^2}{v_{0}^2}\left( \frac{1}{2}g \frac{x_{1}^2}{v_{0}^2}z_{1} \right) < 0$$
On suppose que $x_{1} \neq 0$
$$1- \frac{2g}{v_{0}^2}\left( \frac{1}{2}g \frac{x_{1}^2}{v_{0}^2} \right) + z_{1} <0$$
$$z_{1} > \frac{v_{0}^2}{2g} - \frac{1}{2} g \frac{x_{1}^2}{v_{0}^2}$$
parabole de sûreté

#### Cas particulier : Chute libre
excal 9

$x = x_{0}$ et $z = -\frac{1}{2}gt^2 + z_{0}$

durée de chute $T$ 
$T$ telle que $z(T) = 0$
$$-\frac{1}{2}g T^2 + z_{0} = 0$$
$$T = \sqrt{ \frac{2z_{0}}{g} }$$

- vitesse d'impact $v_{imp}$
$$|v_{imp}| = |v(T)| = gt$$
$$|v_{imp}| = \sqrt{ 2gz_{0} }$$

## 2. Avec frottements
excal 10

Frottements linéaires : 
$$\vec{F}_{f} = -h\vec{v} \text{ avec } h = cte$$

- Système : point $M$ de masse $m$
- Référentiel : terrestre

Bilan des forces : 
Poids : $\vec{P} = m\vec{g}$
Force de frottement : $\vec{F}_{f} = -h\vec{v}$

Conditions initiales : 
$$\left\{ \begin{array}{l}
\vec{v}(t = 0) = v_{0}\cos \alpha \vec{e}_{x} + v_{0}\sin (\alpha)\vec{e}_{y} \\
\overrightarrow{OM}(t = 0) = \vec{0}
\end{array} \right.$$

PFD : 
$$m \frac{d\vec{v}}{dt} = m\vec{g} - h\vec{v}$$
Une equation différentielle sur  $\vec{v}$. 
$$\frac{d\vec{v}}{dt} + \frac{h}{m}\vec{v} = \vec{g}$$
Linéaire d'ordre 1 à coefficient constant
$$\vec{v}(t) = \vec{v}_{p}+\vec{v}_{H} = \frac{m\vec{g}}{h} + \vec{A}e^{ -t/\tau }$$
avec $\tau = \frac{m}{h}$
avec $\vec{A}$ un vecteur constant
à $t = 0$,
$$\vec{v} = v_{0}\cos (\alpha)\cos (\alpha) \vec{e}_{x} + v_{0}\sin (\alpha) \vec{e}_{z}$$
$$\left\{ \begin{array}{l}
A_{x} = v_{0}\cos \alpha \\
-\frac{mg}{h} + A_{z} = v_{0} \sin \alpha
\end{array} \right.$$
$$\left\{ \begin{array}{l}
A_{x} = v_{0} \cos \alpha \\
A_{z} = v_{0}\sin \alpha + \frac{mg}{h}
\end{array} \right.$$

$$\vec{A} = v_{0} \cos (\alpha)\vec{e}_{x} + \left( v_{0}\sin \alpha + \frac{mg}{h} \right)\vec{e}_{z}$$
$$\vec{v}(t) = v_{0}\cos (\alpha) e^{ -t/\tau }\vec{e}_{x} + \left( \left( v_{0}\sin \alpha + \frac{mg}{h} \right)e^{ -t/\tau }-\frac{mg}{h} \right)\vec{e}_{z}$$

###### Autre Méthode : Equation différentielle scalaire
$$\left\{
\begin{array}{l}
\frac{dv_{x}}{dt} + \frac{h}{m}v_{x} = 0 \\
\frac{dv_{z}}{dt} + \frac{h}{m}v_{z} = -g
\end{array}
\right.$$
$$\left\{
\begin{array}{l}
v_{x} = v_{x_{_{H}}} = A_{x}e^{ -t/\tau } \\
v_{z} = v_{z_{_{P}}} + v_{z_{_{H}}} = -\frac{mg}{h} + A_{z}e^{ -t/\tau }
\end{array}
\right.$$
$$\left\{
\begin{array}{l}
v_{x}(0) = v_{0}\cos \alpha = A_{x} \\
v_{z}(0) = v_{0}\sin \alpha = - \frac{mg}{h}+ A_{z}
\end{array}
\right.$$
Donc 
$$\left\{
\begin{array}{l}
A_{x} = v_{0}\cos \alpha \\
A_{z} = v_{0}\sin \alpha + \frac{mg}{h}
\end{array}
\right.$$

$$\frac{d\overrightarrow{OM}}{dt} = \vec{v}(t)$$
On intègre
$$\overrightarrow{OM} = -(\tau v_{0}\cos \alpha e^{ -t/\tau }+A)\vec{e}_{x}- \left( \tau\left( v_{0}\sin \alpha + \frac{mg}{h} \right)e^{ -t/\tau }-\frac{mg}{h}+t +B\right)\vec{e}_{z} - \tau v_{0}\cos \alpha e^{ -t/\tau } + A$$

$$\overrightarrow{OM} = \left|
\begin{array}{l}
-\tau v_{0}\cos \alpha e^{ -t/\tau } + A \\
0 \\
-\tau\left( v_{0} \sin \alpha + \frac{mg}{h} \right)e^{ -t/\tau } - \frac{mg}{h}t + B
\end{array}
\right.$$
avec $A$ et $B$ des constante 
CI :
$\overrightarrow{OM}(t = 0) = \vec{0}$

$0 = -\tau v_{0}\cos \alpha + A$
$0 = 0$
$0 = -\tau\left( v_{0}\sin \alpha + \frac{mg}{h} \right) + B$

$$\Leftrightarrow \left\{ \begin{array}{l}
A = \frac{m}{h}v_{0}\cos \alpha \\
B = \frac{m}{h}\left( v_{0} \sin \alpha + \frac{mg}{h} \right)
\end{array}\right.$$

$$\left\{ \begin{array}{l}
x(t) = \frac{m}{h}v_{0}\cos \alpha(1 - e^{ -t/\tau }) \\
y(t) = 0 \\
z(t) = \frac{m}{h}\left( v_{0}\sin \alpha + \frac{mg}{h} \right)(1-e^{ -t/\tau }) + \frac{mg}{h}t
\end{array}\right.$$

- Equations horraires
- Vitesse limite

$v$ quand $t \to + \infty$

$\vec{v}_{lim}$ est la solution particulière de l'équation différentielle sur $\vec{v}$.
$$\vec{v}_{lim} = \frac{m\vec{g}}{h}$$

Lorsque $v_{lim}$ est atteinte les equations horaires se simplifieront

$$\left\{ \begin{array}{l}
x(t) \underset{ t \to + \infty}{\longrightarrow} \frac{mv_{0}\cos \alpha}{h} = cte \\
z(t) \underset{ t \to + \infty}{\longrightarrow} \frac{mgt}{h}
\end{array}\right.$$

Allure de la trajectoire : excal 11


###### Cas particulier : Chute libre
$\vec{v}_{0} = \vec{0}$
$$\vec{v} = \frac{m\vec{g}}{h}(1 - e^{ -t/\tau })$$
$$\tau = \frac{m}{h}$$
$$\vec{v}_{lim} = \frac{m\vec{g}}{h}$$

# VII. Pendule Simple
exal 12
Pendule simple : Mass ponctuelle $m$ attaché a un fil inextensible de longueur $l$, sans masse la trajectoire de $M$ est un arc de cercle dans le plan de la feuille donc on se place en coordonnées polaires ($\rho, \theta, z$)



ici : $\rho = OM = l = cte$
$\theta$ : angle que fait le pendule avec la verticale
- Système : Point $M$ de masse $m$
- Référentiel : Terrestre considéré comme galiléen

Bilan des forces : 
$\vec{P} = m\vec{g}$
$\vec{T}$ : la tension du fil
On néglige les frottements

PFD : 
$$m\vec{a} = \vec{P} + \vec{T}$$
On projette sur la base polaire: 
$$\left\{ \begin{array}{l}
ma_{\rho} = mg\cos \theta - T \\
ma_{\theta} = -\sin (\theta) mg
\end{array} \right.$$
$$\overrightarrow{OM} = l \vec{u}_{\rho}$$
$$\vec{v} = l \overset{\cdot}{\theta}\vec{v}_{\theta}$$
$$\vec{a} = l \overset{\cdot \cdot}{\theta}\vec{v}_{\theta} - l \overset{\cdot}{\theta}^2\vec{v}_{\rho}$$
$$\left\{ \begin{array}{l}
-ml\theta^2 = mg\cos \theta - T \\
ml\overset{\cdot \cdot}{\theta} = -mg\sin \theta
\end{array} \right.$$

On veut $\theta(t)$, donc on utilise l'équation sur $\vec{v}_{0}$
$$\overset{\cdot \cdot}{\theta}+\frac{g}{l}\sin \theta = 0$$
Hypothèse : Petits angles. ($\theta < \approx 30^{\circ}$)

L'équation différentielle se réécrit sous la forme : 
$$\overset{\cdot \cdot}{\theta} + \frac{g}{l}\theta = 0$$

C'est l'équation d'un oscillateur harmonique de pulsation propre : $\omega_{0} = \sqrt{ \frac{g}{l} }$ 
$$\overset{\cdot \cdot}{\theta} + \omega_{0}^{2} \theta = 0$$
Donc les solutions 
$$\theta(t)= A\cos(\omega_{0}t)+B\sin (\omega_{0}t)$$
Avec A et B des constantes

##### Conditions initiales :
$$\left\{ \begin{array}{l}
\theta(0) = \theta_{0} \\
\overset{\cdot}{\theta}(0) = 0
\end{array} \right.$$

Alors 
$$\theta(0) = A = \theta_{0}$$
$$\overset{\cdot}{\theta} = - \omega_{0}\theta_{0}\sin \omega_{0}t + \omega_{0}B\cos \omega_{0}t$$
$$\Rightarrow B = 0$$
Donc on obtient : 
$$\theta(t) = \theta_{0}\cos \omega_{0}t$$
La periode du mouvement :
$$T_{0} = \frac{2\pi}{\omega_{0}} = 2\pi \sqrt{ \frac{l}{g} }$$

Excal 13.

