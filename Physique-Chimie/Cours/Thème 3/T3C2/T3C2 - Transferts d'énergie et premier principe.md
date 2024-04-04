# I. Grandeurs extensives conservatrices
Excal 1.
Soit $\mathcal{S}$ un système fermé
$X$ : une grandeur extensive, dépend de la tailler du système

On étudie l'évolution du système entre $t_{1}$ et $t_{2}$ 
à $t_{1}$ : $X(t_{1})$
à $t_{2}$ : $X(t_{2})$
La variation de $X$ entre $t_{1}$ et $t_{2}$
$$\Delta X = X(t_{2}) - X(t_{1}) = X_{\text{echange}} + X_{\text{produit}} $$
$X_{\text{échangé}}$ : terme échangé avec l’extérieur
$X_{\text{produit}}$ : terme de production ai sein du système lui même. 
ce sont des valeurs algébriques

#### Exemple
$C + O_{2} = CO_{2}$
La quantité de matière totale $n_{\text{tot}}$ à $t$ quelconque est : 
$$n_{\text{tot}} = n_{C} + n_{O_{2}} + n_{CO_{2}}$$
à $t = 0$, $n_{0} = n_{C} + n_{O_{2}}$
$\Delta n  = n_{\text{échangé}} + n_{\text{produit}}$, $n_{\text{échangé}} = 0$ (sys fermé)
$$n_{\text{produit}} =\Delta n_{C} + \Delta n_{O_{2}}+ \Delta n_{CO_{2}}$$
$\Delta n_{C} + \Delta n_{O_{2}} < 0$ et $\Delta n_{CO_{2}}>0$
De plus,
$$\Delta n_{c} = \Delta n_{O_{2}} = - \Delta n_{CO_{2}}$$
finalement $n_{\text{produit}} = - \Delta n_{CO_{2}}$
$$\boxed{\Delta n =-\Delta n_{CO_{2}} <0}$$
La quantité de matière diminue

$n_{\text{tot}}$ n'est pas conservé
par contre la masse totale est conservée

#### Définition
Une grandeur extensive d'un système fermé est conservative si lors de l'évolution du système, le <u>terme de production</u> est nul. 

# II. Le cas de l'énergie
## 1. Position du problème
En mécanique, l'énergie totale d'un système est : 
$E_{m} = E_{c} + E_{p}$,
En cas de frottements $E_{m}$ n'est pas conservé. 

Considérons le système $\mathcal{S} : \{  \text{Point matriel}, \text{support}, \text{air} \}$
$$E_{\text{tot}} = E_{m}(\text{point}) + E_{c}(\text{air + support}) + E_{p}(\text{air + support})$$
est conservée : 
Il y échange entre l'énergie mécanique du point et les énergies des particules sous forme de chaleur

## 2. Énoncé du premier principe de la thermodynamique
#### Théorème
Pour un système thermodynamique fermé, on peut associer une fonction d'état extensive, appelée énergie interne $U$ telle que pendant l'évolution du système entre un état initial : $i$ et un état final : $f$, la variation de l'énergie $E$ :
$$\Delta E = E_{f} - E_{i} =\Delta U +\Delta E_{m} = W + Q $$
$\Delta V$ : Variation d’énergie interne
$\Delta E_{m}$ : Variation d’énergie mécanique
$W$ : Travail des forces extérieures
$Q$ : Transfert de chaleur avec l'extérieur
$U = E_{C_{\text{micro}}} + E_{P_{\text{Micro}}}$
$E_{m} = E_{C} + E_{p}$ : énergie macroscopique du système. 

#### Remarque
$W$ et $Q$ sont des termes de transfert, d'échange entre le système et l'extérieur, il sont algébrique vis a vis du système. 

#### Exemple
Pour un gaz parfait de $n$ mol
$N = n N_{a}$ particules
$$U = \sum_{i =1 }^{N} \frac{1}{2}m_{i}v_{i}^{2}+ \sum_{i = 1}^{N}\sum_{\underset{i \neq j}{j = 1}}^{N} E_{p_{i, j}}$$
Sans modélisation, on ne peut pas expliciter $U$

#### Conséquence
Pour un système au repos :
$E_{C_{\text{macro}}} = \frac{1}{2}mv^{2} = 0$
$E_{p_{\text{macro}}} = \text{cte}$

Le premier principe s'écrit : 
$$\boxed{\Delta U = W + Q}$$

- Si on considère une transformation infinitésimale entre $t$ et $t + dt$ avec $dt \ll\ll\ll\ll\ll\ll\ll\ll t$ 
  Alors on écrit : 
  $$dE = dU + dE_{m} = \delta W + \delta Q$$
- Si l'état final est égal à l'état initial, pour un système au repos
  $$\Delta U = U_{f} - U_{i} = U_{i} - U_{i} = 0 \Rightarrow W + Q = 0$$

## 3. Energie interne d'un gaz parfait monoatomique
Pour un gaz parfait : 
$$U = \sum_{i} \frac{1}{2}m_{i}v^{2}_{i}$$
(car pas d'interraction)
c'est un corp pur, donc les particules ont toutes mêmes masses $m$
Alors, 
$$\boxed{U = \frac{m}{2}\sum_{i}v_{i}^{2} = \frac{m}{2}v^{*^{2}} = \frac{3}{2}k_{B}T}$$

Energie interne molaire
$$\boxed{U_{m} = \frac{U}{n} = \frac{3}{2}RT}$$

# III. Transfert d'énergie sous forme de travail
## 1. Rappel sur le travail
Le travail élémentaire d'une force $\vec{F}$ est : 
$$\delta W = \vec{F}.d\vec{r}$$
## 2. Cas du travail électrique
Excal 2.
$P = Ei$ : Puissance électrique totale
$P_{J} = Ri^{2}$ : Puissance électrique reçue par la résistance
$P_{C} = E_{i} - Ri^{2}$ : Puissance reçue par le condensateur
Le puissance reçue par l'eau est $P = Ri^{2}$ le travail avec $i = \text{cte}$ est : 
$$W = \int P \, dt = Ri^{2} \Delta t $$


## 3. Cas du piston dans un cylindre
Air à la pression $P_{0}$ : 
Excal 3.
Système : $\{ \text{gaz} \}$
La force du piston sur le gaz : $\vec{F} = m\vec{g}$
Le travail élementaire du pipston : 
$$\delta W = \vec{F} . d\vec{r} = mgdx$$
Si le piston est à l'équilibre
On étudie le piston : 
BDF : 
- $\vec{P} = m\vec{g} = mg\vec{e}_{x}$
- $\vec{F}_{\text{gaz}} = -P\mathcal{S}\vec{e}_{x}$
- $\vec{F}_{\text{air}} = P_{0}\mathcal{S}\vec{e}_{x}$

$\sum \vec{F} = \overrightarrow{0}$

$$mgP\mathcal{S} + P_{0}\mathcal{S} = 0$$
On en déduit :
$$\boxed{P_{\text{eq}} = P_{0} + \frac{mg}{S}} > P_{0}$$
