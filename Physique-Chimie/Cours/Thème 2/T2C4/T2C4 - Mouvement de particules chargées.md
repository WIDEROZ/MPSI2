# I. Phénomènes magnétiques et électriques
## 1. Charge électrique
#### Propriété
- La charge électrique d'un système isolé se conserve
- Elle est quantifiée, c'est toujours un nombre entier de fois la charge élémentaire qui vaut : 
  $$e = 1,6.10^{-19}C$$
  Son unité est le coulomb $C$ elle peut être positive, négative ou nulle.

## 2. Champ électrique $\vec{E}$
Excal 1
$$\vec{F}_{1\to2} = \frac{q_{1}q_{2}}{4\pi \epsilon_{0}} \frac{\overrightarrow{M_{1}M_{2}}}{(M_{1}M_{2})^{3}}$$
$$\vec{F}_{1\to2} = q_{2}\times \left( \frac{q_{1}\overrightarrow{M_{1}M_{2}}}{4\pi \epsilon_{0}(M_{1}M_{2})^{3}} \right)$$
La parenthèse dépend de $q_{1}$ et de la distance $M_{1}M_{2}$


#### Définition
On appelle champ électrique $\vec{E}$ créé par la charge $q$ à la distance $r$
$$\vec{E} = \frac{q}{4\pi \epsilon_{0}r^{2}} \vec{u}_{r}$$
Excal 2
Alors la force que subit une charge $q_{2}$ vaut : 
$$\vec{F} = q_{2}\vec{E}$$
$||\vec{E}||$ s'exprime en $V.m^{-1}$


## 3. Champ magnétique $\vec{B}$
#### Définition
Le champ magnétique este une grandeur physique vectorielle. Il peut être créé par des courants électrique des charges en mouvement et il existe des aimants permanents. Il s'exprime en Tela T. 

# II. La force de Lorentz
## 1. Expression
#### Définition
Soit un point materiel $M$ de charge $q$ et de vitesse $\vec{v}$ dans un référentiel galiléen. En présence d'un champ $\vec{E}$ et d'un champ $\vec{B}$ le point $M$ subit la force de Lorentz : 
$$\vec{F} = q\vec{E} + q\vec{v} \wedge \vec{B}$$
ou 
$q\vec{E} = \vec{F}_{elec}$ et $q\vec{v} \wedge \vec{B} = \vec{F}_{mag}$

## 2. Ordres de grandeurs et conséquences
- Champ électrique
Un champ électrique intense est de l'ordre de $10^{6} V.m^{-1}$, c'est le champ disruptif de l'air. 
Les champs électriques créés par les antennes relais sont de l'ordre de $\sim 10 V.m^{-1}$ 
- Champ magnétique
Champ magnétique terrestre : $B_{T} \sim 5,10^{-5}T$
Champ magnétique des aimants usuels : $B \sim 0.1T$
Appareil à IRM : $B \sim 30 T$
LHC (Accélérateur de particules à Genève) : $10 T$
- $F_{elec}$ et $F_{mag}$
Pour un électron a la vitesse $v = 3.10^{7}$ m.s$^{-1}$
$B = 0.1 \space T$ et $F_{mag} \space \alpha \space |qvB|$
Alors, 
$$F_{mag} \space \alpha \space 1,6.10^{-19}\times 3.10^{7}\times 0.1$$
$$F_{mag} \space \alpha \space 5.10^{-13}N$$
Cherchons le champ $E$ qui exerce une force de même grandeur :
$$F_{elec} \approx F_{mag}$$$$|qE| \approx F_{mag}$$
$$E = \frac{|F_{mag}}{q}|$$
$$E \approx \frac{5.10^{-13}}{1,6.10^{-19}}$$
$$E \approx 10^{6} \text{ V.m}^{-1}$$

Un champ magnétique peu intense est aussi efficace sur des particules rapides q'un champ électrique très intense. 
Comparons le poid et la forcce de Lorentz
Soit un proton $m_{p} = 10^{-27}$ kg
Poids : $P_{p} = m_{p}g = 10^{-26}$ N
$P \ll F_{mag}$
Vitesse limite telle que $P_{p} \approx F_{mag}$
$P_{p} \approx qvB$ avec $B = 0.1$ T
$$v=\frac{P_{p}}{qB} = \frac{10^{-26}}{1,6.10^{-19}\times 0.1} \approx 10^{-6} \text{ m.s}^{-1}$$
Vitesse très faible

## 3. Rôle de la composante électrique
#### Propriété
La force électrique $\vec{F}_{elec} = q\vec{E}$ peut dévier, accélérer ou freiner les particules chargées. Le champ électrique permet de modifier l'énergie cinétique de la particule. 

#### Propriété
Si $\vec{E}$ est constant et uniforme alors la force électrique $\vec{F}_{elec} = q\vec{E}$ est conservative et elle dérive du potentiel : 
$$E_{p} = qV$$
avec $V$ le potentiel électrique. 

Démonstration : 
excal 3
$$\vec{F}_{elec} = q\vec{E} = qE\vec{e}_{z}$$
Travail élémentaire : 
$$\partial W = \vec{F}_{elec}.d\vec{r}$$
or 
$$d\vec{r} = dx\vec{e}_{x}+ dy\vec{e}_{y} + dz\vec{e}_{z}$$
et 
$$\vec{F}_{elec} = qE\vec{e}_{z}$$
$$\partial W= qEdz$$
$q$ et $E$ des constantes
$$\partial W= d(qEz) = -d(-qEz)$$
On a $\partial W = -dE_{p}$
avec $E_{p} = - q E_{z} + \text{cte}$
$\Leftrightarrow E_{p} = q(-Ez+\text{cte})$
$$V = Ez+\text{cte}$$

## 4. Role de la composante magnétique
$$\vec{F}_{mag} = q\vec{v}\wedge\vec{B}$$
est toujours perpendiculaire a $\vec{v}$
Donc, 
$$P_{mag} = \vec{F}_{mag}.\vec{v} = 0$$
Par le théorème de l'énergie cinétique : 
$$\Delta E_{c} = 0 \Rightarrow v = \text{cte}$$
La norme de la vitesse est cte (non pas le vecteur)

#### Propriété
La force magnétique ne travaille pas : 
$$P_{mag} = 0 \text{ et } W_{mag} = 0$$
Alors la norme de la vitesse reste constante mais $F_{mag}$ va faire varier la direction du mouvement. 
Un champ magnétique permet de dévier les particules pour les guider ou les confiner dans une partie de l'espace dans fournir d’énergie cinétique. 

### 5. Produit vectoriel
#### Définition
Le produit vectoriel des vecteurs $\vec{u}$ et $\vec{v}$ est noté $\vec{u} \wedge \vec{v}$, est le vecteur tel que : 
- $||\vec{u} \wedge \vec{v}|| = ||\vec{u}||\space||\vec{v}|| \sin \theta$
- Sa direction est la normale commune aux vecteur $\vec{u}$ et $\vec{v}$ 
- Son sens est donné par la règle de la main droite : 
  $\vec{u}$ sur le pouce
  $\vec{v}$ sur l'index
  Le majeur pointe dans le sens de $\vec{u} \wedge \vec{v}$ 

Le trièdre ($\vec{u}, \vec{v}, \vec{u} \wedge \vec{v}$) est direct


#### Propriétés
Le produit vectoriel de deux vecteurs colinéaire est nul
Le produit vectoriel n'est pas commutatif $\vec{u}\wedge \vec{v} = -\vec{v} \wedge \vec{u}$
Le produit vectoriel n'est pas associatif $\vec{u} \wedge (\vec{v} \wedge \vec{w}) \neq (\vec{u} \wedge \vec{v}) \wedge \vec{w}$
Le produit vectoriel est distributif par rapport a l'addition 
$(\vec{u} + \vec{v}) \wedge \vec{w} = (\vec{u} \wedge \vec{w}) + (\vec{v} \wedge \vec{w})$

#### Base orthonormée directe
Exclalbur 4. 
$\vec{e}_{3} = \vec{e}_{1} \wedge \vec{e}_{2}$
$\vec{e}_{2} = \vec{e}_{3} \wedge \vec{e}_{1}$
$\vec{e}_{1} = \vec{e}_{2} \wedge \vec{e}_{3}$

Soient $\vec{a}, \vec{b}$ deux vecteurs, on cherche $\vec{a} \wedge \vec{b}$
On peut écrire
$$\vec{a} = a_{1}\vec{e}_{1} + a_{2}\vec{e}_{2} + a_{3}\vec{e}_{3} = \begin{array}{|c}
a_{1} \\
a_{2} \\
a_{3}
\end{array}$$
$$\vec{b} = b_{1} \vec{e}_{1}+b_{2}\vec{e}_{2}+b_{3}\vec{e}_{3} = \begin{array}{|c}
b_{1} \\
b_{2} \\
b_{3}
\end{array}$$
$$\vec{a} \wedge \vec{b} = a_{1}b_{2}\vec{e}_{3} - a_{1}b_{3}\vec{e}_{2}-a_{2}b_{1}\vec{e}_{3}+a_{2}b_{3}\vec{e}_{1} + a_{3}b_{1}\vec{e}_{2}-a_{3}b_{2}\vec{e}_{1}$$
$$\vec{a} \wedge \vec{b} = \begin{array}{|c}

\end{array}$$

##### Méthode
$$\vec{a} \wedge \vec{b} = \begin{array}{|c}
a_{1} \\
a_{2} \\
a_{3}
\end{array} \wedge \begin{array}{|c}
b_{1} \\
b_{2} \\
b_{3}
\end{array} $$
Excalibur 5

## 6. Bilan
Soit une charge $q$ de masse $m$ se déplaçant a la vitesse $\vec{v}$ dans un référentiel Galiléen, en présence d'un champ $\vec{E}$ et $\vec{B}$

#### Propriété
Seul le champ $\vec{E}$ est responsable de la variation d'énergie cinétique de la ... $f$ action du champ magnétique se limite à faire dévier la particule la  ... d'énergie cinétique. 
$$\Delta E_{c} = -q\Delta V$$
avec $V$ le potentiel électrostatique
$$E_{m} = E_{c} + qV = \text{cte}$$

# III. Mouvement dans un champ électrique constant et uniforme
## 1. Cas général
excal 6
- On se place dans le référentiel terrestre considéré comme Galiléen
- Système : Particule chargé de masse $m$ et de charge $q$
- Bilan des forces : 
  - $\vec{F}_{elec} = q\vec{E}$
  - $\vec{P}$ négligé
- PFD : $m\frac{d\vec{v}}{dt} = \vec{F} = q\vec{E} = qE\vec{e}_{z}$
$$m \frac{d^{2}x}{dt^{2}} = 0$$
$$\frac{d^{2}y}{dt^{2}} = 0$$
$$m \frac{d^{2}z}{dt^{2}} = qE$$

On intègre : 
$$\frac{dx}{dt} = v_{0x}$$
$$\frac{dy}{dt} = v_{0y}$$
$$\frac{dz}{dt} = \frac{q}{m}Et+v_{0z}$$
Conditions initiales : 
$$\frac{dx}{dt}(0) = v_{0}\cos \alpha = v_{0x} $$
$$\frac{dy}{dt}(0) = v_{0y} = 0$$
$$\frac{dz}{dt}(0) = v_{0}\sin \alpha = v_{0z}$$

$$\frac{dx}{dt} = v_{0}\cos \alpha$$
$$\frac{dy}{dt} = 0$$
$$\frac{dz}{dt} = \frac{qE}{m}t+v_{0}\sin \alpha$$
Donc, 
$$x(t) = v_{0}\cos \alpha$$
$$y(t) = 0$$
$$z(t) = \frac{1}{2} \frac{qE}{m}t^{2} + v_{0}\sin (\alpha) t$$

Equation de la trajectoire : 
$$t = \frac{x}{v_{0}\cos \alpha}$$
$$z(x) = \frac{1}{2} \frac{qE}{m} \frac{x^{2}}{(v_{0}\cos \alpha)^{2}}+v_{0}\sin(\alpha) \frac{ x}{v_{0}\cos \alpha}$$
Ainsi : 
$$z(x) = \frac{1}{2} \frac{qE}{m} \frac{x^{2}}{(v_{0} \cos \alpha)^{2}} + \tan x$$
Equation d'une parabole. 


## 2. Accélération linéaire
Soit $M$ une charge $q>0$ et de masse $m$ dans un champ $\vec{E} = E\vec{e}_{z}$
Exalibur 7
$\vec{E}$ est créé par $2$ plaques parallèles séparés de $d$
Il y a un ddp $U$ entre ces $2$ plaques
or : 
$$E=\frac{U}{d}$$
à $t=0$ la particule à la vitesse $v_{0} = v_{0}\vec{e}_{z}$ en $0$
La vitesse finale est alors : 
$v_{f} = v(z-d)$ de la particule

On applique le théorème de l'énergie cinétique
$$\Delta E_{c} = W_{\vec{F}_{elec}} = \int \vec{F}_{elec} \, d\vec{r} $$
$$\vec{F}_{elec} = q\vec{E} = qE\vec{e}_{z}$$
$$\vec{F}_{elec}.d\vec{r} =  qEdz$$
$$\int _{0}^{F} \vec{F}_{elec} \, d\vec{r} = \int_{0}^{d} qE \, dz = qEd = qU $$
Ainsi, 
$$\Delta E_{c} = qU$$
$$\Delta E_{c} = \frac{1}{2}v_{f}^{2} - \frac{1}{2}mv_{0}^{2} = qU$$
$$v_{f}^{2} = \frac{2qU}{m} + v_{0}^{2}$$
$$v_{f} = \sqrt{ \frac{2qU}{m} + v_{0}^{2} }$$
