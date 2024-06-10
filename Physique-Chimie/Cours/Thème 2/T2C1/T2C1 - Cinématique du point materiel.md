$$v \ll c$$
$c$ la vitesse de la lumière dans le vide
$$L \gg \lambda_{dB} = \frac{h}{mv}$$
$h$ la constante de planck
$L$ La taille du système

$\lambda_{dB}$ : Longueur d'onde de Broglie (Se prononce "Breuil")

# I. Description du mouvement d'un point
## 1. Temps et espace
### a. Le temps
- C'est une grandeur physique scalaire toujours positive
- Principe de causalité : Le temps est irreversible
- L'unité de temps est la seconde $s$

### b. L'espace
- L'espace est représenté par une base vectorielle à 3 dimensions
- Unité de l'espace : $m$ 
- L'espace est un espace affine euclidien

L'espace et le temps sont reliés par $c$ la vitesse de la lumière

## 2. Notion de référentiel
#### Définition
Un référentiel $\mathcal{R}$ est un solide de référence considéré immobile par rapport auquel on étudie les mouvements. 

- Ce solide à un repère d'origine $O$ et de 3 vecteurs formants une base. Il permet de mesurer les longueurs. 
- Une Horloge qui permet de mesurer le temps

## 3. Mouvement d'un point vecteurs cinématiques
#### Définition
Un système mécanique sera assimilé à un point materiel si on peut négliger ses dimensions. 
Son état (position vitesse et accélération) est complètement décrit par 3 coordonnés spatiales. 
Un point materiel se caractérise aussi par sa masse $m$ qui est une grandeur scalaire positive. 

### a. Le vecteur position
#### Définition
Dans le référentiel $\mathcal{R}$ on repère le point $M$ par son vecteur position : 
$$\vec{r}(t) = \overrightarrow{OM}(t)$$
avec $O$ le centre du repère dans $\mathcal{R}$ 
La trajectoire de $M$ est l'ensemble des positions prises par ce point. 
Les coordonnées $C_{i}$ de $M$ dont les projections de $\vec{r}$ sur les vecteur de la base $u_{i}$ 
$$C_{i}(t) = \vec{r}(t).\vec{u}_{i}(t)$$
$$\vec{r} = \sum C_{i} \vec{u}_{i}$$

Equations du mouvement ou équations horaire $\Leftrightarrow$ $C_{i}$ est une fonction
S'il est possible d'exprimer une coordonnée en fonction dans autres sans faire apparaître de temps on parle d'équation de la trajectoire

#### Exemple
Soit $M$ qui a une trajectoire circulaire uniforme
Excalibur 1. 
On note $\omega = cste$ la vitesse angulaire $M$
- Exprimer les equations horaires du mouvement $x(t)$ et $y(t)$ 
    Excalibur 2.
    $x(t) = R\cos(\Theta(t))$
    $y(t) = R\sin(\Theta(t))$
    $\Theta = \omega t$
    On a donc : 
    $x(t) = R\cos(\omega t)$
    $y(t) = R\sin(\omega t)$

- Déterminer une équation de la trajectoire
    Il faut donc exprimer $x$ en fonction de $y$ sans que $t$ apparaisse
    On prend le carré des équations horaires
    $x^2(t) = R^2\cos^2(\omega t)$
    $y^2(t) = R^2\sin^2(\omega t)$
    On additionne des 2 équations : 
    $x^2 + y^2 = R^2\cos^2(\omega t) + R^2\sin^2(\omega t)$ 
    $x^2 + y^2 = R^2$
    $x = \pm \sqrt{ R^2 - y^2 }$

### b. Déplacement élémentaire
#### Définition
Le vecteur déplacement élémentaire
$$d\vec{r} = d\overrightarrow{OM} = \overrightarrow{M(t+dt)M(t)}$$
C'est le vecteur reliant 2 positions successives de $M$ dans $\mathcal R$
$$d\vec{r} = \overrightarrow{OM}(t+dt) - \overrightarrow{OM}(t) $$

### c. Vecteur vitesse
#### Définition
La vitesse $\vec{v}$ d'un point $M$ dans le référentiel $\mathcal R$ est définie comme :
$$\vec{v} = \left( \frac{d\overrightarrow{OM}}{dt} \right)_{\mathcal R}$$
la vitesse $v$ est la norme su vecteur vitesse
$$v = \left| \left| \left( \frac{d\overrightarrow{OM}}{dt} \right)_{\mathcal{R}} \right| \right|$$
Soient $O$ et $O'$ deux origines de repères. (fixes)
Le vecteur vitesse de $M$ dépend-il du repère?
$$\vec{v'} = \left( \frac{d\overrightarrow{O'M}}{dt} \right)_{\mathcal R}$$ $$\overrightarrow{O'M} = \overrightarrow{OO} + \overrightarrow{OM}$$
Donc
$$\vec{v'} = \left( \frac{d\overrightarrow{O'O}}{dt} \right)_{\mathcal R} + \vec{v}$$
Comme $O'$ et $O$ sont fixes dans $\mathcal R$ 
$$\overrightarrow{O'O} = \overrightarrow{cte}$$
Alors
$$\vec{v'} = \vec{v}$$
Le vecteur vitesse ne dépend pas du repère choisi. 

$$\vec{v}_{M/\mathcal R} = \lim_{ dt \to 0} \frac{\overrightarrow{OM}(t+dt) - \overrightarrow{OM}(t)}{t + dt -t} $$
$$\vec{v}_{M/\mathcal R} \times dt \approx d\overrightarrow{OM} = d\vec{r}$$
$$\vec{v}_{M/\mathcal R} \approx \frac{d\overrightarrow{OM}}{dt}$$

#### Propriété
- Le point d'application de $\vec{v}$ est le point $M$
- Si $\vec{v} \neq \vec{0}$ alors le vecteur $\vec{v}$ est tangent à la trajectoire en $M$

#### Exemple
Soit $M$ décrivant une trajectoire elliptique a la vitesse angulaire $\omega = cte$ le vecteur position s'écrit : 
$$\vec{r} = 2R\cos(\omega t)\vec{e}_{x} + R\sin(\omega t)\vec{e}_{y}$$

- Exprimer $v_{M/\mathcal R}$ 
    $$\vec{v}_{M/\mathcal R} = \left( \frac{d\vec{r}}{dt} \right)_{\mathcal R} = \left(\frac{d 2R\cos(\omega t)\vec{e}_{x} + R\sin(\omega t)\vec{e}_{y}}{dt} \right)_{\mathcal R} = \frac{d_{2}R\cos(\omega t)}{dt}\vec{e}_{x} + \frac{dR\sin(\omega t)}{dt} \vec{e}_{y}$$
    $$\vec{v}_{M/\mathcal R} = -2R\omega \sin(\omega t)\vec{e}_{x}+R\omega \cos(\omega t)\vec{e}_{y}$$
    

- Montrer que le mouvement n'a pas une vitesse constante : 
    On dérive le vecteur vitesse. 
    $$\left( \frac{d\vec{v}_{M/\mathcal R}}{dt} \right)_{\mathcal R} = -2R\omega^2\cos (\omega t)$$

### d. Vecteur accélération
#### Définition
Le vecteur accélération de point $M$ dans $\mathcal R$ est : 
$$\vec{a}_{M/\mathcal R} = \left( \frac{d\vec{v}_{M/\mathcal R}}{dt} \right)_{\mathcal R}$$
$$\vec{a}_{M/\mathcal R} = \left( \frac{d^2 \overrightarrow{OM}}{dt^2} \right)_{\mathcal R}$$

#### Remarques
On peut distinguer 2 composantes de l'accélération
- Une composante normale à la trajectoire en entrée vers l’intérieur de la trajectoire. Elle correspond à la variation de direction du vecteur vitesse $\vec{v}$ 
- Une composante tangentielle à la trajectoire qui correspond a la variation de la norme de la vitesse
    $$\vec{a} = \frac{d\vec{v}}{dt}$$
    on écrit $\vec{v} = v \vec{u}$ avec $\vec{u}$ le vecteur unitaire tangent a la trajectoire en $M$ $$\vec{a} = v \frac{d\vec{u}}{dt} + \frac{dv}{dt}\vec{u}$$
    (premier terme : Acceleration normale, deuxieme terme : accélération tangentielle)


#### Propriété
- Le point d'application du vecteur $\vec{a}$ est le point $M$
    si $\vec{a} \neq \vec{0}$ alors $\vec{a}$ est orienté vers l’intérieur de la trajectoire

#### Exemple
On considère un ballon d'helium qui monte dans l'atmosphère à la vitesse $\vec{v} = v_{0} \vec{e}_{z}$ avec $v_{0} = cte$ et $\vec{e}_{z}$ la verticale vers le haut. 
Le vent va faire dériver le ballon à la vitesse $\vec{v}_{vent} = \frac{z}{t}\vec{e}_{x}$ avec $z$ l'altitude et $t$ le temps.
Le vecteur vitesse du ballon est $\vec{v} = \frac{z}{t}\vec{e}_{x}+v_{0}\vec{e}_{z}$ 

1. Déterminer les equations du mouvement
2. Determiner l'équation de la trajectoire
3. Calculer le vecteur accélération $\vec{a}$ du ballon dans le référentiel terrestre.

1. $$\vec{v} = \frac{d \overrightarrow{OM}}{dt} = \frac{dx}{dt}\vec{e}_{x} + \frac{dz}{dt}\vec{e}_{z}$$
    $$\frac{dx}{dt} = \frac{z(t)}{t}$$ et
    $$\frac{dz}{dt} = v_{0} = cte$$
    On integre entre 0 et t $\frac{dz}{dt}$
    $z(t) - z(0) = v_{0}t$
    Alors 
    $z(t) = v_{0}t$
    $$\frac{dx}{dt} = \frac{z(t)}{t} = \frac{v_{0}t}{t} = v_{0}$$
    Integration entre 0 et t
    $x(t) - x(0) = v_{0}t$
    Trajectoire : $x = z$


3. $$\vec{a} = \left( \frac{d\vec{v}}{dt} \right)_{\mathcal{R}} = \frac{dv_{0}}{dt} + \frac{d}{dt}\left( \frac{z}{t} \right)\vec{e}_{x}$$
    $$\frac{z}{t}= v_{0} \Rightarrow \frac{d}{dt}\left( \frac{z}{t} \right) = \frac{dv_{0}}{dt} = 0$$
    $\frac{d\vec{e}_{x}}{dt} = \vec{0} \Rightarrow \vec{a} = \vec{0}$ 


### e. Nature du mouvement
Calculons la dérivée du carré de la vitesse
$$\frac{dv^2}{dt} = \frac{d\vec{v}.\vec{v}}{dt} = 2 \vec{v}.\frac{d\vec{v}}{dt} = 2\vec{v}.\vec{a}$$

#### Propriétés
- La dérivée de la norme de $\vec{v}$ est du même signe que le produit scalaire $\vec{v}.\vec{a}$ 
- Le mouvement est accéléré si $\vec{v}.\vec{a} > 0$.
- Le mouvement est décéléré si $\vec{v}.\vec{a} < 0$ 
- Le mouvement est uniforme $\vec{v}.\vec{a} = 0$



# II. Repérage dans l'espace, systèmes de coordonnées
## 1. Coordonnées et degrés de liberté
#### Définition
- Dans un espace affine euclidien à trois dimensions, la position d'un point est décrit par 3 coordonnées. 

- Les degrés de liberté du mouvement de ce point sont le nombre de coordonnées indépendantes qui définissent la trajectoire de ce point. 

## 2. Les systèmes de coordonnées
Le choix d'un système de coordonnées conduit a une description plus ou moins simple du mouvement. 
- Si le mouvement est dans un plan circulaire ou radial, on choisira alors des coordonnées polaires.
- Si un axe est privilégié (axe de rotation), on choisira des coordonnées cylindriques.
- Si un point joue un role particulier alors on utilisera les coordonnées sphériques
- Sinon dans les autres cas on choisira des coordonnées cartésiennes. 

### 3. Coordonnées cartésiennes
On considère un repère $(O_{x, y, z})$ 
excali 3. 
La position du point $M$ est définie par ses 3 coordonnées :
- $x_{M}$ : distance algébrique de $M$ au plan $(yOz)$ 
- $y_{M}$ : distance algébrique de $M$ au plan $(xOz)$
- $z_{M}$ : distance algébrique de $M$ au plan $(xOy)$ 

#### Propriété
Les vecteurs unitaires des coordonnées cartésiennes $\vec{u}_{x}, \vec{u}_{y}, \vec{u}_{z}$ (ou $\vec{e}_{x}, \vec{e}_{y}, \vec{e}_{z}$ ), ne dépendent pas de la position du point $M$ et donc ils ne dépendent pas du temps
$$\frac{d\vec{e}_{x}}{dt} = \frac{d\vec{e}_{y}}{dt} = \frac{d\vec{e}_{z}}{dt} = \vec{0}$$

### a. vecteur position
$$\vec{r} = \overrightarrow{OM} = x\vec{e}_{x} + y \vec{e}_{y} + z\vec{e}_{z}$$

### b. déplacement élémentaire
$$d\vec{r} = \overrightarrow{MM'} = \overrightarrow{OM'} - \overrightarrow{OM}$$
$$d\vec{r} = (x'-x)\vec{e}_{x} + (y'-y)\vec{e}_{y} + (z'-z)\vec{e}_{z}$$

On écrit alors : 
$$d\vec{r} = dx\vec{e}_{x} + dy\vec{e}_{y} + dz\vec{e}_{z}$$

### c. Vecteur vitesse
$$\vec{v} = \frac{d\overrightarrow{OM}}{dt} = \frac{dx\vec{e}_{x}}{dt} + \frac{dy\vec{e}_{y}}{dt} + \frac{dz\vec{e}_{z}}{dt} $$
$\vec{e}_{x}, \vec{e}_{y}, \vec{e}_{z}$ sont constants
Donc
$$\vec{v} = \overset{\cdot}{x}\vec{e}_{x} + \overset{\cdot}{y}\vec{e}_{y} + \overset{\cdot}{z}\vec{e}_{z}$$
$$v = \sqrt{ \overset{\cdot}{x}^2 + \overset{\cdot}{y}^2 + \overset{\cdot}{z}^2 }$$

### d. vecteur acceleration
$$\vec{a} = \frac{d\vec{v}}{dt}$$
$$\vec{a} = \overset{\cdot \cdot}{x}\vec{e}_{x} + \overset{\cdot \cdot}{y}\vec{e}_{y} + \overset{\cdot \cdot}{z}\vec{e}_{z}$$


## 4. Coordonnées cylindriques
Soit $H$ le projeté de $M$ sur $(xOy)$
On définit : 
- $\rho = OH$ ; distance de $H$ au centre du repère
- $\theta$ : angle entre les vecteurs $\vec{e}_{x}$ et $\overrightarrow{OM}$

$\rho$ et $\theta$ sont les coordonnées polaires du point $H$. 
La position de $M$ est définie par : 
$\rho$, $\theta$ et la distance $HM = z_{M}$ (la coordonnée cartésienne)
On obtiens alors les coordonnés cylindriques de $M$ $(\rho, \theta, z_{M})$ 

Excalibur 4.

La base orthonormé du repère cylindrique est
$$\vec{e}_{\rho} = \frac{\overrightarrow{OH}}{\rho}$$
$\vec{e}_{\theta}$ : perpendiculaire $à$ $\vec{e}_{\rho}$ dans $(xOy)$ et dans le sens de $y$ croissant
$\vec{e}_{z}$ : vecteur su repère cartésien 


C'est une base locale, les vecteurs unitaires $\vec{e}_{\rho}$ et $\vec{e}_{\theta}$ dépendent de la position du point $M$. 

### a. Relation entre coordonnées cylindriques et cartésiennes
Cartésien -> Cylindrique : 
$$x = \rho \cos \theta$$
$$y = \rho \sin \theta$$
$$z = z$$
Cylindrique -> Cartésien : 
$$\rho = \sqrt{ x^2 + y^2 }$$
$$\theta = \arccos\left( \frac{x}{\sqrt{ x^2+y^2 }} \right) = \arcsin\left( \frac{y}{\sqrt{ x^2+y^2 }} \right) = \arctan\left( \frac{y}{x} \right)$$
$$z = z$$

Relation entre les vecteurs unitaires des bases 
Excalibur 5

$$\vec{e}_{x} = \frac{\overrightarrow{OH_{x}}}{x}$$
$$\vec{e}_{y} = \frac{\overrightarrow{OH_{y}}}{y}$$
$$\vec{e}_{\rho} = \frac{\overrightarrow{OH}}{\rho}$$

$$\overrightarrow{OH} = \rho \vec{e}_{\rho} = x\vec{e}_{x} + y\vec{e}_{y}$$
On cherche a écrire
$$\vec{e}_{\rho} = a\vec{e}_{x} + b\vec{e}_{y}$$
avec $a$ et $b$ les coordonnées de $\vec{e}_{\rho}$ 
$$\left\{ \begin{array}{l}
a = \frac{x}{\rho} = \cos \theta\\
b = \frac{y}{\rho} = \sin \theta
\end{array} \right.$$
$$\vec{e}_{\rho} = \cos \theta \vec{e}_{x} + \sin \theta \vec{e}_{y}$$
$$\vec{e}_\theta = \cos \theta \vec{e}_{y} - \sin \theta \vec{e}_{x}$$

Donc : 
$$ 
\left\{ \begin{array}{l} \vec{e}_{\rho} = \cos \theta \vec{e}_{x} + \sin \theta \vec{e}_{y} \\ \vec{e}_\theta = \cos \theta \vec{e}_{y} - \sin \theta \vec{e}_{x} \\ \vec{e}_{z}= \vec{e}_{z} \end{array} \right.$$
$$\left\{ \begin{array}{l}
\vec{e}_{x} = \cos \theta \vec{e}_{\rho} - \sin \theta \vec{e}_{\theta} \\
\vec{e}_{y} = \sin \theta \vec{e}_{\rho} + \cos \theta \vec{e} _{\theta} \\
\vec{e}_{z} = \vec{e}_{z}
\end{array} \right.$$
Les composantes du vecteur $\vec{e}_{\rho}$ sont appelées radiales. 
Les composantes du vecteur $\vec{e} \theta$ sont appelées orthoradiales.

### b. Vecteur position
$$\overrightarrow{OM} = \overrightarrow{OH} + \overrightarrow{HM} = \rho \vec{e}_{\rho} + z \vec{e}_{z}$$
Donc le vecteur position e, coordonnés cylindriques est : 
$$\vec{r} = \overrightarrow{OM} = \rho \vec{e}_{\rho} + z \vec{e}_{z}$$
ATTENTION : Dans la base cylindrique les coordonnés de $M$ et celles de $\overrightarrow{OM}$ sont différentes


### c. Déplacement élémentaire
Excalibur 6.

$$d\vec{r} = d\rho \vec{e}_{\rho} + \rho$$

### d. Vecteur vitesse
$$\vec{v} = \frac{d\overrightarrow{OM}}{dt} \overrightarrow{OM} = \rho \vec{e}_{\rho} + z\vec{e}_{z}$$
$$\vec{v} = \frac{d\rho \vec{e}_{\rho}}{dt} + \frac{d \vec{e}_{z}}{dt} = \overset{\cdot}{\rho}\vec{e}_{\rho} + \frac{\rho d\vec{e}_{\rho}}{dt} + \overset{\cdot}{z}\vec{e}_{z}$$
exprimons $\frac{d\vec{e}_{\rho}}{dt}$, 
On sait que
$$\vec{e}_{\rho} = \cos \theta \vec{e}_{x} + \sin \theta \vec{e}_{y}$$
$$\frac{d\vec{e}_{\rho}}{dt} = \frac{d\cos \theta}{dt} \vec{e}_{x} + \frac{d\sin \theta}{dt} \vec{e}_{y} = \cos \theta \space \space \overset{\cdot}{\theta} \vec{e}_{x} -\sin \theta \space \space \overset{\cdot}{\theta} \vec{e}_{y}$$
$$\frac{d\vec{e}_{\rho}}{dt} = \overset{\cdot}{\theta}(\cos \theta \vec{e}_{x} - \sin \theta \vec{e}_{y}) $$
$$\frac{d\vec{e}\rho}{dt} = \overset{\cdot}{\theta} \vec{e}_{\theta}$$
Ainsi : 
$$\vec{v} = \overset{\cdot}{\rho} \vec{e}_{\rho} + \rho \overset\cdot \theta \vec{e}_{\theta} + \overset \cdot z \vec{e}_{z}$$


Excaliibur 7. 

$\frac{d\vec{e}_{\rho}}{dt}$ et $\vec{e}_{\rho}$ sont orthogonaux

### e. Vecteur accélération
$$\vec{a} = \frac{d\vec{v}}{dt})_{\mathcal{R}} $$
$$\vec{a} = \overset{\cdot \cdot}{\rho} \vec{e}_{\rho} + \overset{\cdot}{\rho} \frac{d\vec{e}_{\rho}}{dt} + \overset{\cdot}{\rho} \overset{\cdot}{\theta} \vec{e}_{\theta} + \rho \overset{\cdot \cdot}{\theta} \vec{e}_{\theta} + \rho \overset{\cdot}{\theta} \frac{d\vec{e}_{\theta}}{dt} + \overset{\cdot \cdot}{z} \vec{e}_{z} $$

On sait que 
$$\frac{d\vec{e}_{\rho}}{dt} = \overset{\cdot}{\theta}\vec{e}_{\theta}$$
et que 
$$\vec{e}_{\theta} = -\sin \theta \vec{e}_{x} + \cos \theta \vec{e}_{y} = - \overset{\cdot}{\theta} (\cos \theta \vec{e}_{x} + \sin \theta \vec{e}_{y})$$


Donc 
$$\frac{d\vec{e}_{\theta}}{dt} = - \overset{\cdot}{\theta} \vec{e}_{\rho}$$

$$\vec{a} = (\overset{\cdot \cdot}{\rho} - \rho \overset{\cdot}{\theta}^2) \vec{e}_{\rho} + (2\overset{\cdot}{\rho}\overset{\cdot}{\theta}+\rho \overset{\cdot \cdot}{\theta})\vec{e}_{\theta} + \overset{\cdot \cdot}{z} \vec{e}_{z}$$

### 5. Coordonnées polaires
Cas particulier des coordonnées cylindriques pour lesquelles
$z = cte$
(Dans le plan)
### a. Vecteur position
$$\overrightarrow{OM} = \rho \vec{e}_{\rho}$$

### b. Déplacement élémentaire
$$d\vec{r} = d\overrightarrow{OM} = d\rho \vec{e}_{\rho} + \rho d\theta \vec{e}_{\theta}$$
### c. Vecteur vitesse
$$\vec{v} = \overset{\cdot}{\rho} \vec{e}_{\rho} + \rho \overset{\cdot}{\theta}\vec{e}_{\theta}$$
### d. Vecteur accélération
$$\vec{a} = (\overset{\cdot \cdot}{\rho}-\rho \overset{\cdot}{\theta}^2)\vec{e}_{\rho} + (2\overset{\cdot}{\rho}\overset{\cdot}{\theta} + \rho \overset{\cdot \cdot}{\theta})\vec{e}_{\theta}$$

## 6. Coordonnées sphériques
PHOTO 15-01-2024

On définit la base orthonormée : 
- $\vec{e}_{r} = \frac{\vec{r}}{r}$
- $\vec{e}_{\theta}$ : vecteur unitaire, orthogonal à $\vec{e}_{r}$ dans le sens des $\theta$ croissants dans le plan contenant $\overrightarrow{OM}$ et $\vec{e}_{z}$
- $\vec{e}_{\phi}$ : vecteur unitaire perpendiculaire à $\vec{e}_{r}$ et $e_{\vec{\theta}}$, il correspond au vecteur unitaire de $(xOy)$ perpendiculaire à $\overrightarrow{OH}$. 

### a. Relation entre les coordonnées sphériques, cylindriques et cartésiennes
Par construction : 
- $z = r\cos \theta$
- $\rho = r\sin \theta$

- $x = \rho \cos \phi$
- y = $\rho \sin \phi$

Exprimons $x, y, z$ en fonction de $r,\theta, \phi$
- $x = r\sin \theta \cos \phi$
- $y = r\sin \theta \sin \phi$
- $z = r\cos \phi$

On sait que $\rho^2 = x^2 + y^2$
et que $r^2 = \rho^2 + z^2 \Rightarrow r^2 = x^2 + y^2 + z^2$
Donc $r = \sqrt{ x^2 + y^2 + z^2 }$ 

$$\vec{e}_{r} = \cos \theta \vec{e}_{z} + \sin \theta \vec{e}_{\rho}$$
$$\vec{e}_{\theta} = - \sin(\theta) \vec{e}_{z} + \cos \theta \vec{e}_{\rho}$$
$\Leftrightarrow$
$$\vec{e}_{\rho} = \sin \theta \vec{e}_{r} + \cos \theta \vec{e}_{\theta}$$
$$\vec{e}_{z} = \cos \theta \vec{e}_{r} - \sin \theta \vec{e}_{\rho}$$
On sait que $\vec{e}_{\rho} = \cos \phi \vec{e}_{x} + \sin \phi \vec{e}_{y}$
$$\vec{e}_{r} = \cos \theta \vec{e}_{z} + \sin \theta \cos \phi \vec{e}_{x} + \sin \theta \sin \phi \vec{e}_{y}$$
$$e\theta = - \sin \theta \vec{e}_{z} + \cos \theta \cos \phi \vec{e}_{x} + \cos \theta \sin \phi \vec{e}_{y}$$
$$\vec{e}_{\phi} = -\sin \phi \vec{e}_{x} + \cos \phi \vec{e}_{y}$$

### b. Vecteur position
$$\overrightarrow{OM} = \vec{r} = r\vec{e_{r}}$$
### c. Déplacement élémentaire
PHOTO 15-01-2023
- Déplacement le long de $\overrightarrow{OM} \space\space\space dt$
- déplacement $d\theta \space\space\space rd{\theta}$
- Déplacement $d\phi = \rho d\phi = r\sin \theta d\phi$

$$d\vec{r} = dr\vec{e}_{r} + rd\theta \vec{e}_{\theta} + r\sin \theta d\phi \vec{e}_{\phi}$$

### d. Vecteur vitesse
$$\vec{v} = \frac{d \overrightarrow{OM}}{dt} = \overset{\cdot}{r}\vec{e}_{r} + r \frac{d\vec{e}_{r}}{dt}$$$$\vec{v} = \overset{\cdot}{r} \vec{e}_{r}+r \overset{\cdot}{\theta} \vec{e}_{\theta} + r\sin \theta \overset{\cdot}{\phi}\vec{e}_{\phi}$$
## 7. Base locale de Frenet
On note $\vec{r}(t)$,  $\vec{v}(t)$ et $\vec{a}(t)$ la position la vitesse et l'accélération de $M$ dans un référentiel $\mathcal{R}$.
- $\vec{v}(t)$ est toujours tangent à la trajectoire
Donc on créé le repère orthonormé formé des vecteurs tangents a la trajectoire en $M$ $\vec{t}$ normal à la trajectoire de $M$ vers l’intérieur $\vec{n}$ dans cette base. 
$$\vec{v} = v \vec{t}$$
alors l'accélération : 
$$\vec{a} = \frac{d\vec{v}}{dt} = \frac{dv}{dt} \vec{t} + v \frac{d\vec{t}}{dt}$$ $$\vec{a} = \frac{dv}{dt} \vec{t} - \frac{v^2}{R}\vec{n}$$
$R$ : Le Rayon de courbure de la trajectoire en $M$. 

#### Définition
Le rayon de courbure $R$ d'une trajectoire en un point $M$ est le rayon du cercle tangent a cette trajectoire en $M$. 
PHOTO 15-01-2024

$$R = \frac{v^2}{|\vec{a}.\vec{n}|}$$
$\frac{1}{R}$ : Courbure d'une trajectoire

# III. Exemples
## 1. Mouvement uniformément accéléré
$$\vec{a}  = cte$$
___
Soit $M$ un point, de vecteur accélération $\vec{a} = a\vec{e}_{y}$ avec $a = cte$,
à $t = 0$,
$$\vec{v} = V_{0}\cos \alpha \vec{e}_{x} + V_{0} \sin \alpha \vec{e}_{y}$$
Déterminer l'équation de la trajectoire
- $\overset{\cdot \cdot}{x} = 0$
- $\overset{\cdot \cdot}{y}= a$ 
- $\overset{\cdot \cdot}{z} = 0$
On intègre : 
- $\overset{\cdot}{x} = cte = v_{0}\cos \alpha$
- $\overset{\cdot}{y} = at + cte$
- $\overset{\cdot}{z} = cte = 0$

Donc 

- $\overset{\cdot}{x} = V_{0}\cos \alpha$
- $\overset{\cdot}{y} = at + V_{0}\sin \alpha$
- $\overset{\cdot}{z} = 0$

On intègre : 
- $x = v_{0} \cos (\alpha) t + x(0)$
- $y = \frac{1}{at^2} + V_{0}\sin (\alpha)t + y(0)$
- $z = z_{0}$

CI à $t = 0$ et $M = 0$, 
Equations horaires, 
- $x(t) = v_{0} \cos (\alpha) t$
- $y(t) = \frac{1}{at^2} + V_{0}\sin (\alpha)t$
- $z(t) = 0$

Il faut éliminer la variable $t$ pour trouver la relation entre $x$ et $y$ or a $t = \frac{x}{V_{0}\cos \alpha}$ et on injecte dans $y(t)$

$$y = \frac{1}{2} a \left( \frac{x}{v_{0}\cos \alpha} \right)^2+V_{0}\sin \alpha  \frac{x}{V_{0}\cos \alpha}$$
$$y = \frac{1}{2}a  \frac{x^2}{V_{0}^2\cos^2\alpha}+c\tan x$$
C'est l'équation d'une parabole. 

## 2. Mouvement circulaire
### a. Cas général
PHOTO 15-01-2024
On choisit la base polaire $(\vec{e}_{\rho}, \vec{e}_{\theta})$ et en $a$ $\rho = R = cte$
Les coordonnées de $M$, $x$ et $y$ sont reliées aux coordonnées polaires :
- $x = R \cos \theta$
- $y = R\sin \theta$
$\Leftrightarrow$
- $R = \sqrt{ x^2 + y^2 }$
- $\theta = \arctan\left( \frac{y}{x} \right)$

Exprimons les vecteurs position, vitesse et accélération
$$\overrightarrow{OM} = R\vec{e}_{\rho}$$
$$\vec{v} = \frac{d\overrightarrow{OM}}{dt} = R \overset{\cdot}{\theta}\vec{e}_{\theta}$$
$\vec{v}$ est tangent a la trajectoire. 
Souvent on pose $\omega = \overset{\cdot}{\theta}$ la vitesse angulaire. 
$$\vec{a} = \frac{d\vec{v}}{dt} = R\overset{\cdot \cdot}{\theta}\vec{e}_{\theta}-R\overset{\cdot}{\theta}^2\vec{e}_{\rho}$$
elle comporte une composante tangentielle à la trajectoire 
$$\vec{a}_{T} = R\overset{\cdot \cdot}{\theta} \vec{e}_{\theta}$$
et une composante normale : 
$$\vec{a}_{N} = -R \overset{\cdot}{\theta}^2\vec{e}_{\rho}$$
dirigé vers l'intérieur. 

### b. Cas du mouvement circulaire uniforme
$$v = cte$$
(Norme de la vitesse)

La direction de $\vec{v}$ peut changer
On à vu que : 
$$\vec{v} = R \overset{\cdot}{\theta}\vec{e}_{\theta} \Leftrightarrow v = |R \overset{\cdot}{\theta}|$$
or $R = cte$
Donc
$$\overset{\cdot}{\theta} = \omega = cte \Leftrightarrow \overset{\cdot \cdot}{\theta} = 0$$
Donc le vecteur accélération
$$\vec{a} = -R \overset{\cdot}{\theta}^2\vec{e}_{\rho}$$
L'accélération n'est pas nulle mais elle est normale à la trajectoire. 
De plus $R \overset{\cdot}{\theta}^2 > 0$. 
Donc $\vec{a}$ est centripète (dirigé vers le centre du cercle)
$$\vec{a} = \overset{\cdot \cdot}{x} \vec{e}_{x} + \overset{\cdot \cdot}{y}\vec{e}_{y}$$
$$\vec{a} = -\omega^2(R\cos \theta \vec{e}_{x}+ R\sin \theta \vec{e}_{y})$$

- $\overset{\cdot \cdot}{x} = - \omega^2x$
- $\overset{\cdot \cdot}{y} = - \omega^2y$

- $\overset{\cdot \cdot}{x} + \omega^2x = 0$
- $\overset{\cdot \cdot}{y} + \omega^2y = 0$

Equation différentielle du mouvement
Le mouvement est sinusoïdal. 

### c. Origine du cercle

excal 8 
En coordonnées polaires e+de centre $O$
- Exprimer l'équation polaire $\rho$ en fonction de $\theta$
- $OCM$ est isocelle de somme $C$
Excal 9
triangle $OHC$ rectangle en $H$ 
$$\cos \theta = \frac{OH}{OC} = \frac{\rho}{2R} \Rightarrow \rho = 2 R \cos \theta$$


- Exprimer $\vec{v}$ et $\vec{a}$ en coordonées polaires en fonction de $R, \overset{\cdot}{\theta}$ et $\theta$
On suppose $\overset{\cdot \cdot}{\theta} = 0$
$$\vec{v} = \overset{\cdot}{\rho}\vec{e}_{\rho} + \rho \overset{\cdot}{\theta}\vec{e}_{\theta}$$
On a
$$\rho = 2R\cos \theta \Rightarrow \overset{\cdot}{\rho} =  -2R\sin \theta \space \space \overset{\cdot}{\theta}$$ 
$$\vec{v} = 2R \overset{\cdot}{\theta}(-\sin \theta \vec{e}_{\rho} + \cos \theta \vec{e}_{\theta})$$
$$\vec{a} = -4R \overset{\cdot}{\theta}^2(\cos \theta \vec{e}_{\rho} + \sin \theta \vec{e}_{\theta})$$
$$R\cos \theta\vec{e}_{\rho} + R\sin \theta \vec{e}_{\theta} = \overrightarrow{CM}$$
$$\vec{a} = -4\overset{\cdot}{\theta}^2 \overrightarrow{CM}$$
accélération centripète

#### Remarques
Pour un mouvement circulaire, on défini le vecteur de rotation $\vec{\omega}$ par rapport à l'axe du cercle $\vec{\Omega}$
excal 10
