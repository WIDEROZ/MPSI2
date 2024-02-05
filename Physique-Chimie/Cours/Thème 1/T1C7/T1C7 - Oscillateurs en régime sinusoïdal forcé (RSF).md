# I. RSF
## 1. Intérêt du RSF
- Théorème de Fourier : tout signal périodique pour sa décomposition comme une somme de fonctions sinusoïdales S(t) de période T
$$ S(t) = \Sigma_{\nu = 0} ^ {+ \infty} a_{n} \cos \omega_{n}t + a_{n} \sin \omega_{n}t $$
Excalibur
1
On veut connaitre S(t) on sait que
$$ e(t) = a_{0} \cos \omega_{0}t+b_{0}\sin \omega_{0}t + \dots $$
$$ S(t) = \Sigma e_{n}(t) $$
alors $S(t) = \Sigma_{n} S_{n}(t)$ avec S<sub>n</sub> la sortie de e<sub>n</sub> donc on se restreint a étudier la réponse du système a un signal sinusoïdal.
## 2. Signaux étudiés
- Les signaux étudiés vont toujours vérifier l'équation différentielle de l’oscillateur amorti : 
$$ \frac{d²s}{dt²} + \frac{\omega_{0}}{S} \frac{ds}{dt} + \omega_{0}² S = \omega_{0}²e(t) $$
e(t) est une excitation sinusoïdale extérieur par exemple $e(t) = E_{0}\cos(\omega t)$
- S<sub>part</sub>(t) dépends du temps, on la cherche sous la même forme que e(t) $S_{part}(t) = S_{n}\cos(\omega t+\phi)$ S<sub>part</sub> et e(t) ont la même pulsation. S<sub>part</sub> représente le RSF ce régime ne se dissipe pas car il est entretenu par e(t)
- S<sub>H</sub> (t) est la solution de l'équation homogène identique a celle de l’oscillateur amorti $S_{h}(t) \rightarrow 0$ quand t devient grand

- Définition : Le RSF correspond au régime permanent du système quand l'excitation est de forme sinusoïdale. 
- Propriété : Lorsque le régime transitoire s'est dissipé le signal oscille a la même fréquence que l'excitation. 
Donc pour connaître complètement $S_{t} = S_{part}(t) = S_{n}\cos (\omega t+\phi)$ il suffit de déterminer l'amplitude $S_{n}$ et le déphasage $\phi$ . 
$$ \frac{dS²}{dt²} + \frac{\omega_{0}}{Q} \frac{dS}{dt} + \omega_{0}²S = \omega_{0}² E_{0}\cos(\omega t)$$
$$ 
-S_{n} \omega²\cos(\omega t + \phi) - S_{n} \frac{\omega_{0}\omega}{Q}\sin(\omega t+\phi) + \omega_{0}²S_{n} \cos(\omega t+\phi) = \omega_{0}E_{0}\cos(\omega t)$$
Pour résoudre ce système on utilise les notations complexes

# II. Représentation complète des signaux sinusoïdaux
## 1. Rappels
- j tel que j² = -1

## 2. Représentation complexe d'un signal sinusoïdal
- Définition : Soit $S(t) = S_{n}\cos (\omega t+\phi)$ un signal sinusoïdal. 
  On associe a S(t) un nombre complexe $\underline{S}$ tel que
  $$ S(t) = \mathrm{Re}(\underline{S}) $$
  et
  $$ \underline{S}(t) = S_{n} e^{ j(\omega t+\phi) } $$
  On définit aussi l'amplitude complexe $\underline{S_{n}} = S_{n} e^{ j\phi }$
  $$ \underline{S}(t) = S_{n}\cos(\omega t+\phi) + j S_{n}\sin(\omega t+\phi) $$
  Partie imaginaire : aucune signification physique
## 3. Dériver et intégrer en représentation complexe
$$ \underline{S} = S_{n}e^{ j(\omega t+\phi) } $$
### a. dérivation
$$ \frac{d \underline{S}}{dt} = S_{n}j\omega e^{ j(\omega t+\phi) } = j\omega \times S_{n} e^{ j(\omega t+\phi) } = j\omega\underline{S}$$
### b. intégration
$$ \int S \, dt = S_{n}\int e^{ j(\omega t+\phi) } \, dt = S_{n} \frac{1}{j\omega}e^{ j(\omega t+\phi) } + cste $$
Donc : 
$$ \int S \, dt = \frac{\underline{S}}{j\omega} = - \frac{\underline{j}S}{\omega}$$
### c. conclusion
- Dériver un signal complexe revient a multiplier par $j\omega$
  $\frac{dS}{dt} = j\omega S$
  $\frac{d^2S}{dt^2} = -\omega^2S$
- Intégrer un signal complexe revient à diviser par $j\omega$
  $\int S(t) \, dx = \frac{1}{j\omega}S(t)$
### 4. Interprétation graphique
- Définition : Le vecteur de Fresnel est la représentation dans le plan complexe du signal sinusoïdal $S(t) = S_{n}\cos(\omega t+\phi)$ 
Avec l'axe des reels comme origine des phases

Excalidraw 2.
C'est un vecteur ... à la vitesse angulaire $\omega$ 

# III. Circuit électrique en RSF
## 1. Impédances et admittances complexes
### a. Résistance
- Définition : L’impédance complexe $\underline{Z}$ d'un dipôle est définie comme $\underline{Z} = \frac{\underline{U}}{\underline{I}}$ où $\underline{U}$ tension aux bornes d'un dipôle en convention récepteur et $\underline{I}$ le courant de la maille.
- Définition : L’admittance complexe est definite par : $\underline{Y} = \frac{1}{\underline{Z}}$

- Remarque : 
  - Si $z = 0$ alors $\underline{U} = 0$, le dipole est un fil
  - Si $z \to + \infty$ alors $\underline{I} = 0$, le dipole est un interrupteur ouvert

- Propriété : 
  + Le module de $\underline{Z}$ est appelé impédance réelle $\underline{Z} = |\underline{Z}| = \frac{U_{n}}{I_{n}}$
  + L'argument de $\underline{Z}$ correspond au déphasage entre la tension $\underline{U}$ et l'intensité $\underline{I}$ $\phi_{Z} = \phi_{U}- \phi_{I}$
  + $Re(Z) = R$ est la résistance su dipôle : $R = Z\cos \phi_{Z}$
  + $Im(Z) = X$ est la réactance $X = Z\sin \phi_{zZ}$
Exclaidraw 3.

### b. Condensateur
$$u(t) = U_{n}\cos(\omega t + \phi)$$
$$i(t) = C \frac{du}{dt} = -Cu_{n} \omega \sin(\omega t + \phi)$$
$$\underline{U} = U_{n}e^{ j(\omega t + \phi) }$$
$$\underline{I} = C U_{n} j\omega e^{ \omega j + \phi } = C U_{n} \omega e^{ j(\omega t + \phi + \pi/2) }$$
$$\underline{Z_{r}} = \frac{\underline{U}}{\underline{I}} = \frac{U_{n} e^{ j(\omega t + \phi) }}{j\omega CU_{n}e^{ j(\omega t+\phi) }}$$
$$\underline{Z_{C}} = \frac{1}{C \times j\omega} $$
$$\underline{I} = Cj\omega \times \underline{U}$$
$$arg(\underline{Z_{C}}) = \phi_{\underline{Z_{C}}} = \phi_{\underline{U}} - \phi_{\underline{I}} =-\frac{\pi}{2} $$

### c. Bobine
$$i(t) = I_{n} \cos(\omega t + \phi)$$
$$u(t) = -L\omega I_{n} \sin(\omega t + \phi)$$
$$\underline{I} = I_{n}e^{ j(\omega t + \phi) }$$
$$\underline{U} = I_{n}j\omega Le^{ j(\omega t + \phi) }$$
$$\underline{Z_{L}} = \frac{\underline{U}}{\underline{I}} = jL\omega$$
$$ arg(\underline{Z_{L}}) = \phi_{\underline{Z_{L}}} = \frac{\pi}{2}$$

### d. Dépendances en fréquence
- Résistance :
  Aucune dépendance en fréquence
- Condensateur :
  BF : $\omega \rightarrow 0$ $z_{c} \rightarrow + \infty$ Interrupteur ouvert
  HF : $\omega \rightarrow + \infty$ $z_{c} \rightarrow 0$ Fil
- Bobine : 
  BF : $\omega \rightarrow 0$ $z_{L} \rightarrow 0$ Fil
  HF : $\omega \rightarrow + \infty$ $z_{L} \rightarrow + \infty$ Interrupteur ouvert


## 2. Utilisation des impédances complexes
### a. Lois de Kirchhoff
- Propriétés : 
  Loi des nœuds :
  $$ \sum \underline{I}_{in} = \sum I_{out}$$
  Avec $\underline{I}_{in}$ les intensités complexes qui arrivent sur un nœud et $\underline{I}_{out}$ celles qui en repartent
  
  Loi des mailles :
  $$ \sum \epsilon_{k} \underline{U}_{k} = 0 $$
  Avec $\underline{U}_{k}$ les tensions complexes d'une maille et $\epsilon_{k} = 1$ si $\underline{U}_{k}$ est orientée comme la maille, $\epsilon_{k} = -1$ sinon. 

### b. Les associations de dipôles
- Propriétés : Pour des dipôles en série les impédances s’ajoutent : 
  $$ \underline{Z_{eq}} = \sum \underline{Z}_{i} $$
  pour des dipôles en parallèle les admittances s'ajoutent : 
  $$ \underline{Y}_{eq} = \sum \underline{Y}_{i} $$
  $$ \frac{1}{\underline{Z}_{eq}} = \sum \frac{1}{\underline{Z}_{i}}$$


Excaliburne 4:
impédance équivalentes? 
R, L, et C sont en série
$$ \underline{Z}_{eq} = \underline{Z}_{R} + \underline{Z}_{L} + \underline{Z}_{C} = R + jL\omega + \frac{1}{jC\omega} = \underline{Z}_{eq}$$
Dernière étape ...

excalibur 5 :
R, L et C sont en parallèle 
$$ \frac{1}{\underline{Z}_{eq}} = \frac{1}{\underline{Z}_{R}} + \frac{1}{\underline{Z}_{L}} + \frac{1}{\underline{Z}_{C}} = \frac{1}{R} + j\left( C\omega - \frac{1}{L\omega} \right) = \frac{\frac{1}{R} - j\left( C\omega - \frac{1}{L\omega} \right)}{\frac{1}{R²}+\left( C\omega-\frac{1}{L\omega} \right)²}$$
### c. Les ponts diviseurs
- Propriété du pont diviseur de tension : 
  Excalibur 6
  $$ \underline{U}_{1} = \frac{\underline{Z}_{1}}{\underline{Z}_{1}+ \underline{Z}_{2}}\underline{U} $$
  Excalibur 7 :
- Exemple : 
  $$ \underline{u_{c}} = \frac{\underline{Z}_{C}}{\underline{Z}_{R} + \underline{Z}_{C}} $$ $$\underline{u_{c}} = \frac{1}{1+jRC\omega} \underline{U}$$
- Propriété du pont diviseur de courant : 
  $$ \underline{I}_{1} = \frac{\underline{Z}_{2}}{\underline{Z}_{1} + \underline{Z}_{2}} \underline{I} $$
  
# IV. Réponse d'un circuit RLC série à une excitation sinusoïdale
## 1. Position du problème

Schema Owen

L'equa diff sur $u_{c}$ :
$$ \frac{d²u_{c}}{dt²} + \frac{\omega_{0}}{Q} \frac{du_{c}}{dt} + \omega_{0}²u_{c} = \omega_{0} e $$
$$ \omega_{0} = \frac{1}{\sqrt{ LC }} $$
$$ Q = \frac{1}{R} \sqrt{ \frac{L}{C} } $$

## 2. RSF
- On cherche $u_{c}$ en régime permanent en utilisant les notations complexes.
  $$e(t) \leftrightarrow \underline{E} = E_{m}e^{ j\omega t }$$
  et on cherche $\underline{U}_{c} = U_{m}e^{ j(\omega t+\phi) }$
  et aussi $\underline{I} = I_{m} e^{ j(\omega t + \Phi) }$
  
## 3. Etude de $\underline{U_{c}}$
- On injecte la forme de $U_{c}$ recherchée dans l'équation différentielle
  ²²²Um(−ω²)ej(ωt+ϕ)+ω0QUmjωej(ωt+ϕ)+ω0²Umej(ωt+ϕ)=ω0²Emejωt
  Cette opération est valable pour tout instant $\epsilon$. 
  ²²²−ω²Umejϕ+jω0QωUmejϕ+ω0²Umejϕ=ω0²Em
  On pose $\underline{U_{m}} = U_{m}e^{ j\phi }$ : amplitude complexe
  ²²Um―(ω0²−ω2+jω0ωQ)=ω0²Em
  On pose $x = \frac{\omega}{\omega_{0}}$ pulsation réduite
  ²U―m(1−x²+jxQ)=Em
  ²U―m=Em1−x²+jxQ
  ²²²²Um=|U―m|=Em(1−x²)²+x²Q²
  ²ϕ=arg(U―m)=−arg(1−x²+jxQ)
  ²²ϕ=−arctan⁡(xQ(1−x²))=−π2+arctan⁡(1−x²xQ)



## 4. Résonance en tension
### a. Résonance d'un systeme
- Définition : Lorsqu'un systeme physique est soumis à une excitation sinusoïdale il existe des fréquences particulières appelées fréquences de résonances pour lesquelles l'amplitude de la réponse du système passe par un maximum.
  On dit qu'il y a résonance. 

- Exemple : 
  Instrument de musique

### b. Existence d'une résonance en tension?
- On étudie $U_{m}$ en fonction de $\omega$ et on cherche si $U_{m}$ admet un maximum. 
  ²²²²Um=Em(1−x²)²+x²Q²
  $U_{m}$ admet un max si son dénominateur admet un min et comme la racine carrée est une fonction strictement croissante on cherche si la fonction $f:x\mapsto (1-x²)²+\frac{x²}{Q²}$ admet un minimum. 
  
  On dérive : 
 $$ f'(x)=2(1−x²)(−2x)+2xQ²$$
  $$f'(x)=2x(1Q²−2(1−x²))$$
  On cherche $x = \frac{\omega}{\omega_{0}}$ tq $f'(x) = 0$ 
  $$2x(1Q²−2(1−x²))=0$$
  RATTRAPER
  
  - Conclusion : 
    La solution $x_{1} = \frac{\omega}{\omega_{0}} = 0$ existe toujours mais n'a pas d’intérêt, car il n'y a pas de forçage sinusoïdal.
    - Si $Q < \frac{1}{\sqrt{ 2 }}$ alors $x_{2}$ est imaginaire et n'a pas de sens physique et il n'y a pas de maximum
      Excalibur 8
    - Si $Q > \frac{1}{\sqrt{ 2 }}$ alors la solution $x_{2} = \sqrt{ 1-\frac{1}{2Q²} }$ est reelle et positive dans ce cas la fonction admet 2 extremums :
      $f(x) = (1-x²)² + \frac{x²}{Q²} \geq 0$
      *$f(0) = 1$
      $f(x \rightarrow + \infty) = + \infty$
      Excaliburne 9
	$f(x)$ admet un minimum en $x_{2}$ donc $U_{n}$ admet un maximum en $x_{2}$
	Excaliburne 10
	
	Si $Q > \frac{1}{\sqrt{ 2 }}$ alors $U_{m}$ admet un maximum : $u_{c}$ admet une résonance en : 
	²ω=ω01−12Q²
### c. Etude de la résonance en tension
- Propriété :
  Pour le circuit RLC série, si $Q > \frac{1}{\sqrt{ 2 }} = \frac{1}{R_{T}}$ alors le circuit présente une résonance à la pulsation de résonance :
  $$ \omega_{r} = \omega_{0}\sqrt{ 1-\frac{1}{2Q²} } $$
  à $\omega_{r}$ l'amplitude de $u_{c}$ vaut : 
  $$ U_{max} = \frac{E_{m}Q}{\sqrt{ 1-\frac{1}{4Q²} }} $$
  Plus Q est grand, plus $U_{max}$ est grande.  

- Définition
  Excaliburne 11
  La bande passante $\Delta \omega$ est la largeur du pic de résonance définie telle que :
  $$ \frac{max(U_{n})}{\sqrt{ 2 }} < U_{n} < max(U_{n}) $$
  $\omega_{1}$ et $\omega_{2}$ sont les pulsations de coupures telles que :
  $$ U_{n}(\omega_{1}) = U_{n}(\omega_{2}) = \frac{max(U_{n})}{\sqrt{ 2 }} $$
  On appelle acuité de la résonance de la grandeur $\frac{\omega_{0}}{\Delta \omega}$ sans dimension. 
  Plus Q est grand plus $\Delta \omega$ est petit. On parle de résonance aiguë
  $$Q\gg 1$$
  $$max(U_{n}) = E_{n}Q$$
  $$ \frac{\omega_{0}}{\Delta \omega} = \frac{1}{Q} $$
### d. Traces du module et de la phase de $U_{n}$
$$ U_{n} = \frac{E_{n}}{1-x^2+j\frac{x}{Q}} $$
$$ x = \frac{\omega}{\omega_{0}} $$
$$ \left\{ \begin{array}{l}
U_{n} = \frac{E_{n}}{\sqrt{ (1-x^2)^2 + \frac{x^2}{Q^2} }} \\
\phi = - \arctan\left( \frac{x}{Q(1-x^2)} \right)
\end{array} \right. $$
- x = 0 :       $U_{n} = E_{n}$ et $\phi = 0$
- x $\rightarrow + \infty$ : $U_{n} \rightarrow 0$ et $\phi \rightarrow -\pi$

S'il y a résonance
$$ U_{n}(x_{r}) = \frac{E_{n}Q}{\sqrt{ 1-\frac{1}{4Q^2} }} $$
Excalibur 12


## 5. Etude de l'intensité du courant en RSF
$$ \underline{I} = I_{n}e^{ j(\omega t + \Phi) } $$
excalibur 13

$$ \underline{U_{R}} = R \underline{I}$$
$$ \underline{Z_{eq}} = R + j \omega L + \frac{1}{JC\omega} $$
$$ \underline{E} = \underline{Z_{eq}} \underline{I} $$
$$ \underline{I} = \frac{\underline{E}}{R + jL\omega + \frac{1}{jC\omega}} $$
$$ \left\{ \begin{array}{l}
\omega_{0} = \frac{1}{\sqrt{ LC }} \\
Q = \frac{1}{R} \sqrt{ \frac{L}{C} }
\end{array} \right. $$
$$ \underline{I} = \frac{\frac{\underline{E}}{R}}{1+ j\left( \frac{L}{R}\omega - \frac{1}{CR\omega} \right)} $$
$$ \underline{I} = \frac{E}{R} \frac{1}{1 + j\left( \frac{1}{R}\sqrt{ \frac{L}{C} } \frac{\omega}{\omega_{0}}-{\frac{1}{R}\sqrt{ \frac{L}{C} }\frac{\omega}{\omega_{0}}} \right)}$$
$$ \underline{I} = \frac{E}{R} \frac{1}{1 + jQ\left( \frac{\omega}{\omega_{0}}-\frac{\omega_{0}}{\omega} \right)} $$
En posant $x = \frac{\omega}{\omega_{0}}$

$$ I_{n} = \frac{E_{n}}{R} \frac{1}{\sqrt{ 1+Q^2 \left( x - \frac{1}{x} \right)^2 }} $$
Amplitude de l'intensité
$$ \Phi = - arg\left( 1+ jQ\left( x-\frac{1}{x} \right) \right) $$
$$ \Phi = - \arctan \left( Q\left( x-\frac{1}{x} \right) \right) $$
Phase de l'intensité

## 6. Résonance en intensité
- On cherche les marximas de $I_{n}$ cela revient à chercher les miniums de $f(x) = 1+Q^2\left( x-\frac{1}{x} \right)^2$
  $$ f'(x) = 2Q²\left( x-\frac{1}{x} \right)\left( 1+\frac{1}{x²} \right) $$
  $$ f'(x)  \Leftrightarrow x - \frac{1}{x} = 0 \Leftrightarrow x_{r}^2 = 1 \Leftrightarrow x_{r} = \pm 1 $$
  Mais 
  $$ x \geq 0 \Rightarrow x_{r} = 1 = \frac{\omega_{r}}{\omega_{0}} $$
  $f(x)$ atteint un extremum n en $x_{1}$ = 1
 - x = 0
   $f(0) \rightarrow + \infty$
 - $x \rightarrow + \infty$
   $f(+ \infty) = + \infty$
   
 et $f(x) > 0$ 
 Donc forcément $f(x_{1})$ est un minimum
 $\Leftrightarrow I_{m}(x_{1})$ est un maximum
 $$ I_{m}(x_{1}) = \frac{E_{n}}{R} = max(I_{n}) $$

- Propriété
  Pour un circuit RLC série soumis à une tension sinusoïdale il existe toujours une résistance en intensité pour $\omega_{r} = \omega_{0}$ à la résonance  $max(I_{n})= \frac{E_{n}}{R}$ 
  Donc $max(I_{n}) \alpha Q$
  la résonance est d'autant plus grande que l'amortissement est faible.


- Bande passante $\Delta \omega=\omega_{2}-\omega_{1}$
  $$ I_{n}(\omega_{1}) = I_{n}(\omega_{2}) = \frac{max(I_{n})}{\sqrt{ 2 }} $$
  $$ \frac{\frac{E_{n}}{R}}{\sqrt{ 1 + Q^2\left( x-\frac{1}{x} \right)^2 }} = \frac{E_{n}}{\sqrt{ 2 }R}$$
  $$ 1 + Q^2\left( x - \frac{1}{x} \right)^2 = 2$$
  $$ \left( x-\frac{1}{x} \right)^2 = \frac{1}{Q^2} $$
  $$ x - \frac{1}{x} = \pm\frac{1}{Q} $$
  $$ x^2  - 1 = \pm \frac{x}{Q}$$
  $$Qx^2\pm x - Q = 0$$
  $$ x_{1} =  \frac{-1\pm\sqrt{ 1+4Q^2 }}{2Q} $$
  $$ x_{2} = \frac{1\pm \sqrt{ 1+4Q^2 }}{2Q} $$
  On ne regarde que les racine > 0
  $$ \omega_{1} = \omega_{0}  \frac{-1+\sqrt{ 1+4Q^2 }}{2Q} $$
  $$ \omega_{2} = \omega_{0} \frac{1+\sqrt{ 1+4Q^2 }}{2Q} $$
  $$ \Delta \omega = \frac{\omega_{0}}{Q} = \frac{R}{L} $$
  Plus l'amortissement est faible plus la résonance est aigüe


Tracés de $I_{n}$ et $\Phi$
- x = 0
  $I_{n} \rightarrow 0$ et $\Phi \rightarrow \frac{\pi}{2}$
- $x \rightarrow + \infty$
  $I_{n} \rightarrow 0$ et $\Phi \rightarrow -\frac{\pi}{2}$
- $x  = x_{r} = 1$
  $I_{n}(x_{1}) = \frac{E_{n}}{R}$ et $\Phi(x_{1}) = 0$

Excalibur 14

## 7. Détermination experimentale des paramètres. 
Exclaibue 15
- On cherche la résonance en intensité $\Leftrightarrow$ on cherche $\omega$ tq l'ampliude de $u_{r}$ est maximale
  $\omega_{1} < \omega_{2} < \omega_{3}$
  Exclaibur 16
  Petit a petit on approche la pulsation de la résonance $\Rightarrow$ on en dédit : $\omega_{0} = \omega_{r}$
  si $f_{r} = 1256Hz$
  - $\omega_{0} = 2\pi f_{r}$ en rad/s
  - Le facteur de qualité se trouve en tracant $I_{n}$ en fonction de $\omega$ et en determinant la bande passante

# V. Réponse d'un oscillateur mécanique sinusoïdale
## 1. position du problème
EXCLAIBUR 17
Ressort de raideur k et de longueur $l_{0}$
Force de frottement fluide de coeficient h
force exterieur x

ATTRAPER LE COURS

## 2. Resonance de l'élongation x(t)
### a. Etude de l'élongation
$$\underline{x} = X_{m}e$$
$$ x(t) = X_{m}\cos(\omega t+\phi) $$
On pose : $u = \frac{\omega}{\omega_{0}}$
$$ X_{m} = \frac{F_{m}}{m\omega_{0}^2} \frac{1}{\sqrt{ (1-u^2)^2 + \frac{u^2}{Q^2}}} $$

L'etude du module $X_{m}$ est equivalent a l'etude de $U_{n}$ la tension aux bornes de C
- Conclusion :
  $X_{m}$ passe par une résonance ssi $Q > \frac{1}{\sqrt{ 2 }}$ la pulsation de résonance vaut alors
  $$ \omega_{r} = \omega_{0}\sqrt{ 1-\frac{1}{2Q^2} }$$
  $\omega_{r} < \omega_{0}$ et elle dépend du facteur de qualité. Plus Q est grand, plus $\omega _r$ est proche de $\omega_{0}$, plus l'acuité de resonance est aiguë. 

### b. Etude de la phase
$$\phi = -arg\left( 1-u^2+j\frac{u}{Q} \right) = - \arctan\left( \frac{u}{Q(1-u^2)} \right)$$
- $\omega \rightarrow 0$ : $\phi = 0$
- $\omega \rightarrow + \infty$ : $\phi = -\pi$
- $\omega_{0}$ : $\phi = -\frac{\pi}{2}$

Excalibur 18.

### c. Bilan
- A basse fréquence $\omega\ll \omega_{0}$ la masse suit le mouvement imposé par la force exterieure $l = 0$
- A Haute fréquance $\omega \gg \omega_{0}$ le système est en opposition de phase $\phi = -\pi \Rightarrow$ mouvement d'amplitude quasi nulle
- $Q \gg 1$ 
  $$ \omega_{r} \approx \omega_{0} $$
  $$ X_{maw} \approx \frac{QF_{m}}{\omega_{0}^2m} $$

## 3. Résonance en vitesse
$$ v(t) = \frac{dx(t)}{dt} $$
$$ \underline{V} = j\omega \underline{X} $$
L'étude de $\underline{V}$ reviens a l'étude de $\underline{I}$ dans le circuit RLC
Amplitude de la vitesse :
$$ V_{n} = \frac{F_{m}}{m\omega_{0}} \frac{u}{\sqrt{ (1-u^2)^2 + \frac{u^2}{Q^2} }} $$
$$ V_{n} = \frac{F_{m}}{m\omega_{0}} \frac{1}{\sqrt{ \left( u-\frac{1}{u} \right)^2 + \frac{1}{Q^2}}} $$
$$\Phi = -\arctan\left( Q\left( u-\frac{1}{u} \right) \right)$$
- $\omega \rightarrow 0^+$ : $\Phi \rightarrow \frac{\pi}{2}$
- $\omega \rightarrow + \infty$ : $\Phi = -\frac{\pi}{2}$
- $\omega \rightarrow \omega_{0}$ $\Phi = 0$

- Conclusion :
  Il y a toujours une resonance en vitesse en $\omega_{r} = \omega_{0}$ plus Q est grande plus la resonance est aiguë
  Excalibur 19. 