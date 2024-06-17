# I. Les lois de l'induction
## 1. Expérience de Faraday
$$\boxed{\text{EXCAL 1}}$$
Quand on introduit l'aimant dans la bobine, un courant apparaît quand on laisse l'aimant à l'intérieur de la bobine, le courant est nul. 

Quand on l'enlève, un courant apparaît et est de signe opposé. 

Si on inverse les pôles de l'aimant le courant est opposé.

La norme du courant qui apparaît est d'autant plus grande que le déplacement de l'aimant se fait plus vite. 

## 2. Loi de Faraday
On considère un circuit électrique formé d'une spire de surface $S$. 
On place ce circuit dans un champ magnétique $\vec{B}$
$$\boxed{\text{EXCAL 2}}$$

#### Définition
Les variations du flux de $\vec{B}$ à travers la spire provoque l'apparition d'un courant induit. La courant correspond au courant créé par un générateur de force électromotrice : 
$$\boxed{e = -\frac{d\phi}{dt}}$$
en $V$
ou
$$\phi = \int_{S} \vec{B}.d\vec{s}  $$
$e$ est la fem induite elle est comptée positivement dans le même sens que le courant (générateur). 
Le courant induit se déduis de $e$ par la loi d'Ohm. 

## 3. Loi de Lenz
#### Propriété
Les phénomènes d'induction s'opposent par leur effets aux causes qui les ont créés. 

___
$$\boxed{\text{EXCAL 3}}$$

Quand l'aimant avance, la spire ressort un champ de plus en plus fort.
Un courant $i$ créé à son tour un champ magnétique $\vec{B}_{\text{spire}}$ qui va s'opposer à $\vec{B}_{\text{ext}}$ et donc, $\vec{B}_{\text{spire}}$ va avoir tendance à repousser l'aimant. 

# II. Courant fixe dans un champ variable
## 1. Auto-induction
### a. Définition
#### Définition
On appelle champ propre, le champ créé par le circuit lui même et champ extérieur le champ imposé par un dispositif indépendant au circuit. $\vec{B}_{ext}$

On appelle flux propre $\phi_{p}$ le flux du champ propre à travers le circuit. 
On a :
$$\phi_{p} = Li$$
Avec :
- $i$ : intensité du courant du circuit (en $A$)
- $L$ : Coefficient d'auto-inductance (ou inductance propre) du circuit. (en $H$)

#### Remarque
$i$ et $\phi_{p}$ sont de même signe. 

$L$ dépend du nombre de spires, de la taille des spires, de la géométrie des spires, du matériau. 

#### Application
Exprimons l'inductance propre d'une bobine formé de $N$ spires circulaires parcourues par un courant $I$. 
Calculons le champ propre $\vec{B}_{p}$ créé par la bobine. 
$$\vec{B}_{p} = \mu_{0} \frac{NI}{l} \vec{e}_{z}$$
$l$ la longueur de la bobine. 
Calculons $\phi_{p}$ : 
$$\phi_{p} = \iint \vec{B}_{p} . d\vec{S} = B_{p} \iint dS = B_{p}S$$
Alors, 
$$\phi_{p} = \mu_{0} \frac{NIS}{l} = \mu_{0} \frac{NS}{l} \times I = LI$$

## b. Force électromotrice
Si le courant électrique du circuit varie dans le temps alors $\vec{B}_{p}$ et $\phi_{p}$ dépendent du temps. 
D'après la loi de Faraday, il y a l'apparition d'une force électromotrice :
$$e = - \frac{d\phi}{dt} = -L \frac{dI}{dt}$$

#### Remarque
La bobine s'oppose aux variations de courants qui la traverse. 

### c. Aspect énergétique
On considère circuit $RL$ : 
$$\boxed{\text{EXCAL 4}}$$
On fait une loi des mailles : 
$$E = u_{L} + u_{R} = L \frac{dI}{dt} + RI$$
Alors, 
$$EI = LI \frac{dI}{dt} + RI^{2}$$
$$EI = \frac{d}{dt}\left( \frac{1}{2} LI^{2} \right) + RI^{2}$$
On intègre par rapport au temps : 
$$\int _{0}^{t} EI \, dt = \left[ \frac{1}{2}LI^{2} \right]_{0}^{t} + \int_{0}^{t} RI^{2} \, dt  $$

#### Définition
L'énergie potentielle magnétique dans la bobine est : 
$$E_{p_{mag}} = \frac{1}{2} LI^{2}$$

