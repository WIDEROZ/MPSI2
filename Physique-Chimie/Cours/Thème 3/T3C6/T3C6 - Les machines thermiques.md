Un cycle : Excal 1.
Les systèmes sauf indication contraires vont suivre des cycles et un gaz parfait sera dans le système
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
Ce coefficient est appelé généralement rendement si il est inférieur à $1$ (on garde la lettre $\eta$) sinon il est appelé efficacité (on le note $e$)

#### En pratique
##### Moteur
$$\eta = \left| \frac{W}{Q_{C}}\right| = -\frac{W}{Q_{C}}$$
##### Machine frigorifique
$$e_{frigo} = \left| \frac{Q_{F}}{W}\right| = \frac{Q_{F}}{W}$$
##### Pompe à chaleur
$$e_{PAC} = \left| \frac{Q_{C}}{W}\right| = - \frac{Q_{C}}{W}$$


# III. Le diagramme de Raveau
$$\boxed{\text{EXCALIDRAW 9}}$$
(regardez le SVP c bo)

On trace deux droites : 
- La droite $W = 0$ 
  Comme c'est une machine $W =-(Q_{C} + Q_{F})$ 
  Alors, $Q_{c} = -Q_{F}$ 
- La droite pour laquelle $S_{créé} = 0$,
  On a alors : $S_{ech} = \frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}} = 0$
  Ainsi, $Q_{C} = - \frac{T_{C}}{T_{F}}Q_{F}$

Comme $T_{C} > T_{F}$, $- \frac{T_{C}}{T_{F}} < -1$
$$\boxed{Q_{C} \leq -\frac{T_{c}}{T_{F}}Q_{F}}$$

## 1. Les moteurs en région $W < 0$
C'est la seule région possible accessible au diagramme pour laquelle $W<0$ donc c'est la région ou on à l'ensemble des moteurs

### a. Principe
$$\boxed{\text{EXCAL 10}}$$

### b. Rendement d'un moteur
$$\eta_{\text{moteur}} = - \frac{W}{Q_{C}}$$
D'après le premier principe sur un cycle : 
$$\Delta U = W + Q_{C} + Q_{F} = 0$$
$$W = -(Q_{C} + Q_{F})$$
Ainsi, 
$$\boxed{\eta_{\text{moteur}} = \frac{Q_{C}+Q_{F}}{Q_{C}}}$$

Comme $Q_{F}<0$ et $Q_{C} >0$ $\boxed{\eta_{\text{moteur}} < 1}$

#### Quel est le rendement maximal d'un moteur?
$$\begin{cases}
\Delta S = S_{ech} + S_{créé} = 0 \\
S_{créé} \geq 0 \\
S_{ech} \leq 0
\end{cases}$$
Donc, 
$$\frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}} \leq 0$$
On sait que $Q_{C} > 0$
On divise alors par $Q_{C}$
$$\frac{1}{T_{C}} + \frac{Q_{F}}{Q_{C}} \frac{1}{T_{F}}\leq 0$$
On isole : $\frac{Q_{F}}{Q_{C}}$
$$\frac{Q_{F}}{Q_{C}} \leq \frac{T_{F}}{T_{C}}$$
Donc, 
$$\eta_{\text{moteur}} = 1+ \frac{Q_{F}}{Q_{C}} \leq 1-\frac{T_{F}}{T_{C}} = \eta_{\text{moteur}_{\text{max}}}$$

$$\boxed{\eta_{\text{moteur}_{\max}} = 1- \frac{T_{F}}{T_{C}}}$$
Rendement maximum d'un moteur fonctionnant de manière réversible. 

# Théorème de Carnot pour les moteurs
Le rendement d'un moteur ditherme réel est toujours inférieur au rendement d'un moteur réversible qui fonctionne avec les mêmes thermostats $T_{F}$ et $T_{C}$
$$\boxed{\eta_{\text{moteur}} = 1- \frac{Q_{F}}{Q_{C}} \leq 1-\frac{T_{F}}{T_{C}} = \eta_{\text{moteur}_{\max}}}$$

## 2. Région Verte PAC ou réfrigirateur
$W>0$
### a. Principe
$$\boxed{\text{Excal 11}}$$
On refroidit la source froide et on réchauffe la source chaude

## b. Machine frigorifique
But : Refroidir la source froide (l'intérieur du frigo)
Donc le coefficient de performance : 
$$e = \left| \frac{Q_{F}}{W}\right| = \frac{Q_{F}}{W}$$
Exprimons $e$ uniquement en fonction de $Q_{C}$ et $Q_{F}$

###### $1^{er}$ principe
$$\Delta U = Q + W = 0$$
Car c'est un cycle
$$W = -Q_{C} - Q_{F}$$
Donc, 
$$e = \frac{Q_{F}}{W} = -\frac{Q_{F}}{Q_{C}+Q_{F}} = -\frac{1}{1+\frac{Q_{C}}{Q_{F}}}$$

Quel est le maximum de $e$
$$e \leq e_{\max}$$
En fonction de $T_{F}$ et $T_{C}$

###### $2^{nd}$ principe
$$\Delta S = S_{ech} + S_{créé} = 0$$
Comme $S_{ech} \leq 0$ 
et que
$$S_{ech} = \frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}}$$
Alors, 
$$\frac{Q_{C}}{Q_{F}} \leq - \frac{T_{C}}{T_{F}}$$
Donc, 
$$\frac{1}{1+\frac{Q_{C}}{Q_{F}}} \geq \frac{1}{1-\frac{T_{C}}{T_{F}}}$$
Ainsi, 
$$\boxed{e \leq \frac{1}{\frac{T_{C}}{T_{F}}-1} = e_{\max}}$$

#### Théorème de Carnot pour une machine frigorifique
L'efficacité d'un réfrigérateur est toujours inférieure a celle d'un réfrigérateur fonctionnant de manière réversible entre les deux mêmes températures : 
$$e = \frac{Q_{F}}{W} = -\frac{1}{1+\frac{Q_{C}}{Q_{F}}} \leq \frac{1}{\frac{T_{C}}{T_{F}}-1}$$

### c. La PAC
Le but est de réchauffer la source chaude : 
$$e_{PAC} = - \frac{Q_{C}}{W}$$
###### Le premier principe
$$\Delta U = W + Q = W + Q_{C} + Q_{F} = 0$$
Car c'est un cycle
Alors,
$$e = \frac{1}{1+\frac{Q_{F}}{Q_{C}}}$$
On veut que $e \leq e_{\max}$ (en fonction des températures)
###### $2^{eme}$ principe
Comme : 
$$\Delta S = S_{créé} + S_{ech} =0$$
On a :
$$S_{ech} = \frac{Q_{c}}{T_{C}} + \frac{Q_{F}}{T_{F}} \leq 0$$

Alors, 
$$\frac{Q_{F}}{Q_{C}}\geq -\frac{T_{F}}{T_{C}}$$
Ainsi, 
$$\boxed{e = \frac{1}{1+\frac{Q_{F}}{Q_{C}}} \leq \frac{1}{1-\frac{T_{F}}{T_{C}}} = e_{\max}}$$

#### Théorème de Carnot pour une PAC
L'efficacité d'une PAC est toujours inférieure a celle d'une PAC fonctionnant de manière réversible entre les deux mêmes températures : 
$$\boxed{e = -\frac{Q_{C}}{W} \leq \frac{1}{1-\frac{T_{F}}{T_{C}}} = e_{\max}}$$

## 3. Régions Violettes et grises
Sans intéret

# IV. Les cycles classiques
## 1. Le cycle de Carnot
C'est un cycle réversible entre 2 thermostats
$2$ transformations isothermes $T_{C}$ et $T_{F}$
$2$ transferts isentropiques

#### Représentation du cycle
Diagramme : $(T, S)$ 
$$\boxed{\text{Excal 12}}$$
Diagramme de Clapeyron : 
$$\boxed{\text{Excal 13}}$$

Lien entre le sens de parcours du cycle et le signe du travail des forces de pression.

Pour le cycle $ABCD$ : 
$$W_{tot} = W_{AB} + W_{BC} + W_{CD} + W_{DA} = - \text{aire du cycle } ABCD$$
Voir le schema : EXCAL 13