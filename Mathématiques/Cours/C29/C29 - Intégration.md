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
Une belle approximation est appelé une appropriation "uniforme" de $f$. Pour cela on montre d'abord qu'il exite de telles approximations, puis que pour une telle suite
___

#### Définition : Conver
