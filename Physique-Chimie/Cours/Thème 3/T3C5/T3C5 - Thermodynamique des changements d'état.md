# I. Les transformations physiques
## 1. 3 Etats de la matière
![[ChEtat.png]]



#### Définition
Une <u>phase</u> est un état de la matière uniforme en tous points par sa composition chimique et son état physique. 

La <u>transformation</u> d'un système <u>d'une phase à une autre sans modifications de la composition chimique</u> est une <u>transformation physique</u>. 

## 2. L'état solide
- Ordre à grande distance : même organisation dans les atomes sur une grande distance par rapport à eux même. 
- Variétés allotropiques : différentes phases solides pour un même corps à l'état solide
- L'état solide est très peu compressible. 

## 3. L'état liquide
- Ordre à courte distance : quelques molecules 
- Désordre a grande distance par rapport aux molecules
- L'état liquide est très peu compressible. 

## 4. L'état gazeux
- Aucun ordre
- On peut passer de façon continue de l'état liquide à l'état gazeux
- L'état gazeux se compresse très facilement
- Tous les gaz sont miscibles entre eux. 

## 5. Les autres états de la matière
- Le plasma : gaz formé d'ions positifs et d'electrons. 
- Phases métastables : Sur-fusion (on est en phase liquide au lieu de la phase solide), Sur-congélation (inverse), Sur-ébullition (On est en phase liquide au lieu de gazeux)
- Phases mésomorphes : solides sans ordres (verre, plastique amorphe, cristaux liquides)

# II. Les diagrammes d'état
Excal 1.

#### Propriété
Lors d'un changement d'état d'un corps pur à pression constante, la température est constante

#### Propriété
Pour un système thermodynamique à l'équilibre diphasé, il existe une loi reliant la pression $P$ à la température $T$ 
Cette loi s'exprime grace à deux paramètres intensifs : 
- Les titres massiques des phases


## 2. Diagramme d'état $(P, T)$
Excal 2
$T$ : Point triple pour lequel les phases coexistent. 
Eau : $0, 01$°C et $0.006$ bar 

$C$ : point critique, au delà de $C$, le fluide est appelé supercritique et il n'y a pas de discontinuité entre les états liquide et gaz. 
Eau : $374$°C et $218$ bar

La courbe de fusion est quasi verticale avec une pente positive sauf pour l'eau :

Excal 3.
Car le solide a un volume liquide 

# III. Changement d'état liquide-vapeur
## 1. Diagramme de Clapeyron $(P, V)$
Diagramme du cours

On est a un état initial : $T_{1}, P_{0}, v_{0}$
La phase est uniquement du gaz
- On comprime le gaz de façon isotherme : 
  $Pv_{m} = RT = \text{cte}$ alors, $\boxed{P = \frac{\text{cte}}{v_{m}}}$ 
- $R$ : point de rosée qui correspond à la première apparition du liquide la pression a ce point est nommée pression de vapeur saturante : $P_{sat}(T)$
- $E$ : point d'ébullition, correspond a la disparition de la dernière bulle de gaz
- Le segment : $ER$ est le palier de changement d'état
- La courbe de rosée correspond à l'ensemble des points $R$ 
- La courbe d’ébullition correspond à l'ensemble des points $E$

## 2. Composition d'un mélange liquide-vapeur
#### Définition
Pour décrire l'état d'un système décomposé : $l+v$ on utilise le taux de vapeur ou titre massique : 
$$x_{v} = \frac{m_{v}}{m_{v}+m_{l}}$$
$m_{v}$ : masse de la vapeur
$m_{l}$ : masse du liquide
$m_{v}+m_{l}$ : masse totale constante. 

#### Propriété : Règle des moments
$$x_{v} = \frac{v-v_{l}}{v_{v}-v_{l}}$$
$v = \frac{m}{V}$ : volume massique total
$v_{v} = \frac{m_{v}}{V_{v}}$ : volume massique de la phase vapeur.
$v_{l}$ : volume massique de la phase liquide

Démonstration : 
Diagramme du cours, 
On se place sur le segment $ER$, 
La masse est $m= m_{v}+m_{l}=\text{cte}$
Le volume est  $V = V_{v}+V_{l}$ 

sur ce segment : $T = T_{1} = cte$ et $P = P_{sat}=cte$
En $M$ on a une masse de $m_{v}$ vapeur et de $m_{l}$ liquide : 
$$x_{v} = \frac{m_{v}}{m_{v}+m_{l}} = \frac{EM}{ER}$$
$$V = x_{l}V_{E}+x_{v}V_{R}$$
avec
$$x_{l} = \frac{m_{l}}{m_{l} + m_{v}}$$
Donc, comme $x_{l} + x_{v} = 1$ 
$$V = (1-x_{v})V_{E} + V_{R}x_{v} = x_{v}(V_{R}-V_{E})+V_{E}$$
$$x_{v} = \frac{V-V_{E}}{V_{R}-V_{E}} > 0$$
Comme on passe de gaz à liquide on a : $V_{E} < V < V_{R}$
Ainsi, 
$$\boxed{x_{v} = \frac{v-v_{l}}{v_{v}-v_{l}}}$$

# IV. Variation des fonctions d'état
Au cours d'un changement d'état il y a discontinuité des grandeurs intensives entre les deux phases. 
Pour étudier un changement d'état on regarde les variations des grandeurs massiques ou molaires

#### Hypothèses
- On considère la vapeur comme un gaz parfait. 
- La phase liquide à une unique capacité thermique massique constante $c_{l}$
- On néglige le volume massique (ou molaire) de la phase liquide devant celui de la phase gaz : 
  $v_{l} \ll v_{g}$ et $V_{m_{l}}\ll V_{m_{g}}$

## 1. Enthalpie de changement d'état
On considère que le changement d'état est à $P = \text{cte}$ 
(On considère toujours ca sauf si le contraire est précisé dans l'enoncé)
alors, 
$$\Delta H = Q$$

#### Définition
On appelle enthalpie molaire ou changement d'état de $1 \to 2$ noté
$$l_{m_{1 \to 2}} = l_{m_{1, 2}}$$
la variation d'enthalpie qui accompagne le changement d'état par unité de matière
$$\Delta H = nl_{m_{1 \to 2}}$$
en $J.mol^{-1}$

On appelle enthalpie massique ou changement d'état de $1 \to 2$ noté :
$$l_{1\to 2} = \frac{\Delta H}{m}$$
avec $m$ la masse totale et elle se mesure en $J.kg^{-1}$

#### Notations
Pour la fusion : $l_{m_{fus}}$
Pour la solidification : $l_{m_{sol}}$

#### Propriété
L'enthalpie molaire d'un changement d'état est égale à l'opposé de l'enthalpie molaire d'un changement d'état est égale à l'opposée de l'enthalpie molaire du changement d'état réciproque : 
$$\boxed{l_{m_{fus}} = -l_{m_{sol}}}$$

#### Propriété
EXCAL 4
L'enthalpie de sublimation est : 
$$\boxed{\Delta H = nl_{m_{sub}} = nl_{m_{fus}} + nl_{m_{vap}}+nC_{m}\Delta T}$$
avec $\Delta T = T_{vap} - T_{fus}$

#### Remarque
$$l_{1 \to 2} = \frac{l_{m_{1 \to 2}}}{M}$$

#### Ordre de grandeur a connaitre
$P = 1 \, bar$ et $T = 0°C$,
$$\boxed{l_{fus} = 334 \, kJ.kg^{-1}} \text{ et } \boxed{l_{m_{fus}}=6 \, kJ.mol^{-1}}$$
$P  = 1 \, bar$ et $T = 10°C$, 
$$\boxed{l_{vap}=2265 \, kJ.kg^{-1}} \text{ et } \boxed{l_{m_{vap}}= 41 \, kJ.mol^{-1}}$$

## 2. Entropie de changement d'état
#### Définition
On appelle entropie molaire (resp massique) de changement d'état de $1 \to 2$ la variation d'entropie par unité de matière (resp. masse) au cours du changement d'état : 
$$\Delta s_{m_{1 \to 2}} = \frac{l_{m_{1 \to 2}}}{T}$$
avec $T$ la température du changement d'état


Pour un changement d'état de $n$ mol de corp pur on a : 
$$\Delta S = n\Delta s_{m_{1 \to 2}}$$
$\Delta s _{m_{1 \to 2}}$ se mesure en $J.K^{-1}.mol^{-1}$ 
et comme pour l'enthalpie molaire de changement d'état : 

#### Propriété
$$\Delta s_{m_{fus}} = -\Delta s_{m_{sol}}$$
$$\Delta s_{m_{liq}} = - \Delta S_{m_{vap}}$$

# V. Les changements d'état de l'eau au contact de l'air
#### Définition
On considère un mélange de gaz : $i \in \mathbb{N}$ de pression totale $P$ dans un volume $V$
La pression partielle du gaz $i$ est égale à la pression que aurait ce gaz si il état seul dans le volume $V$ :
$$\boxed{P_{i} = \frac{n_{i}}{n} P}$$
$n_{i}$ : quantité de matière du gaz $i$
$n$ : quantité de matière des gaz du système.

Démonstration : 
Pour le mélange de gaz parfait : 
$$PV=nRT$$
Pour le gaz $i$ seul à $T$ : 
$$P_{i}V = n_{i} RT \Leftrightarrow \frac{RT}{V} = \frac{P}{n} = \frac{P_{i}}{n_{i}}$$
Ainsi, 
$$P_{i} = \frac{n_{i}}{n}P$$

#### Exemple 
Atmosphère : 
$80$% de $N_{2}$ $n_{N_{2}} = 0.8n$ 
$20$% de $O_{2}$ $n_{O_{2}} = 0.2n$

Soit $n$ le nombre de molles totales à la pression $P$ :
$$P_{O_{2}} = \frac{n_{O_{2}}}{n}P = 0.2P$$
$$P_{N_{2}} = \frac{n_{N_{2}}}{n}P = 0.8P$$
