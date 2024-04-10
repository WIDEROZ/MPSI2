# Theme 3 : Energies, conversion et transfert
# I. Vocabulaire
Le libre parcours moyen $\lambda$ d'une particule est la longueur moyenne des segments parcourus par cette particule entre 2 collisions avec une autre particule du système. 

Excalidraw 1.

$\lambda$ dépend de :
- Pression
- Volume
- Température
- Quantité de matière
- Etat physique (liquide, solide, gaz)

#### Ordres de grandeur
- Liquide : 
  $\lambda \sim 10^{-10}m$
- Gaz : 
  $T = 300 K$ et $P = 1 \space bar$
  $\lambda \sim 0.1 \mu m$
$\lambda \propto \frac{1}{P}$

### b. Echelle thermodynamique
#### Echelle $\mu$ microscopique :
Système de taille de l'ordre de $\lambda^{3}$
Excal 2
A cette échelle la matière est discontinue
#### Echelle macroscopique :
Système de taille de l'ordre de $L^{3}\gg \lambda^{3}$
Excal 3
C'est de l'ordre de grandeur du nombre d'Avogadro :
$N_{A} = 6.02\times 10^{23} \text{ mol}^{-1}$ 
A cette échelle la matière est continue
#### Echelle mésoscopique : 
De taille $l^{3}$
$L\gg l\gg \lambda$
Excal 4
Cette échelle permet de définir localement des paramètres physiques comme $T, P, \dots$

## 2. Systèmes thermodynamiques
#### Définition
Un <u>système thermodynamique</u> est l'ensemble des corps situées à l’intérieur d'une surface fermée appelée <u>frontière ou enveloppe.</u> 
La frontière peut être réelle ou imaginaire. 
La frontière peut être rigide ou déformable. 
Excal 5

#### Définition
Le <u>milieu extérieur</u> est tout ce qui est en dehors du système étudié : tout le reste de l'univers. 

#### Définition
<u>L'état thermodynamique</u> est l'ensemble des propriétés du système thermodynamique étudié. 
- L'état microscopique : Connaitre l'état de toutes les particules du système. 
  Comme l'ordre de grandeur des particules est de $10^{24}$ on utilise des statistiques pour résoudre le problème. 
- Etat macroscopique
  L'état macro est déterminé par le volume $V$, la température $T$ sa composition chimique...

### Etat macroscopique
#### Définition
Les <u>paramètres d'état</u> sont les grandeurs relatives aux propriétés physique moyennes : $P, V, T$
Les <u>fonctions d'état</u> sont des grandeurs qui sont déduites des paramètres d'état.
Par exemple $U$ est une fonction d'état.

#### Définition
On dit que le système est dans un <u>état thermo d'équilibre</u> stable si toutes les grandeurs d'état reviennent a leurs valeurs initiales après une perturbation. 

#### Définition
<u>Système homogène</u> : Un système est homogène si quand on le divise en $N$ parties égales alors on obtiens $N$ Systèmes identiques (Avec les mêmes propriétés)

Un système homogène est formé d'une seule phase. 

#### Définition
<u>Systèmes hétérogènes</u> :
- Variation des propriétés physique de manière continue dans l'espace. 
Par exemple : L'atmosphère terrestre. 
- Variations discontinue des propriétés physiques dans l'espace. 

## 3. Paramètres d'état
Pour un système homogène : 
On le divise en deux : 
- Le volume est divisé par deux
- La quantité de matière est aussi divisé par deux
- La pression reste la même
- La température reste la même

#### Définition
Les <u>paramètres d'état extensifs</u> dépendent du volume du système : Le volume, la masse, la quantité de matière...
Les <u>paramètres d'état intensifs</u> ne dépendent pas du volume : Température, Pression...

- Le rapport de 2 paramètres extensifs est un paramètre intensif
  Exemple : 
  $\mu = \frac{m}{V}$, $C = \frac{n}{V}$, $d = \frac{\mu}{\mu_{\text{eau, liquide}}}$ 

Pour un système thermo, la relation si elle existe entre les différents paramètres d'état décrivant ce système est l'équation d'état. 

## 4. Echanges avec l'extérieur
- Echange de matière
- Echange de chaleur : Transfert thermique
- Echange de travail

#### Propriété
Le système est <u>calorifugé</u> si il n'y a aucun transfert thermique avec l’extérieur. 
Représentation : Excal 5
On dit aussi que le système est isolé thermiquement. 

L'évolution du système est alors Adiabatique. 

#### Définition
Le <u>système est fermé</u> si il n'y a pas d'échange de matière avec l'extérieur. Il est ouvert sinon.

#### Définition
Si il n'y a aucun transfert avec l’extérieur le système est isolé 

# II. La Température
## 1. Principe zéro de la thermodynamique
#### Propriété
Si deux systèmes thermodynamiques $A$ et $B$ sont chacun a l'équilibre thermique avec un système thermodynamique $C$ alors, les systèmes $A$ et $B$ sont aussi en équilibre thermiques. 
Excal 6

## 2. Echelle de température
Echelle centésimale : (Par exemple : échelle Celsius / Fahrenheit)
C'est une échelle linéaire
Il existe un lien entre la grandeur physique observée et la température du système.
$$h = aT+b$$
Avec $a$ et $b$ des constantes

Dans l'échelle $\degree C$, 
$a$ et $b$ sont déterminées en supposant que
$$T = (\text{fusion de l'eau}) = 0 \degree C$$
$$T = (\text{ebullition de l'eau}) = 100 \degree C$$
à $P = 1 \text{ bar}$

On peut passer facilement d'une température a une autre facilement.


L'échelle de Kelvin : 
$$T(\text{Kelvin}) = T(\text{Celsius}) + 273.15 $$


## 3. Propriété des gaz à faible pression
### Lois
#### Loi de Boyle et Mariotte
Si $T = \text{cte}$
$$PV = \text{cte}$$

#### Loi de Charles
Si $P = \text{cte}$, 
$$V = V_{0}(1+\alpha(T-T_{0}))$$
Avec $V_{0}$ et $T_{0}$ des constantes et $\alpha$ une fonction de $P$ 
$$\lim_{ P \to 0 } \alpha = \alpha_{\text{lim}} $$
est indépendante du type de gaz

#### Loi de Gay-Lussac
Si $V = \text{cte}$,
$$P = P_{0}(1 + \beta(T-T_{0}))$$
Avec $P_{0}$ et $T_{0}$ des constantes et $\beta$ une fonction de $V$

#### Loi d'Avogadro-Ampère
Si $T = \text{cte}$
$$PV \propto n \text{ (avec }n\text{ le nonmbre de mol)}$$

## 4. Les gaz parfaits
#### Définition
Le modèle des gaz parfaits suppose que les molécules ou atomes du gaz parfait suppose que les molécules ou atomes du gaz sont ponctuelles et sans interaction. 

#### Définition
Un gaz parfait est un gaz qui satisfait rigoureusement les limites à $P = 0$ des lois empiriques suivies par les gaz réels. 

### a. Echelle de température pour un gaz parfait
L'échelle de température pour un gaz parfait est construite avec la grandeur thermodynamique $PV$ 

#### Définition
Le rapport des produits $PV$ d'un gaz a deux températures différentes est égal au rapport de ces températures : 
$$\begin{rcases}
T_{1}\to P_{1}V_{1} \\
T_{2} \to P_{2}V_{2}
\end{rcases} \Rightarrow \frac{P_{1}V_{1}}{P_{2}V_{2}} = \frac{T_{1}}{T_{2}}$$

Il y a une relation de proportionnalité entre $PV$ et $T$

On définit l'échelle de température des gaz parfaits par une température de référence : Le point triple de l'eau. 
C'est donc : $T_{0} = 273,16 K$
L'unité du SI est : $K$ (Kelvin)

### b. Equation d'état 
Pour un gaz parfait
$$PV = nRT$$
$P$ : La pression, en $Pa$
$V$ : Le volume, en $\text{m}^{3}$
$n$ : La quantité de matière, en $\text{mol}$
$T$ : La température, en $K$
$R$ : La constante des gaz parfaits $R \approx 8.314 \text{ J.mol}^{-1}\text{K}^{-1}$

## 5. Interprétation microscopique de la température
### a. La distribution des vitessese
#### Définition
La distribution des vitesses est la courbe donnant le nombre de particules à une certaine vitesse en fonction de toutes les valeurs de vitesse possibles. 

#### Propriété (même si ca en est pas une)
Pour un système thermodynamique à l'équilibre, la distribution de la vitesse de toutes les particules du système est homogène et isotrope.
Exca

### b. Vitesse quadratique moyenne
On considère un système composé de $N$ particules chacune avec une vitesse $\vec{v}_{i}$ pour $i \in [\![1, N]\!]$
#### Définition
Le vecteur vitesse moyen est : 
$$<\vec{v}> = \frac{1}{N} \sum_{i = 1}^{N} \vec{v}_{i}$$
Pour un système au repos (immobile), $<\vec{v}> = \overrightarrow{0}$

La moyenne de la norme de la vitesse est alors :
$$<v> = \frac{1}{N} \sum_{i = 1}^{N} v_{i}$$

#### Définition : vitesse quadratique moyenne
$$v^{*} = \sqrt{<v^{2}>} = \sqrt{\frac{1}{N}\sum_{i = 1}^{n} v_{i}^{2}}$$
à température ambiante, l'ordre de grandeur de $v^{*}$ et de $<v>$ sont identiques. 
$$v^{*} \approx <v> \approx 10^{2}.10^{3}\text{m}.\text{s}^{-1}$$

### c. Température cinétique
#### Définition
Pour un gaz parfait monoatomique, la température $T$ est une mesure de l'énergie cinétique moyenne des particules. 
$$<E_{c}> = \frac{3}{2}k_{B}T$$
avec $k_{B} = 1.38 \times 10^{-23} \text{J}.\text{K}^{-1}$ le constante de Boltzmann

#### Propriété
$$v^{*} = \sqrt{ \frac{3k_{B}T}{m} }=\sqrt{ \frac{3RT}{M} }$$


Démonstration : 
Exprimons $v^{*}$ en fonction de $T$
$$<E_{c}> = \frac{1}{N} \sum_{i = 1}^{N} E_{c_{i}} = \frac{1}{N}\sum_{i = 1}^{N} \frac{1}{2}m_{i}v_{i}^{2}$$
Comme c'est un gaz parfait monoatomique, $m = m_{i}$
$$<E_{c}> = \frac{1}{2} m \times \frac{1}{N} \sum_{i = 1}^{N}v_{i}^{2}= \frac{1}{2}m(v^{*})^{2}$$
$$<E_{c}> = \frac{1}{2}m(v^{*})^{2} = \frac{3}{2}k_{B}T$$
Ainsi, 
$$v^{*} = \sqrt{ \frac{3k_{B}T}{m} }$$
$m$ : la masse d'une particule
$$R = \frac{M}{m}k_{B} = \frac{k_{B}}{n}$$
$$v^{*} = \sqrt{ \frac{3RT}{M} }$$

# III. La Pression
## 1. Force exercé sur un milieu continu
#### Définition
On appelle milieu continu un milieu dont les propriétés varient de façon continue d'un point a un autre dans un domain fini de l'espace. 

### a. Forces de champ et forces de contact
Excal 7
Système de volume $V$
$M_{S}$ : Point a la surface de la frontière du système dans une surface $dS$
$M_{I}$ : Point à l’intérieur du système entouré d'un volume $dV$ 

#### Pour les points $M_{I}$
Ils peuvent être soumis a des forces de champs
Le volume $dV$ entourant $M_{I}$ a une masse $dm = \rho dV$
avec $\rho$ la masse volumique
Les forces $d \overrightarrow{F}_{I}$ exercé sur ce volume entourant $M_{I}$ peuvent s'écrire :
$$d\vec{F}_{I} = \overrightarrow{f_{V}} \times dV$$
$\overrightarrow{f_{V}}$ : Force volumique ou densité volumique de force
##### Exemple
$$\overrightarrow{f_{V, \vec{P}}} = \frac{\vec{P}}{V} = \frac{m}{V}\vec{g}= \rho\vec{g}$$

#### Pour les points $M_{S}$
Ils peuvent être soumis par des forces de contact $d\vec{F}_{S}$ caractérisées par leur densité surfacique : 
$$d\vec{F}_{S} = \vec{f}_{S}dS$$
$\vec{f}_{S}$ : Force surfacique, densité de surface de forces

### b. Fluide et pression
#### Définition
On appelle fluide un milieu continu pour lequel les forces de contact à l'équilibre sont normales a la surface du système. 

#### Définition
On appelle pression d'un fluide au point $m$, la densité surfacique des forces qui s'exercent en ce point. 

La pression $P$ (ou $p$) s'exprime en pascal dans le système international
On utilise aussi le $\text{bar}$ ou $1 \text{bar} = 10^{5}\space Pa$
ou l'atmosphère $= 10 \, 132.5 \space Pa$

## 2. Interprétation microscopique de la pression
La pression correspond aux collision entre particules d'un fluide et sur une surface. 

## 3. Pression en un point
excal 8
On considère un sous système tel que le point $M$ est sur sa surface.
Si on choisit un autre sous système, on va avoir une autre orientation pour $\vec{f}_{S} =P(M)d\vec{S}$
Le milieu étant continu, la pression $P(M)$ au point $M$, est la même quelque soit le sous système utilisé.

On a alors : 
#### Propriété
Isotropie de la pression : 
La pression qui s'exerce sur une surface d'un fluide ne dépend pas de l'orientation de cette surface. 

Pour des systèmes dont la hauteur est faible devant celle de l'atmosphère, on considère que la pression des homogène dans le système. 

## 4. Résultante des forces de pression sur un solide
#### Cas simple
Excal 9

#### Propriété
Dans ce cas simple ou un solide a des surfaces planes, la pression du fluide sur une surface est uniforme et la résultante des forces de pression sur cette surface est :
$$\vec{F} = P\mathcal{S}\vec{n}$$
$P$ : Pression du fluide
$\mathcal{S}$ : Aire de la surface
$\vec{n}$ : le vecteur unitaire normal à la surface et dirigé du fluide vers de solide

Démonstration :
Le solide est formé de surfaces planes
Le solide est soumis a la pression du fluide qui l'entoure et au point $M$, sur une surface $d\mathcal{S}$.
$$d\vec{F} = P(M)d\mathcal{S}\vec{n}$$
avec $\vec{n}$ le vecteur unitaire normal a la surface qui va du fluide vers le solide. 
Calculons la force de pression qui s'exerce sur toute la surface.
$$\vec{F} = \int d\vec{F} = \int_{\sum} P(M)d\mathcal{S}\vec{n} $$
or $P$ est homogène
Donc, 
$$\vec{F} = P \int_{\sum} d\mathcal{S}\vec{n}$$
la surface est plane donc $\vec{n}$ est le même quelque soit le point $M$
$$\vec{F} = P \vec{n} \int _{\sum} \, d\mathcal{S} $$
$\uparrow$ l'aire de la surface
Donc, 
$$\boxed{\vec{F} = P\mathcal{S}\vec{n}}$$

## 5. Gaz parfaits vs réels
#### Diagramme d'Amagat
C'est un diagramme ou l'on trace $PV$ en fonction de $P$
Traçons des transformations isothermes : $T = cte$
Excal 10.
Si $P$ est trop grand, on ne peut pas utiliser le modèle des gaz parfaits. 

Beaucoup de gaz réels obéissent à l'équation d'état de Van der Waals : 
$$PV\left( 1+\frac{a}{V_{m}^{2}}(V_{m}-b) \right) = nRT$$
$V_{m}$ : Volume molaire
$b$ : Volume d'une particule (covolume)
$a$ : Interaction entre les particules
(Pas obligé de l'apprendre)

## 6. Volume molaire ou massique
$V_{m}$ : volume molaire (volume par quantité de matière)
$$V_{m} = \frac{V}{n}$$
$V_{m}$ est une grandeur extensive
Pour tous les gaz parfaits : 
$$V_{m} = \frac{RT}{P}$$

Démonstration : 
$$PV = nRT \Leftrightarrow \frac{V}{n} = \frac{RT}{P} = V_{m} \, \square$$

a $T = 0\degree C$ et $P = 1$ atm, $V_{m} = 22,4 \space L.mol^{-1}$ 

#### Volume massique
Volume massique $v$ est le volume par unité de masse :
$$\boxed{v = \frac{V}{m} = \frac{V_{m}}{M}}$$
C'est une grandeur intensive 
si $\rho$ est la masse volumique : $v = \frac{1}{\rho}$

