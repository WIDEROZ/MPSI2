# I. Cinématique du solide
## 1. Modèle de solide indéformable
#### Définition
Un solide indéformable est un ensemble de points tels que deux points quelconques de ce solide soient toujours a égale distance. 

## 2. Mouvements particuliers
### a. Translation
#### Définition
Un solide est en mouvement de translation si pour deux points $A$ et $B$ de ce solide le vecteur $\overrightarrow{AB}$  est constant. 
Excal 1.


#### Propriété
Pour un solide indéformable en mouvement de translation, tous les points du solide ont la même vitesse. On parle alors de la vitesse du solide. 

Démonstration : 
On considère un solide $\mathcal{S}$ en translation. 
Soient $A, B$ deux points de ce solide. 
Montrons que $\vec{v}_{A} = \vec{v}_{B}$
$$\begin{array}{cc}
\vec{v}_{A} = \frac{d \overrightarrow{OB}}{dt} & \vec{v}_{B} = \frac{d \overrightarrow{OB}}{dt}
\end{array}$$
$$\vec{v}_{A} - \vec{v}_{B} = \frac{d}{dt}(\overrightarrow{OA} - \overrightarrow{OB}) = \frac{d \overrightarrow{BA}}{dt}$$
Or $\overrightarrow{BA} = \overrightarrow{\text{cte}}$ par définition de la translation
Alors $\vec{v}_{A}-\vec{v}_{B} = \overrightarrow{0}$
Ainsi, 
$$\vec{v} = \vec{v}_{A} = \vec{v}_{B} \text{ La vitesse du solide}$$

#### Vocabulaire
- Translation rectiligne : La trajectoire est une droite
- Translation circulaire : La trajectoire est un cercle 

### b. Rotation autour d'un axe fixe
#### Définition
Un solide a un mouvement de rotation autour d'un axe fixe $\Delta$ dans le référentiel galiléen d'étude si <u>pour tous les points</u> $M$ de ce solide et un point $O$ de l'axe $\Delta$, la <u>distance OM se conserve</u>. 

#### Propriété
Pour un solide indéformable en mouvement de rotation autour d'un axe $\Delta$ fixe, tous les points du solide ont la même vitesse angulaire $\vec{\omega} = \pm \omega \vec{u}_{\Delta}$
$\vec{u}_{\Delta}$ le vecteur unitaire de l'axe $\Delta$

On parle de la vitesse angulaire du solide

# III. TMC au solide
On considère toujours un solide $\mathcal{S}$ indéformable en rotation autour d'un axe fixe $\Delta$. 
On note $\omega = \dot{\theta}$ le vitesse angulaire.
On choisit que $\Delta = O_{z}$

## 1. Moment cinétique d'un solide
On peut modéliser le solide $\mathcal{S}$ comme un ensemble discret de points matériels $M_{i}$ de masse $m_{i}$ tels que
$$\sum_{i = 1}^{n} m_{i} = m$$
soit la masse du solide. 

On se place en coordonnées cylindriques. $(O, r, \theta, z)$ 
Chaque point $M_{i}$ est repéré par ses coordonnées $(r_{i}, \theta_{i}, z_{i})$
comme le solide est en mouvement de rotation, 
La distance de chaque point $M_{i}$ a l'axe $\Delta$ est constante
Alors, $r_{i}=\text{cte}$ et $z_{i} = \text{cte}$

Soit $\sigma_{O_{z}}$ le moment cinétique du solide $\mathcal{S}$ par rapport a $O_{z}$
$$\sigma_{O_{z}} = \sum_{i = 1}^{n} \sigma_{Oz}(M_{i}) = \sum_{i = 1}^{n} (\overrightarrow{OM_{i} }\wedge m\vec{v}_{i}).\vec{e}_{z}$$
$$\overrightarrow{OM_{i}} = r_{i}\vec{e}_{r_{i}} + z_{i}\vec{e}_{z}$$
$$\vec{v}_{i} = r_{i}\dot{\theta}\vec{e}_{\theta_{i}}$$


$$\begin{array}{cl}
\sigma_{Oz}(M_{i}) &= ((r_{i}\vec{e}_{r_{i}}+z_{i}\vec{e}_{z})\wedge mr_{i}\dot{\theta}\vec{e}_{\theta}).\vec{e}z \\
&= (mr_{i}^{2}\dot{\theta}\vec{e}_{z}-mz_{i}r_{i}\dot{\theta} \vec{e}_{r_{i}}).\vec{e}_{z}
\end{array}$$
Ainsi, 
$$\sigma_{Oz}(M_{i}) = m_{i}r_{i}^{2}\dot{\theta}$$
Donc, 
$$\sigma_{Oz} = \left( \sum_{i=  1}^{n} m_{i}r_{i}^{2}\right)\dot{\theta} $$


#### Définition
Soit $\mathcal{S}$ un solide en rotation autour de l'axe fixe $\Delta$ a la vitesse angulaire $\omega$
- Le moment cinétique de $\mathcal{S}$ par rapport a $\Delta$ est : 
  $$\sigma_{\Delta} = J_{\Delta} \omega$$
- $J_{\Delta} = \sum_{i = 1}^{n} m_{i}r_{i}^{2}$ le moment d'inertie du solide par rapport a $\Delta$.

Le moment d'inertie d'un solide se mesure en $\text{kg}.\text{m}^{2}$

Moment d’inertie usuel
Excal 2

## 2. TMC
#### Propriété
Pour un solide $\mathcal{S}$ en rotation autour de l'axe $\Delta$ a la vitesse $\omega$, le TMC s'écrit : 
$$J_{\Delta} \frac{d\omega}{dt} = \sum_{i = 1}^{n}\mathcal{M}_{\Delta}(\vec{F}_{i})$$
$J_{\Delta}$ le moment d'inertie de $\mathcal{S}$ par rapport a $\Delta$ et 
$\mathcal{M}_{\Delta}(\vec{F}_{i})$ est le moment de $\vec{F}_{i}$ agissant sur $\mathcal{S}$ par rapport a $\Delta$
$$\mathcal{M}_{\Delta}(\vec{F}_{i})= \vec{u}_{\Delta} .(\overrightarrow{OA_{i}} \wedge \vec{F}_{i})$$

# III. Notion de couple
## 1. Couple de forces
#### Définition
Excal 3
On dit que le solide $\mathcal{S}$ est soumis a un couple de forces si l'action mécanique subie par ce solide peut être modélisé par 2 forces $\vec{F}_{1}$ et $\vec{F}_{2}$ opposées $\vec{F}_{1} = -\vec{F}_{2}$ s'appliquant en 2 points distincts

#### Conséquence
La résultante d'un couple est nulle : $\vec{F} = \vec{F}_{1}+\vec{F}_{2} = \vec{O}$
Le moment résultant ne dépend pas du repère choisi
$$\overrightarrow{\mathcal{M}}_{O}(\vec{F}) = \overrightarrow{OA_{1}} \wedge \vec{F}_{1} + \overrightarrow{OA_{2}} \wedge \vec{F}_{2}$$
Comme $\vec{F}_{1} = -\vec{F}_{2}$
$$\overrightarrow{\mathcal{M}_{O}}(\vec{F}) = (\overrightarrow{OA_{1}} - \overrightarrow{OA_{2}}) \wedge \vec{F}_{1}$$
$$\boxed{\begin{array}{c}
\overrightarrow{\mathcal{M}}_{O}(\vec{F}) = \overrightarrow{A_{2}A_{1}} \wedge \vec{F}_{1} \\
\overrightarrow{\mathcal{M}}_{O}(\vec{F}) = \overrightarrow{A_{1}A_{2}} \wedge \vec{F}_{2}
\end{array}}$$

#### Exemple : Le pendule de torsion
Excal 4
Le fil vertical fait apparaître une action mécanique sur la tige que l'on modélise par un couple
$$\overrightarrow{\mathcal{M}}= -C\theta \vec{e}_{z}$$
Modélisation linéaire analogue a la force de rappel d'un ressort.
Avec $C$ la constante de torsion du fil elle s'exprime en $\text{N}.\text{m}.\text{rad}^{-1}$ 

## 2. Couple moteur ou couple de freinage
#### Propriété
Soit $\mathcal{S}$ un solide en rotation autour de l'axe $Oz$ à la vitesse $\omega$, 
On applique a ce solide $\mathcal{S}$ un couple de moment $\Gamma$. 

Quand le couple $\Gamma$ et $\dot{\theta}$ sont de même signe,
Alors le couple est moteur et la vitesse de rotation du solide augmente
Sinon le couple est un couple de freinage et la vitesse de rotation du solide diminue. 


Démonstration : 
Le TMC appliqué à $\mathcal{S}$ par rapport a $Oz$ : 
$$J_{Oz} \dot{\omega} = \Gamma$$
$$\frac{d\omega}{dt} = \frac{\Gamma}{J_{Oz}}$$
$J_{Oz} > 0$
Si $\Gamma > 0$ Alors, $\frac{d\omega}{dt} > 0$ alors la rotation s'accélère, le couple est moteur.
Si $\Gamma < 0$ alors $\frac{d\omega}{dt}<0$ Alors $\omega$ diminue, donc la rotation freine le couple est un couple de freinage

## 3. Liaison pivot
#### Définition
On dit qu'il y a une liaison pivot autour d'un axe $\Delta$ entre deux solides $\mathcal{S}_{2}$ et $\mathcal{S}_{2}$ lorsque le mouvement relatif de $\mathcal{S}_{1}$ par rapport a $\mathcal{S}_{2}$ est uniquement une rotation autour de $\Delta$. 

Souvent un des deux solides est immobile c'est le stator et l'autre solide est le rotor. 


#### Propriété
Pour une liaison pivot parfaite, les frottements sont nuls et on la modélise par un couple de moments nuls : 
$$\Gamma_{Oz} = 0$$
$Oz$ l'axe de rotation
