# I. Les détentes de Joule
## 1. Détente de Joule, Gay-Lussac
#### Définition
La détente de Joule, Gay-Lussac est la détente adiabatique d'un fluide dans le vide. 
(La détente est une augmentation de volume ou une diminution de pression)

Excal 1.

#### Propriété
Au cours d'une détente de Joule, Guy - Lussac l'énergie interne $U$ du fluide se conserve $\boxed{\Delta U = 0}$

Démonstration : 
$$\Delta U = Q + W$$
Système : $\{ V_{1} + V_{2} \}$
La détente est adiabatique alors $Q = 0$, 
Comme c'est un système indéformable : 
$$\Delta U = W = \int  -p \, dV = 0$$
Car le volume total est constant
Ainsi , $\boxed{\Delta U = 0}$

## 2. Premiere loi de Joule
#### Propriété
L'énergie interne d'un gaz parfait ne dépend que de sa température : 
$$\boxed{\Delta U = C_{V}\Delta T}$$
$$\boxed{C_{v} = \frac{dU}{dt}}$$

## 3. La détente de Joule - Thomson ou Joule - Kelvin
#### Définition
La détente de Joule - Thomson est la détente d'un fluide en écoulement lent et stationnaire et adiabatique à travers un obstacle sous l'effet des seules forces de pression. 
Excalidraw 2

$v_{2} \neq v_{1}$ mais comme c'est stationnaire, $v_{1} = \text{cte}$ et $v_{2} = \text{cte}$
L'écoulement est lent donc on néglige l'énergie cinétique devant l'énergie interne

Un rétrécissement peut jouer le role de l'obstacle. 

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
