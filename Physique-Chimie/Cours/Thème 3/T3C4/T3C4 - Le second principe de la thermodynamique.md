# I. Les limites du premier principe
1. Le premier principe ne dit pas si le système va évoluer.
2. Le premier principe ne fait pas la différence entre travail $W$ et chaleur $Q$. 
3. Le premier principe n'explique pas la notion d’irréversibilité. 

# II. Les causes d'irréversibilité
Il existe $4$ causes d'irréversibilité : 

1. Transformation brutale : grande perturbation du système : 
   - Différence de pression/température élevée
   - Transformation mécanique
   - Perturbation thermique
2. Les frottements
3. Les réactions chimiques
4. Phénomènes de diffusion : 
   - Thermiques : Température qui s'homogénéise
   - Particules : Goutte d'encre dans l'eau

# III. Le Second principe de la Thermodynamique
## 1. Énoncé
### Second principe de la Thermodynamique
Pour tout Système Thermodynamique <u>fermé</u>, il existe une fonction d'état <u>extensive non conservative</u> appelée <u>entropie</u> et noté $S$, telle que sa variation au cours d'une transformation du système s'écrit : 
$$\Delta S = S_{ech} + S_{créé}$$
Avec : 
$S_{ech}$  : L'entropie échangée avec l’extérieur. 
$S_{créé}$ : L'entropie créé dans le système. 

#### Remarque
L'entropie est homogène à une capacité thermique : 
$$[S] = J.K^{-1}$$

#### Propriété
L'entropie créé dans le système au cours de la conservation est toujours positive. 
$$S_{créé} \geq 0$$

- Si la transformation est réversible, alors $S_{créé} = 0$
- Si la transformation est irréversible, alors $S_{créé}>0$

#### Remarque
Si le système n'est pas fermée, il peut avoir une entropie négative

#### Propriété
L'entropie échangée $S_{ech}$ avec l'extérieur est lié au transfert thermique entre le système et l'extérieur. 

- Transformation monotherme à $T_{0}$ : 
  $$S_{ech} = \frac{Q}{T_{0}}$$

- Transformation adiabatique : 
  $$S_{ech} = 0$$

# IV. Variation d'entropie pour un gaz parfait
## 1. Expression de $\Delta S$
#### Propriété
Pour $n$ mol de gaz parfait qui passe de l'état $1$ ($P_{1}, V_{1}, T_{1}$) à l'état $2$ ($P_{2}, V_{2}, T_{2}$), on peut écrire :
$$\Delta S = \frac{nR}{\gamma-1}\ln\left( \frac{T_{2}V_{2}^{\gamma-1}}{T_{1}V_{1}^{\gamma-1}} \right)$$
$$\Delta S = \frac{nR}{\gamma-1}\ln\left( \frac{T_{2}^{\gamma}P_{2}^{1-\gamma}}{T_{1}^{\gamma}P_{1}^{1-\gamma}} \right)$$
$$\boxed{\Delta S = \frac{nR}{\gamma-1}\ln\left( \frac{P_{2}V_{2}^{\gamma}}{P_{1}V_{1}^{\gamma}} \right)}$$

## 2. Applications
#### Définition
Isentropique : Adiabatique réversible

#### Définition
Coefficient de compressibilité isotherme :
$$\chi_{T} = -\frac{1}{V} \left.\frac{\partial V}{\partial P}\right)_{T}$$

Coefficient de compressibilité isentropique : 
$$\chi_{S} = -\frac{1}{V} \left.\frac{\partial V}{\partial P}\right)_{S}$$

#### Propriété
Avec les hypothèses ici wtf c le bordel
$$\chi_{T}=\frac{1}{P}$$

Démonstration :
$$PV = nRT$$
$$\begin{array}{rl}
\text{isotherme }&\Leftrightarrow PV = \text{cte} \\
&\Leftrightarrow P = \frac{cte}{V}
\end{array}$$
isentropique ssi loi de LaPlace
$$P = \frac{\text{cte}}{V^{\gamma}}$$
$\gamma > 1$
___
$\Delta T = 0$
$$\chi_{T} = -\frac{1}{V} \left.\frac{\partial V}{\partial P}\right)_{T}$$
or $V = \frac{\text{cte}}{P}$
Alors, $\frac{\partial V}{\partial P} = -\frac{\text{cte}}{P^{2}}$
Donc, 
$$\chi_{T} = -\frac{1}{V} \times \left( - \frac{\text{cte}}{P^{2}} \right) = \frac{P}{\text{cte}} \times \frac{\text{cte}}{P^{2}} = \frac{1}{P}$$

#### Propriété
$$\Delta S = 0 \Rightarrow \chi_{S} = \frac{1}{\gamma P}$$

Démonstration : 
$$\chi_{S} = -\frac{1}{V} \left.\frac{\partial V}{\partial P}\right)_{S}$$
Par la loi de Laplace : 
$$PV^{\gamma} = \text{cte} \Rightarrow \ln(PV^{\gamma}) = \text{cte}$$
On différencie cette équation : 
$$
d(\ln(PV^{\gamma})) = \frac{dP}{P}+ \gamma\frac{dV}{V} = 0$$
(en développant le ln)

Donc, 
$$\boxed{\frac{dP}{P} + \frac{\gamma dV}{V} = 0}$$

On cherche : 
$$\frac{dV}{dP} = - \frac{V}{\gamma P}$$
A $S = \text{cte}$ on a : 
$$\frac{dV}{dP} = \left.\frac{\partial V}{\partial P}\right)_{S}$$
$$\chi_{S} = -\frac{1}{V} \left.\frac{\partial V}{\partial P}\right)_{S}= -\frac{1}{V} \times\left( - \frac{V}{\gamma P} \right)$$
Ainsi, 
$$\boxed{\chi_{S} = \frac{1}{\gamma P}}$$

Et on peut exprimer $\gamma$ en fonction de $\chi_{T}$ et $\chi_{S}$

#### Propriété : Formule de Reech
$$\boxed{\gamma = \frac{\chi_{T}}{\chi_{S}}}$$

Excal 1.

# V. Phase condensée
#### Propriété
On suppose que la capacité calorifique $C$ est indépendante de la température. $C= \text{cte}$
Alors
$$\Delta S = C \ln \left( \frac{T_{2}}{T_{1}} \right)$$
est la variation d'entropie d'une phase condensée entre l'état $1$ et l'état $2$

#### Exemple
Excal 2. 

# VI. Sources d'énergie
## 1. Le thermostat
On considère un thermostat de température $T_{0} = \text{cte}$ qui subit une transformation entre les états $1$ et $2$. 
Déterminons le $\boxed{\Delta S}$ de ce thermostat. 
$\Delta S$ est une grandeur d'état, donc $\Delta S$ ne dépend pas de la transformation. 
On choisit de suivre une réversible entre les $2$ états. 
Dans ce cas :
$$S_{créé} = 0 \text{ et } S_{ech} = \frac{Q}{T_{0}}$$
avec $Q$ la chaleur reçue par le thermostat
Donc, 
$$\boxed{\Delta S = \frac{Q}{T_{0}}}$$

## 2. Sources de travail
#### Définition
Une source de travail est un système caractérisé par <u>une seule</u> grandeur <u>intensive constante</u> et qui effectue des transferts d'énergie avec l'extérieur que sous forme d'énergie associé à la grandeur intensive. 

#### Exemple
Si la source de travail est la grandeur intensive : $P$
Energie : $W_{P} = - \int _{1}^{2} P \, dV$

Pour ce type de source il n'y a pas d'échange thermique.
Donc, en suivant une transformation réversible, 
$$\Delta S = 0$$

## 3. Inégalité de Carnot Clausus
#### Propriété
Considérons un système qui échange de la chaleur uniquement avec des thermostats $Q_{i}$ (pour $i \in \mathbb{N}$) et du travail $W_{i}$ (pour $i \in \mathbb{N}$) uniquement avec des sources de travail. 
$$\boxed{\Delta S \geq \sum_{i \in \mathbb{N}}\Delta S_{Q_{i}}}$$

Démonstration :
Avec les hypothèses : 
$$\Delta S = \sum_{i \in \mathbb{N}} \Delta S_{Q_{i}} + \sum_{i \in \mathbb{N}} \Delta S_{W_{i}} + S_{créé}$$
Pour $i \in \mathbb{N}$,
$$\Delta S_{Q_{i}} = \frac{Q_{i}}{T_{i}}$$
$$\Delta S = \sum_{i \in \mathbb{N}} \frac{Q_{i}}{T_{i}} + S_{créé}$$
Ainsi comme $S_{créé} \geq 0$, 
$$\boxed{\Delta S \geq \sum_{i \in \mathbb{N}}\Delta S_{Q_{i}}}$$

## VII. Applications
## 1. Mise en contact thermique de 2 solides
Un solide de masse $m_{1}$ (resp $m_{2}$) de capacité $C_{1}$ (resp $C_{2}$) et de température $T_{1}$ (resp $T_{2}$) sont en contact
A l'état final les deux solides sont à la température $T_{f}$ 


#### Déterminer la température finale $T_{f}$
On applique le premier principe de la thermodynamique
au système $\{ \text{solide 1}, \text{solide 2} \}$
$$\Delta U = Q + W = Q$$
car le solide est indéformable
Ensuite : 
$$\Delta U = \Delta U_{1} + \Delta U_{2}$$
(car $U$ est un paramètre extensif)
$$\Delta U_{1} = C_{1}(T_{f}-T_{1})$$
Car les solides sont des phases condensées
$$\Delta U_{2} = C_{2}(T_{f}-T_{2})$$
Ainsi, 
$$\Delta U = C_{1}(T_{f}-T_{1}) + C_{2}(T_{f}-T_{2})$$

Hypothèse : On suppose que le système est en évolution adiabatique ($Q = 0$)
$$0 = C_{1}(T_{f}-T_{1})+C_{2}(T_{f}-T_{2})$$
$$(C_{1} + C_{2})T_{f} = C_{1}T_{1} + C_{2}T_{2}$$
Ainsi :
$$T_{f} = \frac{C_{1}T_{1}+C_{2}T_{2}}{C_{1}+C_{2}}$$

#### Déterminer la variation d'entropie du système pendant cette transformation
$$\Delta S  = \Delta S_{1} + \Delta S_{2} = C_{1}\ln\left( \frac{T_{f}}{T_{1}} \right)+ C_{2}\ln\left( \frac{T_{f}}{T_{2}} \right)$$

Hypothèse : $C_{1} = C_{2} = C$
$$T_{f} = \frac{T_{1}+T_{2}}{2}$$
On simplifie : 
$$\Delta S=  C\left( \ln\left( \frac{T_{f}}{T_{1}}\right)+ \ln\left( \frac{T_{f}}{T_{2}} \right) \right) = C\ln\left( \frac{T_{f}^{2}}{T_{1}T_{2}} \right)$$
Ainsi, 
$$\Delta S = C\ln\left( \frac{(T_{1}+T_{2})^{2}}{4T_{1}T_{2}} \right)$$

Montrons que $\Delta S \geq 0$ : 
$$(T_{1}+T_{2})^{2} - 4T_{1}T_{2} = T_{1}^{2} + T_{2} ^{2} - 2T_{1}T_{2}$$
Alors
$$(T_{1}+T_{2})^{2} - 4T_{1}T_{2} = (T_{1}-T_{2})^{2}\geq 0$$

$$\frac{(T_{1} + T_{2})^{2}}{4 T_{1}T_{2}} \geq 1$$
Donc, 
$$\ln\left(\frac{(T_{1} + T_{2})^{2}}{4 T_{1}T_{2}}\right) \geq 0$$
Ainsi, $\Delta S \geq 0$

## 2. Compressions d'un gaz parfait
On suppose que le piston est à l'équilibre thermique
#### On considère que la compression est isotherme
Déterminer la pression $P_{1}$ initiale
On applique le PFD au piston de masse $m$, à l'équilibre. 
On a : 
$$0 = -mg - P_{0}S + P_{1}S$$
Ainsi, 
$$P_{1} = P_{0} + \frac{mg}{S} \geq P_{0}$$

##### Déterminer l'état final du système
$$\text{Système} = \{ \text{Gaz parfait contenu dans le cylindre} \}$$
Etat final : $P_{2}, V_{2}, T_{2}$
Comme c'est une compression isotherme :
$T_{2} = T_{0}$ et $PV = \text{cte}$
Déterminons $P_{2}$
On fait le PFD au piston : 
$$0 = -mg-Mg-P_{0}S+P_{2}S$$
Ainsi, 
$$P_{2} = P_{0}+\frac{M+m}{S}g = P_{1} + \frac{Mg}{S}$$

Comme $P_{1}V_{1} = P_{2}V_{2}$, 
$$V_{2} = \frac{P_{1}}{P_{2}}V_{1}$$
Ainsi, 
$$V_{2} = \frac{P_{1}}{P_{1}+\frac{Mg}{S}}V_{1}$$

##### Déterminer les variations de $U$ et de $S$ de ce Gaz parfait
Or d'après la première loi de joule : $U$ ne dépend que de $T$
Or si $P = \text{cte}$ $T=\text{cte}$ 
Ainsi,
$$\Delta U = 0$$

On peut utiliser les variables $P$ et $T$ pour $\Delta S$ : 
$$\Delta S = \frac{nR}{\gamma-1}\ln\left( \frac{P_{2}^{1-\gamma}}{P_{1}^{1-\gamma}} \right) = -nR\ln\left( \frac{P_{2}}{P_{1}} \right)$$
Ainsi, 
$$\Delta S = nR\ln\left( \frac{P_{1}}{P_{1}+\frac{Mg}{S}} \right)$$

##### Déterminer le travail $W$, la chaleur $Q$ et $S_{ech}$ et $S_{crée}$ pendant la transformation
On a une compression isotherme (quasi-statique), 
Alors,
$$W = - \int_{V_{1}}^{V_{2}} P_{ext} \, dV = - \int_{V_{1}}^{V_{2}} P \, dV$$
$PV = nRT_{0} = \text{cte}$ 
Donc, $P = \frac{nRT_{0}}{V}$
Ainsi, 
$$W = -nRT_{0} \int_{V_{1}}^{V_{2}}  \, \frac{dV}{V} = nRT_{0} \ln\left( \frac{V_{1}}{V_{2}} \right)$$

Comme :
$$\Delta U = Q+W = 0$$
Ainsi, 
$$Q = -W = nRT_{0} \ln\left( \frac{V_{2}}{V_{1}} \right)$$

$S_{ech} = \frac{Q}{T_{0}}$ car les échanges de chaleur se font avec un thermostat
Ainsi, 
$$S_{ech} = nR \ln \left( \frac{V_{2}}{V_{1}} \right)$$

On a : 
$$\Delta S = S_{ech} + S_{créé} = nR \ln \left( \frac{P_{1}}{P_{2}} \right) $$
Comme $S_{ech} = \Delta S$, $S_{créé}=0$

#### Supposons que la transformation est monotherme (elle est plus quasi-statique)
Par exemple on pose la masse $M$ d'un coup. (Transformation brutale : l'équilibre mécanique est immédiat) $P_{ext} = P_{2} = \text{cte}$
c'est une transformation monobare

##### Déterminer $W, Q, S_{ech}, S_{créé}$ pendant cette transformation
$$W = - \int _{V_{1}}^{V_{2}} P_{ext} \, dV = P_{2}(V_{1}-V_{2}) $$
$\Delta U = Q+W = 0$ 
Ainsi, 
$$Q = P_{2}(V_{2}-V_{1})$$

$$S_{ech} = \frac{Q}{T_{0}} = \frac{P_{2}(V_{2}-V_{1})}{T_{0}}$$
$$\Delta S-S_{ech} = S_{créé} = nR\ln\left( \frac{P_{1}}{P_{2}} \right)-\frac{P_{2}}{T_{0}}(V_{2}-V_{1})$$
$$S_{créé} = nR\ln\left( \frac{P_{2}}{P_{1}} \right) - nR + \frac{P_{1}V_{1}}{T_{0}} \frac{V_{1}}{V_{2}} $$
Ainsi, 
$$S_{créé} = nR\left( \ln\left( \frac{P_{1}}{P_{2}} \right)-1+ \frac{P_{2}}{P_{1}} \right)$$
Or $\forall x \in \mathbb{R}, x-1-\ln(x) \geq 0$
Ainsi, $S_{créé} \geq 0$
Donc, cette transformation est irréversible. 

## 3. Détente de Joule-Gay-Lussac et de Joule-Thomson d'un Gaz parfait
#### Déterminons la variation d’entropie au cours d'un détente de Joule-Gay-Lussac
Excal 4
La détente est adiabatique donc, $S_{ech}=0$
$\Delta S = S_{créé}$ avec les variables $T$ et $V$
$$\Delta S = \frac{nR}{\gamma-1}\ln\left( \frac{T_{f}V_{f}^{\gamma-1}}{TV^{\gamma-1}} \right)$$
$$\begin{rcases}
T_{f}=T \\
V_{f} = 2V
\end{rcases} \Rightarrow \Delta S_{JGL} = \frac{nR}{\gamma-1}\ln(2^{\gamma-1}) = nR\ln(2)\geq 0$$
Processus irreversible

#### Déterminons la variation d’entropie au cours d'un détente de Joule-Thomson
Excal 5.
$\Delta H = 0$ c'est adiabatique et quasi-statique
Comme $Q = 0$ $S_{ech} = 0$

$$\Delta S= \frac{nR}{\gamma-1}\ln\left( \left( \frac{T_{2}^{\gamma}}{T_{1}^{\gamma}} \right)\left( \frac{P_{2}}{P_{1}} \right)^{1-\gamma} \right)$$
Or $T_{1} = T_{2}$
$$\Delta S=  \frac{nR}{\gamma-1}\ln\left( \left( \frac{P_{2}}{P_{1}} \right)^{1-\gamma} \right)$$
$$\Delta S = nR\ln\left( \frac{P_{1}}{P_{2}} \right)= S_{créé} \geq 0$$
Irréversible car $P_{1} > P_{2}$

# VIII. Interprétation de microscopique de l'entropie
#### Détente de Joule-Gay-Lussac
Si il n'y a qu'une seule particule, Il n'y a que 2 états possibles : Dans la cavité de gauche ou de droite

Si il n'y en a deux : on a $4$ états possibles si on les différencie.

On suppose qu'on à $N$ particules initiales, le nombre de micro-états qui correspondent à $k$ particules à gauche et $N-k$ à droite
$$\Omega = \frac{N!}{k!(N-k)!}=\binom{N}{k}$$
$$S=k_{B}\ln(\Omega)$$
