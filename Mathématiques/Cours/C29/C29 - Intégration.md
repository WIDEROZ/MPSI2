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
___
(On s'en fout pour cette démo :)
Comme $(x_{(\varphi \circ \psi)(n)})$ est extraite de la suite convergente $(x_{\varphi(n)})$ on a finalement :
$$\begin{cases}
x_{\varphi \circ\psi(n)} \underset{n \to +\infty}{\longrightarrow}  l \\
y_{\varphi \circ \psi(n)} \underset{n \to +\infty}{\longrightarrow}  l'
\end{cases}$$

Suite : deuxième manière sur le poly
___
$$\begin{array}{rl}
|y_{\varphi(n)}-l| &\leq |y_{\varphi(n)}-x_{\varphi(n)}|+|x_{\varphi(n)}-l| \\
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
Les valeurs de $f$ aux points de $\sigma$ n'ont aucun intérêt.

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

#### Définition
Soit $f \in \mathcal{E}_{\mathbb{K}}([a, b])$, 
et $\sigma \in \sum_{a, b}$, subordonnée à $f$, 
Pour $i \in [\![1, n]\!]$, 
On pose : 
$$y_{i} = f\left( \frac{x_{i-1}-x_{i}}{2} \right)$$

On définit :
$$I(f, \sigma) = \sum_{i = 1}^{n}(x_{i}-x_{i-1})y_{i} (\in \mathbb{K})$$

Il reste à montrer que $I(f, \sigma)$ ne dépend pas de $\sigma$ choisi (subordonné à $f$)
___
###### Lemme 2
Si $\sigma$ est subordonnée à $f$ et $\sigma'$est obtenue à partir de $\sigma$ par ajout d'un point alors, 
$$I(f, \sigma') = I(f, \sigma)$$

Démonstration : 
Soit $\sigma \in \sum_{a, b}$ subordonnée à $f$, et $z \in [a, b]$ qui n'est pas dans $\sigma$. 
Il existe un unique $i_{0} \in [\![1, n]\!]$ tel que $z \in ]x_{i_{0}-1}, x_{i_{0}}[$
La subdivision $\sigma'$ obtenue par ajout de $z$ s'écrit $\sigma' = (x_{i}')_{i= 0}^{n+1}$ avec 
$$\begin{cases}
\forall i \in [\![0, i_{0}-1]\!], x_{i}'=x_{i} \\
x'_{i_{0}}=z \\
\forall i \in [\![i_{0}+1, n+1]\!], x'_{i} = x_{i-1}
\end{cases}$$

On a alors, 
Pour $i \in [\![1, n+1]\!]$ on pose : $y'_{i} = f\left( \frac{x'_{i-1}+x'_{i}}{2} \right)$ 
$$I(f, \sigma) = \sum_{i = 1}^{n}(x_{i}-x_{i-1})y_{i} $$
$$=  \sum_{i = 1}^{i_{0}-1}(x_{i}-x_{i-1})y_{i}+ (x_{i_{0}}- x_{i_{0}-1})y_{i_{0}}$$
$$+ \sum_{i = i_{0}+1}^{n}(x_{i}-x_{i-1})y_{i}$$
Comme $(x_{i_{0}}-x_{i_{0}-1}) = (z - x_{i_{0}-1})(x_{i_{0}}-z)$, 
$$\sum_{i = 1}^{i_{0}-1}(x'_{i}-x'_{i-1})y'_{i} + (x_{i_{0}}'-x_{i_{0}-1}')y_{i_{0}}+(x_{i_{0}+1}'-x_{i_{0}}')y_{i_{0}}$$
$$+ \sum_{i =i_{0}+1}^{n}(x_{i+1}'-x'_{i})y'_{i+1} $$
or comme $y'_{i_{0}+1} = y_{i_{0}}$ car la fonction est constante entre $x'_{i_{0}-1}$ et $x'_{i_{0}+1}$
$$= \sum_{i= 1}^{i_{0}-1}(x_{i}'-x'_{i-1})y'_{i}+ (x_{i_{0}}'-x'_{i_{0}-1})y'_{i_{0}}+ (x'_{i_{0}+1}-x'_{i_{0}})y'_{i_{0}+1}$$
$$+ \sum_{i = i_{0}+2}^{n+1}(x'_{i}-x'_{i-1})y'_{i}$$
$$= I(f, \sigma')$$


##### Lemme 1
Si $\sigma$ est subordonné à $f$ et $\sigma'$ est plus fine que $\sigma$, 
alors
$$I(f, \sigma')=I(f, \sigma)$$

Démonstration : Par recurrence immédiate à partir du lemme $2$



#### Théorème
Dans la définition précédente, $I(f, \sigma)$ ne dépend pas de la subdivision $\sigma$ subordonné à $f$.

Démonstration : 
Soit $\sigma, \sigma'$ subordonné à $f$, il existe $\sigma'' \in \sum_{a, b}$ tq $\begin{cases} \sigma'' \succ \sigma \\ \sigma '' \succ \sigma'\end{cases}$
Par le lemme $1$ : 
$$I(f, \sigma), I(f, \sigma') = I(f, \sigma'')$$
___
#### Définition
Soit $f \in \mathcal{E}_{\mathbb{K}}([a, b])$
Les nombres $I(f, \sigma)$ avec $\sigma$ subordonné à $f$ sont tous égaux par le théorème et on note $I(f)$ leur valeur commune qu'in appelle intégrale de $f$ sur $[a, b]$.

## 2. Proposition de 
#### Proposition
1. Linéarité
   L'application : 
   $$I_{a, b}: \begin{cases} \mathcal{E}_{\mathbb{K}}([a, b]) \to \mathbb{K} \\ f \mapsto I(f)\end{cases}$$
   est une forme linéaire. 
2. Positivité : 
   $$\forall f \in\mathcal{E}_{\mathbb{R}}([a, b]), (f \geq 0) \Rightarrow I(f) \geq 0$$
3. Croissance : 
   $$\forall f, g \in \mathcal{E}_{\mathbb{R}}([a, b]), (f \leq g \Rightarrow I(f) \leq I(g))$$
4. Inégalité de norme : 
   $$\forall f \in \mathcal{E}_{\mathbb{K}}([a, b]), |f| \in \mathcal{E}_{\mathbb{K}}([a, b]) \text{ et } |I(f)| \leq I(|f|)$$
5. Relation de Chasles : 
   Pour $f \in \mathcal{E}_{\mathbb{K}}([a, b])$, et $c \in ]a, b[$, 
   On a : 
   $$\begin{cases}f|_{[a, c]} \in \mathcal{E}_{\mathbb{K}}([a, c]) \\ f|_{[c, b]} \in \mathcal{E}_{\mathbb{K}}([c, b])\end{cases}$$
   $$I(f) = I(f|_{[a, c]} )+ I(f|_{[c, b]})$$

Démonstration en exo.

# IV. Intégrale d'une fonction continue par morceaux
## 1. Fonctions continues par morceaux
#### Définition
Une fonction $f \in \mathbb{K}^{[a, b]}$ est dite continue par morceaux, $\mathrm{CPM}$ ss'il existe $\sigma = (x_{i})_{i = 0}^{n} \in \sum_{a, b}$ telle que les restrictions: 
$$f_{i} = f|_{]x_{i-1}, x_{i}[} (\text{ avec }i \in [\![1, n]\!])$$
soient continues sur $]x_{i-1}, x_{i}[$ et ils admettent des limites à droite en $x_{i+1}$ et à gauche en $x_{i}$

Cela équivaut à ce que pour tout $i \in [\![1,n]\!]$, la restriction $f_{i}$ sont prolongeables par continuité sur $[x_{i-1}, x_{i}]$
On dit qu'une telle subdivision est subordonnée à la fonction $\mathrm{CPM}$ $f$ L'ensembles des fonctions $\mathrm{CPM}$ sur $[a, b]$ sera noté : 
$$\mathrm{CPM}_{\mathbb{K}}([a, b])$$

#### Exemple
Excal 3
Est continue par morceaux
Excal 4
ne l'est pas
Excal 5.
$$x \mapsto \begin{cases}
\text{si } \sin \left( \frac{1}{x} \right) \text{si } x \in ]0, \frac{1}{\pi}] \\
0 \text{ si } x =0
\end{cases}$$
Ne l'est pas aussi

#### Remarque
Les valeurs aux points de $\sigma$ ne jouent aucuns rôle dans ce qui suit

Il est évident que : 
$$\mathcal{E}_{\mathbb{K}}([a, b]) \subset \mathrm{CPM}_{\mathbb{K}}([a, b])$$
$$\mathcal{C}^{0}_{\mathbb{K}}([a, b]) \subset \mathrm{CPM}([a, b])$$
#### Exemple
La fonction : 
$$\mathrm{sgn} : x \mapsto \begin{cases}
0 \text{ si } x = 0 \\
\frac{x}{|x|} \text{ si } x \neq 0
\end{cases}$$
$\mathrm{sgn} \in \mathrm{CPM}_{\mathbb{K}}([a, b])$
Et aussi $\mathrm{sgn}\circ \sin$ est aussi $\mathrm{CPM}$ sur tout son segment

Excal 6.

### Extension de la définition
#### Définition
Pour un intervalle non trivial $I$ on dit que $f$ est $\mathrm{CPM}$ sur $I$ ssi elle est $\mathrm{CPM}$ sur tout segment de $I$ 

#### Remarque



#### Notation
On note $\mathrm{CPM}_{\mathbb{K}}(I)$ l'ensemble de ces fonction

#### Propriété
$$\mathrm{CPM}_{\mathbb{K}}([a, b])\underset{sev}{\subset} \mathcal{B}_{\mathbb{K}}([a, b])$$
$$\mathcal{E}_{\mathbb{K}}([a, b]) \underset{sev}{\subset} \mathrm{CPM}_{\mathbb{K}}([a,b])$$
$$\mathcal{C}_{\mathbb{K}}^{0}([a, b]) \underset{sev}{\subset} \mathrm{CPM}([a, b])$$

Démonstration : 
Les deux derniers résultats sont immédiats une fois qu'on a trouvé le premier puisqu'on connait déjà les inclusions et le fait que $\mathcal{E}_{\mathbb{K}}([a, b])$ et $\mathbb{C}_{\mathbb{K}}^{0}([a, b])$ sont deux sous espaces vectoriels de $\mathcal{B}_\mathbb{K}([a, b])$.

1. Soit $f \in \mathrm{CPM}_{\mathbb{K}}([a, b])$, $\sigma = (x_{i})_{i=0}^{n}$ subordonnée à $f$ et on note encore $\forall i \in [\![1, n]\!], f_{i} = f\mid_{]x_{i-1}, x_{i}[}$ 
   Comme $f$ est $\mathrm{CPM}$ les $f_{i}$ sont prolongeables en des fonctions continues $\tilde{f}_{i}$ définie sur $[x_{i}, x_{i}]$
   Par le théorème des bornes atteintes, les $\tilde{f}_{i}$ sont bornées ie il existe des $M_{i} \geq 0$ tel que $|\tilde{f}_{i}| \leq M_{i}$ 
   On a alors, 
   $$|f|\leq \max(\max_{1\leq i\leq n}(M_{i}), \max_{0 \leq i \leq n}(f(x_{i})))$$
   
   Donc, $f$ est bornée
2. La fonction nulle sur $[a, b]$ est $\mathrm{CPM}$ donc, 
   $$\mathrm{CPM}_{\mathbb{K}}([a, b]) \neq \varnothing$$
3. Soient $f, g \in \mathrm{CPM}_{\mathbb{K}}([a, b])$ et $\lambda \in \mathbb{K}$, 
   Soient $\sigma, \sigma' \in \sum_{a, b}$ subordonnées à $f$ et $g$
   Par le lemme de raffinement commun, il existe $\sigma'' \in \sum_{a, b}$ tel que $\begin{cases} \sigma'' \succ \sigma \\ \sigma'' \succ \sigma'\end{cases}$
   Il est clair que $\sigma ''$ est subordonné à la fois à $f$ et à $g$
   On la note : $\sigma'' = (x''_{k})_{k = 0}^{p}$
   Alors, pour tout $k \in [\![1, p]\!]$, 
   $$f|_{]x''_{k-1}, x''[} \text{ et }g|_{]x''_{k-1}, x''_{k}[}$$
   se prolongent en des fonctions continues
   
   
   
   
   Ainsi, $f + \lambda g$ est $\mathrm{CPM}$
   
#### Remarque
Comme $\mathrm{CPM}_{\mathbb{K}}([a, b])$ contient la fonction constante $1$ et est stable par produit (de même que pour les $CL$), $\mathrm{CPM}_{\mathbb{K}}([a, b])$ est une sous algèbre de $\mathcal{B}_{\mathbb{K}}([a, b])$

## 2. Intégrale d'une fonction $\mathrm{CPM}$ sur un segment
### CV uniforme d'une suite de fonction
#### Exercice
1. Dessiner le graphe d'une fonction continue sur $[a, b]$
2. Prendre $\varepsilon >0$ (pas trop grand) tracer $\mathcal{G}_{f-\varepsilon}$ et $\mathcal{G}_{f+\varepsilon}$
3. Tracer le graphe d'une fonction en escalier $\varphi$ tq $\underset{x \in [a, b]}{\sup}|\varphi(x)-f(x)|\leq \varepsilon$ 
4. Trouver au stylo $\mathcal{G}_{\varphi-\varepsilon}$ et $\mathcal{G}_{\varphi+\varepsilon}$
5. Déterminer graphiquement un intervalle graphiquement un encadrement de $\int _{a}^{b}f$ en fonction de $I(\varphi)$
6. Que dire dans le cas d'une fonction $f$ $\mathrm{CPM}$

EXCALIDRAW 7.

5. On voit que que $\varphi -\varepsilon \leq f \leq \varphi$ d'ou $I(\varphi) - (b-a)\varepsilon \leq \int _{a}^{b}f q= I(\varphi) + (b-a)\varepsilon$
6. Idem pour chaque morceau


#### Exercice
Soient $D \subset \mathbb{R}$ non vide et $f, g \in \mathcal{B}_{\mathbb{K}}(D)$, 
Montrer que 
$$A = \{ |f(x)-g(x)|; x \in D\}$$
possède une borne supérieure dans $\mathbb{R}$

On applique la propriété de la borne supérieur : 
$D$ est non vide, donc, $A$ est non vide, 

Soit $M_{1}$ un majorant de $|f|$, $M_{2}$ un majorant de $|g|$
$$|f(x)-g(x)| \leq |f(x)|+|g(x)| \leq M_{1} + M_{2}$$
Donc, $A$ est majoré 
Ainsi, elle admet une borne supérieure dans $\mathbb{R}$
qu'on note : $\underset{x \in D}{\sup} |f(x)-g(x)|$

###### Rappel
Toute partie non vide et majorée de $\mathbb{R}$ admet une borne supérieure. 
___
##### Métamaths
Soit $f$ $\mathrm{CPM}$ sur $[a, b]$ 
On raisonne par analyse synthèse
###### Méta-analyse
Supposons qu'on sache donner un sens à $\int_{a}^{b} f$
Si $\varphi$ est un escalier, par l'exo 1 : 
$$I(\phi)-(b-a)\sup_{[a, b]}|\varphi-f| \leq \int_{a}^{b}f \leq I(\varphi) + (b-a)\sup_{[a, b]}|\varphi-f|$$
Si on peut obtenir des quantités $\underset{D}{\sup}|\varphi-f|$ aussi petites qu'on veut, on connaîtra $\int _{a}^{b}f$ par passage à la limite.

###### Méta-synthèse
On approche $f$ par une suite de fonctions en escaliers $(\varphi_{n})$ tel que $\underset{[a, b]}{\sup}|\varphi_{n}-f| \underset{n \to +\infty}{\longrightarrow} 0$
Une belle approximation est appelé une appropriation "uniforme" de $f$. Pour cela on montre d'abord qu'il exite de telles approximations, puis que pour une telle suite, $I(\varphi_{n})$ convergente, puis que sa limite ne dépend pas de la suite $(\varphi_{n})$ choisie et alors on définit
$$\int _{a}^{b}f = \lim_{ n \to \infty }I(\varphi_{n})  $$
qui est indépendant de la suite $(\varphi_{n})$ choisie
___

#### Définition : Convergence uniforme
Soit $D \subset \mathbb{R}$, non vide quelconque
Pour une suite $(g_{n})$ de fonctions bornées sur $D$ et $g$ une fonction bornées sur $D$ et $g$ une fonction bornée sur $D$ (à valeurs dans $\mathbb{K}$) on dit que $(g_{n})$ converge uniformément sur $D$ vers $g$ ssi 
$$\sup_{x \in D}|g_{n}(x)-g(x)| \underset{n \to +\infty}{\longrightarrow}  0$$
Noté
$$\sup_{D}|g_{n}-g|$$

#### Exercice
Avec les notations, lorsque pour tout $x \in D$, 
$$\lim_{ n \to \infty } g_{n}(x)=g(x)$$
on dit que la suite converge simplement ou converge ponctuellement vers $g$

1. Ecrire avec des quantificateurs cette convergence simple
2. Ecrire avec des quantificateurs $g_{n} \overset{\mathrm{CVU}}{\underset{D}{\longrightarrow}} g$
3. Comparer logiquement ces deux définitions
4. Dessiner un exemple de $(g_{n})$ qui CVU vers $0$
5. Dessiner un exemple de $(g_{n})$ qui CVS pas uniformément vers $0$ sur $D = [0, 1]$


1. $$\forall x \in D, \forall \varepsilon >0, \exists N \in \mathbb{N}, \forall n \geq N ,|g_{n}(x) - g(x)| \leq \varepsilon$$
2. $$\forall \varepsilon > 0, \exists \alpha > 0, \forall n \geq N, \sup_{D}|g_{n}-g| \leq \varepsilon$$
   Ici cela veut dire que $\varepsilon$ majore $A=  \{ |g_{n}(x)-g(x)| ; X \in D \}$ 
   Alors, cette proposition est équivalente : 
   $$\forall \varepsilon > 0, \exists N \in \mathbb{N}, \forall n > N, \forall x \in D, |g_{n}(x) -g(x)| \leq \varepsilon$$
   et celle ci aussi : 
3. On a juste échangé deux quantificateurs le rang de $N$ qu'on choisit dans la convergence simple dépend de $x$
   Ainsi, $CVU \Rightarrow CVS$ mais $CVS \Rightarrow CVU$ a priori
4. Excal 8
5. Plus simple sur $D=\mathbb{R}$
   $x \mapsto \frac{x}{n}$ convient mais elle n'est pas bornée
   $g_{n}(x) = \min\left( 1, \max\left( \frac{x}{n}, -1 \right) \right)$


#### Remarque
$$g_{n} : \begin{cases}
[0, 1] \to \mathbb{R} \\
x \mapsto x^{n}
\end{cases}$$
Ainsi,
$$g_{n} \overset{\mathrm{CVS}}{\underset{[0, 1]}{\longrightarrow}} g : x\mapsto \begin{cases}0 \text{ si } x \in [0, 1[ \\ 1 \text{ si }x = 1\end{cases}$$

#### Lemme
Pour toute fonction $f \in \mathrm{CPM}_{\mathbb{K}}([a, b])$ il existe $(\varphi_{n}) \in \mathcal{E}_{\mathbb{K}}([a, b])^{\mathbb{N}}$ telle que $\varphi_{n} \overset{\mathrm{CVU}}{\underset{[a, b]}{\longrightarrow}} f$

Démonstration :
On commence par le cas ou $f$ est continue sur $[a, b]$, 
Alors, par le théorème de Heine, $f$ est uniformément continue sur $[a, b]$, 
On construit : $(\varphi_{n}) \in \mathcal{E}_{\mathbb{K}}([a, b])^{\mathbb{N}}$ tel que
$$\forall n \in \mathbb{N}, \sup_{x \in [a, b]}|\varphi_{n}(x)-f(x)| \leq \frac{1}{n+1}$$
Soit $n \in \mathbb{N}$, 
Comme $f$ est uniformément continue, et $\varepsilon = \frac{1}{n+1} >0$, IL existe $\alpha >0$ tel que
$$\forall x, y \in [a, b], |x - y| \leq \alpha \Rightarrow |f(x)-f(y)| \leq \frac{1}{n+1}$$
On définit la subdivision régulière $\sigma = (x_{i})_{i=1}^{k}$ où $k = \left\lceil  \frac{b-a}{\alpha}  \right\rceil$ et : 
$$\forall i \in [\![0, k]\!], x_{i} = a + i \frac{b-a}{k}$$
On définit alors, $\varphi_{n} \in \mathcal{E}_{\mathbb{K}}([a, b])$ par : 
$$\begin{cases}
\forall i \in [\![1,k]\!], \varphi_{n}|_{[x_{i-1}, x_{i}[} \equiv f|_{x_{i-1}} \\
\varphi_{n}(b) = f(b)
\end{cases}$$
Soit $i \in [\![0, k]\!]$ 
Pour $x \in [x_{i-1}, x_{i}]$, puisque
$$0 \leq x-x_{i-1} \leq x_{i} - x_{i-1} = \frac{b-a}{k}\leq \alpha$$
alors, 
$$|f(x)-f(x_{i-1})| \leq \frac{1}{n+1}$$
ie 
$$|\varphi_{n}(x) - f(x)| \leq \frac{1}{n+1}$$
Comme $|\varphi_{n}(b)-f(b)| = 0 \leq \frac{1}{n+1}$,
alors, 
$$\sup_{[a, b]}|\varphi_{n}-f| \leq \frac{1}{n+1}$$
Ainsi, 
$$\sup_{[a, b]}|\varphi_{n}-f| \underset{n \to +\infty}{\longrightarrow}  0$$
ie
$$\boxed{\varphi_{n} \overset{\mathrm{CVU}}{\underset{[a, b]}{\longrightarrow}} f}$$
___
Pour le cas continu par morceaux, on approche pour $n$ fixé sur chaque morceau $f$ par une fonction en escalier à $\frac{1}{n+1}$ près comme ci-dessus et on recolle des morceaux en choisissant, au point de la subdivision subordonnée à $f$ choisie, la valeur de $f$. 

#### Théorème
Soit $f \in \mathrm{CPM}_{\mathbb{K}}([a, b])$
Pour toute suite $(\varphi_{n}) \in \mathcal{E}_{\mathbb{K}}([a, b])$ tel que $\varphi_{n} \overset{\mathrm{CVU}}{\underset{[a, b]}{\longrightarrow}} f$ la suite : $(I(\varphi_{n}))_{n}$ CV et sa limite ne dépend pas du choix de cette suite (de fonctions en escalier qui CVU vers $f$) particulière. 
On appelle cette limite l'intégrale de $f$ sur le segment / entre $[a, b]$ et on la note : 
$$\int _{a}^{b}f(x) \, dx  = \int _{a}^{b}f = \int _{[a, b]}f$$

Démonstration : 
Soit $(\varphi_{n}) \in \mathcal{E}_{\mathbb{K}}([a, b])^{\mathbb{N}}$ qui CVU vers $f$

##### Etape 1
On extrait une suite convergente de $(I(\varphi_{n}))$ à l'aide du théorème de Bolzano-Weierstrass.
Comme,
$$\sup_{[a,b]}|\varphi_{n}-f| \underset{n \to +\infty}{\longrightarrow} 0$$
La suite de ces sup est bornée, ie il exite un $M_{1} \in \mathbb{R}_{+}$ tq,
$$\forall n \in \mathbb{N}, \forall x \in [a, b], |\varphi_{n}(x)-f(x)|\leq M_{1}$$
Comme $\mathrm{CPM}_{\mathbb{K}}([a, b]) \subset \mathcal{B}_{\mathbb{K}}([a, b])$, il existe $M_{2} \in \mathbb{R}_{+}$ tel que 
$$\forall x \in [a, b], |f(x)| \leq M_{2}$$
Soit $n \in \mathbb{N}$, 
Pour tout $x \in [a,b]$, 
$$\begin{array}{rl}
|\varphi_{n}(x)| &= |\varphi_{n}(x) - f(x) + f(x)| \\
&\leq |\varphi_{n} - f(x)| + |f(x)| \\
&\leq M_{1} + M_{2}
\end{array}$$
Par inégalité de normes : 
$$|I(\varphi_{n})| \leq I(|\varphi_{n}|)\leq I(M_{1}+M_{2}) = (b-a)(M_{1}+M_{2})$$
Ainsi, $(I(\varphi_{n}))_{n}$ est bornée et réelle, donc, par le théorème de B-W, 
il existe une extractrice $\theta$ telle que $(I(\varphi_{\theta(n)}))_{n}$ CV vers $l \in \mathbb{K}$

##### Etape 2
On montre que $(I(\varphi_{n}))_{n}$ CV vers $l$ 
Soir $\varepsilon > 0$, 
Comme $\lim_{ n \to \infty }I(\varphi_{\theta(n)}) = l$, il existe $n_{0} \in \mathbb{N}$, tel que : 
$$\forall n \geq n_{0}, |I(\varphi_{\theta(n)})-l| \leq \frac{\varepsilon}{2}$$
Comme $(\varphi_{n})$ CVU vers $f$, il existe $N \in \mathbb{N}$ tel que :
$$\forall n \geq N, \forall x \in [a, b], |\varphi_{n}(x) -f(x)| \leq \frac{\varepsilon}{4(b-a)}$$
On note alors, $n_{1} = \max(n_{0}, N)$, 
Comme : $\theta(n_{1}) \geq n_{1} \geq N$, 
$$\forall x \in [a, b], |\varphi_{\theta(n_{1})}(x)-f(x)| \leq \frac{\varepsilon}{4(b-a)}$$
Soit $n \geq N$, Pour $x \in [a, b]$, on a : 
$$\begin{array}{rl}
|\varphi_{n}(x) - \varphi_{\theta(n_{1})}(x)| &\leq |\varphi_{n}(x) -f(x)| + |f(x)-\varphi_{\theta(n_{1})}(x)| \\
& \leq \frac{\varepsilon}{2(b-a)}
\end{array}$$

Par : 
- linéarité de $I$
- Inégalité de normes pour $I$
- Croissance de $I$

On a : 
$$\begin{array}{rl}
|I(\varphi_{n})-I(\varphi_{\theta(n_{1})})| &= |I(\varphi_{n}-\varphi_{\theta(n_{1})})| \\
&\leq I(|\varphi_{n}-\varphi_{\theta(n_{1})}|) \\
&\leq \frac{(b-a)\varepsilon}{2(b-a)} = \frac{\varepsilon}{2}
\end{array} $$
Et enfin, 
$$\begin{array}{rl}
|I(\varphi_{n})-l| &\leq |I(\varphi_{n})- I(\varphi_{\theta(n_{1})})| + |I(\varphi_{\theta(n_{1})})-l| \\
&\leq \frac{\varepsilon}{2} + \frac{\varepsilon}{2} = \varepsilon
\end{array}$$
Ainsi, 
$$\boxed{(I(\varphi_{n}))_{n} \text{ CV} \text{ vers }l}$$

##### Etape 3
On montre que $l$ ne dépend pas de la suite $(\varphi_{n})_{n}$ choisie. 
Soit $(\psi_{n})_{n} \in \mathcal{E}E_{\mathbb{K}}([a, b])^{\mathbb{N}}$, tq $\psi_{n} \overset{\mathrm{CVU}}{\underset{[a, b]}{\longrightarrow}} f$
On sait, par ce qui précède que : 
$$I(\psi_{n}) \underset{n \to +\infty}{\longrightarrow} l' \in \mathbb{K}$$
et on veut montrer que $l = l'$
___
On raisonne par l'absurde : 
Supposons que $l \neq l'$, 
Notons, $\varepsilon = |l-l'| > 0$,
Comme précédemment il existe $N, N' \in \mathbb{N}$ tel que :
$$\forall n \geq N, \forall x \in [a, b], |\varphi_{n}(x) -f(x)| \leq \frac{\varepsilon}{3(b-a)}$$
$$\forall n \geq N', \forall x \in [a, b], |\psi_{n}(x) -f(x)| \leq \frac{\varepsilon}{3(b-a)}$$
On pose $p = \max(N, N')$, 
Pour $n \geq p$, par l'inégalité triangulaire : 
$$\forall x \in [a, b], |\varphi_{n}(x) - \psi_{n}(x)| \leq \frac{2\varepsilon}{3(b-a)}$$
(on fait $+f(x)-f(x)$)
On a : 
$$|I(\varphi_{n})-I(\psi_{n})| \leq \frac{2}{3}\varepsilon$$
$$0 < |l-l'| = \varepsilon \leq \frac{2}{3} \varepsilon$$
CONTRADICTION

Ainsi, on a bien : 
$$\boxed{l' = l}$$

#### Remarque
En particulier si $\varphi \in \mathcal{E}_{\mathbb{K}}([a, b])$, $\varphi \in \mathrm{CPM}_{\mathbb{K}}([a,b])$ et on a deux objets : "intégrale de $\varphi$ entre $a$ et $b$"
$I(\varphi)$ et $\int _{a}^{b} \varphi$
En effet la suite $(\varphi_{n})_{n \in \mathbb{N}}$ est une suite de fonctions en escaliers qui CVU vers $\varphi$ donc, 
$$I(\varphi) \underset{n \to +\infty}{\longrightarrow} \int _{a}^{b}\varphi $$
DOnc, 
$$I(\varphi) = \int _{a}^{b} \varphi $$
Ainsi, 
$$\begin{cases}
\mathrm{CPM}_{\mathbb{K}}([a, b]) \to \mathbb{K} \\
f \mapsto \int _{a}^{b}f 
\end{cases}$$
est un prolongement de $I: \mathcal{E}_{\mathbb{K}}([a, b]) \to \mathbb{K}$


## 3. Propriété de cette intégrale
Sans surprise elle vérifie les mêmes propriétés que $I$ :

#### Propriété
1. Linéarité
   $$\begin{cases}\mathrm{CPM}_{\mathbb{K}}([a, b]) \to \mathbb{K} \\ f \mapsto \int _{a}^{b}f \end{cases}$$
   est une forme linéaire sur $\mathrm{CPM}_{\mathbb{K}}([a, b])$
   
2. Positivité (rappel : ici $a < b$)
   $$\forall f \in \mathrm{CPM}_{\mathbb{R}}([a, b]), \left( f \geq 0 \Rightarrow \int _{a}^{b}f \geq 0  \right)$$
3. Croissance ($a < b$)
   $$\forall f, g \in \mathrm{CPM}_{\mathbb{R}}([a, b]), \left( f \leq g \Rightarrow \int_{a}^{b} f \leq \int_{a}^{b}  g   \right)$$
4. Inégalité de norme 
   $$\forall f \in \mathrm{CPM}_{\mathbb{K}}([a, b]), \left|\int _{a}^{b}f\right| \leq \int _{a}^{b}|f| $$
5. Relation de Chasles
   Pour toute $f \in \mathrm{CPM}_{\mathbb{K}}([a,b])$ et $c \in ]a, b[$, 
   $$\begin{cases}
   f|_{[a, c]} \in \mathrm{CPM}_{\mathbb{K}}([a, c]) \\
   f|_{[c, b]} \in \mathrm{CPM}_{\mathbb{K}}([c, b])
   \end{cases}$$
   et 
   $$\int_{a}^{b}f = \int _{a}^{c}f|_{[a, c]}  + \int _{c}^{b}f|_{[c, b]}  $$

#### Remarque
Abus de notation : 
On note : 
$$\int _{a}^{c}f \text{ au lieu de : } \int_{a}^{c}f|_{[a, c]}   $$
Ce qui donne pour la relation de Chasles : 
$$\int_{a}^{b}f = \int _{a}^{c}f + \int _{c}^{b}f $$

#### Proposition : L'intégrale d'une fonction continue de signe constant
L'intégrale sur un segment non trivial d'une <u>fonction continue de signe constant est nulle</u> ssi <u>la fonction est nulle</u>.

Démonstration : 
Soient $a, b \in \mathbb{R}$ tq $a < b$ et $f$ continue sur $[a, b]$ de signe constant au sens large. 
Quitte à changer $f$ en $-f$, 
On peut supposer que $f \geq 0$

Si $f = 0$ alors : 
$$\int _{a}^{b}f  = 0 \text{ par linéarité de l'intégrale}$$

Par contraposition supposons que $f \neq 0$
Alors, il existe $x_{0} \in [a,b]$ tel que $f(x_{0}) \neq 0$, 
Par continuité de $f$, il existe $\alpha >0$ tel que 
$$\forall x \in [a, b], |x - x_{0}| \leq \alpha \Rightarrow |f(x) - f(x_{0})| \leq \frac{f(x_{0})}{2}$$
A fortiori : 
$$\forall x \in [a, b], |x - x_{0}| \leq \alpha \Rightarrow f(x) \geq \frac{f(x_{0})}{2}$$
Le segment
$$S = [x_{0}-\alpha, x_{0}+\alpha] \cap [a, b] = [\max(a, x_{0}-\alpha), \min(b, x_{0}+\alpha)]$$
est non trivial (faire une disjonction cas)
et quitte à le réduire un peu (tout en restant non trivial) on obtient un segment :
$$S'= [c, d] \text{ avec } a < c < d < b$$
et
$$\forall x \in S, f(x) \geq \frac{f(x_{0})}{2}$$

On a alors (en appliquant deux fois la relation de Chasles)
$$\int _{a}^{b}f= \int _{a}^{c}f +\int _{c}^{d}f + \int _{d}^{b}f \geq (d-c) \frac{f(x_{0})}{2} $$
Ainsi, 
$$\boxed{\int _{a}^{b}f \neq 0}$$

#### Remarque
Faux pour $f \in \mathrm{CPM}_{\mathbb{K}}([a, b])$

#### Remarque
La plupart du temps on a : $f$ continue et positive sur $[a,b]$ avec au moins un point de stricte positivité d'ou on en déduis que $\int _{a}^{b}f > 0$

#### Remarque
On a en fait montré un résultat plus fort : 
Si $f \in \mathrm{CPM}_{\mathbb{K}}([a, b])$,
$f \geq 0$, $f(x_{0}) \geq 0$
et $f$ est continue en $x_{0}$, alors, 
$$\int _{a}^{b}f > 0 $$

## 4. Extension aux cas ou $a = b$ ou $a > b$
Soit $f \in \mathrm{CPM}_{\mathbb{R}}(I)$ avec $I$ un intervalle non trivial de $\mathbb{R}$

On peut donc intégrer sur tout segment inclus dans $I$

#### Définition
On étend la définition de l'intégrale entre $a$ et $b$ où $a, b \in I$, ainsi : 
- Si $a < b$, $\int _{a}^{b}f$ est connue
- Si $a = b$ on pose : $\int _{a}^{b}f=0$
- Si $a > b$, On pose : $\int _{a}^{b}f = - \int _{b}^{a}f$

#### Propriété
1. Linéarité
   $$\forall f, g \in \mathrm{CPM}_{\mathbb{K}}(I), \forall \lambda, \mu \in \mathbb{K}, \int_{a}^{b} \lambda f + \mu g  = \lambda\int_{a}^{b}f + \mu \int _{a}^{b}g    $$
2. Positivité
   $$\forall f \in \mathrm{CPM}_{\mathbb{K}}(I), f \geq 0 \Rightarrow \mathrm{sgn}(b-a) \int _{a}^{b} f\geq 0 $$
3. Croissance
   $$\forall f, g \in \mathrm{CPM}_{\mathbb{R}}(I), f \leq g \Rightarrow \mathrm{sgn}(b-a)\int_{a}^{b} f \leq \mathrm{sgn}(b-a) \int _{a}^{b} g$$
4. Inégalité de norme
   $$\forall f \in \mathrm{CPM}_{\mathbb{K}}(I), |f| \in \mathrm{CPM}_{\mathbb{K}}(I) \text{ et } \left| \int _{a}^{b}f \right|\leq \mathrm{sgn}(b-a)\int _{a}^{b}\left| f\right|$$

#### Remarque
Si on ne connais pas le signe de $(b-a)$, on peut écrire :
$$\left| \int _{a}^{b}f\right| \leq \int _{a}^{b} \left| f\right| $$

# V. Sommes de Riemann
#### Remarque
Excal 9

#### Théorème
Soit $f \in \mathrm{CPM}_{\mathbb{K}}([a, b])$, (avec $a < b$)
$$\frac{b-a}{n} \sum_{k=0}^{n-1} f\left( a+k \frac{b-a}{n} \right) \underset{n \to +\infty}{\longrightarrow}  \int _{a}^{b}f $$
et
$$\frac{b-a}{n} \sum_{k=1}^{n} f\left( a+k \frac{b-a}{n} \right) \underset{n \to +\infty}{\longrightarrow}  \int _{a}^{b}f $$
Excal 10

Démonstration : 
###### Démonstration 1
Dans le cas ou $f \in \mathcal{C}_{\mathbb{K}}^{1}([a, b])$ : 
Supposons que $f \in \mathcal{C}_{\mathbb{K}}^{1}([a, b])$,

On note $M = \max_{[a, b]}\left| f'\right| \in \mathbb{R}_{+}$
(qui existe car $f'$ est continue sur $[a, b]$ par le théorème des bornes atteintes)
Soit $n \in \mathbb{N}$, 
On pose pour tout $k \in [\![0, n]\!]$, $x_{k} = a+k \frac{b-a}{n}$

Alors, 
$$\left| \frac{b-a}{n} \sum_{k = 1}^{n} f\left( a + k \frac{b-a}{n} \right) - \int _a^{b} f \right|$$
$$= \left| \frac{b-a}{n} \sum_{k = 1}^{n} f\left( x_{k} \right) - \sum_{k = 1}^{n}\int _{x_{k-1}}^{x_{k}} f \right|$$
$$= \left| \sum_{k=1}^{n} \int _{x_{k-1}}^{x_{k}}(f(x_{k})-f(x)) \, dx \right|$$
$$\leq \sum_{k = 1}^{n}  \int _{x_{k-1}}^{x_{k}} \left|f(x_{k})-f(x) \right|\, dx $$
(par inégalité triangulaire et de norme)
$$\leq \sum_{k = 1}^{n} \int _{x_{k-1}}^{x} M\left| x_{k}-x\right| \, dx $$
$$\leq M \sum_{k = 1}^{n} \int _{x_{k-1}}^{x} (x_{k}-x) \, dx = \frac{M}{2} \sum_{k = 1}^{n} (x_{k}-x_{k-1})^{2} = \frac{M}{2} \frac{(b-a)^{2}}{n}$$
Or 
$$\frac{M}{2} \frac{(b-a)^{2}}{n} \underset{n \to +\infty}{\longrightarrow} 0$$
Ainsi, 
$$\boxed{\frac{b-a}{n} \sum_{k=1}^{n} f\left( x_{k} \right) \underset{n \to +\infty}{\longrightarrow}  \int _{a}^{b}f }$$
et 
$$\frac{b-a}{n} \sum_{k =0}^{n-1} f(x_{k}) = \frac{b-a}{n}(f(a)-f(b)) \underset{n \to +\infty}{\longrightarrow} 0$$
Comme : 
$${\frac{b-a}{n} \sum_{k=1}^{n} f\left( x_{k} \right) \underset{n \to +\infty}{\longrightarrow}  \int _{a}^{b}f }$$
Ainsi, 
$$\boxed{\frac{b-a}{n} \sum_{k=0}^{n-1} f\left( x_{k} \right) \underset{n \to +\infty}{\longrightarrow}  \int _{a}^{b}f }$$

###### Démonstration 2
Supposons que $f \in \mathcal{C}_{\mathbb{R}}^{0}([a, b])$, 
Par le théorème de Heine, comme $f$ est continue sur $[a, b]$, $f$ est uniformément continue. 
Soit $\varepsilon > 0$, 
Par l'uniforme continuité il existe $\alpha >0$ tel que 
$$\forall x, y \in [a, b], \left( \left| x-y\right|\leq \alpha \Rightarrow \left| f(x) - f(y)\right| \leq \frac{\varepsilon}{b-a} \right)$$
Soit $N = \left\lceil \frac{b-a}{\alpha} \right\rceil$
Pour $n \geq N$,
On a alors, $\alpha \geq \frac{b-a}{n}$
On a alors avec les notations de $x_{k}$ et de la démonstration pour $\mathcal{C}_{\mathbb{R}}^{1}$ 

$$\left| \frac{b-a}{n} \sum_{k = 0}^{n} f(x_{k})-\int _{a}^{b} f  \right| \leq \sum_{k=1}^{n}\int _{x_{k-1}}^{x_{k}} \left| f(x_{k})-f(x) \right| \, dx $$
Comme $\left| x_{k}-x\right| = \frac{b-a}{n} \leq \alpha$, 
$$\leq \frac{\varepsilon}{b-a} \sum_{k=1}^{n} \int _{x_{k-1}}^{x_{k}} \, dx = \frac{\varepsilon}{b-a} \int _{a}^{b} \, dx = \varepsilon$$
On a prouvé que : 
$$\forall \varepsilon >0, \exists N \in \mathbb{N}, \forall n \geq N, \left| \frac{b-a}{n} \sum_{k=1}^{n} f(x_{k}) - \int _{a}^{b} f  \right| \leq \varepsilon$$
Ainsi, par définition de la limite : 
$$\boxed{\frac{b-a}{n} \sum_{k=1}^{n} f\left( x_{k} \right) \underset{n \to +\infty}{\longrightarrow}  \int _{a}^{b}f }$$

#### Exercice
Étudier les éventuelles limites des suites de T.G. suivantes:
1. $$u_{n} = \sum_{p = 1}^{n} \sqrt{ \frac{1}{n^{2}}-\frac{p^{2}}{n^{4}} }$$
2. $$v_{n} = \sum_{p = 1}^{n} \frac{p^{2}}{2p^{3}+n^{3}}$$
3. $$a_{n} = \frac{1}{n^{2}} \prod_{k = 1}^{n} (n^{2}+k^{2})^{\frac{1}{n}}$$
4. $$b_{n} = \sqrt[n]{ \frac{(2n)!}{n!n^{n}} }$$
___

On pose : 
$$f : \begin{cases}
[0, 1] \to \mathbb{R} \\
x \mapsto \sqrt{ 1-x^{2} }
\end{cases}$$
qui est CPM, 
Donc par le théorème précédent : 
$$u_{n} = \frac{1}{n} \sum_{p = 1}^{n} \sqrt{ 1 - \left( \frac{p}{n} \right)^{2} } \underset{n \to +\infty}{\longrightarrow}  \int_{0}^{1} \sqrt{ 1- \left( \frac{x}{n} \right)^{2} } \, dx $$
Et, 
$$\int _{0}^{1}  \, dx $$