# I. Le moment d'une force
## 1. Par rapport à un point fixe
#### Définition
Soit $\vec{F}$ la force qui s'exerce sur un point materiel $M$ de masse $m$.
Excal 1
On appelle moment de $\vec{F}$ par rapport au point $O$ fixe le vecteur $$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \overrightarrow{\mathcal{M}}(\vec{F}) = \overrightarrow{OM} \wedge \vec{F}$$
$||\overrightarrow{\mathcal{M}}_{\vec{F}/O}||$ se mesure en $\text{N.m}^{-1}$.

#### Exemple : Pendule simple
Excal 2
Moment du poids par rapport a $O$ :
$$\overrightarrow{\mathcal{M}_{\vec{P}/O}} = \overrightarrow{OM} \wedge \vec{P} = (l\vec{e}_{l}) \wedge mg(\cos (\theta) \vec{e}_{l} - \sin (\theta) \vec{e}_{\theta})$$
$$\overrightarrow{\mathcal{M}_{\vec{P}/O}} = -lmg\sin (\theta) (-1) \times\vec{e}_{y} = lmg \sin (\theta) \vec{e}_{y}$$

$$\overrightarrow{\mathcal{M}}_{\vec{T}/O} = l\vec{e}_{r} \wedge (-T\vec{e}_{r}) = \vec{0}$$


## 2. Changement du point fixe
Le moment de la force $\vec{F}$ par rapport à $O$ fixe. : 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O} = \overrightarrow{OM} \wedge \vec{F}$$

Le moment de $\vec{F}$ par rapport à $O'$ fixe :
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} = \overrightarrow{O'M} \wedge \vec{F}$$

Relation entre les deux moments : 
$$\overrightarrow{O'M} = \overrightarrow{O'O} + \overrightarrow{OM}$$

$$\mathcal{M}_{\vec{F}/O'} = \overrightarrow{OO} \wedge \vec{F} + \overrightarrow{OM} \wedge \vec{F}$$

Donc, 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} = \overrightarrow{O'O} \wedge \vec{F} + \overrightarrow{\mathcal{M}}_{\vec{F}/O}$$


## 3. Moment par rapport à un axe
#### Définition 
Excla 3
L'axe $\Delta$ est un <u>axe orienté</u> lorsqu'il est muni d'un vecteur unitaire $\vec{u}$ on définit $\Delta$ par un point et ce vecteur $\Delta(O, \vec{u})$

Soit $M$ un point subissant la force $\vec{F}$ 
Le moment de $\vec{F}$ par rapport à l'axe orienté $\Delta$ est : 
$$\mathcal{M}_{\vec{F}/\Delta} = \overrightarrow{\mathcal{M}}_{\vec{F}/O} . \vec{u}$$
avec $O$ un point fixe de $\Delta$
On réécrit :
$$\overrightarrow{\mathcal{M}}_{\vec{F}/\Delta} = (\overrightarrow{OM} \wedge \vec{F}). \vec{u}$$
Ce moment est une grandeur scalaire. 

Le moment de $\vec{F}$ par rapport à $\Delta$ ne dépend pas du choix du point $O$ de $\Delta$. 

Soit $O'$ un autre point fixe de $\Delta$

$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} = \overrightarrow{O'O} \wedge \vec{F} + \overrightarrow{\mathcal{M}}_{\vec{F}/O}$$

$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'} . \vec{u} = (\overrightarrow{O'O} \wedge \vec{F}).\vec{u} + \overrightarrow{\mathcal{M}}_{\vec{F}/O}.\vec{u}$$

Ecal 4

$\overrightarrow{O'O} = - OO' \vec{u}$, alors $\overrightarrow{O'O} \wedge \vec{F}$ est perpendiculaire à $\vec{u}$
Donc, 
$$(\overrightarrow{O'O} \wedge \vec{F}).\vec{u} = \vec{0} \Rightarrow \overrightarrow{\mathcal{M}}_{\vec{F}/O'}$$

Ainsi, 
$$\overrightarrow{\mathcal{M}}_{\vec{F}/O'}.\vec{u} = \overrightarrow{\mathcal{M}}_{\vec{F}/O}.\vec{u}$$


Si la force $\vec{F}$ est colinéaire à l'axe $\Delta$
Excalibur 5
$$\mathcal{M}_{\vec{F}/\Delta} = 0$$

#### Exemple
Excalibur 6.
1. Determiner le moment de $P$ par rapport à $O$
2. Determiner le moment de $\vec{P}$ par rapport à $O_{z}$ EZ

1. 
   $$\overrightarrow{\mathcal{M}}_{\vec{P}/O} = \overrightarrow{OM} \wedge \vec{P} = (x\vec{e}_{x}+y\vec{e}_{y}+z\vec{e}_{z}) \wedge (-mg\vec{e}_{z})$$
   Ainsi, 
   $$\overrightarrow{\mathcal{M}}_{\vec{P}/O} = mgx\vec{e}_{y}-mgy\vec{e}_{x}$$


## 4. Le bras de levier
Excla 7 IMPORTANT
Droite d'action de $\vec{F}$ important

à priori $\Delta$ et $\vec{F}$ ne sont pas dans un même plan on note $H$ le projeté de $O$ sur la droite d'action de $\vec{F}$, alors $\overrightarrow{OH}$ est perpendiculaire à $\vec{u}$ et $\vec{F}$
On appelle $d = OH$

Calculons le moment de $\vec{F}$ par rapport à $\Delta$ : 
$$\mathcal{M}_{\vec{F}/\Delta} = (\overrightarrow{OM} \wedge \vec{F}).\vec{u}$$
$\overrightarrow{OM} = \overrightarrow{OH} + \overrightarrow{HM}$
Alors, 
$$\overrightarrow{OM} \wedge \vec{F} = \overrightarrow{OH} \wedge \vec{F} + \overrightarrow{HM} \wedge \vec{F}$$
or $\overrightarrow{HM} \wedge \vec{F} = \vec{0}$ car ils sont colinéaires

$$\overrightarrow{OM} \wedge \vec{F} = \pm dF\vec{n}$$
$\vec{n}$ le vecteur normal à $\overrightarrow{OH}$ et $\vec{F}$

___

#### Définition
$d = OH$ est le bras de levier de $\Delta$ et $\vec{F}$ c'est la distance entre la droite d'action de $\vec{F}$ et le point $O$ de $\Delta$ alors le moment de $\vec{F}$ par rapport a $\Delta$ est : 
$$\mathcal{M}_{\vec{F}/\Delta} = \pm dF$$


#### Méthode
1. Faire un schema avec l'axe $\Delta$ la force $\vec{F}$ se droite d'action et le plan $\pi$ perpendiculaire (c orthogonal mais bon...) à $\vec{F}$ qui contient $M$.
2. Trouver le bras de levier $d$ : Projeter $\vec{F}$ sur le plan $\pi$. Avec $d$ la distance entre $O$ et la projection de $\vec{F}$ sur $\pi$.
3. Determiner la valeur absolue du moment : 
   $$|\mathcal{M}_{\vec{F}/\Delta}| = dF$$
4. Determiner le signe de $\mathcal{M}_{\vec{F}/\Delta}$
   - Si $\vec{F}$ tend a faire tourner $M$ dans le sens direct par rapport à delta : $\mathcal{M}_{\vec{F}/\Delta} = + dF$
   - Sinon, $\mathcal{M}_{\vec{F}/\Delta} = -dF$

#### Exemple : Le pendule simple
Excal 8
Determiner $\mathcal{M}_{\vec{P}/O_{y}}$ en utilisant le bras de levier. 
$d = l \sin(\theta)$
$$\mathcal{M}_{\vec{P}/O_{y}} = \pm l \sin(\theta)mg$$
Mais $Oy$ est orienté dans le mur donc, 
$$\mathcal{M}_{\vec{P}/O_{y}} = + l\sin (\theta)mg$$


## 5. 