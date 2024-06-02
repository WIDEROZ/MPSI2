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
Voir le schema : $\boxed{\text{Excal 13}}$

#### Propriété
Quand le cycle est parcouru dans le sens horaire (resp antihoraire) dans le diagramme de Clapeyron $W < 0$ (resp. $W > 0$), le cycle est moteur (resp. récepteur)

#### Exercice de colle
Déterminer les transferts thermiques $Q_{C}$ et $Q_{F}$ : 
$$Q_{C} = Q_{AB} \text{ et } Q_{F} = Q_{CD}$$
$AB$ et $CD$ sont des isothermes.
De plus le gaz est un gaz parfait donc, 
$$\Delta U_{AB} = \Delta U_{CD} = 0$$
par la première loi de joules. 
Or : 
$$\Delta U = Q_{AB} + W_{AB} = 0$$
Alors, 
$$Q_{AB} = -W_{AB} \text{ et } Q_{CD} = -W_{CD}$$

Calculons
$$W_{AB} = - \int _{A}^{B} P_{ext} \, dV$$
Comme c'est isotherme, donc quasi statique : $P = P_{ext}$

Le travail s'écrit :
$$W_{AB} = -nRT_{C} \int _{A}^{B} \frac{dV}{V} = -nRT_{C}\ln\left( \frac{V_{B}}{V_{A}} \right) $$
Ainsi, 
$$\boxed{Q_{C} = Q_{AB} = nRT_{C}\ln\left( \frac{V_{B}}{V_{A}} \right)}$$
Par analogie :
$$\boxed{Q_{F}= Q_{CD} = nRT_{F}\ln\left( \frac{V_{D}}{V_{C}} \right)}$$
___
Montrer que l'égalité de Carnot Clausus : 
$$\frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}} = 0$$
On a :
$$\frac{Q_{C}}{T_{C}}+ \frac{Q_{F}}{T_{F}} = nR\left( \ln\left( \frac{V_{B}V_{D}}{V_{A}V_{C}} \right) \right)$$
$V_{B}$ et $V_{C}$ puis $V_{D}$ et $V_{A}$ sont reliés par des transformation adiabatiques réversibles, on utilise les lois de Laplace
On a :
entre $B$ et $C$
$$T_{B}V_{B}^{\gamma -1} = T_{C}V_{C}^{\gamma -1}$$
entre $D$ et $A$
$$T_{D}V_{D}^{\gamma -1} = T_{A}V_{A}^{\gamma -1}$$
Alors, 
$$\begin{cases}
T_{B} = T_{A} = T_{C} \\
T_{C} = T_{D} = T_{F}
\end{cases}$$
$$\begin{cases}
T_{C}V_{B}^{\gamma -1} = T_{F}V_{C}^{\gamma -1}  \\
T_{C} V_{A}^{\gamma -1} = T_{F}V_{D}^{\gamma -1}
\end{cases}$$
On divise la première équation par la deuxième
$$\left( \frac{V_{B}}{V_{A}} \right)^{\gamma -1} = \left( \frac{V_{C}}{V_{D}} \right)^{\gamma -1}$$
Alors, 
$$\frac{V_{B}}{V_{A}} \times \frac{V_{D}}{V_{C}}= 1$$
Ainsi, 
$$\boxed{\frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}} = 0}$$
___
Exprimer le travail total du cycle en fonction de $T_{C}, T_{F}$ et du rapport : $\frac{V_{B}}{V_{A}}$

Par le premier principe : 
$$\Delta U = W + Q = W+ Q_{C} + Q_{F} = 0$$
Car c'est un cycle.
Donc, 
$$W = -(Q_{C}+Q_{F})$$

En utilisant les expressions de $Q_{C}$ et $Q_{F}$ : 
$$W = -nRT_{C}\ln\left( \frac{V_{B}}{V_{A}} \right)-nrT_{F}\ln\left( \frac{V_{D}}{V_{C}} \right)$$
Or $\frac{V_{B}}{V_{A}} = \frac{V_{C}}{V_{D}}$
Donc, 
$$\boxed{W = nR(T_{C}-T_{F})\ln\left( \frac{V_{A}}{V_{B}} \right) \leq 0}$$
___
Déterminer le rendement de ce cycle $\eta_{\text{carnot}} = \eta$
C'est un cycle moteur donc le rendement :
$$\eta = -\frac{W}{Q_{C}}$$
Comme : $W = -Q_{C} - Q_{F}$
Alors, 
$$\eta = 1+ \frac{Q_{F}}{Q_{C}}$$
Mais on sait que :
$$\frac{Q_{C}}{T_{C}} + \frac{Q_{F}}{T_{F}} = 0$$
Donc, 
$$\frac{Q_{F}}{Q_{C}} = - \frac{T_{F}}{Q_{C}}$$
Alors, 
$$\boxed{\eta_{\text{carnot}} = 1- \frac{T_{F}}{T_{C}}<1}$$
C'est le rendement maximal d'un moteur entre $T_{C}$ et $T_{F}$

## 2. Les moteurs à combustion
Moteur à essence ou diesel
Un gaz parfait
Combustion d'un mélange air-carburant

### a. Cycle de Beau de Rochas
C'est un moteur à $4$ temps
On suppose que les phases $BC$ et $DE$ sont adiabatiques réversibles.
Représentation du cycle : 
$$\text{VOIR LA FICHE DE COURS}$$

On pose : 
$$\boxed{\alpha = \frac{V_{\max}}{V_{\min}}}$$
le rapport volumétrique des cylindres. 
1. Tracer le diagramme de Clapeyron.
   On étudie le cycle $BCDE$ du cours
2. Identifier les phases de contact avec les sources chaudes et froides. Ces phases sont elles réversibles. 
   Entre <u>C et D</u> il y a combustion donc le système est en contact avec la <u>source chaude.</u> 
   Entre <u>E et B</u> le système ses refroidit au contact de la <u>source froide.</u>
   La <u>combustion est une réaction chimique</u>, le <u>refroidissement</u> entraîne une <u>diffusion de température</u> dans les deux cas ces transformations sont <u>irréversibles.</u> 
3. Déterminer le transfert thermique $Q_{c}$ en fonction des températures.
   On applique le premier principe entre $C$ et $D$ : 
   $$\Delta U_{CD} = W_{CD} + Q_{C} = 0 +Q_{c}$$
   Car $V = cte$ entre $C$ et $D$
   Comme c'est un gaz parfait, on utilise la première loi de Joule :
   $$\Delta U_{CD} = nC_{v_{m}}\Delta T$$
   On a ainsi, 
   $$\boxed{Q_{C} = nC_{v_{m}}(T_{D}-T_{C})}$$
4. Exprimer $Q_{F}$ en fonction des températures, par analogie :
   $$\boxed{Q_{F} = nC_{v_{m}}(T_{B}-T_{E})}$$
5. Exprimer le rendement en fonction des températures : 
   $$\eta = -\frac{W}{Q_{c}}$$
   Comme c'est un cycle : 
   $$\Delta U = 0 = W + 0 + Q_{C} + 0 + Q_{F}$$
   Alors, 
   $$\eta = \frac{Q_{F} + Q_{C}}{Q_{C}} = 1+ \frac{T_{B}-T_{E}}{T_{D}-T_{C}} $$

6. Exprimer $\eta$ en fonction du rapport de compression 
   $\alpha = \frac{V_{\max}}{V_{\min}} = \frac{V_{B}}{V_{A}}$ et et du coefficient $\gamma$. 
   D'après l'énoncé, les phases $BC$ et $DE$ sont adiabatiques réversibles donc on peut utiliser les lois de Laplace entre $T$ et $V$ : 
   $$TV^{\gamma-1} = \text{cte}$$
   Entre $B$ et $C$
   $$T_{B}V_{B}^{\gamma-1} = T_{C}V_{C}^{\gamma-1} = T_{C}V_{A}^{\gamma-1}$$
   entre $D$ et $E$ :
   $$T_{D}V_{D}^{\gamma-1} = T_{D}V_{A}^{\gamma-1}  = T_{E}V_{B}^{\gamma-1}$$
   Alors, 
   $$T_{D} = T_{E} \times \left( \frac{V_{B}}{V_{A}} \right)^{\gamma-1} = T_{E}\alpha^{\gamma-1}$$
   $$T_{C} = T_{B} \alpha^{\gamma-1}$$
   Alors, 
   $$T_{D} - T_{C} = \alpha^{\gamma-1}(T_{E}-T_{B})$$
   Donc, 
   $$\eta = 1- \frac{T_{E}-T_{B}}{T_{D}-T_{C}} = 1-\alpha^{1-\gamma}$$
   $\alpha > 0 \Rightarrow \eta <1$   
7. Comment évolue $\eta$ avec $\alpha$. Quel problème technique empêche de se rapprocher de $\eta=1$.
   
   Faire une étude de croissance $\eta = 1-\alpha^{1-\gamma}$.
   
   Pour augmenter $\alpha$ il faut surtout augmenter $V_{\max}$ ce qui pose un problème de taille pour le moteur
   Si $\alpha$ est trop grand, le carburant pourrait s'enflammer instantanément. 
8. Calculer $\eta$ pour $\alpha = 7$ et $\gamma = 1.4$
   $$\eta = 1- 7^{-0.4} \approx 1-\frac{1}{\sqrt{ 7 }} = 54 \% $$

### b. Cycle de Diesel
Le cycle théorique de Diesel est formé de 
- Une compression adiabatique réversible
- Une combustion isobare
- Une détente adiabatique réversible
- Un refroidissement isochore

1. Tracer ce cycle dans le diagramme de Clapeyron
   EXCAL 14
2. Exprimer la pression $P_{B}$ en fonction de $P_{A}$, $\alpha = \frac{V_{\max}}{V_{\min}} = \frac{V_{A}}{V_{B}}$ et de $\gamma$
   C'est une transformation isentropique, donc la loi de Laplace donne : 
   $$P_{A}V_{A}^{\gamma} = P_{B}V_{B}^{\gamma}$$
   Ainsi, 
   $$P_{B} = P_{A}\alpha^{\gamma}$$
3. Exprimer la température $T_{B}$ en $B$ en fonction de $T_{A}$ de $\alpha$ et de $\gamma$
   $$\frac{PV}{T} = \text{cte}$$
   $$\frac{P_{A}V_{A}}{T_{A}} = \frac{P_{B}V_{B}}{T_{B}} \Leftrightarrow T_{B} = T_{A} \frac{P_{B}V_{B}}{P_{A}V_{A}} = T_{A}\frac{P_{B}}{P_{A}\alpha} = T_{A}\alpha^{\gamma-1}$$
4. Calculer le rendement
   $$\eta = -\frac{W}{Q_{C}} = 1+ \frac{Q_{F}}{Q_{C}}$$
   Grace au premier principe
   On a par la première loi de joules :
   $$\Delta H_{BC} = nC_{p_{m}}\Delta T$$
   et 
   $$\Delta H_{BC} =  Q_{C}$$
   Car c'est isobare
   $$Q_{C} = nC_{p_{m}}\Delta T$$
   Ensuite : 
   $$\Delta U_{DA} = W + Q_{F} = 0 + Q_{F}$$
   Car isochore
   Par la première loi de joules :
   $$Q_{F} = nC_{v_{m}}\Delta T$$
   Ainsi,
   $$\eta = 1+ \frac{T_{A}-T_{D}}{\gamma(T_{C}-T_{B})}$$
5. Exprimer $\eta$ en fonction de $\alpha = \frac{V_{\max}}{V_{\min}}$ et $\beta = \frac{V_{C}}{V_{\min}}$
   On sait que : $T_{B} = \alpha^{\gamma-1}T_{A}$ 
   Entre $C$ et $B$ la transformation est isobare 
   $$PV = nRT \Rightarrow \frac{V}{T} = \frac{nR}{P} = \text{cte}$$
   $$\frac{V_{C}}{T_{C}} = \frac{V_{B}}{T_{B}}$$
   Alors, 
   $$T_{C} = \beta T_{B} = \beta \alpha^{\gamma-1}T_{A}$$
   Entre $C$ et $D$ on a une transformation isentropique alors
   on peut utiliser la loi de Laplace : 
   $$TV^{\gamma-1} = \text{cte}$$
   $$T_{D}V_{D}^{\gamma-1} = T_{C}V_{C}^{\gamma-1}$$
   $$V_{D} = V_{A} = V_{\max}$$
   car la transformation est isobare
   Alors, 
   $$T_{D} = T_{C} \left( \frac{\beta}{\alpha} \right)^{\gamma-1}$$
   Donc, 
   $$T_{C}-T_{B} = (\beta-1)\alpha^{\gamma-1}T_{A}$$
   $$T_{A} - T_{D} = T_{A} - \left( \frac{\beta}{\alpha} \right)^{\gamma-1}\beta \alpha^{\gamma-1}T_{A} = (1-\beta^{\gamma}) T_{A}$$
   Donc, 
   $$\eta = 1+\frac{1}{\gamma} \frac{(1-\beta^{\gamma})}{(\beta-1)\alpha^{\gamma-1}} = 1-\frac{\alpha^{1-\gamma}}{\gamma} \space \space \frac{1-\beta^{\gamma}}{1-\beta}$$
5. Étudier l'évolution de $\eta$ en fonction de $\beta$ et de $\alpha$
   - $\beta = \text{cte}$ : $\eta$ évolue comme : $-\alpha^{1-\gamma}$ $1-\alpha<0 \Rightarrow \eta \uparrow \text{quand }\alpha \uparrow$ 
   - $\alpha = \text{cte}$ : $\eta$ évolue comme $\frac{1-\beta^{\gamma}}{1-\beta}$, $\gamma > 1 \Rightarrow \beta^{\gamma} \text{ augmente plus vite que }\beta$ alors, $\frac{1-\beta^{\gamma}}{1-\beta}$ diminue quand $\beta \uparrow$
6. Calculer les valeurs numériques de $\eta, T_{B}, T_{C}$ et $T_{D}$ avec $T_{A} = 300 K$, $\alpha = 20$, $\beta = 3$ et $\gamma = 1.4$ 
   $\eta = 61\%$, $T_{B} = 994 K$, $T_{C} = 2983 K$, $T_{D} = 1397 K$
7. Pourquoi ce moteur n'a pas besoin de bougies? 
   Ce moteur n'as pas besoin de bougies car a cette température en fin de compression le mélange air / carburant s’enflamme spontanément. 
8. Pourquoi le carburant est injecté au point $B$ et pas en $A$ ?
   On injecte le carburant en fin de la compression pour éviter l’enflamment avant la phase de combustion
9. Déterminer la puissance théorique de ce moteur avec $V_{\max} = 2L$ $3600 \, \mathrm{tr}.\min^{-1}$ 
   $\mathcal{P} = \frac{W}{T}$ avec $T$ : duré d'un cycle et $W = -(Q_{F} + Q_{C})= - nC_{v_{m}}(T_{A}-T_{D})-nC_{p_{m}}(T_{C}-T_{B})$ 

