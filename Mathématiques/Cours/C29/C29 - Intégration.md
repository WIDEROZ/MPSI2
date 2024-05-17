Soit $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$
Soit $a, b \in \mathbb{R}$, 
On suppose jusqu'à nouvel ordre que $\boxed{a < b}$

On cherche à intégrer des fonctions $f : [a, b] \to\mathbb{K}$
Et pour cela on veut trouver un sous-espace vectoriel de $\mathbb{K}^{[a, b]}$ pour lequel on puisse définir une notion d'intégrale qui vérifie les propriétés usuelles. 

On va construire un premier espace : $\boxed{\mathcal{E}_{\mathbb{K}}([a, b])}$ (fonctions en escaliers)

Excal 1
La définition de $\int_{a}^{b}f$ sera ici facile ainsi que les propriété usuelles.
Le problème c'est qu'il manque ici les fonctions continues non constantes!

On définira ensuite $\boxed{\mathrm{CPM}_{\mathbb{K}}( [a, b])}$ l'espace des fonctions continues par morceaux sur $[a, b]$ (qui contient à la fois les fonctions en escalier et les fonctions continues) et on exprimera toute les fonctions $\mathrm{CPM}$ comme "limite uniforme" d'une suite de fonctions en escalier : 
$$\psi_{n} \overset{\mathrm{CVU}}{\underset{[a, b]}{\longrightarrow}}$$ et on notera : 
$$\left( \int_{a}^{b} \psi_{n}  \right)_{n} \text{ CV}$$
on appellera $\int_{a}^{b}f$ la limite de cette suite en notant que ce nombre ne dépend pas de la suite : $(\psi_{n})$ choisie. 

# I. Continuité uniforme
## 1. Définition
Soit $I$ un intervalle non trivial de $\mathbb{R}$, 
Soit $f : I \to \mathbb{K}$. 
On dit que $f$ est uniformément continu sur $I$ ssi :
$$\forall \varepsilon >0, \exists \alpha > 0, \forall x, y \in I, | x - y| \leq \alpha \Rightarrow |f(x)-f(y)| \leq \varepsilon$$

#### Exercice
Ecrire la continuité de $f$ en $x_{0} \in I$, puis la continuité de $f$ sur $I$ en langage formel, 

$f$ est continue en $x_{0}$ ssi
$$\forall \varepsilon > 0, \exists \alpha > 0,\forall y \in I, |y - x_{0}| \leq \alpha \Rightarrow |f(y)-f(x_{0})| \leq \varepsilon $$

$f$ est continue sur $I$ ssi :
$$\forall x \in I, \forall \varepsilon >0, \exists \alpha > 0, \forall y \in I, |y-x| \leq \alpha \Rightarrow|f(y)-f(x)| \leq \varepsilon$$
cette proposition est équivalente a celle-ci : 
$$\forall \varepsilon > 0, \forall x \in I, \exists \alpha > 0, \forall y \in I, |y-x| \leq \alpha \Rightarrow|f(y)-f(x)| \leq \varepsilon$$
___
#### REMARQUE SUR LES QUANTIFICATEURS SUPER IMPORTANT !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
On peut échanger deux quantificateurs si ils sont de même type. $\forall$ avec $\forall$ et $\exists$ avec $\exists$. Mais pas $\forall$ avec $\exists$

Aussi si on a par exemple : 
$$\exists A, B \in \mathbb{R}, \forall n \in \mathbb{N}, u_{n} = Ar_{1}^{n}+Br_{2}^{n}$$
Qui est juste car ici $A, B$ ne dépendent pas de $n$
mais :
$$\forall n \in \mathbb{N}, \exists A, B \in \mathbb{R}, u_{n} = Ar_{1}^{n}+Br_{2}^{n}$$
juste mais c'est pas ce qu'on veut dire
Car on présuppose que $A$ et $B$ <u>dépendent</u> de $n$ et ça existe tout le temps. 

#### Rappel
###### Pour les suites :
$$\forall \varepsilon > 0, \exists N \in \mathbb{N}, \forall n \geq N, |u_{n} -l| \leq \varepsilon$$


###### Pour les fonctions
$$\forall V \in \mathcal V(l), \exists U \in \mathcal V(+ \infty), f(U) \subset V$$
$$\forall V \in \mathcal V(l), \exists U \in \mathcal V(a), f(U) \subset V$$

$$\forall \varepsilon > 0, \exists \alpha > 0, f([a- \alpha, a+\alpha] \cap I) \subset [l-\varepsilon, l+\varepsilon], $$
$$|x-a| = \alpha \Rightarrow |f(x)-l| \leq \varepsilon$$

$$\forall \varepsilon > 0, \exists \alpha > 0, \forall x \in I, |x-a| \leq \alpha \Rightarrow |f(x)-l| \leq \varepsilon$$

les deux propositions sont équivalentes
___
#### Proposition
Toute fonction lipschitzienne est uniformément continue

Démonstration :
Soit $f$ lipschitzienne sur $I$ de rapport $k \geq 0$.

On a :
$$\forall x, y \in I, |f(x) - f(y)| \leq k |x - y|$$
On veut montrer : 
$$\forall \varepsilon > 0, \exists \alpha >0, \forall x, y,  \in I, |x-y| \leq \alpha \Rightarrow |f(x)-f(y)| \leq \varepsilon$$

Soit $\varepsilon > 0$, 
On pose : $\alpha = \frac{\varepsilon}{k+1}$
Soient $x, y \in I$ tels que : $|x-y| \leq \alpha$
$$|f(x) - f(x)| \leq k\alpha = \frac{k\varepsilon}{k+1} \leq \varepsilon$$


## 2. Théorème de Heine
#### Théorème
Toute fonction continue sur $[a, b]$ est uniformément continue

Démonstration : 
Soit $f$ continue sur $[a, b]$
Supposons que $f$ ne soit pas uniformément continue :
$$\exists \varepsilon > 0, \forall \alpha > 0, \exists x, y \in I, (|x - y|\leq \alpha  \text{ et }|f(x)-f(y)|>\varepsilon)$$

En prenant : $\alpha = \frac{1}{n+1}$ pour chaque $n \in \mathbb{N}$, on obtiens deux suites $(x_{n}), (y_{n}) \in I^{\mathbb{N}}$, tel que :
$$\begin{cases}
|x_{n}-y_{n}| \leq \frac{1}{n+1} :\boxed{1}\\
|f(x_{n}) - f(y_{n})| > \varepsilon :\boxed{2}
\end{cases}$$
Comme $(x_{n})$ est une suit à valeurs réelle et bornée, d'après le théorème de Bolzano-Weierstrass on peut en extraire une suite convergente : $(x_{\varphi_{n}})$, dont on note $l$ la limite par passage à la limite dans des inégalités larges : $l \in [a, b]$

La suite $(y_{\varphi(n)})$ est réelle bornée, donc on peut en extraire une suite CV vers $l' \in [a, b]$, $(y_{(\varphi \circ \psi)(n)})$ 
Comme $(x_{(\varphi \circ \psi)(n)})$ est extraite de la suite convergente $(x_{\varphi(n)})$ on a finalement :
$$\begin{cases}
x_{\varphi \circ\psi(n)} \underset{n \to +\infty}{\longrightarrow}  l \\
x_{\varphi \circ \psi(n)} \underset{n \to +\infty}{\longrightarrow}  l'
\end{cases}$$
___
Deuxième manière sur le poly
___
$$\begin{array}{rl}
|y_{\phi(n)}-l| &\leq |y_{\varphi(n)}-x_{\varphi(n)}|+|x_{\varphi(n)}-l| \\
&\leq \frac{1}{\varphi(n)+1} + |x_{\varphi(n)}-l|
\end{array}$$

en passant à la limite on a : 
$y_{\varphi(n)} \underset{n \to +\infty}{\longrightarrow}l$

En passant à la limite dans $\boxed{2}$, par continuité de $f$ et de $|\cdot|$,
$$|f(l) - f(l)| = 0 \geq \varepsilon$$
CONTRADICTION


#### Exemple
$\exp$ est $UC$ sur $[0, 1]$

# II. Subdivisions et fonctions scalaires
## 1. Subdivision d'un segment
#### Définition
Une subdivision est une famille finie : $\sigma = (x_{i})_{i = 0}^{n}$ d'élément de $[a, b]$ tels que :
$$a = x_{0} < x_{1} < x_{2} < \dots < x_{n} = b$$
Excal 2.

#### Définition
Le pas de cette subdivision est : 
$$\mathrm{pas}(\sigma) = \max_{1 \leq i \leq n}|x_{i}-x_{i-1}|$$

#### Notation du cours
On note dans le cours $\sum_{a, b}$ l'ensemble des subdivisions sur $[a, b]$

#### Exemple
Pour $n \in \mathbb{N}^{*}$, la subdivision régulière de $[a, b]$ en $n$ intervalles est :
$$\left( a + i \frac{b-a}{n} \right)_{i = 0}^{n}$$


#### Définition
Pour deux subdivisions $\sigma = (x_{i})_{i = 0}^{n}$ et $\sigma' = (x_{j}')_{j = 0}^{m}$ de $[a, b]$, on dit que $\sigma$ est plus fine que $\sigma'$ ssi 
$$\{ x_{i} ; i \in [\![0, n]\!] \} \supset \{ x'_{j} ; j \in [\![1, m]\!]\}$$
Et on dit que $\sigma$ est un raffinement de $\sigma'$

#### Notation uniquement pour ce cours
On note dans ce cours, $\sigma \succ \sigma '$ 

Comme conséquence de fait que l'utilisation est une relation d'ordre sur $\mathcal{P}([a,b])$ on a :

#### Propriété
La relation $\succ$ est un ordre sur $\sum_{a, b}$ non total

#### Lemme IMPORTANT
$$\forall \sigma, \sigma' \in \begin{array}{c}
\sum_{a, b}
\end{array}, \exists \sigma '' \in \begin{array}{c}
\sum_{a, b}
\end{array}, \begin{cases}
\sigma'' \succ \sigma \\
\sigma'' \succ \sigma'
\end{cases}$$

Démonstration : 
On prend deux éléments de $\sum_{a, b}$, 
$$\sigma = (x_{i})_{i = 0}^{n} \text{ et } \sigma' = (x_{j})_{j=0}^{m}$$
On numérote dans l'ordre croissant en partant de $0$ les éléments de : 
$$\{ x_{i} ; i \in [\![0,n]\!] \} \cup \{ x_{j}; j \in [\![0, m]\!] \}$$
et on obtiens $\sigma''$ qui convient

#### Remarque
Il y a même une infinité de raffinements communs à $\sigma$ et $\sigma'$

## 2. Fonctions escalier
#### Définition
Une fonction $f \in \mathbb{K}^{[a, b]}$ est dite en escalier ss'il existe $\sigma = (x_{i})_{i=0}^{n} \in \sum_{a, b}$ tel que pour tout $i \in [\![1, n]\!]$, $f|_{]x_{i-1}, x_{i}[}$
soit constante
une telle subdivision est dite subordonnée à $f$ 

#### Remarque
les valeurs de $f$ aux points de $\alpha$ n'ont aucun interêt

#### Notation
L'ensemble des fonctions en escalier est noté : $\mathcal{E}_{\mathbb{K}}([a, b])$

#### Lemme : Raffinement d'une subordonnée
Si $\sigma$ est subordonnée à $f \in \mathcal{E}_{\mathbb{K}}([a, b])$ alors tout raffinement de $\sigma$ est encore subordonné à $f$

Démonstration : Evidente

#### Corollaire
Toute $f \in \mathcal{E}_{\mathbb{K}}([a, b])$ admet une infinité de subdivisions subordonnées

#### Propriété
$\mathcal{E}_{\mathbb{K}}([a, b])$ est un sous espace vectoriel de $\mathcal{B}_{\mathbb{K}}([a, b])$ (ensemble des fonctions bornée sur $[a, b]$ lui même ssev de $\mathbb{K}^{[a, b]}$)

Démonstration : 
On utilise la caractérisation des sous-espaces vectoriels
1. $\mathcal{E}_{\mathbb{K}}([a, b]) \subset \mathcal{B}_{\mathbb{K}}([a, b])$ car une fonction en escalier ne prend q'un nombre fini de valeurs (nombre fini d'intervalles $]x_{i-1}, x_{i}[$ et de points de subdivisions)
2. $0_{\mathbb{K}^{[a, b]}} \in \mathcal{E}([a, b])$
3. Soient $f, g \in \mathcal{E}_{\mathbb{K}}([a, b])$ et $\lambda \in \mathbb{K}$, 
   On prend $\sigma, \sigma' \in \sum_{a, b}$ subordonnée à $f, g$. Il existe un raffinement commun $\sigma''$ (lemme) qui est subordonné à la fois à $f$ et $g$ (lemme ...) qui est subordonné à la fois à $f$ et $g$ (lemme). En notant $\sigma'' = (x''_{k})_{k=0}^{p}$ pour $k \in [\![1, p]\!]$, $f$ et $g$ sont constantes sur $]x''_{k-1}, x''_{k}[$ et donc $\lambda f + g$ aussi
   Ainsi, $\lambda f +g \in \mathcal{E}_{\mathbb{K}}([a, b])$

#### Remarque
En fait $\mathcal{E}_{\mathbb{K}}([a, b])$ est une sous-algèbre de $\mathcal{B}_{\mathbb{K}}([a, b])$ 

