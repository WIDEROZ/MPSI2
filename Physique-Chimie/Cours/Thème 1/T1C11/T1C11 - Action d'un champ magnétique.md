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
Donc, 
$$v(t) - v(0) = \frac{IaB}{m} t$$
Ainsi, 
$$\vec{v}(t) = \left( \frac{IaB}{m} \right)$$