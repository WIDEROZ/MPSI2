# I. Notations d'onde et de signal
## 1. Définition
#### Définitions
- Un signal est une grandeur Physique qui dépends du temps et de l'espace. 
- Une onde est une perturbation locale du signal qui se propage de proche en proche a la vitesse $c$ appelée célérité, qui dépends des propriétés du milieu de propagation. Une onde s'accompagne toujours d'un transport d'énergie sans transport global de matière. 

## 2. Différents types d'ondes
### a. Ondes mécaniques
#### Définitions
Les ondes mécaniques sont des perturbations d'un milieu materiel.
Elles peuvent être de deux types :
- Transversales : La perturbation est perpendiculaire a la direction de propagation. (Vagues)
- Longitudinales : La perturbation est le long de la propagation. (Ressort / Son)
On distingue aussi : 
- Élastiques : Déformation locale du milieu qui se propagent dans un solide. Elles peuvent êtres transversales et / ou longitudinales.
- Acoustiques : Variation de pression dans un fluide. Elles sont toujours longitudinales. 

### b. Ondes électromagnétiques
#### Définition
Les ondes électromagnétiques sont la propagation des champs électriques $\vec{E}$ et magnétiques $\vec{B}$ ce sont des ondes transverses et elles peuvent se propager dans le vide et dans le milieu materiel. 
(Rayon $\gamma, X, uv, IR$ et visibles)
Les ondes électriques dont un cas particulier des ondes électromagnétiques qui sont graduées dans un conducteur dans ce cas on étudie la tension $u$ ou l'intensité $i$
$$\begin{array}{|c|c|}
\hline 
ondes & milieu & signaux  \\ \hline 
\text{élastique} & \text{solide} & \text{Déformation dans un milieu (vagues)} \\ \hline
\text{accoustique} & \text{fluide} & \text{pression}  \\ \hline 
\text{électromagnétique} & \text{vide ou conducteur} & \vec{E} \text{ et } \vec{B} \\ \hline
\text{gravitationelles} & \text{vide} & \text{Déformation de l'espace temps}
\\\hline
\end{array}$$

# II. Ondes progressives
## 1. Exemple
Excalibur 1.
La perturbation imposé à la corde a l'instant $t=0$ se propage le long de la corde
Excalibur 2.
La perturbation est la même en $z_{1}$ à l'instant $t_{1}$ et en $z_{2}$ à l'instant $t_{2}$ et sa vitesse de propagation est $c$. 
Donc
$$c = \frac{z_{2}-z_{1}}{t_{2}-t_{1}}$$
Écrivons tout les indices $1$ à gauche et les indices $2$ à droite
$$c(t_{2}-t_{1}) = z_{2}-z_{1} \Leftrightarrow {z_{1}-ct_{1}=z_{2}-ct_{2}}$$
#### Définition
On appelle onde progressive unidimensionnelle une onde qui se propage sans déformation ni atténuation dans une seule direction donc $c$ est définie par
$$c = \frac{d}{t}$$
avec $d$ la distance parcourue par l'onde pendant le temps $t$ 

#### Propriétés d'une onde progressive
Soit une onde progressive unidimensionnelle qui se propage dans le sens des $x$ croissants soit $s$ la grandeur physique associée. $s$ dépends de $x$ et du $t$ 
On peut écrire : 
$$s(x, t) = f(x-ct) = F\left( t-\frac{x}{c} \right)$$
Si l'onde se propage dans le sens des $x$ décroissants alors $$s(x,t) = g(x + ct) = G\left( t + \frac{x}{c} \right)$$

# III. Onde sinusoïdales progressives
## 1. Définition
#### Définition
Une onde progressive sinusoïdale ou harmonique est un cas particulier des ondes progressives pour lesquelles la fonction $f$ (ou $F$, ou $g$, ou $G$) est une sinusoïde.
Dans ce cas l'expression d'une onde progressive sinusoïdale se propageant dans le sens des $x$ croissants est : 
$$s(x, t) = A\cos(\omega t - kx + \phi)$$
- $A$ : Amplitude de l'onde
- $\omega$ : pulsation de l'onde
- $k$ : vecteur d'onde
- $\phi$ : Phase a l'origine
La célérité $c = \frac{\omega}{k} = v_{p}$ appelée ici la vitesse de phase. 

## 2. Double périodicité
#### Définition
La fonction $s(x, t)$ décrivant une onde est une fonction de $2$ variables $x$ et $t$ on peut lui associer $2$ périodes : 
- En fixant la variable $x$ la fonction $s(x, t)$ présente une période
  $$T = \frac{2\pi}{\omega}$$
- En fixant $t$ la fonction $s(x, t)$ présente une périodicité spatiale appelée longueur d'onde. 
  $$\lambda = \frac{2\pi}{k}$$

Excalibur 3. 

#### Propriété
Période $T$ et longueur d'onde $\lambda$ sont reliées grâce à la célérité de l'onde $c$ : 
$$\lambda = \frac{\omega T}{k} = cT$$
$\lambda$ correspond à la distance parcourue par l'onde pendant la durée $T$

- Relation de dispersion de l'onde : 
  $$k = \frac{\omega}{c}$$

- Nombre d'onde
  Pour la périodicité spatiale on définit le nombre d'onde : 
  $$\sigma = \frac{1}{\lambda} = \frac{k}{2\pi}$$
 
#### Bilan
$$\begin{array}{|c|c|c|}\hline
\text{représentation} & \text{période} & \text{fréquence} & \text{pulsation} \\ \hline
\text{temporelle} & T \text{ (en s)} & f = \frac{1}{T} \text{ (en Hz)} & \omega = 2\pi f \text{ (en rad}.s^{-1}) \\ \hline
\text{spatiale} & \lambda \text{ (en m)} & \sigma = \frac{1}{\lambda} \text{ (en m}^{-1}) & k = \frac{2\pi}{\lambda} \text{ (en m}^{-1}) \\\hline
\end{array}$$
$$s(x, t) = A\cos(\omega t - kx)$$
$$s(x, t) = A\cos\left( \omega\left( t-\frac{x}{c} \right) \right)$$
$$s(x, t) = A\cos\left( 2\pi\left( \frac{t}{T}-\frac{x}{\lambda} \right) \right)$$

## 3. Le Déphasage
#### Définition
On appelle déphasage $\Delta \phi$ du point $x_{1}$ par rapport au point $x_{2}$ la différence de phase : 
$$\Delta \phi = \phi(x_{1}) - \phi(x_{2})$$
à un instant $t$ donné.
Le retard $\mathcal{T}$ accumulé par l'onde entre $x_{1}$ et $x_{2}$ est : 
$$\mathcal{T} = \frac{x_{2}-x_{1}}{c}$$
soit une onde décrite par
$$s(x, t) = Z\cos(\omega t-kx+\phi_{0})$$
la phase entre $x$ et $t$ :
$$\phi(x, t) = \omega t-kx+\phi_{0}$$
Donc entre $x_{1}$ et $x_{2}$ fixée : 
$$\Delta \phi = \phi(x_{1})-\phi(x_{2}) = \omega t-kx_{1} + \phi_{0} - (\omega t-kx_{2}+\phi_{0})$$

#### Propriété 1
Si $\Delta x = n \lambda, \space n \in \mathbb{Z}$
$$k = \frac{2\pi}{\lambda} \Rightarrow \Delta \phi = n 2\pi = 0 \space [2\pi]$$

Excalibur 4.

Les états vibratoires sont les mêmes à chaque instant aux $2$ points : on dit que ces points vibrent en phase.

#### Propriété 2
Si $\Delta x = (n + \frac{1}{2})\lambda, \space n \in \mathbb{Z}$ 
$$\Rightarrow \Delta \phi = \pi \space [2\pi]$$

Excalibur 5

Les états vibratoires de deux points sont opposés à chaque instant, on dit que $x_{1}$ et $x_{2}$ sont en opposition de phase.

# IV. Milieu dispersif et non dispersif
#### Définition
On parle de milieu dispersif quand la vitesse de phase d'une onde dépend de sa fréquence.
Dans le cas contraire le milieu est non dispersif. 

## 1. Conséquence
On considère un signal $s(x, t)$ 
$$s(x, t) = \int_{0}^{+\infty} A(\omega)\cos(\omega t-k(\omega)x+\phi(\omega)) \, d\omega $$

La vitesse de phase : 
$$v_{\phi} = \frac{\omega}{k(\omega)}$$
Dépend à priori de $\omega$ 
Dans un milieu dispersif l'onde se déforme en se propageant. 

#### Propriété
Dans un milieu non dispersif le vecteur $k$ est relié linéairement à $\omega$
$$k(\omega) = a\omega$$
avec $a = \frac{1}{v_{\phi}} = \text{cste}$ avec $v_{\phi}$ la vitesse de phase. 

## 2. Exemples
### a. Propagation en milieu dispersif
- La dispersion de la Lumière par du verre ou de l'eau : arc en ciel.
- La bande passante maximale dans les fibres optiques. ($DM \space 1$)
- Les vagues

### b. Propagation en milieu non dispersif
- Les ondes électromagnétiques dans le vide
- Les ondes acoustiques dans un fluide
- Les ondes élastiques longitudinales dans les solides

# V. Superposition de 2 ondes interférence
#### Propriété
Deux ondes qui se propagent dans un milieu non dispersif et linéaire peuvent être additionnés et traitées comme une seule onde. 
## 1. Cas d'une onde quelconque
Excalibur 6.
2 ondes se propagent en sens inverse
L'onde résultante est la somme de ces 2 ondes. 
à $t_{2}$ l'onde résultante en bleue est la somme des 2 ondes
après s'être croisées, les 2 ondes continuent leur chemins. 
Excaliburne 7

## 2. Cas de 2 ondes sinusoïdales synchrone
#### Définition
2 ondes sinusoïdales sont dites synchrones si elles ont la même pulsation $\omega$ et une différence de phase a l'origine indépendante du temps. 

#### Définition : 
saad ibn abdelaziz ibn ali ismael shik shak shok balla thein shawarma walad bebsi zyadeh batata bdoon salata ma3 gageenet bebsi bardeh bdoon thalj wallak hamodeh e6fi el playstation 3ala akaserha ma 7allak hassa o roo7 engale3 jahez lal nom mohammad abdallah

$S_{1}$ et $S_{2}$ sont les sources ponctuelles qui émettent des ondes circulaires. La source $S_{1}$ émet une onde $s_{1}$ décrite par la fonction : 
$$S_{1}(r_{1}, t) = S_{max}\cos(\omega t-kr_{1}+\phi_{1})$$
$r_{1}$ étant la distance entre le point et $S_{1}$ de même pour $S_{2}$
$$S_{2}(r_{2}, t) = S_{max}\cos(\omega t-kr_{2}+\phi_{2})$$
On suppose que l'amplitude est la même. 

#### Définition
Deux ondes de même nature et synchrones qui se superposent en un point $m$ donnent naissance au phénomène d'interférence, l'amplitude de l'onde résultante est différente de la somme des amplitudes des deux ondes.
Excaliburne 8.
L'onde résultante en $M$ s'écrit
$$S(M, t) = S_{1}(M, t)+S_{2}(M, t) = S_{max}\cos(\omega t-kr_{1}+\phi_{1}) + S_{max}\cos(\omega t-kr_{2}+\phi_{2})$$
$$S(M, t) = 2S_{max}\cos\left( \omega t-k \frac{r_{1}+r_{2}}{2} + \frac{\phi_{1} + \phi_{2}}{2} \right)\cos\left( k \frac{r_{1} + r_{2}}{2} + \frac{\phi_{1}-\phi_{2}}{2} \right)$$

$$S(M, t) = A\cos(\omega t-kr+\phi)$$
avec $r = \frac{r_{1}+r_{2}}{2}$ et $\phi = \frac{\phi_{1}+\phi_{2}}{2}$ les termes d'interférence
et l’amplitude $A$ dépends de $r_{1}-r_{2}$ 
$S_{n}$ : Amplitude initiale
$$A = 2S_{n}\cos\left( k \frac{r_{1}-r_{2}}{2} + \frac{\phi_{1}-\phi_{2}}{2} \right)$$
Simplifions avec $\phi_{1} = \phi_{2} = \phi$ 
Alors $A$ s'ecrit
$$2 A = S_{n} \cos\left( k \frac{r_{1}-r_{2}}{2} \right)$$

#### Propriété
- Si $k \frac{r_{1}-r_{2}}{2} = n\pi \Leftrightarrow r_{1}-r_{2} = n\lambda, \text{ où } n \in \mathbb{N}$  
  Alors $S(M,t) = \pm 2 S_{n}\cos(\omega t - kr+\phi)$
  L'amplitude de l'onde en $M$ est alors extremale
  On parle d'interférences constructives
- Si $k \frac{r_{1}-r_{2}}{2} = (2n+1) \frac{\pi}{2} \Leftrightarrow r_{1}-r_{2} = (2n+1) \frac{\lambda}{2} \text{ où } n \in \mathbb{N}$ 
  $\Rightarrow S(M, t) = 0$ pour tout $t$
  L'amplitude du signal est nul
  On parle d'interférences déstructives
- Dans les cas intermédiaires on la norme de l'amplitude de $S(M, t)$ qui prends des valeurs entre 0 et $2S_{n}$ 


#### Définition
On appelle $\delta = r_{1} - r_{2}$ la différence de marche. C'est la différence de distance parcourue par les ondes arrivants en $M$. 
- Le déphasage en $M$ du signal issu de $S_{1}$ par rapport a celui issu de $S_{2}$ vaut : 
  $$\Delta \phi = 2\pi \frac{\delta}{\lambda}$$ avec $\delta$ la différence de marche et $\lambda$ la longueur d'onde. 
- Le retard en $M$ $\tau_{M}$ de l'onde issue de $S_{1}$ par rapport a celle issue de $S_{1}$ par rapport a celle issue de $S_{2}$ vaut : 
  $$\tau_{M} = \frac{\delta}{c}$$
  avec $c$ la célérité de l'onde
- L'ordre d'interférence est le nombre :
  $$p = \frac{\delta}{\lambda}$$

## 3. Conditions d'interférences destructives et constrictives
#### Interférences constructives en M
$$\begin{array}{c|c}
\text{Déphasage en } M & \Delta \phi = 2 \pi n \\ \hline
\text{Différence de marche} & \delta = n \lambda  \\ \hline
\text{Ordre d'interférence} & p = n
\end{array}$$
où $n \in \mathbb{Z}$

#### Interférences déstructives
$$\begin{array}{c|c}
\text{Déphasage en }M & \Delta \phi = (2n+1) \frac{\pi}{2} \\ \hline
\text{Différence de marche} & \delta = (2n+1) \frac{\lambda}{2} \\ \hline
\text{Ordre d'interférence} & p = (2n+1) \times \frac{1}{2} = n + \frac{1}{2}
\end{array}$$

# VI Interférences lumineuses
## 1. Dispositif des trous d'young
Excalibur 9.
Si on le fait avec 2 laser ca ne marchera pas. 

## 2. Expression de l'intensité
### a. L'intensité lumineuse
La lumière est un champ électromagnétique dont l'amplitude $E_{m}$ est celle de l'onde.
Les yeux et les capteurs photosensibles sont sensibles a l'intensité lumineuse qui correspond a l'énergie de l'onde
$$I = K <E^2>_{t}$$
$$I = K E_{m}^2$$
K une constante
L'intensité est proportionnelle à l'amplitude au carré. 

### b. Formule de Fresnel
Excalibur 10.
$S_{1}$ et $S_{2}$ : Sources lumineuses synchrones et cohérentes
L'onde issue de $S_{1}$ en $M$
$$E_{1}(M, t) = E_{m_{1}}\cos(\omega t-kr_{1}+\phi_{0})$$
avec $r_{1} = S_{1}M$

L'onde issue de $S_{2}$ en $M$ 
$$E_{2}(M, t) = E_{m_{2}}\cos(\omega t-kr_{2}+\phi_{0})$$
Ces ondes ont la même phase à l'origine $\phi_{0}$ (constante) et la même pulsation $\omega$ (synchrone) et milieu linéaire $\Rightarrow$ même $k$ en $M$, l'onde s'écrit : 
$$E(M, t) = E_{1}(M, t) + E_{2}(M, t)$$
L'intensité lumineuse en $M$ est donné par la formule de Fresnel : 
$$ I(M) = I_{1} + I_{2}+ 2 \sqrt{ I_{1}I_{2} }\cos\left( 2\pi  \frac{\delta}{\lambda} \right)$$

avec $I_{1}$ et $I_{2}$ les intensités en $M$ des ondes issues de $S_{1}$ et $S_{2}$ et $S = r_{1}-r_{2}$ la différence de marche. 

## 3. Interprétation des trous d'young
### a. Cas simple
Excalibur 11.
#### Hypothèse
Pour pouvoir faire la suite
- Les ondes sont cohérentes en $S_{1}$ et $S_{2}$ . $\phi_{1} = \phi_{2}$ 
- MHTI d'indice optique $n$

On veut connaitre $I(M)$ donc on doit exprimer $\delta$ la différence de marche

Par définition $\delta = S_{2}M-S_{1}M$ 
exprimons $\delta$ en fonction de $x$ la position de $M$
$$S_{1}M^2 = D^2 + \left( x-\frac{a}{2} \right)^2$$ $$S_{2}M^2 = D^2 + \left( x+\frac{a}{2} \right)^2$$
$$\delta = \sqrt{ D^2 + \left( x + \frac{a}{2} \right)^2 } - \sqrt{ D^2 + \left( x-\frac{a}{2} \right)^2 }$$
On suppose que $D \gg a$ et $D\gg x$ et on factorise par $D$  
$$S = D\sqrt{ 1+ \left( \frac{x}{D}+ \frac{a}{2D} \right)^2 } - D\sqrt{ 1+ \left( \frac{x}{D}- \frac{a}{2D} \right)^2 }$$

Développement limité : 
$$\sqrt{ 1+\epsilon } \approx 1 + \frac{\epsilon}{2}$$
- Si $\epsilon \ll 1$
  Dons notre cas $(\frac{x}{D} + \frac{a}{2D})^2 \ll 1$ et $\left( \frac{x}{D} - \frac{a}{2D} \right)^2 \ll 1$ 
  $$\delta = D\left( 1+\frac{1}{2}\left( \frac{x}{D} + \frac{a}{2D} \right)^2 - \left( 1 + \frac{1}{2}\left( \frac{x}{D} - \frac{a}{2D} \right)^2 \right) \right)$$
  $$\delta \approx D\left( \frac{1}{2}\left( \frac{x}{D} + \frac{a}{2D} \right)^2 - \frac{1}{2}\left( \frac{x}{D} - \frac{a}{2D} \right)^2 \right)$$
  $$\delta = \frac{D}{2}\left( \left( \frac{x}{D} + \frac{a}{2D} \right)^2 - \left( \frac{x}{D} - \frac{a}{2D} \right)^2 \right)$$
  $$\delta = \frac{d}{2}\left( \frac{2x}{D} \times \frac{a}{D} \right)$$
  Donc
  $$\delta \approx \frac{ax}{D}$$

- Position des interférences constrictives et destructives
  $$\delta n \frac{\lambda}{2} \Leftrightarrow x = \frac{n\lambda D}{a} $$ où $n \in \mathbb{Z}$

- Interférences destructives
  $$\delta = (2n+1) \frac{\lambda}{2} \Leftrightarrow (2n+1) \frac{\lambda D}{2a}$$
  où $n \in\mathbb{Z}$

#### Définition
L'interférence $i$ est la distance entre 2 forces d'interférences (const ou dest.)
$$i = \frac{\lambda D}{a}$$

### b. Utilisation de la f[[]]ormule de fresnel
$$ I(M) = I_{1} + I_{2}+ 2 \sqrt{ I_{1}I_{2} }\cos\left( 2\pi  \frac{\delta}{\lambda} \right)$$
Si on suppose $I_{1} = I_{2} = I_{0}$
$$2I_{0}\left( 1+\cos\left( 2\pi  \frac{ax}{\lambda D} \right) \right)$$

- Interférences constructives
  $I(M)$ est maximales
  alors $1 + \cos\left( 2\pi  \frac{\delta}{\lambda} \right)$ est maximales
  donc
  $$\cos\left( \frac{2\pi \delta}{\lambda} \right) \Leftrightarrow \delta = n \lambda$ avec $n \in \mathbb{Z}$$
- Interférences destr.
  $I(M)$ est nulle 
  Alors $1 + \cos\left( \frac{2\pi \delta}{\lambda} \right) = 0$ 
  Donc
  $$\cos\left( \frac{2\pi \delta}{\lambda} \right) = -1 \Leftrightarrow \delta = (2n+1) \frac{\lambda}{2}$$

#### 5 Chemin optique
#### Définition: 
Soit un rayon lumineux qui se propage dans un milieu d'indice optique $n_{i}$ uniforme on appelle chemin optique entre les moints $M_{1}$ et $M_{2}$ : 
$$(M_{1}M_{2}) = n_{i}M_{1}M_{2}$$

Pour les phénomènes d'interférences
Excalibur 12.
les signaux en $M$ : 
$$E_{1}(M, t) = E_{m}\cos(\omega t-kr_{1})$$
$$E_{2}(M, t) = E_{m}\cos(\omega t-kr_{2})$$
Ondes synchrones constantes et de même amplitudes 
La grandeur qui détermine l'intensité en M est : 
$$\Delta \Phi = k(r_{2}-r_{1})$$
$k = \frac{\omega}{c}$ avec $c$ la vitesse dans le milieu $c = \frac{c_{0}}{n_{i}}$ et $c_{0}$ la vitesse dans le vide

$$\Delta \Phi = \frac{\omega}{\omega_{0}}n_{i}(r_{2}-r_{1})$$
avec $n_{i}(r_{2}-r_{1}) = (S_{2}M)-(S_{1}M)$ La différence de chemin optique

- Interférence constructive
  $\delta = n > 0$ et $\lambda_{0} = \frac{1}{n_{i}}\lambda_{milieu}$ dans le vide
- Interférence destructive
  $\delta = (2n+1) \frac{\lambda_{0}}{2}$

# VII. Phénomène de diffraction
# 1. Loi générale
Excalibur 13

#### Propriété
Lorsqu'une onde rencontre un obstacle dont la taille est de l'ordre de sa longueur d'onde, l'inde va s'étaler après cet obstacle c'est le phénomène de diffraction. 

L'angle de diffraction $\Theta$ correspond au demi-angle d'ouverture et en a. 
$$\sin \Theta \sim \frac{\lambda}{a} $$
Si l'ouverture est a
$$\sin \Theta \approx 1.22 \frac{\lambda}{a}$$
$\Theta$ est proportionnel à $\lambda$ et inversement proportionnel à $a$
la diffraction s'observe bien pour $a$ tq
$$\lambda < a < 100 \lambda$$

## 2. Théorème de Babinet
#### Théorème
Les figures de diffraction créés par une ouverture ou une plaque opaque de même forme sont identiques. 