# Theme 3 : Energies, conversion et transfert
# I. Vocabulaire
### a. Libre parcours moyen
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
$P$ : La pression
$V$ : Le volume
$n$ : La quantité de matière
$T$ : La température
$R$ : La constante des gaz parfaits
