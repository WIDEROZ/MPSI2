# I. Le moment d'une force
## 1. Par rapport à un point fixe
#### Définition
Soit $\vec{F}$ la force qui s'exerce sur un point materiel $M$ de masse $m$.
Excal 1
On appelle moment de $\vec{F}$ par rapport au point $O$ fixe le vecteur $$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \overrightarrow{\mathcal{M}}(\vec{F}) = \overrightarrow{OM} \wedge \vec{F}$$
$||\overrightarrow{\mathcal{M}}_{\vec{F}/O}||$ se mesure en $\text{N.m}^{-1}$.

#### Exemple : Pendule simple
Excal 2
Moment du poids par rapport a $O$ :
$$\overrightarrow{\mathcal{M}_{\vec{P}/O}} = \overrightarrow{OM} \wedge \vec{P} = (l\vec{e}_{l}) \wedge mg(\cos (\theta) \vec{e}_{l} - \sin (\theta) \vec{e}_{\theta})$$
$$\overrightarrow{\mathcal{M}_{\vec{P}/O}} = -lmg\sin (\theta) (-1) \times\vec{e}_{y} = lmg \sin (\theta) \vec{e}_{y}$$

$$\overrightarrow{\mathcal{M}}_{\vec{T}/O} = l\vec{e}_{r} \wedge (-T\vec{e}_{r}) = \vec{0}$$


## 2. Changement du point fixe
Le moment de la force $\vec{F}$ par rapport à $O$ fixe. : 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \overrightarrow{OM} \wedge \vec{F}$$

Le moment de $\vec{F}$ par rapport à $O'$ fixe :
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} = \overrightarrow{O'M} \wedge \vec{F}$$

Relation entre les deux moments : 
$$\overrightarrow{O'M} = \overrightarrow{O'O} + \overrightarrow{OM}$$

$$\mathcal{M}_{\vec{F}/O'} = \overrightarrow{OO} \wedge \vec{F} + \overrightarrow{OM} \wedge \vec{F}$$

Donc, 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} = \overrightarrow{O'O} \wedge \vec{F} + \overrightarrow{\mathcal{M}}_{\vec{F}/O}$$


## 3. Moment par rapport à un axe
#### Définition 
Excla 3
L'axe $\Delta$ est un <u>axe orienté</u> lorsqu'il est muni d'un vecteur unitaire $\vec{u}$ on définit $\Delta$ par un point et ce vecteur $\Delta(O, \vec{u})$

Soit $M$ un point subissant la force $\vec{F}$ 
Le moment de $\vec{F}$ par rapport à l'axe orienté $\Delta$ est : 
$$\mathcal{M}_{\vec{F}/\Delta} = \overrightarrow{\mathcal{M}}_{\vec{F}/O} . \vec{u}$$
avec $O$ un point fixe de $\Delta$
On réécrit :
$$\overrightarrow{\mathcal{M}}_{\vec{F}/\Delta} = (\overrightarrow{OM} \wedge \vec{F}). \vec{u}$$
Ce moment est une grandeur scalaire. 

Le moment de $\vec{F}$ par rapport à $\Delta$ ne dépend pas du choix du point $O$ de $\Delta$. 

Soit $O'$ un autre point fixe de $\Delta$

$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} = \overrightarrow{O'O} \wedge \vec{F} + \overrightarrow{\mathcal{M}}_{\vec{F}/O}$$

$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} . \vec{u} = (\overrightarrow{O'O} \wedge \vec{F}).\vec{u} + \overrightarrow{\mathcal{M}}_{\vec{F}/O}.\vec{u}$$

Ecal 4

$\overrightarrow{O'O} = - OO' \vec{u}$, alors $\overrightarrow{O'O} \wedge \vec{F}$ est perpendiculaire à $\vec{u}$
Donc, 
$$(\overrightarrow{O'O} \wedge \vec{F}).\vec{u} = \vec{0} \Rightarrow \overrightarrow{\mathcal{M}}_{\vec{F}/O'}$$

Ainsi, 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'}.\vec{u} = \overrightarrow{\mathcal{M}}_{\vec{F}/O}.\vec{u}$$


Si la force $\vec{F}$ est colinéaire à l'axe $\Delta$
Excalibur 5
$$\mathcal{M}_{\vec{F}/\Delta} = 0$$

#### Exemple
Excalibur 6.
1. Determiner le moment de $P$ par rapport à $O$
2. Determiner le moment de $\vec{P}$ par rapport à $O_{z}$ EZ

1. 
   $$\overrightarrow{\mathcal{M}}_{\vec{P}/O} = \overrightarrow{OM} \wedge \vec{P} = (x\vec{e}_{x}+y\vec{e}_{y}+z\vec{e}_{z}) \wedge (-mg\vec{e}_{z})$$
   Ainsi, 
   $$\overrightarrow{\mathcal{M}}_{\vec{P}/O} = mgx\vec{e}_{y}-mgy\vec{e}_{x}$$


## 4. Le bras de levier
Excla 7 IMPORTANT
Droite d'action de $\vec{F}$ important

#### Définition / Propriété
$d = OH$ est le bras de levier de $\Delta$ et $\vec{F}$ c'est la distance entre la droite d'action de $\vec{F}$ et le point $O$ de $\Delta$ alors le moment de $\vec{F}$ par rapport a $\Delta$ est : 
$$\mathcal{M}_{\vec{F}/\Delta} = \pm dF$$


Démonstration : 
- Si $\Delta$ et $\vec{F}$ se coupent alors $\vec{u}$ et $\vec{F}$ sont dans un même plan $\Leftrightarrow$ $\mathcal{M}_{O}(\vec{F})$ est $\perp$ à ce plan 
  Donc, $\mathcal{M}_{\Delta}(\vec{F}) = \mathcal{M}_{O}(\vec{F}).\vec{u} = 0$
- Si $\Delta$ et $\vec{F}$ ne se coupent pas
  Alors il existe une droite perpendiculaire a $\vec{F}$ et a $\Delta$ 
  Soit $H$ le projeté de $O$ sur $\vec{F}$ la distance $d = OH$ est le bras de levier (cette droite perpendiculaire est : $\overrightarrow{OH}$)
  $$\mathcal{M}_{\vec{F}/\Delta} = (\overrightarrow{OM} \wedge \vec{F}).\vec{u}$$
  $\overrightarrow{OM} = \overrightarrow{OH} + \overrightarrow{HM}$
  Alors, 
  $$\overrightarrow{OM} \wedge \vec{F} = \overrightarrow{OH} \wedge \vec{F} + \overrightarrow{HM} \wedge \vec{F}$$
  or $\overrightarrow{HM} \wedge \vec{F} = \vec{0}$ car ils sont colinéaires
  Donc, 
  $$\mathcal{M}_{\Delta}(\vec{F}) = (\overrightarrow{OH} \wedge \vec{F}). \vec{u} = \pm d |\vec{F}|$$
  Car $\vec{u}$ est un vecteur unitaire



#### Méthode
1. Faire un schema avec l'axe $\Delta$ la force $\vec{F}$ se droite d'action et le plan $\pi$ perpendiculaire (c orthogonal mais bon...) à $\vec{F}$ qui contient $M$.
2. Trouver le bras de levier $d$ : Projeter $\vec{F}$ sur le plan $\pi$. Avec $d$ la distance entre $O$ et la projection de $\vec{F}$ sur $\pi$.
3. Determiner la valeur absolue du moment : 
   $$|\mathcal{M}_{\vec{F}/\Delta}| = dF$$
4. Determiner le signe de $\mathcal{M}_{\vec{F}/\Delta}$
   - Si $\vec{F}$ tend a faire tourner $M$ dans le sens direct par rapport à delta : $\mathcal{M}_{\vec{F}/\Delta} = + dF$
   - Sinon, $\mathcal{M}_{\vec{F}/\Delta} = -dF$

#### Exemple : Le pendule simple
Excal 8
Determiner $\mathcal{M}_{\vec{P}/O_{y}}$ en utilisant le bras de levier. 
$d = l \sin(\theta)$
$$\mathcal{M}_{\vec{P}/O_{y}} = \pm l \sin(\theta)mg$$
Mais $Oy$ est orienté dans le mur donc, 
$$\mathcal{M}_{\vec{P}/O_{y}} = + l\sin (\theta)mg$$


## 5. Moment d'une somme de forces
### a. Cas d'un seul point materiel
Soit $n \in \mathbb{N}^{*}$, 
Soit $i \in [\![1, n]\!]$, 
Soit $M$ un point materiel qui subit des forces : $F_{i}$ de résultante :
$$\vec{F} = \sum_{i = 1}^{n} \vec{F}_{i}$$
Comme les produits vectoriels sont distributifs par rapport a l'addition, le moment de la somme des forces : $F_{i}$ est égal a la somme des moments des forces. 

$$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \overrightarrow{OM} \wedge \left( \sum_{i = 1}^{n} \vec{F}_{i} \right) = \sum_{i = 1}^{n} \overrightarrow{OM} \wedge \vec{F}_{i}$$

Ainsi : 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \sum_{i = 1}^{n}\overrightarrow{\mathcal{M}}_{F_{i}/O}$$

#### Propriété
Soit $\vec{F} = \sum_{i = 1}^{n} \vec{F}_{i}$ la résultante des forces sur $M$
Alors, 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \sum_{i = 1 }^{n} \vec{\mathcal{M}}_{\vec{F}_{i}/O}$$
$$\overrightarrow{\mathcal{M}}_{\vec{F}/\Delta} = \sum_{i = 1}^{n} \mathcal{M}_{\vec{F}_{i}/\Delta}$$

### b. Cas d'un système de 2 points matériaux
Soit $M_{1}, M_{2}$ deux points
$\vec{F}_{1}$ la résultante des forces extérieures sur $M_{1}$
$\vec{F}_{2}$ la résultante des forces extérieures sur $M_{2}$
$\vec{F}_{1 \to 2}$ la force de $M_{1}$ sur $M_{2}$
$\vec{F}_{2 \to 1} = -\vec{F}_{1 \to 2}$ la force de $M_{2}$ sur $M_{1}$

Système : $\mathcal{S} = \{M_{1}, M_{2}\}$

Calculons le moment résultant des forces s’exerçant sur $\mathcal{S}$ par rapport a $O$ fixe
$$\overrightarrow{\mathcal{M}}_{O}(\mathcal{S}) = \overrightarrow{OM_{1}} \wedge (\vec{F}_{1} + \vec{F}_{2\to 1}) + \overrightarrow{OM} \wedge (\vec{F}_{2} + \vec{F}_{1 \to 2}) $$$$= \overrightarrow{OM_{1}} \wedge \vec{F}_{1} + \overrightarrow{OM_{2}} \wedge \vec{F}_{2} + (\overrightarrow{OM}_{2}-\overrightarrow{OM}_{1}) \wedge \vec{F}_{1 \to 2}$$or $\vec{F}_{1 \to 2}$ est colinéaire à $\overrightarrow{OM_{2}} - \overrightarrow{OM_{1}} = \overrightarrow{M_{1}M_{2}}$
Donc, 
$$\overrightarrow{M_{1}M_{2}} \wedge \vec{F}_{1 \to 2} = \vec{0}$$
Ainsi : 
$$\overrightarrow{\mathcal{M}}_{O}(\mathcal{S}) = \overrightarrow{\mathcal{M}}_{\vec{F}_{1}/O} + \overrightarrow{\mathcal{M}}_{\vec{F}_{2}/O}$$


#### Propriété
Pour un système $\mathcal{S}$ de plusieurs points matériaux : 
$$\overrightarrow{\mathcal{M}}_{O}(\mathcal{S}) = \sum_{i = 1} ^{n} \overrightarrow{\mathcal{M}}_{\vec{F}_{i}/O}$$
$$\mathcal{M}_{\Delta}(\mathcal{S}) = \sum_{i=1}^{n} \mathcal{M}_{\vec{F}_{i}/\Delta}$$

### c. Cas du poids
Excalidraw 9
On considère uniquement le poids : 
$\vec{F}_{1} = m_{1}\vec{g}$ et $\vec{F}_{2} = m_{2}\vec{g}$

Calculons le moment du système : 
$S = \{M_{1}, M_{2}\}$ par rapport a $O$
$$\overrightarrow{\mathcal{M}_{O}}(S) = \overrightarrow{OM_{1}} \wedge m_{1}\vec{g} + \overrightarrow{OM_{2}} \wedge m_{2}\vec{g}$$
$\vec{g}$ est un vecteur constant

$$\overrightarrow{\mathcal{M}_{O}}(S) = (m_{1}\overrightarrow{OM} + m_{2}\overrightarrow{OM_{2}}) \wedge \vec{g} = (m_{1}+m_{2})\overrightarrow{OG}$$
Avec $G$ le centre de gravité du système
$$\overrightarrow{\mathcal{M}_{O}}(S) = \overrightarrow{OG} \wedge (m_{1}+m_{2})\vec{g}$$

#### Propriété
Le moment d'un système de points matériaux uniquement soumis au poids est égal au moment du poids de l'ensemble du système appliqué en $G$ le centre de gravité. 
$$\overrightarrow{\mathcal{M}}_{O}(\mathcal{S}) = \overrightarrow{OG} \wedge m \vec{g}$$
$$\overrightarrow{\mathcal{M}}_{\Delta}(S) = (\overrightarrow{OG} \wedge m\vec{g}).\vec{u}$$

# II. Moment cinétique
## 1. Moment cinétique par rapport a un point
### a. Définition
Soit $M$ un point materiel de vitesse $\vec{v}$ dans un référentiel galiléen de masse $m$
Soit $O$ un point fixe

#### Définition
Le moment cinétique de $M$ par rapport à $O$ est : 
$$\vec{\sigma}_{O}(M) = \overrightarrow{OM} \wedge m \vec{v}$$
La norme de $\vec{\sigma}$ se donne en : 
$$\text{kg.m}^{2}\text{s}^{-1} = \text{J}.\text{s}$$

On peut aussi noter : 
$$\vec{\sigma}_{O}(M) = \vec{L}_{O}(M)$$

## b. Influence du point fixe $O$
Soit $O'$ un autre point fixe dans $\mathbb{R}$ 
$$\vec{\sigma}_{O'}(M) = \overrightarrow{O'M} \wedge m \vec{v} = (\overrightarrow{O'O} + \overrightarrow{OM}) \wedge m\vec{v}$$
$$\vec{\sigma}_{O'}(M) = \overrightarrow{O'O} \wedge m\vec{v} + \vec{\sigma}_{O}(M)$$

Mouvement rectiligne
Excal 10 maâloul

## 2. Moment cinétique par rapport a un axe fixe
### a. Définition
Soit $M$ un point materiel de vitesse $\vec{v}$ dans un référentiel galiléen de masse $m$
Soit $O$ un point fixe
Soit $\Delta$ un axe fixe de vecteur unitaire $\vec{u}$

#### Définition
Le moment cinétique de $M$ par rapport à $\Delta$ est : 
$$\sigma_{O}(M) = (\overrightarrow{OM} \wedge m \vec{v}).\vec{u}$$
Avec $O$ le point fixe de l'axe.
La norme de $\vec{\sigma}$ se donne en : 
$$\text{kg.m}^{2}\text{s}^{-1} = \text{J}.\text{s}$$

On peut aussi noter : 
$$\sigma_{O}(M) = L_{O}(M)$$

Le moment cinétique par rapport à un axe ne dépend pas du point de l'axe choisi. 



Soit $O'$ un autre point de $\Delta$ : 
$$(\overrightarrow{OM} \wedge m\vec{v}).\vec{u} = (\overrightarrow{O'O} \wedge m \vec{v}).\vec{u}+(\overrightarrow{OM} \wedge m\vec{v}).\vec{u}$$
or $\overrightarrow{O'O}$ et $\vec{u}$ sont colinéaires et $\overrightarrow{O'O} \wedge m\vec{v}$ est perpendiculaire à $\overrightarrow{O'O}$
donc
$\overrightarrow{O'O} \wedge m\vec{v}$ est perpendiculaire à $\vec{u}$ donc $(\overrightarrow{O'O} \wedge m\vec{v}).\vec{u} = 0$
$$(\overrightarrow{O'M} \wedge m\vec{v}).\vec{u} = \sigma_{\Delta}(M)$$

#### Remarque
$\sigma_{\Delta}(M)$ est une grandeur scalaire et algébrique dont le signe dépend de l'orientation de $\Delta$. 

### b. Moment cinétique et bras de levier
Excali 11
à priori $\Delta$ et $\vec{v}$ ne sont pas dans un même plan.

##### Etape 1
Tracer le plan perpendiculaire à $\Delta$ qui contient $M$

##### Etape 2
Décomposer $\vec{v} = \vec{v}_{\parallel} + \vec{v}_{\perp}$
$\vec{v}_{\parallel}$ colinéaire à $\Delta$
$\vec{v}_{\perp}$ dans le plan $\mathcal{P}$

##### Etape 3
Determiner le bras de levier $d$ distance entre $\Delta$ et la droite d'action de $\vec{v}_{\perp}$

##### Etape 4
La valeur absolue du moment cinétique par rapport à $\Delta$ : 
$$|\sigma_{\Delta}(M)| = mvd$$

- Si le signe de $\sigma_{\Delta}(M)$ est déterminé par le sens de rotation si $M$ tourne autour de $\Delta$ dans le sens direct $\sigma_{\Delta}(M)=+ mvd$ 
- Sinon $\sigma_{\Delta}(M)=- mvd$

## c. Cas du mouvement circulaire
Soit $M$ un point de masse : $m$ en mouvement circulaire de rayon $R$ constant autour de l'axe $O_{z}$ : 
Excal 12
$\overrightarrow{OM} = \vec{r} = R\vec{e}_{r}$
$\vec{v} = R \overset{\cdot} \theta \vec{e}_{\theta}$ 

Calculons le moment cinétique de $M$ par rapport à $O_{z}$
$$\sigma_{O_{z}}(M) = (\overrightarrow{OM} \wedge m\vec{v})\vec{e}_{z} = (R\vec{e}_{r} \wedge mR \overset \cdot \theta \vec{e}_{\theta}).\vec{e}_{z} = mR^{2} \overset \cdot \theta (\vec{e}_{r} \wedge \vec{e}_{\theta}).\vec{e}_{z}$$
Ainsi, 

$$\sigma_{O_{z}}(M) = mR^{2} \overset \cdot \theta$$


#### Définition
On appelle vecteur rotation $\vec{\omega} = \overset \cdot \theta \vec{e}_{z}$
$\vec{e}_{z}$ étant l'axe de rotation
Si la trajectoire est décrite dans le sens direct alors, 
$$\sigma_{O_{z}}(M)>0 \Leftrightarrow \overset \cdot \theta > 0$$

## 3. Mouvement cinétique d'un ensemble de points
Soit $I$ un ensemble d'indices et $i \in I$, 
On considère un système $\mathcal{S}$ formé de plusieurs points matériels $M_{i}$ de masse $m_{i}$ on note $\vec{v}_{i}$ la vitesse de $M_{i}$ dans le référentiel galiléen

#### Définition
Le moment cinétique de $\mathcal{S}$ par rapport au point $O$ fixe est : 
$$\vec{\sigma}_{O}(\mathcal{S}) = \sum_{i \in I} \overrightarrow{OM} \wedge m_{i}\vec{v}_{i} = \sum\vec{\sigma}_{O}(M_{i})$$

et le moment cinétique de $\mathcal{S}$ par rapport à l'axe $\Delta$ fixe est : 
$$\sigma_{\Delta}(\mathcal{S}) = \sum_{i \in I}\sigma_{\Delta}(M_{i})$$

# III. Théorème du moment cinétique (TMC)
On se place dans un référentiel galiléen $\mathcal{R}$ et on étudie le mouvement du point $M$ de masse $m$, soumis à la résultante des force $\vec{F}$ et $\vec{v}$ la vitesse de $M$

Dérivons le mouvement cinétique par rapport au point $O$
$$\vec{\sigma_{O}}(M) = \overrightarrow{OM} \wedge m\vec{v}$$
$$\frac{d\vec{\sigma}_{O}(M)}{dt} = \frac{d}{dt}(\overrightarrow{OM}\wedge m\vec{v}) = \frac{d\overrightarrow{OM}}{dt} \wedge m\vec{v} + \overrightarrow{OM} \wedge m\frac{d\vec{v}}{dt} $$
$$\frac{d\vec{\sigma}(M)}{dt} = \overrightarrow{OM} \wedge \vec{F}$$
PFD et $\vec{v} \wedge \vec{v} = \vec{0}$

Ainsi :
$$\frac{d\vec{\sigma}(M)}{dt} = \overrightarrow{OM} \wedge \vec{F} = \vec{\mathcal{M}}_{O}(\vec{F})$$

#### Théorème du mouvement cinétique
Dans un référentiel galiléen le moment cinétique d'un point $M$ est lié au mouvement de la résultant des forces $\vec{F}$ s'appliquant sur $M$
$$\frac{d\vec{\sigma}(M)}{dt} = \vec{\mathcal{M}}_{O}(\vec{F})$$
$O$ étant un point fixe dans $\mathcal{R}$

## 1. TMC par rapport à un axe
Soit un axe orienté $\Delta(O, \vec{u})$ fixe dans $\mathcal{R}$

#### Théorème
$$\frac{d\vec{\sigma}_{\Delta}(M)}{dt} = \mathcal{M}_{\Delta}(\vec{F})$$

## 2. Application au pendule simple
Excal 13

#### Faire le bilan des forces
$\vec{P} = m\vec{g} = -mg\vec{e}_{z}$
$\vec{T} = -T \vec{e}_{r}$

#### Determiner le moment cinétique du point $M$ par rapport à $O$
$$\vec{\sigma}_{O}(M) = \overrightarrow{OM} \wedge m\vec{v}$$
On se place dans la base cylindrique : 
$(\vec{e}_{r}, \vec{e}_{\theta}, \vec{e}_{y})$

$\overrightarrow{OM} = l\vec{e}_{r}$
$\vec{v} = l\dot{\theta} \vec{e}_{\theta}$

Donc, 
$$\vec{\sigma}_{O}(M) = l\vec{e}_{r} \wedge ml\dot{\theta}\vec{e}_{\theta} = ml\dot{\theta}\vec{e}_{y}$$

#### Déterminer le moment des forces en $O$
Moment du poids par rapport à $O$ : 
$$\mathcal{M}_{O}(\vec{P}) = \overrightarrow{OM} \wedge \vec{P}  =l\vec{e}_{r} \wedge (-mg\vec{e}_{z}) = l\vec{e}_{r} \wedge (mg\cos \theta \vec{e}_{r}- mg \sin \theta \vec{e}_{\theta})$$
$$\mathcal{M}_{O}(\vec{P}) = -mgl\sin \theta \vec{e}_{y}$$

$$(\overrightarrow{\mathcal{M}}_{O}(\vec{T}) = \overrightarrow{0})$$

#### Déterminer l'équation du mouvement avec le TMC
On applique le TMC en $O$ :
$$\frac{d\overrightarrow{\sigma}_{O}(M)}{dt} = \overrightarrow{\mathcal{M}}_{O}(\vec{P}) + \overrightarrow{\mathcal{M}}_{O}(\vec{T}) = -mgl\sin \theta \vec{e}_{y}$$
$$= ml^{2}\overset{\cdot \cdot}{\theta} \vec{e}_{y}$$
On projette sur $\vec{e}_{y}$ : 
$$\overset{\cdot \cdot}{\theta} + \frac{g}{l} \sin \theta = 0$$


## 3. Système de points matériels
Soit $I$ un ensemble d'indices et $i \in I$,
Soit un système $\mathcal{S}$ formé des points $M_{i}$ de masse $m_{i}$ et de vitesse $\vec{v}_{i}$ dans le référentiel galiléen $\mathcal{R}$.

On note $\vec{F}_{\text{ext}}$ la résultante des forces extérieures qui s'exercent sur $\mathcal{S}$

#### Théorème
$$\frac{d}{dt}(\vec{\sigma}_{O}(\mathcal{S})) = \overrightarrow{\mathcal{M}_{O}}(\vec{F}_{\text{ext}})$$
$$\frac{d}{dt}(\sigma_{\Delta}(\mathcal{S})) = \mathcal{M}_{\Delta}(\vec{F}_{\text{ext}})$$
avec $O$ un point fixe et $\Delta$ un axe fixe de $\mathcal{R}$
$$\vec{\sigma}_{O}(\mathcal{S}) = \sum_{i \in I}\vec{\sigma}_{O}(M_{i})$$
$$\sigma_{\Delta}(\mathcal{S}) = \sum_{i \in I} \sigma_{\Delta}(M_{i})$$

# IV. Conservation du moment cinétique
#### Propriété
Pour un système pseudo isolé la résultante des forces est nulle $\vec{F} = \vec{0}$, donc, 
$$\vec{\sigma}_{O}(\mathcal{S}) = \vec{C}$$
Avec $\vec{C}$ un vecteur constant.

Le mouvement cinétique du système cinétique est conservé. 
La conservation du moment cinétique est une grandeur fondamentale en physique. 

## 1. Mouvement des planètes
Excal 14
$$\vec{F}_{S \to P} = - G \frac{mM}{SP^{2}}\vec{u}_{r}$$
Calculons le moment de la force par rapport à $\mathcal{S}$, 
$$\overrightarrow{\mathcal{M}}_{S}(\vec{F}_{S \to P}) = \overrightarrow{PS} \wedge \vec{F}_{S \to P} = -SP\vec{u}_{r} \wedge - \frac{GMm}{SP^{2}}\vec{u}_{r}$$
$$\overrightarrow{\mathcal{M}}_{S}(\vec{F}_{S\to P}) = \vec{0} \Rightarrow \frac{d\vec{\sigma}_{S}(P)}{dt} = \vec{0}$$
Donc, 
$$\vec{\sigma}_{S}(P) = \vec{C}$$
Avec $\vec{C}$ un vecteur constant

## 2. Mouvements de rotation
- Roue de velo / moto 
- Patinoire

## 3. Physique quantique
Conservation quantique : spin

