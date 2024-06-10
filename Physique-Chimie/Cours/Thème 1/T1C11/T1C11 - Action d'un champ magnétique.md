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
#### Propriété
Soit un moment dipolaire $\vec{M}$ plongé dans un champ magnétique uniforme $\vec{B}$. 

Le champ $\vec{B}$ exerce un couple sur $\vec{M}$ du moment 
$$\boxed{\vec{\Gamma} = \vec{M} \wedge \vec{B}}$$
C'est le moment de Laplace. 
Ainsi, la position d'équilibre du moment magnétique $\vec{M}$ correspond à l'orientation alignée avec $\vec{B}$. 
