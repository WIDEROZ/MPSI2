# I. Notion de champ
## 1. Premières definitions
#### Définition
Un champ est la représentation d'un propriété Physique en tout point de l'espace. 

- Champ scalaire : Si la grandeur physique est un nombre : $T, m, \text{altitude}$ (Les cartes IGN mdrrr)
- Champ vectoriel ; Si la grandeur est un vecteur : $\vec{v}, \vec{E}, \vec{g}, \vec{B}$ ...

#### Propriété
Le champ est uniforme si la grandeur correspondante garde la même valeur en tout point de l'espace. 

Le champ est statique ou stationnaire ou permanent si la grandeur ne dépend pas du temps. 

## 2. Topographie d'un champ
### a. Lignes et cartes  de champ
#### Définition
On appelle ligne de champ une courbe en tout point duquel le champ est tangent. 

L'ensemble des lignes de champ représenta la carte de champ

Excal 1

#### Propriété
Au croisement entre deux lignes de champ alors le champ est nul.

### b. Orientation d'une surface et vecteur élément de surface
$$\boxed{\text{EXCAL 2}}$$
Le vecteur $d\vec{S}$ originaire du point $M$ de la surface est perpendiculaire à la surface. 

- Surface ouverte, on oriente le contour de cette surface, le sens du vecteur $d\vec{S}$ est donné par la règle de la main droite. 
- Surface fermée, le vecteur $d\vec{S}$ est toujours orienté de l'intérieur vers l'extérieur. 

### c. Flux de champ de vecteur
#### Définition
On appelle flux élémentaire d'un champ vectoriel $\vec{A}(M)$ en $M$ la quantité
$$d\phi = \vec{A}.d\vec{S}$$
avec $d\vec{S}$ l'élément de surface au point $M$

Le flux du champ à travers une surface $\sum$ est :
$$\Phi_{\vec{A}, \sum} = \iint_{\sum} \vec{A}.d\vec{S}$$

Si la surface est fermée : 
$$\Phi_{\vec{A}, \sum} = \oint\oint_{\sum} \vec{A}.d\vec{S} $$

# II. Champ Magnétique
#### Définition
Le champ magnétique : $\vec{B}$, décris indirectement les interactions entre les charges électriques en mouvement. 
$\vec{B}$ se déduis de la force magnétique de Lorentz :
$$\vec{F}_{mag} = q(\vec{v} \wedge \vec{B})$$
$\vec{B}$ se mesure en Tesla $T$. 

## 1. Sources
### a. Les aimants
On les connait depuis l'antiquité.
Aimantation terrestre : Dynamo

### b. Les courants électriques
On les connait depuis le $19^{\text{eme}}$ siècle. 

Relation entre phénomènes électriques et magnétiques. 

## 2. Ordre de grandeurs
Les plus forts champs magnétiques sont les étoiles mortes
Aimants : $0.1 \, T$
Champ de la terre : $10^{-5} \, T$

# III. Caractérisation du champ magnétique
## 1. Intensité et ligne de champ
#### Propriété
$\vec{B}$ est un flux conservatif ssi 
$$\oint\oint_{\sum} \vec{B} .d\vec{S} = 0$$
Avec $\sum$ un espace fermé

#### Définition
Un tube de champ est la surface engendré par les lignes de champs s'appuyant sur un contour fermé. 
EXCAL 3

#### Propriété
Le champ $\vec{B}$ est plus intense dans les zones où les lignes de champ sont resserrées que dans les zones ou elles sont éloignées : 
$$\left|\left| \vec{B}_{1} \right|\right| \leq \left|\left| \vec{B}_{2} \right|\right| $$

#### Propriété
Si les lignes sont parallèles alors le champ $\vec{B}$ est uniforme


## 2. Champ $\vec{B}$ créé par des aimants
### a. Aimant Droit
$$\boxed{\text{EXCAL 4}}$$
### b. Aimant en U
$$\boxed{\text{EXCAL 5}}$$

## 3. Champ créé par des courants
Un courant $I$ va créer un champ $\vec{B}$ dont l'intensité est proportionnelle à $I$ et dont le sens dépend du sens du courant suivant la règle de la main droite. 

### a. Fil infini
$${\vec{B}(r) = \frac{\mu_{0}I}{2\pi r}\vec{e}_{\theta}}$$
(ne pas l'apprendre)
avec $\vec{e}_{z}$ l'axe de fil $\vec{e}_{\theta}$ et $\vec{e}_{r}$ les vecteur de la base cylindrique liée $\vec{e}_{z}$
$\mu_{0}$ : perméabilité du vide : $4\pi . 10^{-7}$ S.I.

### b. Spire circulaire
$$\boxed{\text{EXCAL 7}}$$
Sur l'axe, l'orientation de $\vec{B}$ est donné par la règle de la main droite. 
### c. Solénoïde
#### Définition
Un solénoïde est un dispositif électrique formé d'un fil conducteur enroulé en hélice.
On suppose que les spires se touchent et on considère que le solénoïde est une superposition de sprites qui ont la même géométrie. 

#### Principe
Principe de superposition, les champs créent par plusieurs distributions de courants s'additionnent. 

Solénoïde : Le champ créé à l'intérieur est uniforme, le long de l'axe et sa norme est : $B = \mu_{0}nI$
$n$ le nombre de spires par unité de longueur. 

# IV. Notion de symétries
## 1. Plan de symétrie
### a. Champ scalaire
#### Propriété
Si le plan $\pi$ est un plan de symétrie pour le champ $V$, alors, $V(M) = V(M')$ avec $M'$ le symétrique de $M$

#### b. Champ vectoriel
#### Propriété
Si $\pi$ est un plan de symétrie du champ vectoriel $\vec{A}$ alors, 
$$\vec{A}_{\parallel}(M') = \vec{A}_{\parallel}(M)$$
$$\vec{A}_{\perp}(M') = \vec{A}_{\perp}(M)$$
Avec,
$\vec{A}_{\parallel}$ la composante parallèle à $\pi$
$\vec{A}_{\perp}$ la composante perpendiculaire à $\pi$

## 2. Plan d'antisymétrie
#### Propriété
Si $\pi$ est un plan d'antisymétrie du champ $V$ alors, $V(M') = - V(M)$ alors $M$ et $M'$ symétriques par rapport à $\pi$ 
+ Si $\pi$ est un plan d'antisymétrie du champ vectoriel $\vec{A}$ alors, pour tout $M$ et $M'$ symétriques
  $\vec{A}_{\parallel}(M') = -\vec{A}_{\parallel}(M)$
  $\vec{A}_{\perp}(M') = \vec{A}_{\perp}(M)$
  EXCAL 8
- Si $M$ € $\pi$ antisymétrique 
  Pour un champ scalaire $V$, $V(M) = 0$
  Pour un champ vectoriel $\vec{A}$, $\vec{A}(M) \perp \pi$

## 3. Symétrie du champ $\vec{B}$
#### Propriété
- Un plan de symétrie des sources (de courant) est un plan d'antisymétrie de $\vec{B}$
- Un plan d'antisymétrie des sources et un plan de symétrie de $\vec{B}$

# V. Dipôle magnétique
## 1. Moment dipolaire magnétique
#### Définition
Le moment dipolaire : $\vec{M}$ est le vecteur
$$\overrightarrow{M} = I \overrightarrow{S}$$
Avec $\overrightarrow{S}$ le vecteur surface du circuit fermé parcouru par le le courant $I$

#### Exemple
$$\boxed{\text{EXCAL 9}}$$
A grande distance la spire $(r, \gg R)$, le champ magnétique créé par cette spire est équivalent à celui créé par un aimant : $\overrightarrow{M} = I \overrightarrow{S}$

## 2. Pôle magnétique
Pour une spire circulaire, le pôle nord magnétique correspond à la zone ou sort le champ $\overrightarrow{B}$, et le pole sud celle ou elle rentre. 
EXCAL 10

## 3. Orientation des lignes de champ
#### Propriété
Par convention des pôles Nord et Sud, les lignes de champ $\vec{B}$ sont orientées du pôle nord vers le pôle sud à l'extérieur et inversement à l'intérieur : 

#### Exemple
EXCAL 11

## 4. Ordre de grandeur des moment dipôlaires magnétiques


