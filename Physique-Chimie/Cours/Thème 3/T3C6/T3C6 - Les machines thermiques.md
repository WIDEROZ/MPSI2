Un cycle : Excal 1.
Les systèmes sauf indication contraires vont suivre des cycles
# I. Énoncés de Clausus et Kelvin du $2^{nd}$ principe
## 1. Énoncés
#### Principe de Kelvin
$$\boxed{\text{EXCAL 2}}$$

Le système ne peut pas fournir su travail

#### Principe de Clausius
$$\boxed{\text{EXCAL 3}}$$
Supposons que $T_{1} > T_{2}$, 
$\mathcal{S}$ n'échange aucun travail, 
$\mathcal{S}$ reçoit de la chaleur de la source chaude $T_{1}$ et donne de la chaleur à la source froide $T_{2}$

## 2. Démonstration des principes
#### Principe de Kelvin
EXCAL 4.
$S$ reçoit de la chaleur $Q$ du thermostat
$S$ reçoit un travail $W$ du milieu extérieur

Appliquons les premiers et deuxièmes principes : 
$$\Delta U = W + Q \text{ et } \Delta S = S_{ech} + S_{créé} = \frac{Q}{T_{0}} + S_{créé}$$
Comme $S_{ceéé} \geq 0 \Rightarrow \Delta S \geq \frac{Q}{T_{0}}$
Or, 
$$\Delta U = U_{f}-U_{i} \text{ et } \Delta S = S_{f}-S_{i}$$
Comme le système suit un cycle : $f = i$ (état final = état initial)
$$\Delta U = 0 \text{ et } \Delta S = 0$$
Alors, 
$$\begin{cases}
W+Q = 0 \\
\frac{Q}{T_{0}} \leq 0
\end{cases}$$
Comme $T_{0} > 0$, $Q \leq 0$
Le système donne de la chaleur au thermostat. 
Et enfin $W = -Q \geq 0$.

Le système reçoit donc du travail de l'extérieur, il ne peut pas en fournir. 

## 3. Equivalence entre les deux principes
Plan : 
- $\text{non(Clausius)} \Rightarrow \text{non(Kelvin)}$
- $\text{non(Kelvin)} \Rightarrow \text{non(Clausius)}$
___
Supposons : Excal 5
Soit $T_{0}$ un thermostat, 
On sépare ce thermostat en deux sous systèmes : 
$$\boxed{\text{EXCAL 6}}$$
___
Supposons : Excal 7
Le travail fournit par $\mathcal{S}_{1}$ est utilisé par $\mathcal{S}_{2}$ 
Or rien n'interdit que $T_{1} > T_{0}$
On a donc, $\boxed{\text{non(Clausius)}}$

# II. Machine thermiques dithermes
## 1. Définition
#### Définition : Machine thermique
Une machine thermique est un système thermodynamique qui réalise des <u>transformations cycliques</u> au cours desquelles il y a <u>échange de chaleur et de travail</u>

#### Définition : Machines dithermes
Une machine ditherme réalise des transferts de chaleur avec deux thermostats de température $T_{F}$ (source froide) et $T_{C}$ (source chaude) $T_{F} < T_{C}$ (mdr)

modélisation : 
$$\boxed{\text{EXCAL 8}}$$
On notera toujours :
- $Q_{C}$ : transfert thermique avec la source chaude
- $Q_{F}$ : transfert thermique avec la source froide
- $W$ le travail échangé avec l'extérieur
- $Q_{c}, Q_{F}, W$ sont des grandeurs algébriques

#### Méthode générale :
Utilisation du premier principe de du second principe pour un <u>cycle</u> : 
$$\Delta U = W + Q_{C} + Q_{F} = 0$$
$$\Delta S = S_{ech} + S_{créé} = 0$$
$$S_{ech} = S_{ech_{T_{F}}} + S_{ech_{T_{C}}} = \frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}}$$
$S_{créé} \geq 0$
Ainsi, 
$$ \frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}} \leq 0$$

## 2. Machine dithermes classiques
### a. Moteurs
#### Définition : Moteur
Les moteurs sont des machines qui fournissent du travail : 
$$W < 0$$
##### Conséquences
Alors, 
$$Q_{C} + Q_{F} \geq 0$$
Ainsi, 
$$Q_{C} \geq 0 \text{ et } Q_{F} \leq 0$$

#### Définition : Puissance du moteur
$$P = W \times N_{\text{cycle}.s^{-1}}$$
avec
$N_{\text{cycle}.s^{-1}}$ : le nombre de cycles par secondes

### b. Les récepteurs
#### Définition
Un récepteur est une machine thermique qui reçoit du travail de l'extérieur : 
$$W \geq 0$$
###### Conséquences
$$Q_{F} + Q_{C} \leq 0$$

#### Exemple
##### Pompe à chaleur
On veut réchauffer la source chaude
$$Q_{C} < 0 \text{ et } Q_{F} >0$$

##### Machine frigorifique
On veut refroidir la source froide 
$$Q_{C} < 0 \text{ et } Q_{F} > 0$$

## 3. Coefficient de performance
#### Définition
On appelle coefficient de performance d'une machine thermique, la valeur absolue du rapport de ce qui est utile sur le coût énergétique
$$\eta = \left| \frac{\text{bénéfice}}{\text{coût}}\right|$$
