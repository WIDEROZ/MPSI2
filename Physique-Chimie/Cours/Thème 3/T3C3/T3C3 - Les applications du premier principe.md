# I. Les détentes de Joule
## 1. Détente de Joule, Gay-Lussac
#### Définition
La détente de Joule, Gay-Lussac est la détente adiabatique irreversible d'un fluide dans le vide. 
(La détente est une augmentation de volume ou une diminution de pression)

Excal 1.

#### Propriété
Au cours d'une détente de Joule, Gay-Lussac l'énergie interne $U$ du fluide se conserve $\boxed{\Delta U = 0}$

Démonstration : 
$$\Delta U = Q + W$$
Système : $\{ V_{1} + V_{2} \}$
La détente est adiabatique alors $Q = 0$, 
Comme c'est un système indéformable : 
$$\Delta U = W = \int  -p \, dV = 0$$
Car le volume total est constant
Ainsi , $\boxed{\Delta U = 0}$

## 2. Première loi de Joule
#### Propriété
L'énergie interne d'un gaz parfait ne dépend que de sa température : 
$$\boxed{\Delta U = C_{V}\Delta T}$$
$$\boxed{C_{v} = \frac{dU}{dT}}$$

## 3. La détente de Joule - Thomson ou Joule - Kelvin
#### Définition
La détente de Joule - Thomson est la détente d'un fluide en écoulement lent, stationnaire et adiabatique à travers un obstacle sous l'effet des seules forces de pression. 
Excalidraw 2

$v_{2} \neq v_{1}$ mais comme c'est stationnaire, $v_{1} = \text{cte}$ et $v_{2} = \text{cte}$
L'écoulement est lent donc on néglige l'énergie cinétique devant l'énergie interne

Un rét Qdtrécissement peut jouer le role de l'obstacle. 

#### Propriété
La variation d'enthalpie du fluide au cours d'une détente de Joule Thomson est nulle : 
$$\Delta H = 0$$

Démonstration :
Excalidraw 3.
On considère le système de volume $V_{1}$ entre les abscisses $A$ et $B$. Il contient une masse $m$ de fluide, cette masse $m$, se retrouve dans le système entre les abscisses $C$ et $D$ après l'obstacle. 

On va considérer les systèmes $\Sigma_{1}$ et $\Sigma_{2}$ : 
$$\Sigma_{1} = \{ \Sigma + \text{Volume commun} \}, \Sigma_{2} = \{ \text{Volume commun}+\Sigma' \}$$
On applique le premier principe au fluide contenu dans $\Sigma_{1}$ :
$$\Delta U = W + Q$$
$Q = 0$ car c'est un écoulement adiabatique
$\Delta U = W$
$W$ : Travail des forces de pression
$$\Delta U = W = \int -P \, dV = \int -P_{1} \, dV + \int - P_{2} \, dV  $$
$$W = -P_{1} \times (-V_{1}) - P_{2} \times V_{2}= P_{1}V_{1}-P_{2}V_{2}$$
Donc, $\boxed{\Delta U = P_{1}V_{1} - P_{2}V_{2}}$ 
Mais, $H_{1} = U_{1} + P_{1}V_{1}$ et $H_{2} = U_2 + P_{2}V_{2}$

$$\Delta H = U_{2}-U_{1}+P_{2}V_{2}-P_{1}V_{1}$$
Or
$$U_{2} - U_{1} = P_{1}V_{1}-P_{2}V_{2}$$
Alors
$$\Delta H = P_{1}V_{1}-P_{2}V_{2}+P_{2}V_{2}-P_{1}V_{1} = 0$$


MONTRER QUE $\Delta U = U_{\Sigma_{2}} - U_{\Sigma_{1}}$ EST BIEN EGAL A $U_{2}-U_{1}$

Comme $\Delta U$ est une var extensive : 
$$\begin{cases}
U_{BD} = U_{BC} + U_{CD} \\
U_{AC} = U_{AB} + U_{BC}
\end{cases}$$
Alors, 
$$\Delta U = U_{BC}+U_{CD}-U_{AB}-U_{BC} = U_{CD}-U_{AB}$$
Car c'est un écoulement permanent. 

$$\Delta U = U_{2}-U_{1} = P_{1}V_{1}-P_{2}V_{2} \Leftrightarrow U_{2}+P_{2}V_{2}=U_{1}+P_{1}V_{1} $$
Ainsi, $H_{2}=H_{1}$


## 4. Seconde loi de Joule
#### Propriété
L'enthalpie d'un gaz parfait ne dépend que de la température
$$\Delta H = nC_{pm} \Delta T$$
Avec $C_{pm} = \frac{\delta H_{m}}{\delta T}$ : capacité thermique molaire

## 5. Relation de Mayer et expression des capacités calorifiques
#### Propriété
Pou un gaz parfait :
$$\boxed{C_{pm} - C_{vm} = R}$$

#### Définition
$$\boxed{\gamma = \frac{C_{pm}}{C_{vm}} = \frac{C_{p}}{C_{v}} = \frac{c_{p}}{c_{v}}}$$

#### Propriété
$$\begin{cases}
C_{vm}= \frac{R}{\gamma-1} \\
C_{pm} = \frac{\gamma}{\gamma-1}R
\end{cases}$$

Démonstration : 
$$C_{pm} = \gamma C_{vm}$$
Alors, 
$$(\gamma -1)C_{vm} = R$$
Donc, 
$$C_{vm} = \frac{R}{\gamma-1}$$
et 
$$C_{pm} = \gamma C_{vm} = \frac{\gamma}{\gamma-1}R$$

#### Propriété

| GP Monoatomique         | GP Diatomique           |
| ----------------------- | ----------------------- |
| $\gamma = \frac{5}{3}$  | $\gamma = \frac{7}{5}$  |
| $C_{vm} = \frac{3}{2}R$ | $C_{vm} = \frac{5}{2}R$ |
| $C_{pm} = \frac{5}{2}R$ | $C_{pm} = \frac{7}{2}R$ |

# II. Applications
## 1. Transformation adiabatique réversible
#### Propriété : Loi de Laplace
Pour une transformation adiabatique réversible d'un gaz parfait de coefficient $\gamma$ indépendant de $T$ 
$$\boxed{PV^{\gamma} = \text{cte}}$$

Démonstration : 
On considère une transformation infinitésimale
$$dU = \delta W + \delta Q = \delta W$$
On suppose que seule les forces de pression travaillent. 
Alors, 
$$\delta W = - P_{\text{ext}}dV = -PdV$$
(Car la transformation est réversible)

Or on travaille avec un gaz parfait : $dU = nC_{vm}dT$
$$nC_{vm}dT = - PdV \Leftrightarrow nC_{vm}\frac{1}{nR}d\left(PV \right) = -PdV$$
$$\frac{nR}{\gamma-1} \frac{1}{nR}d(PV) = -PdV \Leftrightarrow \left( \frac{P}{\gamma-1}+ P \right)dV = -\frac{V}{\gamma-1}dP$$
Alors, 

$$\left( \frac{1}{\gamma-1}+1 \right) \frac{dV}{V} = -\frac{1}{\gamma-1} \frac{dP}{P}$$
On intègre le long de la transformation : 
$$\int _{V_{1}}^{V_{2}} \frac{\gamma}{V} \, dV = - \int _{P_{1}}^{P_{2}}  \frac{dP}{P}$$
$$\gamma \ln\left( \frac{V_{2}}{V_{1}} \right) = - \ln\left( \frac{P_{2}}{P_{1}} \right) \Leftrightarrow \ln\left(  \frac{V_{2}^{\gamma}}{V_{1}^{\gamma}} \right) = -\ln\left( \frac{P_{2}}{P_{1}} \right)$$
Donc, 
$$\ln(V_{2}^{\gamma}) - \ln(V_{1}^{\gamma}) = \ln(P_{1})-\ln(P_{2})\Leftrightarrow {\ln(P_{2}V_{2}^{\gamma}) = \ln(P_{1}V_{1}^{\gamma})}$$
Ainsi, 
$$\boxed{P_{1}V_{1}^{\gamma} = P_{2}V_{2}^{\gamma}}$$

#### Echange de chaleur
$Q = 0 J$ car la transformation est adiabatique
x
#### Travail des forces de pression
$$W = \Delta U = nC_{vm} \Delta T$$
Par le premier principe et par la première loi de Joule
#### Propriété
$$\boxed{W = \frac{nR}{\gamma-1}\Delta T}$$

## 2. Transformation isotherme
$T = cte$
$$\Delta U = W + Q = 0$$
Car $\Delta T = 0$
Alors, 
$$W = -Q$$

#### Travail des forces de pression
$$W = - \int_{1}^{2} P_{\text{ext}}  \, dV $$
Comme la transformation est isotherme : 
$$W= - \int _{1}^{2} P \, dV = -nRT \int _{1}^{2} \frac{dV}{V}$$
Alors, 
$$\boxed{W= -nRT \ln\left( \frac{V_{2}}{V_{1}} \right)}$$

#### Echange de chaleur
$$-W = \boxed{Q = nRT \ln\left( \frac{V_{2}}{V_{1}} \right)}$$

## 3. Transformation isochore
$V = cte$
$$\Delta U = W + Q$$

#### Travail des forces de pression
$$W = -\int _{1}^{2} P_{\text{ext}} \, dV = 0$$
Car $V = cte$

#### Echange de chaleur
$$\Delta U = Q$$
Comme on travaille avec un gaz parfait, par la première loi  de Joule on a :
$$\Delta U = nC_{vm}\Delta T$$
Ainsi, 
$$Q = \frac{nR}{\gamma-1}\Delta T$$

## 4. Transformation isobare
$P = cte$
$$\Delta U = W + Q$$

#### Travail des forces de pression
$$W = - \int _{1}^{2} P_{\text{ext}}\, dV = - \int_{1}^{2} P \, dV = -P\Delta V  $$
Ainsi, 
$$\boxed{W = -P\Delta V} $$

#### Echange de chaleur
Comme c'est une transformation isobare on a :
$$\Delta H = Q$$
Par la seconde loi de joule : 
$$\Delta H = nC_{pm}\Delta T = nR \frac{\gamma}{\gamma-1}\Delta T$$
Ainsi, 
$$\boxed{Q = nR \frac{\gamma}{\gamma-1}\Delta T}$$

# III. Notion de calorimètre
## 1. Calorimètre
#### Définition
Un calorimètre est un instrument de mesure qui permet de mesurer des échanges de chaleur ou des capacités thermiques, des chaleurs latentes (ce qui permet de passer du solide au liquide), chaleur de réaction. 

#### Deux grands types de calorimètres
##### Vase Dewar
$$\text{Excal 4.}$$

##### Vase de Berthelot
$$\text{Excal 5.}$$

#### Définition
A chaque calorimètre correspond une certaine masse d'eau qu'il faudrait chauffer (ou refroidir) en même temps que le système étudié qu'on appelle : 
$$\text{Valeur en eau du calorimètre} : \mu$$
On la note $\mu$

On considère que le calorimètre se comporte comme une masse $\mu$ d'eau pour ce qui concerne les échanges thermiques. 

## 2. Determination de la capacité calorifique du calorimètre $C_{cal}$
1. Verser une masse $m_{0}$ d'eau à la température $T_{1}$ connue

Excal 6 

On utilise le $1^{\text{er}}$ principe avec : 
$$\Delta H = \Delta H_{eau} + \Delta H_{cal}$$
$$\Delta H_{eau} = n_{0}C_{eau}(T_{2}-T_{1})$$
$$\Delta H_{cal} = C_{cal}(T_{2}-T_{0})$$
C'est un calorimètre donc $Q = 0$
Donc, 
$$\Delta H = Q = 0$$
Alors,
$$m_{0}C_{eau}(T_{2}-T_{1})+C_{cal}(T_{2}-T_{0}) = 0$$
Ainsi, 
$$\boxed{C_{cal} = m_{0}C_{eau} \frac{T_{2}-T_{1}}{T_{0}-T_{2}}}$$è
Comme $C_{cal} = \mu C_{eau}$
$\mu = \frac{C_{cal}}{C_{eau}}$
Donc, la valeur en eau du calorimètre est : 
$$\boxed{\mu = m_{0} \frac{T_{2}-T_{1}}{T_{0}-T_{2}}}$$

## 3. Déterminer la capacité thermique massique d'un solide : $c$
Soit un solide de masse $M$
On verse une masse $m_{0}$ d'eau dans le calorimètre de même température que celui-CI
Excal 7.
Système : $\{ \text{eau},\text{calorimètre} \}$
Température initiale : $T_{0}$

Excacl 8

On utilise le $1^{\text{er}}$ principe avec $H$ : 
$$\Delta H = \Delta H_{eau} + \Delta H_{cal} + \Delta H_{solide}$$
$$\Delta H_{eau} = m_{0} c_{eau}(T_{f}-T_{0})$$
$$\Delta H_{cal} = C_{cal}(T_{f}-T_{0}) = \mu c_{eau}(T_{f}-T_{0})$$
$$\Delta H_{solide} = Mc(T_{f}-T_{1})$$

$$\Delta H = 0$$
Car $P = \text{cte}$

$$(m_{0}+ \mu)C_{eau}(T_{f}-T_{0})+Mc(T_{f}-T_{1}) = 0$$
Ainsi, 
$$\boxed{c = \frac{m_{0}+\mu}{M}C_{eau} \frac{T_{f}-T_{0}}{T_{1}-T_{f}}}$$

