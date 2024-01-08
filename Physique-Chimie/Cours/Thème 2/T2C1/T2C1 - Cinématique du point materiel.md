# Introduction
$$v \ll c$$
$c$ la vitesse de la lumière dans le vide
$$L \gg \lambda_{dB} = \frac{h}{mv}$$
$h$ la constante de planks
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
La vitesse $\vec{v}$ d'un point $M$ dans le eréférentiel $\mathcal R$ est définie comme :
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
