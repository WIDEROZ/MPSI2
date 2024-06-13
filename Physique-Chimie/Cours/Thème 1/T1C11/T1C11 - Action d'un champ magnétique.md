Soit $\overrightarrow{B}$ un champ magnétique. 

# I. Force de Laplace
EXCAL 1
## 1. Expression de la Force de Laplace
EXCAL 2
La force de Laplace $d\vec{F}$ qui s'applique à longeur $dl$ du fil est : 
$$\boxed{d\vec{F} = I \, d\vec{l} \wedge \vec{B}}$$
avec $d\vec{l} = dl \, \vec{u}$, $\vec{u}$ le vecteur tangent au fil au point considéré et dans le sens du courant. 

## 2. Résultante de la force de Laplace
Pour un fil conducteur de longueur $L$ parcouru par un courant $I$ et plongé dans un champ $\vec{B}$. 
Avec $L$ la longueur du fil, 
$$\boxed{\vec{F} = \int_{L} d\vec{F} = \int_{L}I\, d\vec{l} \wedge \vec{B}}$$

#### Exemple
$$\boxed{\text{EXCAL 3}}$$
On cherche la force de Laplace qui s'applique au fil entre $P$ et $Q$
$$\vec{F} = \int _{L} I \, d\vec{l} \wedge \vec{B} $$
Or, $d\vec{l} = dl \, \vec{e}_{y} = dy \, \vec{e}_{y}$
$\vec{B} = B\vec{e}_{z}$
Donc, 
$$d\vec{l} \wedge \vec{B} = dy \vec{e}_{z} \wedge B \vec{e}_{z} = dy B(\vec{e}_{y} \wedge \vec{e}_{z}) = dyB\vec{e}_{x}$$
Alors,
Par la force de Laplace : 
$$\vec{F} = \int _{P}^{Q} I \, dy \, B \,  \vec{e}_{x} = IB\vec{e}_{x} \int_{P}^{Q} \, dy = IB\vec{e}_{x}PQ$$
$PQ$ : La longueur du segment $PQ$

## 3. La puissance de la force de Laplace
On considère un rail rectiligne sur lequel peut glisser un fil conducteur EXCAL 3
$$P = \vec{F}.\vec{v} = IBhv$$

# II. Action du champ magnétique sur un aimant
## 1. Moment de Laplace
#### Propriété
Soit un moment dipolaire $\vec{M}$ plongé dans un champ magnétique uniforme $\vec{B}$. 

Le champ $\vec{B}$ exerce un couple sur $\vec{M}$ du moment 
$$\boxed{\vec{\Gamma} = \vec{M} \wedge \vec{B}}$$
C'est le moment de Laplace. 
Ainsi, la position d'équilibre du moment magnétique $\vec{M}$ correspond à l'orientation alignée avec $\vec{B}$. 

## 2. Puissance du couple de Laplace
$$\boxed{\mathcal{P} = \vec{\Gamma} . \vec{\omega} = (\vec{M} \wedge \vec{B}) . \vec{\omega}}$$
Avec 
- $\vec{\Gamma}$ : Le moment de Laplace
- $\vec{\omega}$ : Vecteur vitesse de rotation de l'aimant ou de la spire
- $\vec{M}$ : Moment dipolaire
- $\vec{B}$ : Champ extérieur

# III. Applications
## 1. Rail de Laplace
$$\boxed{\text{EXCAL 4}}$$
Cicuit horizontal fermé par une tige conductrice $PQ$ qui peut glisser sans frottement sur les rails le long de $O_{x}$ :
$a$ : la longueur $PQ$
$m$ : la masse de la tige
La tige est parcourue par une intensité $I$ et tout le circuit est plongé dans un champ $\vec{B} = B \, \vec{e}_{z}$ uniforme et constant. 

#### Déterminer la vitesse $\vec{v}(t)$ de la tige
- Système : Tige
- Référentiel terrestre supposé galiléen 
- Bilan des forces : 
  + $\vec{P} = m\vec{g} = - mg\vec{e}_{z}$
  + $\vec{R} = -\vec{P}$
  + $\vec{F}_{Laplace} =  \int_{p}^{Q}I\, d\vec{l} \wedge \vec{B}$

On applique le PFD, à la tige : 
$$m \frac{d\vec{v}}{dt} = \vec{P}+\vec{R}+\vec{F}_{Laplace} = \vec{F}_{Laplace}$$
On projette sur l'axe $O_{x}$ : 
On pose : $\vec{v} = v\vec{e}_{x}$ (car le mvt ne se fait que sur $O_{x}$)
$$m \frac{dv}{dt} = \left( \int_{P}^{Q} Id\vec{l} \wedge\vec{B}   \right). \vec{e}_{x}$$
On est dans l'ARQS et $\vec{B}$ est uniforme alors
$$m \frac{dv}{dt} =I \left( \int_{P}^{Q} d\vec{l} \wedge \vec{B}  \right).\vec{e}_{x} = \left( I\left( \int_{P}^{Q} dy \, \vec{e}_{y}\right) \wedge \vec{B}  \right).\vec{e}_{x} = IaB$$
Alors, 
$$\frac{dv}{dt} = \frac{IaB}{m} = \text{cte}$$
Donc, on intègre
$$v(t) - v(0) = \frac{IaB}{m} t$$
Ainsi, 
$$\boxed{\vec{v}(t) = \left( \frac{IaB}{m}t + v(0) \right)\vec{e}_{x}}$$

## 2. Spire carré
$$\boxed{\text{EXCAL 5}}$$
La spire peut uniquement tourner sans frottement autour de l'axe $O_{z}$.
$J_{z}$ est le moment d'inertie 
On plonge la spire dans un champ magnétique : $\vec{B} = B \, \vec{e}_{x}$ uniformément contant. 

#### Montrer que la résultante des forces de Laplace sur la spire s'écrit comme la somme de $4$ intégrales
La longueur de la spire est : $MN + NP + PQ + QM$
$$\vec{F}_{spire} = \vec{F}_{MN} + \vec{F}_{NP} + \vec{F}_{PQ} + \vec{F}_{QM}$$

Comme on est dans l'ARQS et que $\vec{B}$ est uniforme et constant : 
$$\vec{F}_{MN} = IB \int_{M}^{N}d\vec{l}  \wedge \vec{e}_{x}$$
$$\vec{F}_{NP} = IB \int_{N}^{P}dz$$
$$\vec{F}_{PQ} = IB \int_{P}^{Q}d\vec{l}  \wedge \vec{e}_{x}$$
$$\vec{F}_{QM} = -IB \int_{Q}^{M}dz$$

#### Monter que les intégrales s'annulent 2 à 2
$$\vec{F}_{NP} + \vec{F}_{QM} = \overrightarrow{0}$$
avec les calculs faits avant 
$$\vec{F}_{MN} + \vec{F}_{QM} = I\left( \int _{M}^{N} d\vec{l}   \right) \wedge \vec{B} + I \left( \int _{P}^{Q} d\vec{l}   \right) \wedge \vec{B}$$
$$= I \left( \int _{M}^{N} d\vec{l}  \right) \wedge \vec{B} - I \left( \int _{M}^{N} d\vec{l}  \right) \wedge \vec{B} = \overrightarrow{0}$$
Donc,
$$\vec{F} = \overrightarrow{0}$$
La résultante des forces de Laplace est nulle : La spire subit un couple

#### Exprimer le moment $\vec{\Gamma}$ de Laplace sur la spire
$$\vec{\Gamma} = \vec{M} \wedge \vec{B} = IB\vec{S} \wedge \vec{e}_{x}$$
Avec
- $\vec{M} = I\vec{S}$
- $\vec{B} = B \vec{e}_{x}$

$\vec{S}$ étant orthogonal à la spire, de norme $a^{2}$ et de direction donnée par l'orientation du courant
Soit $\theta$ l'angle entre $\vec{e}_{x}$ et $\vec{S}$ exprimons $\vec{S}$ sur la base $O_{xy}$ : 
$$\vec{S} = a^{2}(-\cos (\theta)\vec{e}_{x} + \sin (\theta) \vec{e}_{y})$$
Donc, 
$$\vec{M} = Ia^{2}(-\cos \theta \vec{e}_{x} + \sin(\theta)\vec{e}_{y})$$
Donc, 
$$\boxed{\vec{\Gamma} = - Ia^{2}B\sin(\theta)\vec{e}_{z}}$$

#### Déterminer la vitesse de rotation de la spire
On applique le théorème du moment cinétique à la spire : 
$$\frac{d\sigma_{O_{z}}}{dt} = \mathcal{M}_{O_{z}}$$
Or :
- $\sigma_{Oz} = J_{z}\omega$
- $\mathcal{M}_{O_{z}} = \vec{\Gamma}.\vec{e}_{z} = -Ia^{2}\sin(\theta)$ 

$\theta$ dépend du temps $\omega = \frac{d\theta}{dt}$
$$J_{z} \frac{d\omega}{dt} = - Ia^{2}B\sin(\theta) = J_{z} \frac{d^{2}\theta}{dt^{2}}$$
Ainsi
$$\boxed{\frac{d^{2}}{dt^{2}} + \frac{Ia^{2}B}{J_{z}}\sin(\theta) = 0}$$
___
On fait l'approximation des petits angles : 
$$\frac{d^{2}}{dt^{2}} + \frac{Ia^{2}B}{J_{z}}\theta = 0$$
On pose :
$$\omega_{0} = \sqrt{ \frac{Ia^{2}B}{J_{z}} }$$
Alors, 
$$\theta(t) = c_{1}\cos(\omega_{0}t) +c_{1}\sin(\omega_{0}t)$$
avec $c_{1}, c_{2} \in \mathbb{R}$, 
Alors, 
$$\boxed{\omega(t) = -\omega_{0}c_{1}\sin(\omega_{0}t) + \omega_{0}c_{2}\cos(\omega_{0}t)}$$
En prenant les conditions initiales : 
$$\begin{rcases}
\omega(0) = \omega_{1} \\
\theta(0) = 0
\end{rcases} \Rightarrow \begin{cases}
c_{1}= 0 \\
c_{2}= \frac{\omega_{1}}{\omega_{0}}
\end{cases}$$
Ainsi, 
$$\boxed{\omega(t) = \omega_{1}\cos(\omega_{0}t)}$$

## 3. Aikylibre d'un ément
$$\boxed{\text{EXCAL 6}}$$
$O$ : centre de la boussole
Elle est plongée dans un champ uniforme $\vec{B} = B \vec{e}_{x}$
$\vec{m}$ peut uniquement tourner autour de $O_{z}$ sans frottement. 
On pose : $J$ le moment d'inertie par rapport à $O_{z}$ $M$ la masse de la boussole

#### Faire un bilan des actions mécaniques s’exercent sur la boussole
$$\begin{cases}
\vec{P} = m\vec{g} = - mg \vec{e}_{z} \\
\vec{R} = -\vec{P} \\
\vec{\Gamma} = \vec{m}\wedge \vec{B}
\end{cases}$$

#### Déterminer les positions d'équilibres et identifier lesquelles sont stables et lesquelles sont instables
On fait un TMC sur la boussole par rapport à $O_{z}$
$$\frac{d{\sigma_{O_{z}}}}{dt} = \vec{\Gamma}.\vec{e}_{z} + \overrightarrow{\mathcal{M}}_{\vec{P}} .\vec{e}_{z} + \overrightarrow{\mathcal{M}}_{\vec{R}}.{\vec{e}_{z}} = 0$$
Car $\vec{P}$ et $\vec{R}$ ne sont pas portés par $\vec{e}_{z}$
Alors, 
$$\frac{d\sigma_{O_{z}}}{dt} = \vec{\Gamma}.\vec{e}_{z} = 0$$
Donc on cherche les valeurs $\theta$ telles que : 
$$(\vec{m} \wedge \vec{B}).\vec{e}_{z} = 0$$
Alors,
$$\vec{m} = m(\cos (\theta) \vec{e}_{x} + \sin(\theta) \vec{e}_{z})$$
$$\begin{cases}
\vec{m} = m_{x}\vec{e}_{x} + m_{y}\vec{e}_{y} \\
m_{x} = \vec{m}.\vec{e}_{x} = m\cos(\theta) \\
m_{y} = \vec{m}.\vec{e}_{y} = m \sin(\theta)
\end{cases}$$

Donc, 
$$(\vec{m} \wedge \vec{B}) = mB(\cos(\theta)\vec{e}_{x} + \sin(\theta)\vec{e}_{y})\wedge\vec{e}_{x} = -mB\sin(\theta)\vec{e}_{z}$$
Ainsi, 
$$-mB\sin(\theta) = 0\Leftrightarrow \sin(\theta) = 0 \Leftrightarrow \theta = 0 \text{ ou } \theta = \pi$$
