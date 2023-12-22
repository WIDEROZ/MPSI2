### Régime apériodique $Q< \frac{1}{2}$
- Définition : Le régime apériodique ou régime sur-amorti s'observe quand Q < 1/2. Dans ce cas le RT est un retour à l'équilibre composé d'une somme d'exponentielle. 

Pour le circuit RLC série on a le régime apériodique pour : 
$$ R >R_{c} =2\sqrt{ \frac{L}{C} } $$
Déterminons uc(t).
Les racines de l'EC sont réeles
$$ \tau = -\frac{1}{2\tau} \pm \Omega $$
avec
$$ \left\{ \begin{array}{l}
\Omega = \omega_{0}\sqrt{ \frac{1}{4Q^2}-1 } \\
\tau = \frac{L}{R}
\end{array} \right. $$
$$ u_{c} = E +Ae^{ -\frac{t}{2\tau} +\Omega t} + Be^{ -\frac{t}{2\tau} +\Omega t} $$
$$ u_{c} = E + e^{ -\frac{t}{2\tau} }(Ae^{ \Omega t }+Be^{ -\Omega t }) $$
Avec A et B des constantes d'intégration

à t = 0 : 
uc(0⁺) = 0 et i(0⁺) = 0
$$ C\frac{du}{dt} = CA\left( -\frac{1}{2\tau} + \Omega \right)e^{ \frac{-t}{2\tau} + \Omega t } - CB\left( \frac{1}{2\tau} + \Omega \right)e^{ \frac{-t}{2\tau} + \Omega t } $$
$$ \begin{array}{l}
 u_{c}(0⁺) = 0 \Rightarrow \\
	i(0⁺) = 0 \Rightarrow
\end{array}
\left\{ \begin{array}{l}
A+B = -E \\
\left( \Omega - \frac{1}{2\tau} \right)A - \left( \frac{1}{2\tau}+\Omega \right)B
\end{array} \right.$$
(Flemme de faire le système)
Autre Méthode : 
$$ u_{c} = E + e^{ -\frac{t}{2\tau} } A'ch(\Omega t) + B'sh(\Omega t) $$
$$ i(t) = Ce^{ -\frac{t}{2\tau} }\left( \left( -\frac{A}{2\tau} + B'\Omega \right) ch(\Omega t) + \left( -\frac{B'}{2\tau}+A'\Omega \right)sh(\Omega t)\right) $$ $$ u_{c}(0) = E+A' = 0 \Rightarrow A' = -E$$
$$ i(0) = 0 = C\left( -\frac{A}{2\tau} + B'\Omega \right) \Leftrightarrow \left( -\frac{A}{2\tau} + B'\Omega \right) = 0 $$
$$ B' = \frac{1}{\Omega} \frac{A'}{2\tau} = -\frac{E}{2\tau \Omega} $$
$$ u_{c} = E - Ee^{ -\frac{t}{2\tau} }ch(\Omega t)+\frac{1}{2\tau \Omega}sh(\Omega t) $$

**Excalibur**

### Régime critique $Q = \frac{1}{2}$
- Définition : Le régime critique s'observe quand Q = 1/2. C'est le régime intermédiaire entre les régimes pseudo-périodique et apériodique. La durée du RT dans ce cas est la plus courte = On se rapproche le plus vite de l'état d'équilibre. 
Pour le circuit RLC, le régime critique est obtenu pour : 
$$ R = R_{c} = 2\sqrt{ \frac{L}{C} } $$
L'EC de l'équa diff admet 1 racine double réelle : 
$$ r = \pm\omega_{0} - \omega t $$
$$ u_{c}(t) = E + (At+B)e^{ -\omega_{0}t } $$
$$ i(t) = C \frac{du_{c}}{dt} = C e^{ -\omega_{0}t }(A-\omega_{0}B-\omega_{0}At) $$
à t = 0⁺
$$ u_{c}(0⁺) = 0 = E+B \Rightarrow B = -E $$
$$ i(0⁺) = 0 = C(A-\omega_{0}B) $$
$$ A = \omega_{0}B = -\omega_{0}E $$
$$ u_{c}(t) = E-E(\omega_{0}t+1)e^{ -\omega_{0}t } $$
### Durée du régime transitoire
Définition : La durée du RT Tr est le temps de réponse à 5% cad la durée au bout de laquelle le système atteint sa valeur asymptotique a 5% près. La valeur du signal est donc composé entre 0.95 et 1.05 fois la valeur asymptotique. 

Excalibur

Dans le cas du régime pseudo-périodique
$$ T_{r} \approx 10\frac{Q}{\omega_{0}} \approx 5 \tau  $$
Quand Q est grand 
## Bilan énergitique

Excalibur

Bilan de puissance : on multiplie la loi des mailles par :
$i=C\frac{du_{C}}{dt}$
$E=u_{C}+u_{L}+u_{R}$
$Ei=\frac{1}{2}C\frac{du_{C}^2}{dt} + \frac{1}{2}L\frac{di^2}{dt} + u_{R}i$
$P_{J}=\frac{du}{dt}(W_{E}+W_{B})+P_{R}$

Excalibur

0=ddt(WE−WB)+PJ
1. Toute la puissance délivrée par le générateur est en partie stocké par C et L et en partie dissipée par effet Joule

2. Une partie de l'énergie initiale stockée par le condensateur est échangée avec la bobine et l'autre partie est dissipée par effet Joule. Quelle est l’énergie dissipée par effet Joule au bout de t1. 
$$ W_{J} = \int_{0}^{t_{1}} P_{J} \, dt = \int_{0}^{t_{1}} \frac{d}{dt}(W_{E}+W_{B}) \, dt  $$
$$ W_{J} = -(W_{E}(t_{1})+W_{B}(t_{1}))+W_{E}(0) $$
$$ W_{E}(0) = \frac{1}{2}Cu_{0}^2 $$
## Oscillateur mécanique amorti par frottement fluide ou visqueux 
1. Frottement fluide
Définition La force de frottement fluide est proportionnelle et opposée a la vitesse. 
$$ F_{f} = -h\overrightarrow{v} $$
pour v pas trop grand
h dépend du fluide et de la géométrie du système h > 0
h est le coefficient de frottement fluide
dimension de h :
$$ [F_{f}] = [h][v] \Leftrightarrow MLT^{-2} = [h]LT^{-1} \Leftrightarrow [h] = MT^{-1} $$
2. Mise en équation 
Excalibur

a. Bilan des forces
- Poids $$ \overrightarrow{P}=-mg\overrightarrow{v_{z}} $$
- Réaction du support $$ \overrightarrow{R} = R\overrightarrow{e_{z}} $$
- Force élastique du ressort : $$ \overrightarrow{F_{el}} = -k(l-l_{0})\overrightarrow{v_{x}} $$
- Force de frottement : $$ \overrightarrow{F_{f}} = -h\overrightarrow{v} $$
On pose :
$$ x = l-l_{0} $$
$$ \overrightarrow{v} = \frac{dl}{dt}\overrightarrow{v_{x}} $$
b. 2e loi de Newton
$$ m\overrightarrow{a} = \Sigma\overrightarrow{F} $$
$$ \overrightarrow{a} = \frac{d²l}{dt²}\overrightarrow{v_{x}} = \frac{d²x}{dt²}\overrightarrow{v_{x}} $$
On projette sur Ox
$$ \frac{d²x}{dt²} = -kx-h \frac{dx}{dt} $$
$$ \frac{d²x}{dt²} + \frac{h}{m}x=0 $$
Équation du mouvement
$$ m\frac{d^2x}{dt²} = -kx-\frac{dx}{dt} $$ATRAPER LE COURS

