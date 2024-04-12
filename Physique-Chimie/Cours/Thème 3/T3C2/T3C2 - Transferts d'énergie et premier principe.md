# I. Grandeurs extensives conservatrices
Excal 1.
Soit $\mathcal{S}$ un système fermé
$X$ : une grandeur extensive, dépend de la tailler du système

On étudie l'évolution du système entre $t_{1}$ et $t_{2}$ 
à $t_{1}$ : $X(t_{1})$
à $t_{2}$ : $X(t_{2})$
La variation de $X$ entre $t_{1}$ et $t_{2}$
$$\Delta X = X(t_{2}) - X(t_{1}) = X_{\text{echange}} + X_{\text{produit}} $$
$X_{\text{échangé}}$ : terme échangé avec l’extérieur
$X_{\text{produit}}$ : terme de production ai sein du système lui même. 
ce sont des valeurs algébriques

#### Exemple
$C + O_{2} = CO_{2}$
La quantité de matière totale $n_{\text{tot}}$ à $t$ quelconque est : 
$$n_{\text{tot}} = n_{C} + n_{O_{2}} + n_{CO_{2}}$$
à $t = 0$, $n_{0} = n_{C} + n_{O_{2}}$
$\Delta n  = n_{\text{échangé}} + n_{\text{produit}}$, $n_{\text{échangé}} = 0$ (sys fermé)
$$n_{\text{produit}} =\Delta n_{C} + \Delta n_{O_{2}}+ \Delta n_{CO_{2}}$$
$\Delta n_{C} + \Delta n_{O_{2}} < 0$ et $\Delta n_{CO_{2}}>0$
De plus,
$$\Delta n_{c} = \Delta n_{O_{2}} = - \Delta n_{CO_{2}}$$
finalement $n_{\text{produit}} = - \Delta n_{CO_{2}}$
$$\boxed{\Delta n =-\Delta n_{CO_{2}} <0}$$
La quantité de matière diminue

$n_{\text{tot}}$ n'est pas conservé
par contre la masse totale est conservée

#### Définition
Une grandeur extensive d'un système fermé est conservative si lors de l'évolution du système, le <u>terme de production</u> est nul. 

# II. Le cas de l'énergie
## 1. Position du problème
En mécanique, l'énergie totale d'un système est : 
$E_{m} = E_{c} + E_{p}$,
En cas de frottements $E_{m}$ n'est pas conservé. 

Considérons le système $\mathcal{S} : \{  \text{Point matriel}, \text{support}, \text{air} \}$
$$E_{\text{tot}} = E_{m}(\text{point}) + E_{c}(\text{air + support}) + E_{p}(\text{air + support})$$
est conservée : 
Il y échange entre l'énergie mécanique du point et les énergies des particules sous forme de chaleur

## 2. Énoncé du premier principe de la thermodynamique
#### Théorème
Pour un système thermodynamique fermé, on peut associer une fonction d'état extensive, appelée énergie interne $U$ telle que pendant l'évolution du système entre un état initial : $i$ et un état final : $f$, la variation de l'énergie $E$ :
$$\Delta E = E_{f} - E_{i} =\Delta U +\Delta E_{m} = W + Q $$
$\Delta V$ : Variation d’énergie interne
$\Delta E_{m}$ : Variation d’énergie mécanique
$W$ : Travail des forces extérieures
$Q$ : Transfert de chaleur avec l'extérieur
$U = E_{C_{\text{micro}}} + E_{P_{\text{Micro}}}$
$E_{m} = E_{C} + E_{p}$ : énergie macroscopique du système. 

#### Remarque
$W$ et $Q$ sont des termes de transfert, d'échange entre le système et l'extérieur, il sont algébrique vis a vis du système. 

#### Exemple
Pour un gaz parfait de $n$ mol
$N = n N_{a}$ particules
$$U = \sum_{i =1 }^{N} \frac{1}{2}m_{i}v_{i}^{2}+ \sum_{i = 1}^{N}\sum_{\underset{i \neq j}{j = 1}}^{N} E_{p_{i, j}}$$
Sans modélisation, on ne peut pas expliciter $U$

#### Conséquence
Pour un système au repos :
$E_{C_{\text{macro}}} = \frac{1}{2}mv^{2} = 0$
$E_{p_{\text{macro}}} = \text{cte}$

Le premier principe s'écrit : 
$$\boxed{\Delta U = W + Q}$$

- Si on considère une transformation infinitésimale entre $t$ et $t + dt$ avec $dt \ll\ll\ll\ll\ll\ll\ll\ll t$ 
  Alors on écrit : 
  $$dE = dU + dE_{m} = \delta W + \delta Q$$
- Si l'état final est égal à l'état initial, pour un système au repos
  $$\Delta U = U_{f} - U_{i} = U_{i} - U_{i} = 0 \Rightarrow W + Q = 0$$

## 3. Energie interne d'un gaz parfait monoatomique
Pour un gaz parfait : 
$$U = \sum_{i} \frac{1}{2}m_{i}v^{2}_{i}$$
(car pas d'interraction)
c'est un corp pur, donc les particules ont toutes mêmes masses $m$
Alors, 
$$\boxed{U = \frac{m}{2}\sum_{i}v_{i}^{2} = \frac{m}{2}v^{*^{2}} = \frac{3}{2}k_{B}T}$$

Energie interne molaire
$$\boxed{U_{m} = \frac{U}{n} = \frac{3}{2}RT}$$

# III. Transfert d'énergie sous forme de travail
## 1. Rappel sur le travail
Le travail élémentaire d'une force $\vec{F}$ est : 
$$\delta W = \vec{F}.d\vec{r}$$
## 2. Cas du travail électrique
Excal 2.
$P = Ei$ : Puissance électrique totale
$P_{J} = Ri^{2}$ : Puissance électrique reçue par la résistance
$P_{C} = E_{i} - Ri^{2}$ : Puissance reçue par le condensateur
Le puissance reçue par l'eau est $P = Ri^{2}$ le travail avec $i = \text{cte}$ est : 
$$\boxed{W = \int P \, dt = Ri^{2} \Delta t }$$

## 3. Travail des forces de pression
### a. Cas du piston dans un cylindre
Air à la pression $P_{0}$ : 
Excal 3.
Système : $\{ \text{gaz} \}$
La force du piston sur le gaz : $\vec{F} = m\vec{g}$
Le travail élementaire du pipston : 
$$\delta W = \vec{F} . d\vec{r} = mgdx$$
Si le piston est à l'équilibre
On étudie le piston : 
BDF : 
- $\vec{P} = m\vec{g} = mg\vec{e}_{x}$
- $\vec{F}_{\text{gaz}} = -P\mathcal{S}\vec{e}_{x}$
- $\vec{F}_{\text{air}} = P_{0}\mathcal{S}\vec{e}_{x}$

$\sum \vec{F} = \overrightarrow{0}$

$$mgP\mathcal{S} + P_{0}\mathcal{S} = 0$$
On en déduit :
$$\boxed{P_{\text{eq}} = P_{0} + \frac{mg}{S}} > P_{0}$$

### b. Cas général
Excal 4
Le travail des forces de pression est : 
$$\delta W  = -P_{\text{ext}}\,dV$$
Variation de volume du système. 
$$\boxed{W = \int_{\text{Etat init}}^{\text{Etat final}} -P_{\text{ext}} \, dV }$$

### c. Représentation graphique
On fait l'hypothèse que le système est a l'équilibre mécanique, donc 
$$P = P_{\text{ext}}$$
$P$ la pression du système. 
Donc, le travail des forces de pression : 
$$W = - \int_{\text{état init}}^{\text{état final}} P \, dV $$

Diagramme de Watt : Excal 5

#### Propriété
Le travail des forces de pression $W = - \int P \, dV$ est égale à l'aire sous la courbe dans le diagramme $PV$ (de Watt)

## 4. Généralisation
Un transfert d'énergie sous forme de travail peut toujours se mettre sous la forme : 
$$\boxed{W = \int_{EI}^{EF} y_{\text{ext}} \, dX }$$
$y_{\text{ext}}$ : Grandeur intensive du milieu extérieur. 
$X$ : Grandeur extensive du système

# IV. Les différentes formes de transfert thermique
- La conduction thermique. 
- La convection thermique. 
- Le rayonnement thermique. 

#### Vocabulaire
- Si le transfert thermique est nul $Q  =0$ alors, la transformation est <u>adiabatique</u>. 
- Si la transformation est <U>rapide</U>, la transformation est <u>adiabatique</U>. 
- Si la transformation est <u>lente</u>, la transformation sera <u>isotherme</u>. 

# V. Les capacités thermiques et l'enthalpie
## 1. Capacité thermique à volume constant
#### Définition
On appelle la capacité thermique d'un système a volume constant la grandeur :
$$\boxed{C_{V} = \left.\frac{\delta U}{\delta T}\right)_{V}}$$
$U$ est l'énergie interne du système en $J$
$C_{v}$ se mesure en $J.K^{-1}$

### a. Conséquences
On admet que pour un gaz parfait, quelque soit la transformation, alors, 
$$\boxed{\Delta V = \int _{EI}^{EF} C_{V} \, dT }$$



### b. Capacité thermique molaire et massique
Capacité thermique molaire : 
$$\boxed{C_{V_{m}} = \frac{C_{V}}{n}}$$
$n$ : Quantité de matière du système

Pour un gaz parfait monoatomique, 
$$\boxed{C_{V_{n}} = \frac{3}{2}R}$$
Pour un gaz parfait diatomique, 
$$\boxed{C_{V_{m}} = \frac{5}{2}R}$$
Capacité thermique massique :
$$\boxed{c_{V} = \frac{C_{V}}{m}}$$

## 2. L'enthalpie
#### Définition
On définit une nouvelle fonction d'état, L'enthalpie comme :
$$\boxed{H = U + PV}$$

#### Remarque
$H$ est homogène à une énergie

#### Propriété
Si on étudie une transformation a pression constante
Excal 6 
$$\Delta H = Q$$

Démonstration : 
$$H = U + PV$$
Donc, 
$$\Delta H = \Delta U + \Delta (PV)$$
$$\Delta H = \Delta U + P\Delta V + V\Delta P$$
mais $P = \text{cte}$ donc, $\Delta P = 0$
$$\Delta H = \Delta U + P \Delta V$$
Si il n'y a que des forces de pression, 
$$W = - P\Delta V$$
Donc, 
$$\Delta U = Q - P\Delta V$$
en remplaçant dans $\Delta H$
$$\Delta H = Q - P\Delta V+ P\Delta V$$
Ainsi
$$\Delta H = Q$$

## 3. Capacité thermique à pression constante
#### Définition
On appelle capacité thermique à pression constante la grandeur : 
$$\boxed{C_{P} = \left.\frac{\delta H}{\delta T}\right)_{P}}$$

$H$ : enthalpie du système
$C_{P}$ se mesure en $J.K^{-1}$

### a. Conséquences
Pour les gaz parfaits on admet que : 
$$\boxed{\Delta H = \int _{EI}^{EF} C_{P} \, dT }$$

### b. Capacité molaire et massique
Capacité thermique molaire : 
$$\boxed{C_{P_{m}} = \frac{C_{P}}{n}}$$

Gaz parfait monoatomique : 
$$\boxed{C_{p_{m}}=\frac{5}{2}R}$$
Gaz parfait diatomique : 
$$\boxed{C_{P_{m}} = \frac{7}{2}R}$$

Capacité thermique massique : 
$$\boxed{c_{p} = \frac{C_{p}}{m}}$$

## 4. Capacité thermique en phase condensée
Liquide et solide
On considère que le système est incompressible. 
Il n'est pas sensible aux variations de pression
Alors, $U(T)$ est une fonction de $T$ uniquement, et $H(T)$ aussi puis $C_{P} = C_{V}$

#### Ordre de grandeur
Pour de l'eau liquide la capacité thermique massique
- $C_{\text{eau}} = 4185 J.K^{-1}.kg^{-1}$

Pour un solide elle est de :
- $C_{} \approx 25 J.K^{-1}.mol^{-1}$

## 5. Thermostat
#### Définition
On appelle thermostat un système caractérisé par sa température fix constante et qui n'effectue que des échanges de chaleur avec l'extérieur. 

# VI. Les différents types de transformation
## 1. Transformation (chemin) quasi statique
#### Définition
On appelle transformation quasi statique une transformation au cours de laquelle, le système est infiniment proche d'un état d'équilibre à chaque instant. 
On dit aussi que c'est une transformation mécaniquement réversible. 

#### Remarque
Sur une transformation quasi statique, 
- $P = P_{\text{ext}}$ 


## 2. Transformation réversible
#### Définition
Tout transfert d'énergie réalisé dans des conditions d'énergie est réversible. Si on inverse la transformation, on retrouve l'état initial. 
En inversant le signe des transferts d'énergie. 

#### Exemple
Si on ajoute une grande masse sur un piston, c'est non quasi statique
Si on ajoute une très petite quantité de masse et qu'on attend longtemps entre cet ajout, c'est quasi statique

## 3. Transfert monobare et isobare
#### Définition
On appelle transformation monobare, une transformation au cours de laquelle la pression extérieure est constante : $P_{\text{ext}}$ est constante. 

#### Définition
On appelle transformation isobare, une transformation monobare quasi statique. 

Donc, $P = P_{\text{ext}} = \text{cte}$

### a. Travail des forces de pression
$$W = \int _{EI}^{EF}-P_{\text{ext}} \, dV $$
Pour une transformation monobare
$$\boxed{W_{\text{monobare}}= - P_{\text{ext}}(V_{F} - V_{I})}$$

### b. Expression du premier principe
Dans le cas d'une transformation monobate le premier principe s'écrit : 
$$\boxed{\Delta H = Q + W_{\text{autre}}}$$
avec,
$W_{autre}$ : Le travail des forces autre que les forces 

Démonstration : 
$$\Delta U = W + Q = - \int _{EI}^{EF} P_{\text{ext}} \, dV + W _{autre} + Q $$
Or, 
$$W= - P_{ext}(V_{F} - V_{I})+ W_{\text{autre}}$$
$$\Delta U = U_{F} - U_{I} = - P_{\text{ext}}(V_{F} - V_{I}) + W_{\text{autre}}+ Q$$
$$U_{F} - U_{I}+ P_{\text{ext}}(V_{F} - V_{I}) = W_{\text{autre}}+ Q$$
$$H_{F}-H_{I} = W_{\text{autre}} + Q$$
$$\Delta H = W_{\text{autre}} + Q$$

### 4. Transformation monotherme et isotherme
#### Définition
On appelle transformation <u>monotherme</u> une transformation au cours de laquelle le système <u>échange de la chaleur uniquement avec un thermostat de température</u> $T_{\text{ext}}$ <u>constante.</u> 
Une transformation <u>monotherme quasi statique</U> est appelée <u>isotherme</u>. 

#### Propriété
Une transformation monotherme ou isotherme s'accompagne nécessairement de transformation thermique. 

## 5. Transformation isochore
#### Définition
Une transformation isochore est une transformation au cours de laquelle le volume du système est constant. 

#### Propriété
Le travail des forces de Pression est nul au cours d'une transformation isochore $W_{\text{Isochore}} = 0$

Démonstration : 
$$W= - \int _{EI}^{EF} P_{\text{ext}} \, dV $$
or $dV = 0$ ainsi, $W =0$


## 6. Transfert thermique
Transformation isobare : $P = \text{cte}$
$$\boxed{\Delta H = Q = \int _{EI}^{EF} C_{p} \, dT}$$
Transformation isochore : 
$$\Delta U = Q = \int_{EI}^{EF} C_{V} \, dT$$

# VII. Modèle linéaire des transferts thermiques
## 1. Flux thermique et resistance thermique
#### Définition
Le flux thermique $\phi$ (il faut associer le mot flux a la puissance) est la puissance thermique reçue par le système. Il s'exprime en watt $W$
pendant une durée $dt$, le système reçoit une énergie $\delta Q = \phi dt$

excal 7
Les faces du haut et du bas sont calorifugés

#### Définition
La résistance thermique $R_{th}$ relie le flux thermique $\phi$ entre deux régions isothermes et la différence de température $\Delta T$ : 
$$\Delta T = R_{th} \phi$$
$\Delta T>0$ : Différence de température
(pas obligé mais mieux pour la positivité)
$\phi$ : Flux thermique en $W$
$R_{th}>0$ : la résistance thermique en $K.W^{-1}$


#### Remarque
$R_{th}$ est analogue a une résistance électrique :
$$\begin{array}{c}
R_{th} \leftrightarrow R \\
\Delta T = R_{th}\phi \leftrightarrow U = RI \\
\Delta T \leftrightarrow U = \Delta V \\
\phi \leftrightarrow I
\end{array}$$


#### Remarque
Un isolant thermique à une resistance thermique élevée

La résistance thermique dépend de :
- La géométrie
- L'épaisseur
- La surface 
- La conductivité thermique $\lambda$

#### Remarque
On parle aussi de conductance thermique : 
$$G_{th} = \frac{1}{R_{th}}$$

#### Applications 
Excal 8
$$R_{th} = \frac{T_{i}-T_{e}}{\phi} = \frac{21-7}{56} = \frac{14}{56} = \frac{1}{4} K.W^{-1}$$
Donc, 
$$\boxed{R_{th} = 0.25 K.W^{-1}}$$

## 2. Loi phénoménologique de Newton
Excal 9
$$\phi_{S \to f} = h(T_{s}-T_{f})S$$
$\phi_{S \to f}$ : Flux de chaleur entre le solide et le fluide
$S$ : Surface d'échange en $m^{2}$
$T_{s} - T_{f}$ : Différence de température en $K$
$h$ : Le coefficient de conducto-convexion en $W.K^{-1}.m^{-2}$
