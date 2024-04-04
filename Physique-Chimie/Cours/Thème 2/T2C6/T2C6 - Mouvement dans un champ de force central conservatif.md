# I. Définition
## 1. Champ de force central
#### Définition
Un point materiel $M$ de masse $m$ est soumis a un champ de force central ou une force centrale $\vec{F}$ si la droite d'action de $\vec{F}$ passe par un point $O$ fixe dans le référentiel. $O$ est le centre de force. 
$$\vec{F} = F(\vec{r})\vec{e}_{r}$$
avec $\vec{e}_{r} = \frac{\overrightarrow{OM}}{OM}$ et $F$ une fonction

#### Exemple 
- La tension d'un fil
- La force de rappel du ressort
- Force de gravitation et de coulomb

## 2. Force centrale conservative
On fera que la force centrale <u>conservative</u>
#### Définition
On appelle force centrale conservative une toute force $\vec{F}$ que l'on peut écrire sous la forme : 
$$\vec{F} = F(r)\vec{e}_{r}$$
et qui dérive d'un potentiel
$$F(r) = - \frac{dEp}{dr}$$
Ainsi, 
$$\vec{F} = - \frac{dEp}{dr}\vec{e}_{r}$$
avec $Ep$ une énergie potentielle

## 3. Force centrale newtonienne
(newtonienne $\Rightarrow$ conservatif)

### a. Définition
#### Définition
On appelle force centrale newtonienne, un force centrale conservative telle que
$$\vec{F} = F(r)\vec{e}_{r} = - \frac{K}{r^{2}}\vec{e}_{r}$$
avec $K$ une constante. 

L’énergie potentielle associée : 
$$Ep = - \frac{K}{r} + \text{cte}$$
Si $K > 0$ la force est attractive
Si $K < 0$ la force est répulsive

### b. Exemples
#### La force de gravitation
$$K = Gm_{1}m_{2}$$
Excal 1
$$\vec{F}_{1 \to 2} = - \frac{Gm_{1}m_{2}}{r^{2}}\vec{e}_{r}$$
avec $r$ la distance entre $M_{1}$ et $M_{2}$
$$Ep = - \frac{Gm_{1}m_{2}}{r}$$
Origine des potentiels en $r \to + \infty$. 

#### La force de coulomb
Excal 1
$$\vec{F}_{1 \to 2} = \frac{q_{1}q_{2}}{4\pi \epsilon_{0}r^{2}}\vec{e}_{r}$$

$$K = -\frac{q_{1}q_{2}}{4\pi \epsilon_{0}}$$
et 
$$Ep = \frac{q_{1}q_{2}}{4\pi \epsilon_{0}} \frac{1}{r}$$

# II. Nature des trajectoires
## 1. Conservation du moment cinétique
#### Propriété
Soit $M$ un point materiel soumis à la force centrale $F$ de centre $O$. 
Alors,
$$\begin{array}{l}
\overrightarrow{\mathcal{M}}_{O}(\vec{F}) = \overrightarrow{0} \\
\vec{\sigma}_{O} (M) = \overrightarrow{\text{cte}}
\end{array}$$

Démonstration : 
$\vec{F}$ est une force centrale donc 
$$\vec{F} = F(\vec{r})\vec{e}_{r}$$
avec $\vec{e}_{r} = \frac{\overrightarrow{OM}}{OM}$
$$\overrightarrow{\mathcal{M}_{O}}(\vec{F}) = \overrightarrow{OM} \wedge \vec{F} = \overrightarrow{OM} \wedge F(\vec{r})\vec{e}_{r}$$
Or $\overrightarrow{OM} = OM \vec{e}_{r}$
$$\overrightarrow{\mathcal{M}}_{O}(\vec{F}) = OMF(\vec{r})\vec{e}_{r} \wedge \vec{e}_{r} = \overrightarrow{0}$$
Appliquons le TMC en $O$ : 
$$\frac{d\vec{\sigma}(M)}{dt} = \overrightarrow{\mathcal{M}_{O}}(\vec{F}) = \overrightarrow{0}$$
Donc, 
$$\vec{\sigma}_{O}(M) = \overrightarrow{\text{cte}}$$

## 2. Plantée des trajectoires
#### Propriété
La trajectoire d'un point $M$ soumis à une force centrale $\vec{F}$ de centre $O$ est plane. Le mouvement de $M$ se fait dans le plan contenant $O$ et perpendiculaire à $\vec{\sigma}_{O}(M)$.

Démonstration : 
On sait que $\vec{\sigma}_{O}(M) = \overrightarrow{\text{cte}}$
Alors,
$$\overrightarrow{OM} \wedge m\vec{v} = \overrightarrow{\text{cte}}$$
Les vecteurs $\overrightarrow{OM}$ et $\vec{v}$ sont à chaque instant perpendiculaires à un vecteur constant. 
Donc $\overrightarrow{OM}$ et $\vec{v}$ sont contenus dans le plan $\perp$ à $\vec{\sigma}_{O}(M)$


#### Propriété
Excal 2
La loi des aires :
$$\Delta t = t_{2}-t_{1} = t_{4} -t_{3}$$
Le vecteur $\overrightarrow{OM}$ balaye des aires égales pendant des durées égales

Le constante des aires est :
$$C = r^{2}\dot{\theta}$$
$r$ et $\theta$ étant les coordonnées polaires de $M$, de centre $O$. 

Démonstration : 
Exprimons $\vec{\sigma}_{O}(M)$ en coordonnées polaires de centre $O$ : 
$\overrightarrow{OM} = r\vec{e}_{r}$
$\vec{v} = \dot{r}\vec{e}_{r} + r \dot{\theta} \vec{e}_{\theta}$
car la trajectoire est plane donc $z = \text{cte}$ choisie a $O$
Donc, 
$$\vec{\sigma}_{O}(M) = \overrightarrow{OM} \wedge m\vec{v} = r\vec{e}_{r} \wedge m(\dot{r} \vec{e}_{r} + r \dot{\theta} \vec{e}_{\theta})$$
$$\vec{\sigma}_{O}(M) = r\vec{e}_{r} \wedge mr \dot{\theta} \vec{e}_{\theta}$$
$$\vec{\sigma}_{O}(M) = mr^{2} \dot{\theta} \vec{e}_{z} = \overrightarrow{\text{cte}}$$
Or, $m = \text{cte}$ et $\vec{e}_{z} = \overrightarrow{\text{cte}}$
Ainsi, on a : 
$r^{2}\dot{\theta} = \text{cte}$ : Constante des aires

#### Remarque
Quand $r$ diminue, la vitesse angulaire augmente

ATTENTION : Cela ne veut pas dire que la vitesse totale $v = \sqrt{  \dot{r}^{2} + r^{2}\dot{\theta}^{2} }$ augmente


#### Définition
La vitesse aréolaire est définie comme l'aire balayée par $\overrightarrow{OM}$ par unité de temps $\mathcal{A} = \frac{dS}{dt}$

Excal 3
$$dS = \frac{1}{2} |\overrightarrow{OM}\wedge \vec{v}dt|$$
$$\mathcal{A} = \frac{1}{2}|\overrightarrow{OM} \wedge \vec{v}| = \frac{1}{2m} |\vec{\sigma}_{O}(M)|$$

Ainsi,
$$\mathcal{A} = \frac{\sigma_{O}(M)}{2m} = \frac{C}{2}$$
Avec $C$ la constante des aires

## 4. Etat lié ou état de diffusion
On considère une force centrale conservative $\vec{F}$, 

#### Propriété
L’énergie mécanique d'un point $M$ soumis a une force centrale conservative est constante : 
$$E_{m} = E_{p}\underline{(r)} + E_{c} = \text{cte}$$
$\underline{(r)}$ c'est ce qui est important

Exal 4 : IMPORTANT

#### Définition
- Un état lié se caractérise par un mouvement borné entre 2 valeurs de la coordonnée spatiale.
- Un état diffusif ou état de diffusion se caractérise par un mouvement non borné dans une direction de l'espace.

## 5. Energie potentielle effective
Point $M$ de masse $m$ soumis a la force centrale $\vec{F}$ conservative $E_{p}(r)$ l’énergie potentielle associée

#### Définition
Energie potentielle effective
$$E_{p \space eff} = E_{p}(r) + \frac{1}{2} m \frac{C^{2}}{r^{2}}$$
	avec $C = r^{2} \dot{\theta}$ la constante des aires.

Démonstration : 
$\vec{F}$ est conservative donc $E_{m} = \text{cte}$ alors, 
$$\frac{1}{2}mv^{2} = E_{p}(r) = \text{cte}$$
la trajectoire se fait dans un plan, donc en coordonnées polaire : $(O, r, \theta)$
$$\vec{v} = \dot{r}\vec{e}_{r} + r\dot{\theta}\vec{e}_{\theta}$$
$$v^{2} = \dot{r}^{2} + r^{2}\dot{\theta}^{2}$$
et on sait que $C = r^{2}\dot{\theta} = \text{cte}$
$$v^{2} = \dot{r}^{2} + \frac{C^{2}}{r^{2}}$$
$$\frac{1}{2}mv^{2} = \frac{1}{2}m\dot{r}^{2}+\frac{1}{2}m \frac{C^{2}}{r^{2}}$$
$$E_{m} = \frac{1}{2}m\dot{r}^{2} + \frac{1}{2}m \frac{C^{2}}{r^{2}}+ E_{p}(r) = \text{cte}$$
On a alors, 
$$E_{peff} = \frac{1}{2}m \frac{C^{2}}{r^{2}} + E_{p}(r)$$
Sous cette forme l'étude énergétique se restreint a la coordonné $r$

#### Propriété
Pour une force centrale newtonienne $\vec{F} = - \frac{K}{r^{2}}\vec{e}_{r}$,
$$E_{peff} = -\frac{K}{r} + \frac{1}{2} m \frac{C^{2}}{r^{2}} + \text{cte}$$
excal 5

# III. Mécanique céleste
On se place dans le cas de 2 masses en interaction dont une est fixe. 

## 1. Lois de Kepler
### a. $1^{ere}$ loi de Kepler : Mouvement elliptique
#### Propriété
Dans le référentiel héliocentrique les trajectoires des planètes autour du Soleil sont des ellipses dont le Soleil est un des foyers

<u>Excalibur 6.</u>
Dans un état diffusif on peut avoir des trajectoires paraboliques ou hyperboliques

### b. $2^{eme}$ loi de Kepler : Loi des aires

#### Propriété
Dans le référentiel héliocentrique, une planète balaye des aires égales a durée égale. 

## c. $3^{eme}$ loi de Kepler : Loi des périodes
#### Propriété
Dans le référentiel héliocentrique, le carré de la période du mouvement $T$ est proportionnel au cube du demi-grand axe $a$ : 
$$\frac{a^{3}}{T^{2}} = \text{cte}$$
C'est la même constante pour toutes les planètes. 

## 2. Nature des trajectoires
Soit $M$ de masse $m$ soumis a la force centrale newtonienne $\vec{F} = - \frac{K}{r^{2}}\vec{e}_{r}$ de centre $O$
On admet que sa trajectoire est une conique d'équation polaire (d'origine $O$) : 
$$r = \frac{p}{1 + e\cos(\theta)}$$
avec $p= \frac{mC^{2}}{K}$ et $e>0$ l'excentricité de la conique
Si $e < 1$ la trajectoire est une ellipse, 
Si $e = 0$ la trajectoire est un cercle, 
Si $e = 1$ la trajectoire est une parabole, 
Si $e>1$ la trajectoire est une hyperbole.

## 3. Lien entre la trajectoire et l'énergie mécanique
$$E_{m} = \frac{1}{2} m\dot{r}^{2} + E_{peff}(r)$$
Avec, 
$$E_{peff}(r) = \frac{1}{2}m \frac{C^{2}}{r^{2}} - \frac{K}{r}$$

Le mouvement est tel que 
$$E_{m} > E_{peff}$$

#### a. $E_{m}> 0$ : Trajectoire hyperbolique 
Excal 7.
Quand $r \to + \infty$ $E_{peff} \to 0$
Donc,  $E_{C_{Radiale}} \to E_{m} = cte$
$$E_{C_{Radiale}} = \frac{1}{2}m\dot{r}^{2} \underset{r \to + \infty}{\longrightarrow} \text{cte}$$
Donc, $\dot{r} \underset{r \to +\infty}{\longrightarrow} \dot{r}_{\infty}$ valeur finie

On sait que $C = r^{2}\dot{\theta} = \text{cte}$

$$\dot{\theta} = \frac{C}{r^{2}} \underset{r \to + \infty}{\longrightarrow}0$$
$$\begin{cases}
\dot{r} \to \dot{r}_{\infty} \\
\dot{\theta} \to 0
\end{cases} \Rightarrow \vec{v} = \frac{dv}{dt}\vec{e}$$
$\vec{e}$ un vecteur constant
Donc le mouvement devient rectiligne uniforme
quand $r \to + \infty$

Cela veut dire que l’asymptote du mouvement est une droite donc c'est une hyperbole :
Excal 8.

### b. $E_{m} = 0$ : Parabole
Dans ce cas : 
$$E_{c_{Radiale}} = \frac{1}{2}m\dot{r}^{2} \underset{r \to + \infty}{\longrightarrow} E_{m} = 0$$
$$\begin{cases}
\dot{r}_{\infty} = 0 \\
\dot{\theta}_{\infty} = 0
\end{cases} \Rightarrow \text{Parabole}$$

Excal 9

#### Propriété
Si la force est répulsive, le point $M$ est dans un état de diffusion pour toute valeur de $E_{m}$

### c. $E_{m} < 0$ : Ellipse ou cercle
Etat lié : 
Pour une force attractive : la particule est dans un puits de potentiel. 
Donc le mouvement de $M$ se fait entre les distances : $r_{min}$ et $r_{max}$ au centre $O$ de la force. 

$M$ a donc un mouvement elliptique

excal 10

Dans le cas ou $E_{m} = E_{p, eff_{min}}$
On a $E_{C_{\text{Radiale}}} = \frac{1}{2}m \dot{r}^{2} = 0$ pour tout $t$
Alors, 
$\dot{r} = 0$
Donc, 
$r = \text{cte} = r_{0}$,
C'est la distance pour laquelle $E_{peff} = E_{peff_{min}}$
Dans ce cas : la trajectoire est un cercle

$C = r^{2}\dot{\theta}$ mais dans ce cas : $C = r_{0}^{2}\dot{\theta}$
Alors $\dot{\theta} = \text{cte}$, 
Si $E_{m} = E_{peff_{min}}$ le point $M$ a un mouvement circulaire minimum


### d. Bilan
#### Propriété
Soit $M$ un point, soumis a une force centrale conservative attractive de centre $O$. 
Selon les CI, 
- M est dans un état diffusif :
  $E_{m}\geq0$ et son mouvement se fait entre une distance minimale : $r_{min}$ et $r = + \infty$ sa trajectoire est soit une parabole ($E_{m} = 0$) ou une hyperbole ($E_{m}>0$).
- M est dans un état lié : $E_{m}<0$ et son mouvement est borné entre $r_{min}$ et $r_{max}$ le long d'une ellipse. C'est un cercle parcouru a vitesse uniforme pour $r_{min} = r_{max}$ / $E_{m} = E_{peff_{min}}$ 

## 4. Etude de la trajectoire circulaire
Choses a savoir refaire absolument

On étudie le mouvement de $M$ de masse $m$ soumis a la force newtonienne $\vec{F}$ de centre $O$ fixe dans le référentiel
Supposons que $M$ ait une trajectoire circulaire de rayon $r_{0}$
### a. Expression de $r_{0}$
#### Propriété
Soit $\vec{F} = - \frac{K}{r^{2}}\vec{e}_{r}$
Alors,
$$\boxed{r_{0} = \frac{mC^{2}}{K}}$$
avec $K = GMm$ et $C = r^{2}\dot{\theta}$ la constante des aires
$M$ la masse de l'attracteur

Démonstration : 
$r_{0}$ correspond a la distance pour laquelle $E_{peff_{min}}$ est minimale or
$$E_{peff} = E_{p}(r) + \frac{1}{2}m \frac{C^{2}}{r^{2}}$$
$$E_{p}(r) = -\frac{K}{r} (+cte)$$
avec $K = GMm>0$
On dérive : 
$$\frac{d}{dr}E_{peff} = \frac{K}{r^{2}}- \frac{mC^{2}}{r^{3}}$$
On cherche $r = r_{0}$ tq $\frac{d}{dr}E_{peff}$ est nulle : 
$$\frac{K}{r_{0}^{2}} = \frac{mC^{2}}{r_{0}^{3}}$$
Comme $r \neq 0$ 
$$r_{0} = \frac{mC^{2}}{K}$$
$$\square$$

### b. Expression de $E_{m}$, $E_{c}$ et $E_{p}$
#### Propriété
Soit $M$ un point de masse $m$ sur une trajectoire circulaire de rayon $r_{0}$ autour d'un astre de masse $M_{S}$
Alors, 
$E_{m}$, $E_{c}$ et $E_{p}$ de $M$ s'écrivent : 
$$\boxed{E_{m} = -E_{c} = \frac{1}{2}E_{p} = - \frac{GM_{S}m}{2r_{0}}}$$

Démonstration : 
En $r= r_{0}$, 
$$E_{peff} = E_{peff_{min}} = - \frac{K}{r_{0}} + \frac{1}{2} \frac{mC^{2}}{r^{2}_{0}}$$
$$E_{peff} = - \frac{K^{2}}{mC^{2}} + \frac{1}{2} \frac{mC^{2}}{(mC^{2})^{2}}K^{2} = - \frac{K^{2}}{mC^{2}} + \frac{1}{2} \frac{K^{2}}{mC^{2}}$$
$$E_{peff}(r_{0}) = -\frac{1}{2} \frac{K^{2}}{mC^{2}} = -\frac{1}{2}K \times \frac{K}{mC^{2}} = -\frac{K}{2} \frac{1}{r_{0}}$$
$$E_{peff}(r_{0}) = - \frac{K}{2r_{0}} = \frac{1}{2}E_{p}(r_{0})$$
$$E_{m}(r_{0}) = E_{peff}(r_{0}) = - \frac{K}{2r_{0}} = \frac{1}{2}E_{p}$$
$$E_{c}(r_{0}) = E_{m}-E_{p} = -\frac{K}{2r_{0}} + \frac{K}{r_{0}}$$
Ainsi, 
$$E_{c} = \frac{1}{2} \frac{K}{r_{0}}$$

### c. Vitesse de la trajectoire circulaire
#### Propriété
La vitesse de la trajectoire circulaire est : 
$$\boxed{v = \sqrt{ \frac{GM_{S}}{r_{0}} }}$$

Démonstration : 

On viens de montrer que

$$E_{c} = \frac{1}{2} \frac{K}{r_{0}} = \frac{1}{2} mv^{2}$$
Alors, 
$$v = \sqrt{ \frac{K}{mr_{0}} }$$
Avec $K = GM_{S}m$

Ainsi 
$$v = \sqrt{ \frac{GM_{s}}{r_{0}} }$$
ne dépend pas de $m$


### d. $3^{e}$ loi de Kepler
#### Propriété
Pour un mouvement circulaire de rayon $r_{0}$ et de période $T$ autour d'un astre de masse $M_{S}$ la troisième loi de Kepler s'écrit : 
$$\boxed{\frac{r_{0}^{3}}{T^{2}} = \frac{GM_{S}}{4\pi^{2}}}$$

Démonstration : 

Exprimons la période $T^{2}$ du mouvement en fonction de $r_{0}$ : 
$$T^{2} = \frac{4\pi^{2} r_{0}^{2}}{v^{2}}$$
Or 
$$v^{2} = \frac{GM_{S}}{r_{0}}$$
Alors, 
$$T^{2} = 4\pi^{2}r_{0}^{2} \frac{r_{0}}{GM_{S}}$$

## 5. $E_{m}$ du mouvement elliptique
#### Propriété
Soit un point de masse $m$ en mouvement elliptique de demi grand axe $A$ autour d'un astre de masse $M_{S}$, alors : 
$$\boxed{E_{m} = - \frac{GM_{S}m}{2A}}$$

# IV. Les satellites terrestres
On se place dans le référentiel géocentrique
Considéré comme galiléen.
La terre a un mouvement de rotation uniforme autour de l'axe des poles de période : 
$$T_{sid} = 86.164s$$
C'est la période sidérale. 
On étudie le mouvement d'un satellite soumis a la force gravitationnelle de la Terre. 

Données :
- Masse de la terre : $M_{T} \approx 6.10^{24}$ kg
- Rayon de la Terre : $R_{T} = 6400$ km

## 1. Les satellites géostationnaires
#### Définition
Un satellite géostationnaire en orbite autour de la Terre reste toujours a la verticale d'un point fixe de la surface de la terre. 

###### Conditions pour qu'un satellite soit géostationnaire : 
- Orbite circulaire uniforme dans le même sens de rotation que la Terre.
- Le point fixe a la verticale d'un satellite géostationnaire se situe sur l'équateur. 

Déterminons le rayon $R_{g}$ de l'orbite géostationnaire. 
$$\frac{R_{g}^{3}}{T^{2}_{sid}} = \frac{GM_{T}}{4\pi^{2}}$$
$$R_{g} = \left(\frac{GM_{T}T_{sid}^{2}}{4\pi^{2}}\right)^{\frac{1}{3}} \approx 42 000 \text{ km}$$
On en déduit l'altitude des satellites géostationnaires :
$$h_{g} = R_{g} - R_{T}$$
$$h_{g} = \left( \frac{GM_{T}T_{sid}^{2}}{4\pi^{2}} \right)^{\frac{1}{3}} - R_{T}$$

Application numérique : $h_{g} \approx 35\space600 \text{ km}$

##### Combien de satellites faut il au minimum pour couvrir tout le globe?
excal 11

##### Méthode 1
- Déterminer la surface visible par un satellite $S$
- Diviser la surface de la terre par $S$ $N = \frac{S_{T}}{S}$

##### Méthode 2
- Déterminer la distance $d_{S}$ sur l’équateur que voit le satellite 
- Diviser le périmètre de la terre par $d_{S}$ 
  $N = \frac{2\pi R_{T}}{d_{S}}$

Excal 12

