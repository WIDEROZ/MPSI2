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
Le courant induit se déduit de $e$ par la loi d'Ohm. 

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

## 2. Inductance mutuelle
Soient $2$ spires parcourues par des courants $I_{1}$ et $I_{2}$
$$\boxed{\text{EXCAL 5}}$$

#### Définition
Le flux magnétique envoyé réciproquement par les spires l'une à travers l'autre vaut :
$$\begin{cases}
\phi_{1 \to 2} = MI_{1} & \text{ Flux de } \vec{B}_{1} \text{ dans la spire }2\\
\phi_{2 \to 1}= MI_{2}&\text{ Flux de } \vec{B}_{2} \text{ dans la spire }1
\end{cases}$$
$M$ est appelé inductance mutuelle, elle se mesure en Henry ($H$)
$M$ dépend des spires (géométrie, matériaux) et de leur orientation respective.

#### Application
Inductance mutuelle de deux solénoïdes : 
$$\boxed{\text{EXCAL 6}}$$
Exprimons les champs, $\vec{B}_{1}$ et $\vec{B}_{1}$ exprimés par ces solénoïdes 
$$\vec{B}_{1} = \mu_{0} n_{1}i_{1}\vec{e}_{z}$$
Avec : 
- $n_{1}$ : Nombres de spires par unité de longueur du premier solénoïde
- $i_{1}$ : intensité du premier solénoïde

$$\vec{B}_{2} = \mu_{0} n_{2}i_{2}\vec{e}_{z}$$

Exprimons $\phi_{1 \to 2}$ : le flux de $\vec{B}_{1}$ à travers le $2^{eme}$ solénoïde. 
$$\iint \vec{B}_{1} .d\vec{S}_{2} = \iint B_{1}dS_{2} = B_{1} \iint dS_{2} = B_{1}S_{2}$$
C'est le flux d'une unique spire alors, 
$$\phi_{1 \to 2} = B_{1}S_{2}N_{2} = \mu_{0}n_{1}N_{2}i_{1}S_{2}$$
Avec $N_{2}$ le nombre de spires. 
$$\phi_{1 \to 2} = Mi_{1}$$
Ainsi, 
$$M = \mu_{0}n_{1}N_{2}S_{2}$$
## 3. Couplage magnétique
EXCAL $7$
Le flux à travers chaque bobine est :
$$\begin{cases}
\phi_{1} = \phi_{L_{1}} + \phi_{ 2 \to 1} \\
\phi_{2} = \phi_{L_{2}} + \phi_{1 \to2}
\end{cases}$$
Par la loi de Faraday : 
$$\begin{cases}
\phi_{1} = L_{1}i_{1}+Mi_{2} \\
\phi_{2} = L_{2}i_{2} + Mi_{1}
\end{cases}$$
Alors, 
$$\begin{cases}
e_{1} = - \frac{d\phi_{1}}{dt} = -L_{1}\frac{di_{1}}{dt}-M \frac{di_{1}}{dt} \\
e_{2} = - \frac{d\phi_{2}}{dt} = -L_{2}\frac{di_{2}}{dt}-M \frac{di_{2}}{dt} \\
\end{cases}$$
### 4. Aspect energétiques
$$\boxed{\text{EXCAL 8}}$$
Ces circuits sont équivalents
On fait une loi des mailles dans chaque circuit : 
$$\begin{cases}
E_{1}-R_{1}i_{1}+e_{1}=0 \\
E_{2}-R_{2}i_{2}+e_{2} = 0
\end{cases}$$

$$\begin{cases}
E_{1} = R_{1}i_{1} + L_{1} \frac{di_{1}}{dt} + M \frac{di_{2}}{dt} \\
E_{2} = R_{2}i_{2} + L_{2} \frac{di_{2}}{dt} + M \frac{di_{1}}{dt}
\end{cases}$$
$$\begin{cases}
E_{1}i_{1} = R_{1}i^{2}_{1} + L_{1} i_{1}\frac{di_{1}}{dt} + M i_{1}\frac{di_{2}}{dt} \\
E_{2}i_{2} = R_{2}i^{2}_{2} + L_{2} i_{2}\frac{di_{2}}{dt} + M i_{2}\frac{di_{1}}{dt}
\end{cases}$$
Alors, 
$$E_{1}i_{1}+ E_{2}i_{2} = R_{1}i_{1}^{2} + R_{2}i_{2}^{2} + \frac{d}{dt}\left( \frac{1}{2}L_{1}i_{1}^{2} + \frac{1}{2}L_{2}i_{2}^{2} \right)+M \frac{di_{1}i_{2}}{dt}$$
Donc, 
$$\mathcal{P}_{gen} = \mathcal{P}_{joule} + \mathcal{P}_{mag} + \mathcal{P}_{couplage}$$
Avec : 
$$\begin{cases}
\mathcal{P}_{gen} = E_{1}i_{1} + E_{2}i_{2} \\
\mathcal{P}_{joule} = R_{1}i_{1}^{2} + R_{2}i_{2}^{2} \\
\mathcal{P}_{mag} = \frac{dE_{mag}}{dt} = \frac{d}{dt}\left( \frac{1}{2}L_{1}i_{1}^{2} +\frac{1}{2}L_{2}i_{2}^{2}\right) \\
\mathcal{P}_{couplage} = \frac{d}{dt}(Mi_{1}i_{2})
\end{cases}$$

#### Application
- On suppose que $R_{1} = 0$ et $R_{2} =0$
- On court-circuite le secondaire

$$\boxed{\text{EXCAL 9}}$$
$$\begin{cases}
E_{1} = e_{1} = -L_{1} \frac{di_{1}}{dt} - L \frac{di_{2}}{dt} \\
E_{2} = 0 = e_{2} = -L_{2} \frac{di_{2}}{dt} - M \frac{di_{1}}{dt}
\end{cases}$$
Alors, 
$$\frac{di_{2}}{dt} = - \frac{M}{L_{2}} \frac{di_{1}}{dt}$$
EXCAL 10

Déterminer la relation entre $E_{1}$ et $\frac{di_{1}}{dt}$
On remplace $\frac{di_{2}}{dt}$ dans la première équation. 
$$E_{1} = -L_{1} \frac{di_{1}}{dt} + \frac{M^{2}}{L_{2}} \frac{di_{1}}{dt}$$
$$E_{1} = \left( \frac{M^{2}}{L_{2}} - L_{1} \right) \frac{di_{1}}{dt} = - L_{eq} \frac{di_{1}}{dt}$$
avec : 
$$L_{eq} = L_{1} - \frac{M^{2}}{L_{2}} < L_{1}$$
Donc, on se retrouve avec un circuit primaire dont la bobine a une inductance $L_{eq}$ plus faible que l'inductance propre $L_{1}$ de plus $L_{eq} > 0$
Ainsi, 
$$M < \sqrt{ L_{1}L_{2} }$$

## 5. Transformateur de tension
Le but est de changer l'amplitude de la tension par exemple : $220\, V \to 12\, V$ pour charger un téléphone
EXCAL 11
Un noyau ferromagnétique pour canaliser les lignes de champ toutes les lignes de champs qui traversent le circuit primaire traversent aussi le secondaire.
De plus $\vec{B}$ est à flux conservatif
$\Leftrightarrow$ $\phi$ à travers une section du tore est le même partout. 

<u>Hypothèse :</u> 
La section des spires est identique dans le primaire et le secondaire. 
flux de $\vec{B}$ dans le circuit primaire : 
$$\phi_{1} = \phi N_{1}$$
et le flux de $\vec{B}$ à travers le secondaire :
$$\phi_{2} = \phi N_{2}$$
Ainsi, 
$$\phi_{2} = \frac{N_{2}}{N_{1}}\phi_{1}$$
par la loi de Faraday :
$$\begin{cases}
e_{1} = - \frac{d\phi_{1}}{dt} \\
e_{2} = -\frac{d\phi_{2}}{dt} = - \frac{N_{2}}{N_{1}} \frac{d\phi_{1}}{dt}
\end{cases}$$
Ainsi,
$$e_{2} = \frac{N_{2}}{N_{1}}e_{1}$$
Si on a : $e_{1} = 220 \, V$ il faut $\frac{N_{2}}{N_{1}} = \frac{12}{220} = \frac{3}{55}$

# III. Conversion de puissance mécanique à électrique
#### Hypothèse
Circuit mobile avec $\vec{v} \neq  \overrightarrow{0}$, champ $\vec{B}$ stationnaire $\vec{B} = \overrightarrow{\text{cte}}$

## 1. Rail de Laplace
$$\boxed{\text{EXCAL 12}}$$
On néglige les frottements

### a. Mise en équation
On a : 
$$\phi = \vec{B}.\vec{S}$$
Avec $\vec{S} = S\vec{e}_{z}$ et $S = lx$
Par la loi de faraday : 
$$e = - \frac{d\phi}{dt} = - \frac{dBlx}{dt} = - Blv$$
Le circuit équivalent : 
$$\boxed{\text{EXCAL 13}}$$
Par la loi des mailles :
$$e = Ri$$
Ainsi, 
$$-Blv = Ri$$

+ Système : Bare $CD$ en mouvement
+ Bilan des forces : 
  - $\vec{P}=m\vec{g} = -mg\vec{e}_{z}$ 
  - $\vec{R} = R\vec{e}_{z}$
  - $\vec{F}_{ext} = F_{ext}\vec{e}_{x}$
  - $\vec{F}_{L} = \int _{C}^{D} i d\vec{l} \wedge \vec{B}$ avec $d\vec{l} = dy \vec{e}_{y}$ 
    Faire les calculs : $\vec{F}_{L} = iBl\vec{e}_{x}$

On applique le PDF à la tige et on projette sur $O_{x}$ : 
$$m \frac{dv}{dt} = ilB+F_{ext}$$
Exprimons l'équation différentielle sur $v$
$$m \frac{dv}{dt} = - \frac{(Bl)^{2}}{R}v + F_{ext}$$
$$\frac{dv}{dt} + \frac{(Bl)^{2}}{mR} v = \frac{F_{ext}}{m}$$

Les solutions de cette équation sont : 
$$v(t) = A e^{ -\frac{t}{\tau} } + \frac{F_{ext}}{m}\tau$$
avec 
$$\tau = \frac{mR}{(Bl)^{2}}$$
$v(0) = 0= A + \frac{F_{ext}}{m}\tau$
Alors, 
$$v (t) = \frac{F_{ext}}{m}\left( 1-e^{ -\frac{t}{\tau} } \right)$$
$$\text{EXCAL 14}$$

$\tau$ est le temps du point d'intersection entre la tangente à l'origine et l'asymptote à l'infini. 
En déduire le courant $i(t)$ dans le circuit. 
Par l'équation électrique : 
$$i = -\frac{Bl}{R}v$$
Donc, 
$$i(t) = \frac{F_{ext}}{m} \times \frac{m}{Bl} \left( 1- e^{ - \frac{t}{\tau} } \right)$$
Ainnis, 
$$i(t) = \frac{F_{ext}}{Bl}\left( 1-e^{ -\frac{t}{\tau} } \right)$$
En régime permanent : 
$$i_{lim} = -\frac{F_{ext}}{Bl}$$
Donc, 
$$F_{ext} + Bli_{lim} = 0$$
La force de Laplace compense la force extérieur

### b. Bilan énergétique
- Circuit électrique : $ei = Ri^{2}$, $-Blvi = Ri^{2}$

Système mécanique :
$$\frac{dE_{c}}{dt} = \mathcal{P}_{F_{tot}}$$
$$\frac{dE_{c}}{dt} = \vec{F}_{L}.\vec{v} + \vec{F}_{ext} . \vec{v} = ilvB + \vec{F}_{ext}.\vec{v}$$
Ainsi, 
$$F_{ext}.v = \frac{dE_{c}}{dt} + Ri^{2}$$
La puissance totale fournie au système permet d'augmenter l'énergie cinétique et est dissipé par effet Joule en Régime permanent. 
$$\mathcal{P}_{ext} = F_{ext}v_{lim}=Ri^{2}$$

## 2. Freinage électromagnétique
à $t = t_{0}$ on arrête la force extérieure
Si on fait la même étude avec $F_{ext} = 0$, 
$$\frac{dv}{dt} + \frac{v}{\tau} = 0$$
$$v = A'e^{ - \frac{t}{\tau} }$$
$$v_{0} = A'$$
Alors, 
$$v(t) = v_{0}e^{ -\frac{t}{\tau} }$$
On a une décroissance exponentielle de la vitesse de temps caractéristique $\tau \propto m$

# RATTRAPER

## 3. Spire rectangulaire en rotation dans un champ $\vec{B}$ uniforme et constant
$$\boxed{\text{EXCAL 15}}$$
#### Ecrire les equations électriques et mécaniques
$$\phi = \iint_{\text{spire}} \vec{B}.d\vec{S} = \iint Bab (\vec{e}_{x}.\vec{e}_{x'})$$
$$\phi = Bab \cos(\theta)$$
$\theta$ qui dépend du tepms
$$\frac{d\phi}{dt} = -abB \sin(\theta) \dot{\theta}=-e$$
$$\boxed{\text{EXCAL 16}}$$
Par la loi des mailles
$$RI = ab\sin(\theta)B \dot{\theta}$$
On fait un TMC à la spire par rapport à $O_{z}$
$$\frac{d\sigma_{O_{z}}}{dt} = \mathcal{M}_{O_{z}}$$

$$\mathcal{M}_{O_{z}} = \vec{\Gamma}.\vec{e}_{z} +\Gamma_{ext} = \vec{M} \wedge \vec{B}.\vec{e}_{z} +\Gamma_{ext} = I\vec{S} \wedge \vec{B}.\vec{e}_{z}+\Gamma_{ext} $$
$$\begin{cases}
\vec{S} = ab\vec{e}_{x'} \\
\vec{B} = B\vec{e}_{x}
\end{cases}$$
$$\mathcal{M}_{O_{z}} = -Iab B \sin(\theta) +\Gamma_{ext}$$
Alors, le TMC s'écrit :
$$J_{O_{z}} \ddot{\theta} = -Iab B \sin(\theta) +\Gamma_{ext}$$
#### Equation différentielle sur $\theta$
On remplace $I$ :
$$J_{O_{z}} \ddot{\theta} = - \frac{ab\sin(\theta)B\dot{\theta}}{R} \times abB\sin(\theta) + \Gamma_{ext}$$
Ainsi, 
$$\ddot{\theta} + \frac{(abB\sin(\theta))^{2}}{J_{O_{z}}R}\dot{\theta} = \frac{\Gamma_{ext}}{J_{O_{z}}}$$

#### En régime permanent, déterminer $I$
En régime permanent : 
$$\dot{\theta} = \omega = \text{cte}$$
Alors, 
$$\ddot{\theta} = 0$$

$$\omega = \frac{\Gamma_{ext}R}{(abB\sin(\theta))^{2}}$$
