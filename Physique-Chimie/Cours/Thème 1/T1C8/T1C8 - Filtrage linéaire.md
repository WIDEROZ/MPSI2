# I. Signaux périodiques
## 1. Rappels
#### Définition :
Soit s(t) un signal périodique de période T :
- Fréquence : $f = \frac{1}{T}$
- Moyenne : $<s> = \frac{1}{T} \int_{0}^T s(t) \, dx$
- Amplitude : $S_{m} = max(s) - <s>$
- Valeur crête a crête $S_{pp} = max(s) - min(s)$
- Valuer efficace $S_{eff} = S_{RMS} = \sqrt{ \frac{1}{T}\int_{0}^T  s^2(t) \, dx} = \sqrt{ <s^2> }$
## 2. Théorème de Fourrier
#### Théorème
Tout signal physique périodique de période T et de pulsation $\omega = \frac{2\pi}{T}$ peut s'écrire comme une somme infinie de fonctions sinusoïdales de pulsation $\omega_{k} = k\omega$ ou $k \in \mathbb{N}$
Donc, 
$$s(t) = a_{0} + \sum_{k=1}^{+ \infty}a_{k}\cos(k\omega t)+b_{k}\sin(k\omega t)$$
Avec $a_{k}$ et $b_{k}$ les coefficients de Fourier
$$a_{k} = \frac{2}{T}\int_{0}^T s(t)\cos(k\omega t) \, dt$$
$$b_{k} = \frac{2}{T} \int_{0}^T s(t)\sin(k\omega t) \, dt$$

La fonction $s(t)$ sans $a_{0}$ est appelée l'harmonique d’ordre k du signal
$a_{0} = a_{0}\cos(0\omega t)$ est la valeur moyenne de s 
$$<s> = a_{0}$$
L'harmonique de rang 1 est appelée le fondamental quand $\omega_{1} = \omega$
- Remarque :
  Plus l'harmonique est de rang élevé, plus sa fréquence est grande :
- $a_{k} \rightarrow 0$    $b_{k} \rightarrow 0$
  $k \rightarrow +\infty$ $k \rightarrow + \infty$
- En pratique, on s'arrête a un certain rang (somme finie) et on a accès a une approximation du signal
#### Propriétés
On considère le signal s(t) périodique de pulsation $\omega$
$$s(t) = a_{0} + \sum_{k=1}^{+ \infty}a_{k}\cos(k\omega t)+b_{k}\sin(k\omega t)$$
- La valeur efficace (Théorème de Parceval): 
  $$S_{RMS} = \sqrt{ <s^2> }=\sqrt{ a_{0}^2+ \sum_{k = 1}^{+\infty}a_{k}^2 + b_{k}^2 } $$
  $$<s^2> \neq <s>^2$$
- Si le signal $s(t)$ est pair
  $b_{k} = 0$
  $$s(t) = a_{0} + \sum_{k=1}^{+ \infty}a_{k}\cos(k\omega t)$$
- Si le signal est impair
  $a_{k} = 0$
  $$s(t) = a_{0} + \sum_{k=1}^{+ \infty}b_{k}\sin(k\omega t)$$
## 3. Analyse spectrale
#### Définition : Spectre de Fourier
Le spectre de Fourrier d'un spectre périodique s(t) est l'ensemble des coefficients de Fourier de ce signal. On le représente en traçant $a_{k}$ et $b_{k}$ en fonction de $k\omega$
#### Exemple
Exclidraw 1 

# II. Filtrage linéaire
## 1. Principe
On étudie uniquement les filtres linéaires
Exalibur 2

Le filtre est linéaire si l'équation différentielle qui relie $s(t)$ et $e(t)$ est linéaire
#### Théorème de superposition
La réponse d'un système linéaire a une somme d’excitation est la somme des réponses à chaque excitation prise séparément
Excalidraw 3.

On se place en notation complèxe pour determiner $s(t)$
$$e(t) \rightarrow \underline{e} = \underline{e_{0}} + \sum e_{k}e^{ j\omega t }$$
Décomposition de Fourier complexe

D'après le théoreme de superposition : 
$$\underline{s} = \underline{s_{0}} + \sum \underline{s_{k}}e^{ j(\omega t+\phi k) }$$
Il suiffit de determiner $\underline{s_{k}}$ et $\phi_{k}$ en fonction de $\underline{e_{k}}$
## 2. Impédances d'entrée et de sortie
#### Définition
On appelle impédance d'entrée :
$$\underline{Z_{e}} = \frac{\underline{e}}{\underline{i_{e}}}$$
Vue a l'entré du dipole

On appelle impédance de sortie : 
$$\underline{Z_{s}} = \frac{\underline{s}}{\underline{i_{s}}}$$
## 3. Fonction de transfert
Excalibur 4 
On étudie toujours les filtres en sortie ouverte : $i_{s}(t)  =0$
#### Définition Fonction de transfert / Transmittance
C'est la fonction complexe $\underline{H(\omega)} = \frac{\underline{U_{s}}}{U_{e}}$
avec $U_{e}$ et $U_{s}$ Les amplitudes complexes respectives de $\underline{s}$ et $\underline{e}$
$\underline{H}$ est caractérisé par son gain
$$G = |\underline{H}(\omega)|$$
et son argument :
$$ \phi(\omega) = arg(\underline{H}) $$

Si $e(t) = \sum e_{k}\cos(k\omega t)+\phi_{k}$
En sortie on obtiens : 
$$s(t) = \sum G(k\omega)e_{k}\cos(k\omega t+\phi_{k}+\phi(k\omega))$$
Exemple :
$f = 1kHz$
$$e(t) = E_{0} + E_{0}\cos(\omega t) + \frac{E_{0}}{10}\cos(10\omega t)$$
$$ s(t) = S_{0} + S_{1} \cos(\omega t + \phi_{1}) + S_{2}\cos(10\omega t + \phi_{2})$$
$S_{0} = E_{0} G(\omega=0)$
$S_{1}= E_{0} G(\omega)$
$S_{2} = \frac{E_{0}}{10}G(10\omega)$
Excalibur 5.

$$ \underline{H} = \frac{\underline{U_{s}}}{\underline{U_{e}}} $$

#### Propriété
Comme on étudie des filtres linéaires, $\underline{H}$ peut toujours s'écrire comme une fraction de polynômes en $j\omega$
$$ \underline{H} = \frac{P_{n}(j\omega)}{P_{d}(j\omega)} $$
#### Définition
L'ordre du filtre  linéaire est égal au degré est égal au degré du polynomial au dénominateur de la fonction de transfert. Plus l'ordre du filtre est élevé plus il est efficace. 

## 4. Diagramme de Bode
### a. Définitions
#### Le gain en décibel
$$ G_{db} = 20\log G = 20 \log(|\underline{H}|) $$
#### Le diagramme de Bode
Représentation graphique de $\underline{H}$ à l'aide de 2 courbes
- Courbe de gain : On trace $G_{db}$ en fonction fonction de $\omega$ ou $\log \omega$
- Courbe de phase : On trace $\phi$ (la phase de $\underline{H}$) en fonction de $\omega$ ou $\log \omega$

### b. Echelle logarithmique
#### Définition
2 Grandeurs sont séparés d'une décade si leur rapport vaut 10
En fréquence, une décade est l'intervalle tel que la valeur maximale de l'intervalle est égale a 10 fois la valeur minimale

saad ibn abdelaziz ibn ali ismael shik shak shok balla thein shawarma walad bebsi zyadeh batata bdoon salata ma3 gageenet bebsi bardeh bdoon thalj wallak hamodeh e6fi el playstation
lal nom mohammad abdallah

### c. Diagramme asymptotique
#### Définition
Le diagramme asymptotique d'un filtre correspond aux comportements de $G_{db}$ et de $\phi$ à $\omega = 0$ et $\omega \to + \infty$
Excalibur 6.

### d. Pulsation de coupure
#### Définition
On appelle pulsation de coupure la ou les pulsations $\omega_{c}$ tel que :
$$G(\omega_{c}) = \frac{max(G)}{\sqrt{ 2 }} \Leftrightarrow G_{db}(\omega_{c}) = max(G_{db})-3$$


# III. Filtres passe-bas
## 1. Introduction
On veut se débarrasser des hautes fréquences
Excalibur 7. 
## 2. Filtre passe bas d'ordre 1
### a. Circuit RC, sortie C
Excalibur 8.
#### Comportements asymptotiques
- Basse fréquence : 
  $i = 0$ et $u_{s} = u_{e}$
- Haute fréquence
  $u_{s} = 0$

#### Fonction de transfert
$$\underline{H} = \frac{\underline{u_{s}}}{\underline{u_{e}}}$$
On a un pont diviseur de tension dans notre circuit
On a donc $z_{c} = \frac{1}{jC\omega}$ et $z_{r} = R$
$$\underline{u_{s}} = \frac{z_{c}}{z_{c}+z_{r}}\underline{u_{e}}$$
$$\underline{u_{s}} = \frac{u_{e}}{jRC\omega + 1}$$
$$\underline{H} = \frac{1}{1 + jRC\omega}$$
On pose $\omega_{0} = \frac{1}{RC}$ la pulsation caractéristique
et $x = \frac{\omega}{\omega_{0}}$ la pulsation réduite et 
$$\underline{H} = \frac{1}{1+jx} = \frac{1}{1+j \frac{\omega}{\omega_{0}}}$$
#### Gain et phase
$$G = |\underline{H}| = \frac{1}{\sqrt{ 1+ x^2}}$$
$$G_{db} = 20\log G = 20 \log\left( \frac{1}{\sqrt{ 1 + x^2 }} \right) = -20\log(\sqrt{ 1 + x^2 })$$
$$ G_{db} = -10\log(1+x^2) $$
$$\phi = arg(|\underline{H}|) = \arctan(x)$$
#### Diagramme de Bode
Excalibur 9
- $\omega \to 0$ : $G_{db} = - 10 \log(1) = 0$
- $\omega \to + \infty$ : $G_{db} \to -10 \log(x^2) = -20\log(x)$

Excalibur 10

### b. Généralisation
La fonction d'un filtre passe bas d'ordre 1 se met sous la forme : 
$$\underline{H} = \frac{G_{0}}{1+j \frac{\omega}{\omega_{0}}}$$
Gain : 
$$G = \frac{G_{0}}{\sqrt{ 1 + x^2 }}$$ avec $x = \frac{\omega}{\omega_{0}}$
Gain en décibels : 
$$G_{db} = 20 \log(G_{0}) - 10 \log(1+x^2) $$
Phase : 
$$\phi = -\arctan x$$

Diagramme de Bode asymptotique

- $\omega = 0 \Leftrightarrow x = 0$
  $$G_{db} = 20\log(G_{0}) = max(G_{db})$$
  $$\phi = \arctan 0 = 0$$
- $\omega \to + \infty \Leftrightarrow x \to + \infty$
  $$G_{db} = 20\log G_{0}- 20\log x$$
  pente de -20db/décade
  $$\phi \to -\frac{\pi}{2}$$  
- $\omega = \omega_{0} \Leftrightarrow x = 1$
  $$ G_{db} = 20\log G_{0} - 10 \log(2) $$
$$\phi = -\arctan 1 = -\frac{\pi}{4}$$
  $\omega_{0} = \omega_{c}$ pulsation de coupure
  
  Excalibur 11


### c. Comportement pseudo-intégrateur
TP circuit RC si le signal créneau du GBF a une fréquence très grande telle que $f\gg \frac{1}{\tau}=\frac{1}{RC}$
La tension $u_{c}$ est un signal triangulaire

Excalubur 12

$$ \underline{H} = \frac{G_{0}}{1+jx} = \frac{\underline{u_{e}}}{\underline{u_{e}}} $$
- Si $x\gg 1$ $\underline{H} \approx \frac{G_{0}}{jx}$
  $$ \underline{u_{s}} = \frac{\underline{u_{e}}G_{0}\omega_{0}}{j\omega} $$
  A Haute fréquence en notation temporelle
  $$u_{s}(t)= G_{0}\omega_{0}\int u_{e}(t) \, dt $$

#### Propriété
A Haute fréquence un filtre passe bas se comporte comme un intégrateur a une constante multiplicative près on parle de montage pseudo-intégrateur

## 3. Filtre passe bas d'ordre 2
### a. Circuit RLC sortie sur C
Excalibur 13
#### Comportements asymptotiques
- Basse fréquence
  Condensateur : interrupteur ouvert
  Bobine : fil
  $$u_{e} = u_{s}+u_{l}+u_{R} = u_{s} + 0 + R \times 0$$
  car $i = 0$
  $$u_{e} = u_{s}$$
- Haute fréquence
  Condensateur : fil
  Bobine : interrupteur ouvert
  $u_{s} = 0$

#### Fonction de Transfert

$$\underline{H} = \frac{\underline{u_{s}}}{\underline{u_{e}}}$$
Pont diviseur de tension
$$\underline{ u_{s}} = \frac{z_{c}}{z_{c}+z_{L}+z_{R}}\underline{u_{R}}$$
$$\underline{H} = \frac{1}{jC\omega}\times \frac{1}{\frac{1}{jC\omega}+jL\omega+R}$$
$$\underline{H} = \frac{1}{1-LC\omega^2 + jRC\omega}$$
On pose :
- $\omega_{0} = \frac{1}{\sqrt{ LC }}$ pulsation propre
- $Q = \frac{1}{R}\sqrt{ \frac{L}{C} }$
- $x = \frac{\omega}{\omega_{0}}$

$$\underline{H} = \frac{1}{1-\frac{\omega^2}{\omega_{0}^2}+j \frac{\omega}{\omega_{0}Q}}$$
$$\underline{H} = \frac{1}{1-x^2+j \frac{x}{Q}}$$
On a bien un Filtre passe bas d'ordre 2
#### Gain et Phase
$$G = \frac{1}{\sqrt{ (1-x^2)^2 + \left( \frac{x}{Q} \right)^2}}$$
*$$G_{db} = 20 \log G = -10\log\left( (1-x^2)^2+\left( \frac{x}{Q} \right)^2 \right)$$
$$\phi = - \arctan\left( \frac{x}{Q(1-x^2)} \right)$$
$$\phi = -\frac{\pi}{2} + \arctan\left( \frac{Q(1-x^2)}{x} \right)$$

#### Diagrame de Bode
Excalibur 14

### b. Généralisation
La fonction de transfert d'un filtre passe-bas d'ordre 2 se met sous la forme. 
$$ \underline{H} =  \frac{G_{0}}{1-x^2+j \frac{x}{Q}}$$
avec
- $x = \frac{\omega}{\omega_{0}}$
- $G_{0}$ le gain statique
- $\omega_{0}$ la pulsation caractéristique
- Q le facteur de qualité

gain : $G = |\underline{H}|$

$$G = \frac{G_{0}}{\sqrt{ (1+x^2)^2 + \left( \frac{x}{Q} \right)^2}}$$
$$G_{dB} = 20 \log G_{0} - 10 \log\left( (1-x^2)^2+\left( \frac{x}{Q} \right)^2 \right)$$
$$\phi = arg(\underline{H})$$
$$\phi = - \arctan\left( \frac{x}{Q(1-x^2)} \right)$$
#### Diagramme de Bode Asymptotique
- $\omega \to 0$ : $x \to 0$
  $G = G_{0}$
  $G_{dB} = 20 \log G_{0}$
  $\phi = -0$

- $\omega = \omega_{0}$ : $x = 1$
  $G(\omega_{0}) = QG_{0}$
  $G_{dB} = 20 \log G_{0} + 20 \log Q$
  $\phi = \frac{-\pi}{2}$

- $\omega \to + \infty$ : $x \to + \infty$
  $G \to 0$
  $G_{dB}$ : $(1-x^2)^2 + \left( \frac{x}{Q} \right)^2 \to x^4 + \left(\frac{x}{Q}\right)^2 \to x^4$
  pente de $-40 dB /$ décade
  $\phi \to - \pi$

Excalibur 15

On peut montrer qu'il y a résonance si $Q > \frac{1}{\sqrt{ 2 }}$
résonance $\Leftrightarrow$ max de $G$
résonance $\Leftrightarrow$ On cherche le minimum du dénominateur de G
$\Leftrightarrow$ min $f(x) = (1-x^2)^2 + \frac{x^2}{Q^2}$
On dérive cette fonction f et on cherche $x_{r} = \frac{\omega_{r}}{\omega_{0}}$ 
$$\frac{df}{dx}(x_{r})=0$$
### c. Fonction moyenneur
Si $\omega_{c} < \omega$
- $\omega_{c}$ : pulsation de coupure
- $\omega$ : pulsation du signal
Alors le filtre donne la moyenne du signal d'entrée. Il joue le rôle d'un moyenneur

# IV. Filtres passe-haut
## 1. Introduction
On étudie des filtres construits pour se débarrasser des basses fréquences et de la moyenne du signal

excalidraw 16

## 2. Filtre passe-haut d'ordre 1
### a. Circuit RC sortie sur R
Excalibur 17

#### Comportement asymptotique
- BF $\omega \to 0$ $s=0$ Condensateur : interrupteur ouvert
- Hf $\omega \to + \infty$ Condensateur : fil

Excalibur 18 

On a bien un filtre passe-haut

#### Fonction de transfert
$$\underline{H} = \frac{\underline{s}}{\underline{e}}$$
Pont diviseur de tension : 
Excalibur 19
$$\underline{s} = \frac{R}{z_{c} + R} \underline{e}$$
$$\underline{s} = \frac{R}{\frac{1}{jC\omega}+R} \underline{e} = \frac{jRC\omega}{1 + jRC\omega} \underline{e}$$
$$\underline{H} = \frac{jRC\omega}{1 + jRC\omega}$$
On pose $\omega_{0} = \frac{1}{RC}$ la pulsation caractéristique du circuit
$x = \frac{\omega}{\omega_{0}}$ la pulsation réduite
$$\underline{H} = \frac{jx}{1+jx} = \frac{1}{1-\frac{j}{x}}$$
#### Gain de phase
$$G = |\underline{H}| = \frac{x}{\sqrt{ 1+x^2 }}$$
$$\phi =  arg(\underline{H}) =  - arg(1+jx) = \frac{\pi}{2} - \arctan(x) = \arctan\left( \frac{1}{x} \right)$$

#### Diagramme de Bode
Excalibur 20
$$G_{dB} = 20\log G =20\log x - 10\log(1+x^2) $$

### b. Généralisation
#### Fonction de transfert
La fonction de transfert d'un filtre passe haut d'ordre 1 se met sous la forme : 
$$\underline{H} = \frac{jxG_{0}}{1+jx} \text{ avec } x = \frac{\omega}{\omega_{0}}$$
et $\omega_{0}$ la pulsation caractéristique du filtre
$G_{0}$ : Gain a haute fréquence

#### Gain
$$G = |\underline{H}| = \frac{G_{0}x}{\sqrt{ 1 + x^2 }}$$

#### Phase
$$\phi = arg(\underline{H}) = \frac{\pi}{2} - \arctan x  =\arctan \left( \frac{1}{x} \right)$$

#### Diagramme de bode asymptotique
Excalibur 21 
- $\omega \to 0$ : $x \to 0$
  $G \to 0$
  $$G_{dB} = 20 \log G_{0} x - 10 \log(1+x^2) = 20 \log G_{0} + 20\log x$$
  $$G_{dB} \to + 20dB\text{/Decade}$$

- $\omega = \omega_{0}$ $x = 1$
  $G = \frac{G_{0}}{\sqrt{ 2 }}$ 
  $\omega_{0} = \omega_{c}$ pulsation de coupure
  $G_{dB} \approx 20 \log G_{0} - 3$

- $\omega \to + \infty$ : $x \to + \infty$
  $$G \to \frac{G_{0}x}{\sqrt{ x }} = G_{0} = max(G)$$
  $$ G_{dB} \to 20 \log G_{0} $$
  Excalibur 21

- $\omega \to 0$
  $\phi = \frac{\pi}{2}$
  $\omega = \omega_{0}$
  $x = 1$ 
  $\arctan x = \frac{\pi}{4}$

- $\omega \to + \infty$ 
  $\arctan \to \frac{\pi}{2}$
   $\phi \to 0$

### c. Comportement pseudo-dérivateur
$\underline{H} = \frac{jxG_{0}}{1+jx}$
à BF $x\ll 1$
alors $1+jx \approx 1$
Donc $\underline{H} \approx jxG_{0}$
Or $\underline{H} = \frac{\underline{s}}{\underline{e}} \approx jx G_{0} = j \frac{\omega}{\omega_{0}}G_{0}$
Donc $\underline{s} = \frac{G_{0}}{\omega_{0}}j\omega \underline{e}$


Le signal d'entrée est multiplié par $j\omega$ donc en notations relles
$$s(t) = \frac{G_{0}}{\omega_{0}} \frac{de}{dt} \text{ à BF}$$
#### Propriété
A BF, un filtre passe-haut d'ordre 1 se comporte comme un dérivateur à un coeff près. C'est un montage pseudo-dérivateur

## 3. Filtre pass-haut d'ordre 2
### a. Circuit RLC avec sortie sur L

Excalibur 22

#### Comportments asymptotiques
- BF :
  Condensateur : interrupteur ouvert
  Bobine : fil
  $s = 0$
- HF
  Condensateur : fil
  Bobine : interrupteur ouvert

Excalibur 23

#### Fonction de transfert
$$\underline{H} = \frac{\underline{s}}{\underline{e}}$$ Pont diviseur de tension

$$\underline{s} = \frac{z_{l}}{z_{c} + R + z_{L}} \underline{e}$$
$$\underline{H} = \frac{z_{L}}{z_{C} + R + z_{L}} = \frac{jL\omega}{R + jL\omega + \frac{1}{jC\omega}} = \frac{jL\omega}{\frac{{jRC\omega-LC\omega^2+1}}{jC\omega}} $$
Donc :
$$\underline{H} = - \frac{LC\omega^2}{1 + LC\omega^2 + jRC\omega}$$
On pose : 
$\omega_{0} = \frac{1}{\sqrt{ LC }}$ la pulsation caractéristique du filtre 
$Q = \frac{1}{R} \sqrt{ \frac{L}{C} }$ le facteur de qualité
$x = \frac{\omega}{\omega_{0}}$ 
On a :
$$\underline{H} = - \frac{x^2}{1 - x^2 + j \frac{x}{Q}}$$
#### Gain et phase
$$G = |\underline{H}| = \frac{x^2}{\sqrt{ (1-x^2)^2 + \left( \frac{x}{Q} \right)^2 }}$$
$$G_{dB} = 20\log G$$
$$G_{dB} = 40 \log x - 10 \log\left( (1-x^2)^2+ \left( \frac{x}{Q} \right)^2 \right)$$
$$\phi = arg(\underline{H}) = arg(-x^2)- arg\left( 1-x^2 + j \frac{x}{Q} \right) = \pi - \arctan\left( \frac{x}{Q(1-x^2)} \right)^2$$

#### Diagramme de Bode
Excalibur 25

### b. Généralisation
#### Fonction de transfert 
La fonction de transfert d'un filtre passe haut d'ordre 2 est de la forme : 
$$\underline{H} = \frac{G_{0}x^2}{x^2-1-j \frac{x}{Q}} = \frac{G_{0}}{1-\frac{1}{x^2}-\frac{j}{xQ}}$$
Avec $x = \frac{\omega}{\omega_{0}}$ et $\omega_{0}$ la pulsation caractéristique et $Q$ le facteur de qualité
$G_{0}$ est le gain maximum

#### Gain
$$G = \frac{Gx^2}{\sqrt{ (x^2-1)^2 + \left( \frac{x}{Q} \right)^2 }}$$
$$G_{dB} = 20\log(G_{0}) + 40 \log x-10\log\left( (x^2-1)^2+\left( \frac{x}{Q} \right)^2 \right)$$

#### Phase
$$\phi = arg(\underline{H}) = arg(G_{0}x^2) - arg\left( x^2-1-j \frac{x}{Q} \right) = 0 - \arctan\left( -\frac{x}{Q(x^2-1)} \right) = \arctan\left( \frac{x}{Q(x^2-1)} \right)$$

#### Diagramme de bode asymptotique
- $\omega \to 0 \Leftrightarrow x \to 0$
  $G \to 0$
  $G_{dB} \to 40\log x - 10\log 1$
  $G_{dB} \to + 40 \log x$
  $\phi = \arctan(-0) = \pi$
- $\omega = \omega_{0} \Leftrightarrow x = 1$
  $G = \frac{G_{0}}{0 + \frac{1}{Q^2}} = QG_{0}$
  $G_{dB} = 20 \log(QG_{0})$
  $\phi(\omega_{0}) \to \frac{\pi}{2}$
- $\omega \to + \infty \Leftrightarrow x \to + \infty$
  $G \to \frac{G_{0}x^2}{x^2} = G_{0}$
  $G_{dB} \to 20 \log(G_{0})$
  $\phi = \arctan(+0) = 0$

Excalibur 26.

#### Cherchons la résonance
On cherche $\omega_{r}$ telle que $G(\omega_{r}) = max(G)$
Exprimons $G$ pour n'avoir que $\omega$ au dénominateur

$$G = \frac{G_{0}x^2}{\sqrt{ x^4\left( 1-\frac{1}{x^2} \right)^2 + x^4\left( \frac{1}{x^2Q^2} \right)}} = \frac{G_{0}}{x^2\sqrt{ \left( 1-\frac{1}{x^2} \right)^2 + \frac{1}{(xQ)^2} }}$$
Dans ce cas on étudie le dénominateur : 
$$f(x) = \sqrt{ \left( 1-\frac{1}{x^2} \right)^2 + \frac{1}{(Qx)^2} }$$
Ce qui reviens a chercher le min de la fonction
$$g(x) = \left( 1-\frac{1}{x^2} \right)^2 + \frac{1}{(Qx)^2}$$
On cherche $x_{r}$ qui annule la dérivée de $g$ 
$$g'(x) =  \frac{4}{x^3}\left( 1-\frac{1}{x^2} \right) - \frac{2}{Q^2x^3} = \frac{2}{x^3}\left( 2-\frac{2}{x^2} - \frac{1}{Q^2} \right)$$
$$g'(x) = 0 \Leftrightarrow 2 - \frac{2}{x^2} - \frac{1}{Q^2} = 0 \Leftrightarrow x^2 = \frac{2}{2-\frac{1}{Q^2}} $$
$x_{r}$ existe ssi 
$$2 - \frac{1}{Q^2} > 0 \Leftrightarrow Q > \frac{1}{\sqrt{ 2 }}$$
Sous cette condition
$$x_{r}^2 = 2 \frac{1}{2-\frac{1}{Q^2}} = \frac{2Q^2}{2Q^2-1} $$

$\frac{\omega_{r}}{\omega_{0}} = x_{r} > 0$

$$x_{r} = \frac{\sqrt{ 2 }Q}{\sqrt{ 2Q^2 - 1 }}$$
Pulsation réduite à laquelle $G$ passe par un maximum. 

# V. Filtre passe-bandes
## 1. Introduction
Un filtre passe-bande ne va laisser passer les signaux que dans une intervalle de fréquence
Excalibur 27.

## 2. Circuit RLC série sortie sur R
Excalibur 28.
#### Comportement asymptotique
- BF
  Condensateur -> Interrupteur ouvert
  Bobine -> fil
  Donc
  $i = 0 \Leftrightarrow s = Ri = 0$

- HF
  Condensateur -> Fil
  Bobine -> Interrupteur ouvert
  Donc
  $i = 0 \Leftrightarrow s = Ri = 0$

Donc on a un comportement passe bande

#### Fonction de transfert
$$\underline{H} = \frac{\underline{s}}{\underline{e}}$$
Pont diviseur de tension :
$$\underline{s} = \frac{\underline{Z_{R}}}{Z_{C} + Z_{L} + Z_{R}} \underline{e}$$

$$\underline{H} = \frac{R}{R + jL\omega + \frac{1}{jC\omega}}$$
$$\underline{H} = \frac{1}{1+ j \frac{L}{R}\omega - j \frac{1}{RC\omega}}$$
$$\underline{H} = \frac{1}{1+ \frac{j}{R}\left( L\omega-\frac{1}{C\omega} \right)}$$

On pose : 
$\omega_{0} = \frac{1}{\sqrt{ LC }}$
$Q = \frac{1}{R} \sqrt{ \frac{L}{C} }$
$x = \frac{\omega}{\omega_{0}}$



$$\underline{H} = \frac{1}{1+ \frac{j}{R}\left( L\frac{\omega}{\omega_{0}} \frac{1}{\sqrt{ LC }}- \frac{1}{C} \frac{\omega_{0}}{\omega} \times \sqrt{ LC } \right)} = \frac{1}{1+\frac{j}{R}\left( \sqrt{ \frac{L}{C} } \frac{\omega}{\omega_{0}} - \sqrt{ \frac{L}{C} } \frac{\omega_{0}}{\omega} \right)}$$

$$\underline{H} = \frac{1}{1+jQ\left( x - \frac{1}{x} \right)}$$
Donc c'est un filtre d'ordre 2

#### Gain et phase
$$G = |\underline{H}| = \frac{1}{\sqrt{ 1+Q^2\left( x-\frac{1}{x} \right)^2}}$$
$$\phi = arg(\underline{H}) = -arg\left( 1+jQ\left( x-\frac{1}{x} \right) \right)$$
$$\phi = - \arctan\left( Q\left( x-\frac{1}{x} \right) \right)$$
$$G_{dB} = 20\log G = -10\log\left( 1 + Q^2\left( x-\frac{1}{x} \right)^2 \right)$$

#### Diagramme de Bode asymptotique
- $x \to 0$
  $G_{dB} \to - 10\log\left( \frac{Q^2}{x^2} \right) = - 10 \log(Q^2) + 10\log(x^2)$
  $G_{dB} \to 20 \log x$
- $x \to + \infty$
  $G_{dB} \to -10\log(Q^2x^2)$
  $G_{dB} \to - 20\log(x)$

Excalibur 29. 

### c. Généralisation
La fonction de transfert d'un filtre passe bande se met sous la forme :
$$\underline{H} = \frac{G_{0}}{1 + jQ\left( x - \frac{1}{x} \right)}$$
Avec 
$G_{0}$ le gain maximum
$Q$ la facteur de qualité
$x = \frac{\omega}{\omega_{0}}$
$\omega_{0}$ Pulsation caractéristique

#### Gain et phase
$$G = |\underline{H}| = \frac{G_{0}}{\sqrt{ 1 + Q^2\left( x-\frac{1}{x} \right)^2 }}$$
et
$$\phi = arg(\underline{H}) = - \arctan\left( Q\left( x - \frac{1}{x} \right) \right)$$

- $x = 1$ $\omega = \omega_{0}$ $x - \frac{1}{x} = 0$
  $$\left\{ \begin{array}{l} G = G_{0} \\ G_{dB} = 20 \log G_{0} \\ \phi = 0 \end{array} \right.$$

## 4. Acuité du filtre
Excalibur 30.
Avec $\omega_{2}$ et $\omega_{1}$ les pulsations de coupures
$$G(\omega_{1}) = G(\omega_{2}) = \frac{G_{0}}{\sqrt{ 2 }}$$
#### Définition
Acuité : $\frac{\omega_{0}}{\Delta \omega}$ 

# VI. Filtre cascade
## I. Introduction
Excalibur 31

#### Fonction de transfert total
$$\underline{H} = \frac{\underline{s}}{\underline{e}} \neq \underline{H_{1}} \times \underline{H_{2}}$$
$$\underline{H} = \frac{\underline{u}}{\underline{e}} \times \frac{\underline{s}}{\underline{u}}$$
Pour les filtres en cascades on peut écrire $$\underline{H} = \underline{H_{1}} \times \underline{H_{2}} \times \dots \times \underline{H_{n}}$$
Si l’impédance d'entrée du filtre 2 est très grande devant celle de sortie du filtre 1
$$z_{e_{2}} = z_{s_{1}}$$
Dans ce cas le filtre 1 se retrouve en sortie ouverte
Si $z_{s_{1}} = 0$ (impédance de sortie du filtre 1)
alors quelque soit $z_{e_{2}}$ on a le filtre 1 en sortie ouverte. 

## 2. Filtre de Colpitts
Excalibur 32.

Determiner
$$\underline{H} = \frac{\underline{s}}{\underline{e}}$$
Comme $i \neq 0$, on ne peut pas utiliser la fonction de transfert du filtre passe-haut 
Donc on determine $z_{eq}$
$$\frac{1}{z_{eq}} = \frac{1}{z_{L}} + \frac{1}{z_{c_{1}}+ z_{c_{2}}}$$
$$\frac{1}{z_{eq}} = \frac{1}{jL\omega} + \frac{1}{\frac{1}{JC_{1}\omega} + \frac{1}{jC_{2}\omega}} = \frac{1}{jL\omega} - \frac{C_{1}C_{2}\omega^2}{j\omega(C_{1}+C_{2})}  $$
$$\frac{1}{z_{eq}} = - \frac{j\omega(C_{1}+C_{2})-jLC_{1}C_{2}\omega^3}{L\omega^2(C_{1}+C_{2})}$$
Donc
$$z_{eq} = \frac{jL(C_{1}+C_{2})\omega}{(C_{1}+C_{2}) -LC_{1}C_{2}\omega^2}$$

On a un pont diviseur de tension
Excalibur 33. 
Donc
$$\underline{u} = \frac{z_{eq}}{R+z_{eq}}\underline{e}$$
$$\underline{H_{1}} = \frac{z_{eq}}{R+z_{eq}}$$
$$R + z_{eq} = \frac{R(C_{1}+C_{2})-RLC_{1}C_{2}\omega^2+jL(C_{1}+C_{2})\omega}{C_{1}+C_{2}-LC_{1}C_{2}\omega^2}$$
$$\underline{H_{1}} = \frac{jL(C_{1}+C_{2})\omega}{R(C_{1}+C_{2})-RLC_{1}C_{2}\omega^2+jL(C_{1}+C_{2})\omega}$$
La fonction de transfert de la partie de gauche n'est pas égale a celle du filtre $RL$
#### Déterminer $\frac{\underline{s}}{\underline{u}}$ 
Pont diviseur de tension
$$\underline{s} = \frac{z_{C_{2}}}{z_{C_{1}}+ z_{C_{2}}}\underline{u}$$
$$\frac{\underline{s}}{\underline{u}} = \frac{1}{jC_{2}\omega}\times \frac{1}{\frac{1}{jC_{1}\omega} + \frac{1}{jC_{2}\omega}} = \frac{1}{1+\frac{C_{2}}{C_{1}}} = \frac{C_{1}}{C_{1}+C_{2}}$$
$$\frac{\underline{s}}{\underline{e}} = \frac{\underline{s}}{\underline{u}} \times \frac{\underline{u}}{\underline{e}}$$
$$\frac{\underline{s}}{\underline{e}} = \frac{jLC_{1}\omega}{R(C_{1}+C_{2}) - RLC_{1}C_{2}\omega^2+jL(C_{1}+C_{2})\omega}$$

# VII. Filtrage introduit par un dispositif mécanique
## Activité documentaire
