# I. Puissance et travail d'une force
## 1. Puissance
#### Définition
On appelle puissance $P_{\vec{F}}$ de la force $\vec{F}$ qui agit sur le point $M$ le produit scalaire
$$P_{\vec{F}} = \vec{F}.\vec{v}_{M}$$

$P_{\vec{F}}$ s'exprime en Watt
$1W = 1J.s^{-1}$ 
$1W = 1kg.m^{2}.s^{-3}$

$P_{\vec{F}} \neq 0$ ssi $\vec{v}_{M} \neq 0$ : le point est en mouvement

Si $\vec{F}$ et $\vec{v}_{M}$ ne sont pas orthogonaux. 
si $\vec{F} \perp \vec{v}_{M}$ alors la force ne travaille pas. 

Exalidraw 1
$\vec{T}$ et $\vec{v}$ sont orthogonaux a chaque instant. 

## 2. Le Travail
#### Définition
On appelle travail élémentaire de la force $\vec{F}$ pendant un déplacement élémentaire $d\vec{r}$, le produit scalaire : 
$$\delta W_{\vec{F}} = \vec{F}.d\vec{r}$$
Le travail de la force entre $A$ et $B$ est : 
$$W_{A\to B, \vec{F}} = \int _{A}^{B}\delta W_{\vec{F}} = \int _{A}^{B} \vec{F}.d\vec{r}$$

On sait que $\vec{v} = \frac{d\vec{r}}{dt}$
Donc on peut écrire : 
$$d\vec{r} = \vec{v} dt$$
Alors : 
$$\delta W_{\vec{F}} = \vec{F}.\vec{v} \space dt$$
$$\delta W_{\vec{F}} = P_{\vec{F}} \space dt $$
$$W_{A\to B, \vec{F}} = \int _{A}^{B} P_{\vec{F}} \, dt $$
Le travail s'exprime en Joule (J) : 
$1 J = 1 Ws = 1 Nm$
$1J = 1 kg.m^{2}.s^{-2}$

Le travail dépend du chemin suivi
exal 2

#### Attention
Le travail et la puissance d'une force ne dépend en général de cette force mais aussi du mouvement du point. Donc aussi du référentiel. 

## 3. Caractère moteur ou résistant
#### Définition
Soit $\vec{F}$ une force
- Si $P_{\vec{F}} > 0$ alors $W_{\vec{F}} > 0$, la force $\vec{F}$ tend a accroître l’énergie cinétique du point. On parle de force motrice
- Si $P_{\vec{F}}<0$ alors la force est résistante.

# II. Théorèmes de l'énergie et de la puissance cinétique
Apprendre les Démos

##### 2$^{e}$ loi de Newton
$$m \frac{d\vec{v}_{M}}{dt} = \vec{F} \Leftrightarrow m \frac{d\vec{v}_{M}}{dt}.\vec{v}_{M} = \vec{F}.\vec{v}_{M} = P_{\vec{F}}$$
$$m \frac{d\vec{v}_{M}}{dt}.\vec{v}_{M} = \frac{1}{2} \frac{d\vec{v}_{M}.\vec{v}_{M}}{dt}$$

Dérivons $\vec{v}_{M}.\vec{v}_{M}= \vec{v}_{M}$ : 
$$\frac{d\vec{v}_{M}^{2}}{dt} = \frac{d\vec{v}_{M}}{dt}.\vec{v}_{M} + \frac{d\vec{v}_{M}}{dt}.\vec{v}_{M} \Leftrightarrow \vec{v}_{M}.\frac{d\vec{v}_{M}}{dt} = \frac{1}{2} \frac{d\vec{v}_{M}^{2}}{dt}$$


Donc on obtiens
$$\frac{m}{2} \frac{d\vec{v}_{M}.\vec{v}_{M}}{dt} =P_{\vec{F}}$$
$$\frac{d}{dt}\left( \frac{1}{2}mv_{M}^{2} \right) = P_{\vec{F}}$$
Ainsi : 
$$\frac{dE_{c}}{dt} = P_{\vec{F}}$$

#### Définition
On appelle puissance cinétique du point $M$ de masse $m$ dans le référentiel $\mathcal{R}$ : 
$$P_{c} = \frac{dE_{c}}{dt}$$
avec $E_{c} = \frac{1}{2}mv_{M}^{2}$ L'énergie cinétique

## 1. Puissance cinétique
#### Théorème
La puissance des forces qui s'appliquent sur $M$ est égal a se puissance cinétique : 
$$P_{\vec{F}} = P_{c} = \frac{dE_{c}}{dt}$$
Nom : Relation instantané
Si aucune force ne travaille alors 
$$P_{\vec{F}} = 0 \Leftrightarrow E_{c} = cte \Leftrightarrow v_{M} = cte$$
Mouvement uniforme
L'énergie cinétique est une intégrale première du mouvement. 

## 2. Théorème de l'énergie cinétique
On intègre la relation précédente entre $t_{1}$ et $t_{2}$. 
$$\int_{t_{1}}^{t_{2}} P_{\vec{F}} \, dt = \int _{t_{1}}^{t_{2}} \frac{dE_{c}}{dt} \, dt $$
$$W_{\vec{F}, t_{1}\to t_{2}} = E_{c}(t_{2})-E_{c}(t_{1})$$

#### Théorème
Soit un point $M$ de masse $m$ en mouvement soumis à la force $\vec{F}$ entre les points $A$ et $B$ de la trajectoire de $M$, correspondant aux instants $t_{A}$ et $t_{B}$, on a :

$$W_{\vec{F}, A\to B} = E_{c}(A)-E_{c}(B) = \Delta E_{c}$$
relation intégrée
Pour un déplacement élémentaire $d\vec{r}$
$$dE_{c} = \delta W_{\vec{F}} = P_{\vec{F}}dt$$


## 3. Bilan
Soit $M$ un point de vitesse $v$ et de masse $m$ soumis a une force $\vec{F}$ :

$$\frac{dE_{c}}{dt} = P_{\vec{F}}$$
$$dE_{c} = P_{\vec{F}}dt$$
$$\Delta E_{c_{A\to B}} = W_{\vec{F}_{A\to B}}$$

#### Propriété : Interprétation de l'énergie cinétique
$E_{c}$ d'un système est un réservoir de travail que le système peut échanger avec l'extérieur pour fait varier sa vitesse. 

# III. Energie potentielle et forces conservatives
#### Définition
Soit $M$ un point de masse $m$ une force $\vec{F}$ qui s'exerce sur $M$ est dite conservative si le long la trajectoire le travail élémentaire de $\vec{F}$ peut se mettre sous la forme : 
$$\delta W_{\vec{F}} = \vec{F}.d \vec{r} = -dE_{p}$$
Donc $E_{p}$ est appelé l’énergie potentielle de $\vec{F}$

$W_{\vec{F}}$ ne dépend pas du chemin pour aller de $A$ à $B$ 

#### Remarques
Pour un déplacement entre $A$ et $B$, 
$$W_{A\to B} = \int _{A}^{B} \delta W = \int _{A}^{B} - dE_{p} =  -\int _{A}^{B} dE_{p}$$
Donc 
$$W_{A\to B}=- [E_{p}]_{A}^{B}$$
$$W_{A\to B} = E_{p}(A)-E_{p}(B)$$

Si $\vec{F}$ est uniforme, alors elle est conservative
$d\vec{F} = \vec{0}$
Donc 
$$\vec{F}.d\vec{r} = d(\vec{F}.\vec{r})$$
$$\delta W=d(\vec{F}.\vec{r}) = -d(-\vec{F}.\vec{r}) = -d E_{p}$$

Si la force $\vec{F}$ est orthogonale au mouvement : 
$\vec{F}.d\vec{r} = 0$, $\vec{F}$ ne travaille pas mais cela n'implique pas que $\vec{F}$ est conservative. 

## 1. Relation entre énergie potentielle et forces conservatives
### a. Cas des systèmes unidimensionnels
1. 
Soit $M$ un point en mouvement uniquement sur l'axe $O_{x}$ et qui subit une force $\vec{F} = F \vec{e}_{x}$

- $\vec{F}$ est conservative Donc 
    $$\vec{F} . d\vec{r} = -dE_{p}$$
    $$d\vec{r} = dx\vec{e}_{x}$$
    Pour le système étudiée Donc
    $$\vec{F}.d\vec{r} = Fdx = -dE_{p}$$
    $$\Leftrightarrow \frac{dE_{p}}{dx} = -F$$
    où $F=-\frac{dE_{p}}{dx}$

2. 
Soit $M$ un point en mouvement circulaire de rayon $R$, soumis a la force $\vec{F}$ conservative. 
Ecxal 3
$$\vec{F}.d\vec{r} = -dE_{p}$$
et mouvement circulaire
$$d\vec{r} = Rd\theta \vec{e}_{\theta}$$
$$\vec{F}.d\vec{r}=RF_{\theta}d\theta$$
$F_{\theta}$ la composante de $\vec{F}$ sur $\vec{e}_{\theta}$
Alors
$$RF_{\theta}d\theta = -dE_{p} \Leftrightarrow F_{\theta} = -\frac{1}{R}\frac{dE_{p}}{d\theta}$$


### b. Généralisation
Si le mouvement se fait dans les 3 dimensions de l'espace on écrit $\vec{F} = -\overrightarrow{grad}(E_{p})$
$\overrightarrow{grad}$ (ou $\overrightarrow{\nabla}$) : Le gradient est un opérateur Mathématique qui créé un vecteur contenant les variations de $E_{p}$

$$E_{p}(x, y, z) = 3x+5y^{2} +4$$

$$\overrightarrow{grad} \space E_{p} = \left| \begin{array}{l}
3 \\
10y \\
0
\end{array} \right.$$
 

#### Propriété : interprétation du gradient
Une force conservative dérive d'une énergie potentielle $E_{p}$ (d'un potentiel) $\vec{F}$ est dirigées des régions de fort potentiel ($E_{p}$ élevé) vers les régions de faible potentiel ($E_{p}$ petit). 

## 2. Exemples
### a. Energie potentielle gravitationnelle
exal 4.
On pose $r = OM$ la distance entre $M$ et $O$ 
$$\vec{F}_{O\to M} = -Gm_{1}m_{2} \frac{\overrightarrow{OM}}{(OM)^{3}}$$

Déterminons $E_{p}$ associé à $\vec{F}$ :
	- Travail élémentaire de $\vec{F}_{O\to M}$ 
	  $$\delta W=\vec{F}_{O\to M}.d\vec{r} = \vec{F}_{O\to M}.d\overrightarrow{OM}$$
	  $$\delta W = -Gmm_{0} \frac{\overrightarrow{OM}.d\overrightarrow{OM}}{(OM)^{3}}$$
	  
	  
	  $\overrightarrow{OM} = r\vec{u}_{r}$
	  $$d\overrightarrow{OM} = d\vec{r} = \vec{u}_{r}dr + rd{\vec{u}_{r}}$$
	  $$\overrightarrow{OM}.d\overrightarrow{OM} = r\vec{u}_{r}.(\vec{u}_{r}dr+rd\vec{u}_{r}) = rdr+r^{2}\vec{u}_{r}.d\vec{u}_{r}$$
	  $$\overrightarrow{OM}.d\overrightarrow{OM} = rdr$$
	Donc, $\delta W$ devient
	$$\delta W = -Gm_{0}m \frac{rdr}{r^{3}} =-Gm_{0}m \frac{dr}{r^{2}}$$
	On sait que la dérivée de $f(r) = \frac{1}{r^{2}}$ $g(r)=-\frac{1}{r}$ Donc
	$$\Leftrightarrow \frac{dg}{dr} = \frac{1}{r^{2}} \Leftrightarrow dg = \frac{1}{r^{2}}dr \Leftrightarrow d\left( -\frac{1}{r} \right) = \frac{1}{r^{2}}dr$$
	Donc en remplaçant dans $\delta W$ : 
	$$\delta W = -Gm_{0}md\left( -\frac{1}{r} \right)$$
	$G, m_{0}$ et $m$ sont des constantes
	$$\delta W = -d\left( -\frac{Gmm_{0}}{r} \right)$$
	On trouve $\delta W = -dE_{p}$ avec 
	$$E_{p} = - \frac{Gmm_{0}}{r}+cte$$
	On choisit $E_{p} \underset{r \to+\infty}{\longrightarrow} 0 \Rightarrow cte = 0$
	
	$$\vec{F}_{O\to M} = -\frac{Gmm_{0}\overrightarrow{OM}}{OM^{3}}$$
	donc l'énergie potentielle gravitationnelle est de la forme : 
	$$E_{p, grav} = - \frac{Gmm_{0}}{r}$$


### b. Energie potentielle de pesanteur
exal 5
$\vec{g} = -g\vec{e}_{z}$ $g>0$
Travail élémentaire du poids : 
$$\delta W = \vec{P}.d\vec{r} = -mg\vec{e}_{z}.d\vec{r}$$
Or le déplacement élémentaire s'écrit $d\vec{r} = dxe_{x}+dy\vec{e}_{y}+dz\vec{e}_{z}$
Donc :
$$\vec{e}_{z}.d\vec{r} = \vec{e}_{z}.(dx\vec{e}_{x}+dy\vec{e}_{y}+dz\vec{e}_{z})$$
$$\vec{e}_{z} = d\vec{r}=dz$$
Ainsi 
$$\delta W = -mgdz$$
Comme $m$ et $g$ sont des constantes : 
$$\delta W = -d(mgz)$$
Donc 
$$E_{pp} = mgz+cte$$
Habituellement on choisit $E_{pp} =0$ au niveau de la mer.
L’énergie potentielle de pesanteur est donc : 

$$E_{pp} = mgh$$
avec $h$ l'altitude par rapport a la mer. 

### c. Energie potentielle électrostatique
exal 6
On pose $r = OM$ la distance entre les charges 
et $\vec{e}_{r}$ le vecteur unitaire : 
$$\vec{e}_{r}=\frac{\overrightarrow{OM}}{OM} = \frac{\vec{r}}{r}$$
La force subit par $M$ de la part de $O$ s'écrit : 
$$\vec{F}_{O\to M} = \frac{1}{4\pi \epsilon_{0}}qq_{0} \frac{\vec{e}_{r}}{r^{2}}$$
On cherche $E_{p}$ tel que $\delta W = -dE_{p}$ 
Donc exprimons $\delta W$


$$\delta W= \vec{F}_{O\to M}.d\vec{r}= \frac{qq_{0}}{4\pi \epsilon_{0}}\vec{e}_{r}.(dr \vec{e}_{r}+rd\vec{e}_{r})$$
et $d\vec{e}_{r}$ est orthogonal à $\vec{e}_{r}$
Donc, 
$$\delta W = \frac{qq_{0}}{4\pi \epsilon_{0}r^{2}}dr = d\left( -\frac{1}{r} \right)$$
$$\delta W =-d\left( \frac{qq_{0}}{4\pi \epsilon_{0}r} \right)$$
et on a identifié :
$$E_{p, elec} = \frac{qq_{0}}{4\pi \epsilon_{0}r}+cte$$

On choisit l'origine des potentiels en $r= +\infty$
$$E_{p, elec} = \frac{qq_{0}}{4\pi \epsilon_{0}r}$$
Analogie : 
$$\vec{F}_{grav} = -G \frac{mm_{0}}{r^{2}}\vec{e}_{r}$$
$$\vec{F}_{elec} = \frac{q_{0}q}{4\pi \epsilon_{0}r^{2}}\vec{e}_{r}$$

$m \longleftrightarrow q$
$-G \longleftrightarrow \frac{1}{4\pi \epsilon_{0}}$

$$E_{p, grav} = - \frac{Gmm_{0}}{r} \leftrightarrow E_{p, elec} = \frac{1}{4\pi \epsilon_{0}} \frac{qq_{0}}{r}$$

On peut écrire
$$E_{p} = q \times \frac{q_{0}}{4\pi \epsilon_{0}r}$$
On pose la fonction fonction $V(r) = \frac{q_{0}}{4\pi \epsilon_{0}r}$
Donc 
$$E_{p} = qV(r)$$
$V(r) = \frac{q_{0}}{4\pi \epsilon_{0}r}$ est le potentiel électrostatique créé par $q_{0}$

### d. Energie potentielle élastique
excal 7
$$\vec{F}_{el} = -k(l-l_{0})\vec{e}_{x}$$
M est contraint de se déplacer sur $O_{x}$ déterminons $\delta W = \vec{F}_{el}.d\vec{r}$ 
$$\delta W = -k(l-l_{0})dx$$
On pose : $u = l-l_{0} = x-l_{0}$
$du = dl = dx$
en remplaçant dans $\delta W$
On a :
$$\delta W=-kudu$$
or $udu = \frac{1}{2}du^{2}$

Donc 
$\delta W = -\frac{k}{2} du^{2}$
$k$ c'est une constante donc
$$\delta W = -d\left( \frac{1}{2}ku^{2} \right)$$
En revenant aux notations premières : 
$$\delta W = -d\left( \frac{1}{2}k(l-l_{0})^{2} \right)$$
et on identifie :
$$E_{p_{el}} = \frac{1}{2}k(l-l_{0})^{2}+cte$$
On choisit toujours $E_{p_{el}} = 0$ quand le ressort est <u>au repos</u> : $l = l_{0}$. 
$$E_{p_{el}} = \frac{1}{2}k(l-l_{0})^{2}$$
Avec $l$ la longueur du ressort. 

#### Exercice pour lundi
exalibur 8
- 
$$E_{p, el} = \frac{1}{2}k(l-l_{0})^{2}$$
$l = MA$
Dans le triangle MOA rectangle en 0 : $x^{2}+d^{2} = l^{2}$
$l=\sqrt{ x^{2} + d^{2} }$
$$E_{p, el} = \frac{1}{2}k(\sqrt{ x^{2} + d^{2} }-l_{0})^{2}$$
- 
$$F_{x} = - \frac{dE_{p, el}}{dx}$$
$$F_{x} = - \frac{1}{2}k2(\sqrt{ x^{2}+d^{2} }-l_{0}) \frac{x}{\sqrt{ x^{2} + d^{2} }}$$
$$F_{x} = -kx\left( 1- \frac{l_{0}}{\sqrt{ x^{2}+d^{2} }} \right)$$
##### Autre méthode
$$\vec{F} = k(l-l_{0})\vec{u}$$
$$\vec{F}_{x} = \vec{F}.\vec{e}_{x} = k(l-l_{0})\vec{u}.\vec{u}_{x} = k(l-l_{0})\cos \theta$$


# IV. Energie mécanique
##### Définition
L'énergie mécanique d'un point $M$, de masse $m$ et de vitesse $v$ dans un référentiel Galiléen est : 
$$E_{m} = E_{c}+E_{p}$$
$$E_{m} = \frac{1}{2}mv^{2} + E_{p}$$

## 1. Théorème de l'énergie mécanique
Soit $M$ un point de masse $m$, dans un référentiel galiléen $\mathcal{R}$. 
Ce point est soumis a des forces $\vec{F}_{i}$ et la résultante des forces peut d'écrire : 
$$\vec{F} = \sum_{i} \vec{F}_{i} = \sum_{i} \vec{F}_{C_{i}} + \sum_{i} \vec{F}_{NC_{i}}$$
De même le travail élémentaire des forces agissant sur $M$ : 
$$\delta W = \delta W_{C} + \delta W_{NC}$$
Avec $X_{C}$ les forces / travaux des forces conservatives (resp. non conservatives)
On sait que $\delta W_{c} = -dE_{p}$ donc on applique le TEC : 
$$dE_{c} = \delta W = -dE_{p} + \delta W_{NC}$$
$$dE_{C} + dE_{p} = \delta W_{NC}$$$$d(E_{c}+E_{p}) = \delta W_{NC}$$
$$dE_{m} = \delta W_{NC}$$


#### Théorème de l'énergie mécanique (TEM)
$$\frac{dE_{m}}{dt}=\mathcal{P}_{NC}$$
Puissance des forces non conservatives
Expression instantanée


Déplacement élémentaire :
$$dE_{m}= \delta W_{NC}$$
Expression intégrale : 
$$\Delta E_{m} = W_{NC}$$
$$\Delta E_{m} = E_{m}(B)-E_{m}(A) = \int_{A}^{B} dE_{m} = \int _{A}^{B} \delta W_{NC} = W_{NC}  $$


##### Définition
Un <u>système</u> est dit <u>conservatif</u> si les forces qui s'appliquent sur ce système sont <u>toutes</u> conservatives

#### Propriété
Si un système est conservatif,
Alors <u>l’Énergie mécanique</u> est une <u>constante</u> de mouvement. 


## 2. Etude énergétique de mouvements unidimensionnels
### a. Ressort
excal 9
Retrouvons l'équation du mouvement avec les théorèmes énergétiques. 
- On se place dans un référentiel Gallileen
- Système $M$ de masse $m$
- Bilan des forces : 
    - Poids $\vec{P} = m\vec{g}$
    - Force élastique : $\vec{F}_{el}$
    
    On néglige les frottements
- M est soumis a des forces conservative $\Rightarrow E_{m} = cte$

$$E_{m} = \frac{1}{2}mv^{2}+E_{p_{el}}+ E_{pp}$$
$$E_{p_{el}} = \frac{1}{2}k(l-l_{0})^{2}$$
$$E_{pp} = -mgl$$
En prenant l'origine des $E_{pp}$ en $z = 0$
$l>0 \Rightarrow z = -l$ 
$z<0$ a causse du placement de $O$
$$E_{m} = \frac{1}{2}m \dot{z}^{2} + \frac{1}{2}(-z-l_{0})^{2}+mgz = \frac{1}{2}m\dot{z}^{2} + \frac{1}{2}k(z+l_{0})^{2} + mgz$$

On dérive par rapport au temps : 
$$\frac{dE_{m}}{dt} = m\dot{z}\ddot{z}+k\dot{z}(z+l_{0})+mg\dot{z} = 0$$$$\dot{z} \neq 0 \Rightarrow m\ddot{z} + k(z+l_{0})+mg =0$$
$$\ddot{z} + \frac{k}{m}z= -g-\frac{k}{m}l_{0}$$

### b. Pendule simple
exal 10
Fil de longueur $l$
- Système M de masse $m$
- Référentiel Galiléen
- Bilan des forces : 
    - $\vec{T}$
    - $\vec{P} = m\vec{g}$
    
    On néglige les frottements. 

Théorème de l'energie mécanique : 
a priori $\vec{T}$ est une force non conservative, mais elle est toujours dirigé vers $O$, donc $\vec{T}$ est perpendiculaire à $\vec{v}$ (car mouvement circulaire)
Alors 
$$\mathcal{P}_{\vec{T}} = \vec{T}.\vec{v} = 0$$

Dans le repère polaire : $M, \vec{u}_{\rho}, \vec{u}_{\theta}$
On a : 
- $\vec{T} = -Tu_{\rho}$
- $\vec{v} = l\dot{\theta} \vec{u}_{\theta}$ car $l = cte$

Donc, 
$$\vec{T}.\vec{v} = -Tl\dot{\theta}\vec{u}_{\rho}.\vec{u}_{\theta}=0$$
Donc 
$$\mathcal{P}_{\vec{T}} = 0$$
Donc 
$$\frac{dE_{m}}{dt} = 0$$
Avec
$$E_{m} = \frac{1}{2}mv^{2} + E_{pp}$$
$v^{2} = (l\dot{\theta})^{2}$
et $E_{pp} = mgh$ avec $h$ la hauteur du point $M$ par rapport a sa position la plus basse ($\theta =0$) puis comme référence :
$$h = l -l\cos \theta = l(1-\cos \theta)$$
On obtiens : 
$$E_{pp} = mgl(1-\cos \theta)$$
$$E_{m} = \frac{1}{2}m(l\dot{\theta})^{2} + mgl(1-\cos \theta)$$
On dérive : 
$$\frac{dE_{m}}{dt} = ml^{2}\dot{\theta}\ddot{\theta} + mgl\dot{\theta}\sin \theta = 0$$

On suppose $\dot{\theta} \neq 0$ et on a :
$$\ddot{\theta} + \frac{g}{l}\sin \theta =0$$



# V. Barrière et puits de potentiels
## 1. Représentation graphique de l’énergie potentielle
On étudie un système unidimensionnel qui dépend de la variable $x$ (position, angle, ...) et on suppose que ce système est soumis a des forces qui dépendent d'un potentiel $E_{p}(x)$. 
Pas de forces non conservatives. 
$\Rightarrow E_{m} = cte$
en particulier $E_{m}$ ne dépend pas de $x$ et :
$$E_{m}\geq E_{p}(x)$$
(car $E_{c}>0$)

### a. Barrière de potentiel
Excal 11
Et comme $E_{m}\geq E_{p}$ 
On voit qu'il y a des valeurs de $x$ interdite,
Si $x \in [x_{1}, x_{2}]$ On ne peut pas l'atteindre
Soit $M_{0}$ la position initiale du point $M$.
$$E_{c}(t=0) = E_{m} - E_{p}(x_{0})$$
On suppose que le point $M$ se déplace dans le sens des $x$ croissants.
Dans notre cas $E_{p}$ augmente au cours du mouvement, donc $E_{c}$ diminue en $M_{1}$ ou $E_{m} = E_{p}(x)$ et 
$E_{c}(x) =0$
$$\Leftrightarrow \text{La vitesse du point }M \text{ en }M_{1} \text{ est nulle}$$

A la position $x_{1}$ le point $M$ est soumis a la force
$$\vec{F}(x_{1}) = - \frac{dE_{p}}{dx}(x_{1})\vec{e}_{x}$$ Or d'après le graphique, en $x_{1}$ :
$$\frac{dE_{p}}{dx}(x_{1})>0 \Rightarrow \vec{F}(x_{1}) = - \frac{dE_{p}}{dx}(x_{1})\vec{e}_{x}$$
$\vec{F}$ est dirigé sur $-\vec{e}_{x}$, ce que tend à ramener le point $M$ en arrière. 
Et comme d'après le graphe le point $M$ ne rencontre plus de position où $E_{m} =E_{p}$, il continue son mouvement jusqu’à $x \to - \infty$.

### b. Les puits de potentiel
Excalidraw 12
On a deux limites $x_{1}$ et $x_{2}$ le point $M$ ne peut pas sortir ed l'intervalle $[x_{1}, x_{2}]$
Avec le même raisonnement on montre que $M$ est contraint de se déplacer entre $x_{1}$ et $x_{2}$ et que sa vitesse s'annule en $x_{1}$ et $x_{2}$. 


## 2. Position d'équilibre
exca 13
On suppose que $M$ va vers les $x$ décroissants. 
en $x=x_{eq}$ $v=0$
$$\vec{F}_{x}(x_{eq})= \frac{dE_{p}}{dx}(x_{eq})\vec{e}_{x}$$

Or en $x_{eq}$, $E_{p}(x_{eq})$ est maximale
Donc $\frac{dE_{p}}{dx}(x_{eq})=0$
$$\Rightarrow \vec{F}(x_{eq}) = \vec{0}$$
Donc le point $M$ s'arrête en $x_{eq}$ $v(x_{eq})=0$ et ne repart pas à $(x_{eq}) = F(x_{eq})=0$
Donc $x_{eq}$ est une position d'équilibre

#### Propriété
Les positions d'équilibre d'un système correspondant aux extrema de l’énergie potentielle. 

#### 2 Cas possibles
Excalibur 14.
- L'équilibre correspond a un maximum (qui peut être local) de l'énergie potentielle, si on perturbe le système, c'est a dire : $E_{m} \to E_{m} - dE_{m}$. 
  Donc la force qui s'exerce sur $M$ entraîne un mouvement qui éloigne $M$ de sa position d'équilibre

- L'équilibre correspond à un minimum (potentiellement local) de l'énergie potentielle si on perturbe le système à partir de $x_{eq_{2}}$ les forces subies par $M$ tendent à le ramener au point $x_{eq_{2}}$. 


#### Propriété
Les <u>maxima</u> de l'énergie potentielle correspondent aux positions d'équilibre <u>instables</u>.
Les <u>minima</u> de l’énergie potentielle corespondent aux positions d'équilibre <u>stables</u>. 

#### Recherche des positions d'équilibres
Stables ou instable : 
Instable : $E_{p}$ concave
Stable : $E_{p}$ convexe


## 3. Petits mouvements près d'une position d'équilibre stable
Excalibur 14
Si on écarte $M$ de sa positon d'équilibre stable on est dans le cas du puits de potentiel. Le mouvement de $M$ est borné. 


### a. Période du mouvement autour de la position d'équilibre stable
Soit $T$ la période. 
Le système est conservatif
Alors $E_{m} = \text{cte}$
$$E_{m} = E_{p}(x) + E_{c} = \text{cte}$$
$$E_{p}(x)+\frac{1}{2}m \left(\frac{dx}{dt}\right)^{2} = E_{m} = \text{cte}$$
$$\frac{dx}{dt} = \sqrt{ \frac{2}{m}(E_{m}-E_{p}(x)) }$$
Séparation de variables : 
$$dt = \sqrt{ \frac{m}{2}}\frac{dx}{\sqrt{ (E_{m}-E_{p}(x)) }}$$
On intègre entre $0$ et $\frac{T}{2}$ et entre $x_{min}$ et $x_{max}$ 
$$\int_{0}^{\frac{T}{2}}dt = \int _{x_{min}}^{x_{max}} \sqrt{ \frac{m}{2}}\frac{dx}{\sqrt{ (E_{m}-E_{p}(x)) }}$$
$$\frac{T}{2} = \sqrt{ \frac{m}{2} } \int _{x_{min}}^{x_{max}} \frac{dx}{\sqrt{ (E_{m}-E_{p}(x)) }}$$
$$T = \sqrt{ 2m } \int _{x_{min}}^{x_{max}} \frac{dx}{\sqrt{ (E_{m}-E_{p}(x)) }} $$


### b. Oscillations de faibles amplitudes
#### Pendule simple
$$E_{p} = mgl\cos \theta+\text{cte}$$
Si on choisit l'origine au point le plus bas : 
$$E_{p} = mgl(1-\cos \theta)$$
Position d'équilibre : 
$$\frac{dE_{p}}{d\theta} = mgl\sin \theta = 0$$
$$\Leftrightarrow \theta_{eq_{1}} = 0 \text{ ou } \theta_{eq_{2}} = \pi$$
- Pour $\theta_{eq_{1}} = 0$, On effectue le DL de $E_{p}$ autour de $\theta_{eq_{1}}$ a l'ordre 2 : 
  $$E_{p}(\theta) = E_{p}(0) +\theta \frac{dE_{p}}{d\theta}(0)+\frac{\theta^{2}}{2} \frac{d^{2}E_{p}}{d\theta^{2}}(0) $$
  $$E_{p}(\theta) = E_{p}(0) + \frac{\theta^{2}}{2} \frac{d^{2}E_{p}}{d\theta^{2}}(0)$$
  en $\theta_{eq_{1}} = 0$
  $$\frac{d^{2}E_{p}}{d\theta^{2}}(0)=mgl\cos \theta_{eq_{1}} = mgl>0$$
  Donc, 
  $$E_{p}(0) = \frac{mgl}{2}\theta^{2}$$

- Pour $\theta_{eq_{2}} = \pi$, 
  $$E_{p}(\theta) = E_{p}(\pi) + \frac{(\theta \pi)^{2}}{2} \frac{d^{2}E_{p}}{d\theta^{2}}(\pi)$$
  $$E_{p}(\theta) = E_{p}(\pi)-\frac{mgl}{2}(\theta-\pi)^{2}$$
  De façon générale on peut écrire l'énergie potentielle au voisinage d'une position d'équilibre sous la forme : 
  $$E_{p}(x) = E_{p}(x_{eq}) + \frac{K}{2}(x-x_{eq})^{2}$$
  Avec $K$ une constante
  Position d'équilibre stable $\Leftrightarrow K >0$
  Position d'équilibre instable $\Leftrightarrow K<0$


#### Propriété
Approximation harmonique : 
Au voisinage d'une position d'équilibre stable $x_{eq}$, on peut approximer l'énergie potentielle par son DL à l'ordre 2 : 
$$E_{p}(x)=E_{p}(x_{eq}) + \frac{K}{2}(x-x_{eq})^{2}$$
Avec $K>0$

