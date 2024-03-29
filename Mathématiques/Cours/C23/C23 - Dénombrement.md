Soit $X, Y, Z$ des ensembles quelconques
#### Rappel des définitions
$$Bij(X, Y), Inj(X, Y), Surj(X, Y)$$

# I. Cardinal d'un ensemble fini
#### Définition
$$X \text{ fini} \Leftrightarrow \exists n \in \mathbb{N}, Bij([\![1, n]\!], X) \neq \varnothing$$

#### Propriété
Dans ce cas $n$ est unique appelé cardinal de $X$ est noté : 
$$Card(X) = |X|$$

###### Voir les lemmes sur le poly
(Ce qui est écrit sur la tableau : Voir lemmc techniqus su le poly)

#### Propriété
$$\begin{rcases}
Inj(X, Y) \neq \varnothing \\
Y \text{ fini}
\end{rcases} \Rightarrow \begin{cases}
X \text{ fini} \\
|X| \leq |Y|
\end{cases}$$

#### Corollaire
Toute partie $A$ d'un ensemble fini $X$ est fini et de cardinal inférieur à celui de l'ensemble : $|A|\leq |X|$

#### Rappel
$$\begin{cases}
A \to X \\
x \mapsto x
\end{cases}$$
est l'injection canonique

#### Théorème
Pour $X, Y$ finis, 
$$\begin{array}{rl}
|X| \leq |Y| &\Leftrightarrow Inj(X, Y) \neq \varnothing \\
|X| \geq |Y| &\Leftrightarrow Surj(X, Y) \neq \varnothing  \\
|X| = |Y| &\Leftrightarrow Bij(X, Y) \neq \varnothing 
\end{array}$$

#### Théorème : Miracle des cardinaux finis
Soit $f : X \to Y$, 
Si
$$\begin{cases}
X, Y \text{ finis} \\
|X| = |Y|
\end{cases}$$
Alors, 
$$f \text{ inj} \Leftrightarrow f \text{ surj} \Leftrightarrow f \text{ bij}$$

# II. Opérations
Tous les ensembles sont ici finis, 
#### Propriété
$$\left|\bigsqcup_{i = 1}^{p} X_{i}\right| = \sum_{i=1}^{p}|X_{i}|$$

#### Corollaire
$$|X \setminus Y| = |X| - |X \cap Y|$$
___

$$\bigsqcup_{i = 1}^{p}X_{i} \text{ est fini}$$
#### Corollaire : crible pour 2 ensembles
$$|X \cup Y| = |X| + | Y| - |X\cap Y|$$

#### Corollaire : crible pour 3 ensembles
$$|X \cup Y \cup Z| = |X| + |Y| + |Z| - |X\cap Y| - |Y \cap Z|- |Z \cap X| + |X\cap Y \cap Z|$$
___
$$\bigcup_{i = 1}^{p}X_{i} \text{ est fini}$$
#### Corollaire
$$\left|\bigcup_{i = 1}^{p} X_{i}\right| \leq \sum_{i = 1}^{p} |X_{i}|$$
___
$$\prod_{i = 1}^{p}X_{i} \text{ est fini}$$
#### Corollaire : Crible général Hors programme
Voir poly

#### Propriété : Produits
$$\left|\prod_{i = 1}^{p} X_{i}\right| = \prod_{i=1}^{p}|X_{i}|$$
#### Corollaire
$$|Y^{X}|=|Y|^{|X|}$$

#### Remarque (pour des ensembles infinis)
$$|\mathbb{R}^{\mathbb{N}}| = |\mathbb{R}|^{|\mathbb{N}|} = |\mathbb{R}|$$
Chelou mais a vérifier

#### Corollaire
$\mathcal{P}(X)$ est fini et :
$$|\mathcal{P}(X)| = 2^{|X|}$$

Pour voir ca : 
Pour $A \subset X$, 
$$\mathbb{1}_{A} : \begin{cases}
 X \to \{ 0, 1 \} \\
x \mapsto \begin{cases}
0 \text{ si }x \not\in A \\
1 \text{ si }x \in A
\end{cases}
\end{cases}$$
et 
$$\begin{cases}
\mathcal{P}(X) \to \{ 0, 1 \}^{X} \\
A \mapsto \mathbb{1}_{A}
\end{cases}$$
est une bijection


# III. Listes et combinaisons :
#### Lemme
Soit $f : X \to Y$ avec $X$ fini (donc, $f(X)$ fini)
Alors, 
$$|X| = \sum_{y \in f(X)} |f^{-1}(\{ y \})| = \sum_{y \in Y}|f^{-1}(\{ y \})|$$

Démonstration : 
On a :
$$X = \bigsqcup_{y \in f(X)}f^{-1}(\{ y \}) = \bigsqcup_{y \in Y}f^{-1}(\{ y \})$$
et on prend le cardinal. 

Excal 1 

#### Corollaire : Lemme des bergers
Soit $k \in \mathbb{N}^{*}$ et $f : X \to Y$ tq
pour tout $y \in Y$ a exactement $k$ antécédents alors, 
$$|X| = k |Y|$$

#### Théorème
Soient $X, Y$ finis de cardinal $p, n$ tq $p \leq n$
Alors, 
$$|Inj(X, Y)| = \frac{n!}{(n-p)!}$$

Démonstration : 
Quitte a composer à la source avec une bijection de $[\![1, p]\!]$ vers $X$, ce qui ne change pas l'injectivité, on peut supposer que $X = [\![1, p] \!]$
On fait une récurrence sur $p$. 

On pose pour $p \in \mathbb{N}$, 
$$\mathcal{A}_{p} : \text{"Pour tout ensemble Y de cardinal }n>p, |Inj([\![1, p]\!], Y)| = \frac{n!}{(n-p)!} \text{ "}$$

###### Initialisation :
Soit $Y$ de cardinal $n\geq 0$
La seule application de $\varnothing$ vers $Y$ est injective $(\varnothing, Y, \varnothing (\subset \text{graphe } \varnothing\times Y = \varnothing))$ 
Ainsi, 
$$|Inj(\varnothing, Y)| = 1 = \frac{n!}{n!}$$
On a bien $A_{0}$

###### Hérédité
Soit $p \in \mathbb{N}$, tq $A_{p}$, 
Soit $Y$ de cardinal $n\geq p+1$,
$$f : \begin{cases}
Inj([\![1, p+1]\!], Y) \to Inj([\![1, p]\!], Y) \\
h \mapsto h|_{[\![1, p]\!]}
\end{cases}$$
Etant donnée une injection de $[\![1, p]\!] \to Y$, 
Il y a exactement $n-p$ manières de la prolonger en une application injective de $[\![1, p+1]\!]$ vers $Y$, (on a $n-p$ choix d'images pour $p+1$ qui soient différentes des images de $1, p$)

Ainsi, tout élément de $Inj([\![1, p]\!], Y)$ à exactement $n-p$ antécédents par $f$. 
D'après le principe des bergers,
$$|Inj([\![1, p+1]\!], Y)| = (n-p)|Inj([\![1, p]\!], Y)| = \frac{n!}{(n-(p+1))!}$$
Ainsi, $A_{p+1}$ est vérifiée
Par le principe de récurrence de théorème est prouvé. 

#### Corollaire
$$|S_{n}| = n!$$

Démonstration : 
$$S_{n} = Bij([\![1, n]\!], [\![1, n]\!]) = Inj([\![1, n]\!], [\![1, n]\!])$$
Par le miracle des cardinaux finis,
Par le théorème précédent : 
$$|S_{n}| = n!$$

En notant : 
$A_{p}(Y)$ l'ensemble les $p$-uplets d'éléments de $Y$ deux a deux distincts

#### Théorème
$$|A_{p}(Y)| = \frac{n!}{(n-p)!}$$

#### Corollaire
$$|\mathcal{P}_{p}(Y)| = \binom{n}{p}$$


#### Définition
Pour $Y$ un ensemble et $p \in \mathbb{N}$ on note $A_{p}(Y)$ l’ensemble des $p$-uplets d'éléments de $Y$ deux à deux distincts : 
$$A_{p}(Y) = \{ (y_{1}, \dots, y_{p}) \in Y^{p} | \forall i, j \in [\![1, p]\!], (i \neq j) \Rightarrow y_{i} \neq y_{j} \}$$

#### Corollaire
Si $Y$ est de cardinal fini $n$ et $p \in [\![0,n]\!]$,
Alors, 
$$|A_{p}(Y)| = \frac{n!}{(n-p)!}$$



Démonstration : 
On peut voir un élément de $A_{p}(Y)$ comme une injection de $[\![1, p]\!]$ vers $Y$ ($i \mapsto y_{i}$)
Ainsi, $A_{p}(Y) = Inj([\![1, p]\!], Y)$
Donc, $|A_{p}(Y)| = \frac{n!}{(n-p)!}$


#### Rappel
Pour $Y$ un ensemble et $p \in \mathbb{N}$, $P_{p}(Y)$ est l'ensemble des parties de $Y$ de cardinal $p$ 

#### Théorème
Soit $Y$ le cardinal fini $n$ et $p \in \mathbb{N}$, 
Alors, 
$$|\mathcal{P}_{p}(Y)| = \binom{n}{p}$$
Avec la définition généralisé des binomiaux

Preuve : 
Si $p > n$ c'est trivial car $0 = 0$, 
Si $p \in [\![0, n]\!]$, 
On pose : 
$$g : \begin{cases}
A_{p}(Y) \to \mathcal{P}_{p}(Y) \\
(y_{1}, \dots, y_{p}) \mapsto \{ y_{1}, y_{p} \}
\end{cases}$$
qui est bien définie puisque si $(y_{1}, \dots, y_{p}) \in A_{p}(Y)$ alors, $|\{ y_{1}, \dots, y_{p} \}| = p$ puisque les $y_{i}$ sont deux a deux distincts. 

Soit $A \in \mathcal{P}_{p}(Y)$, 
Alors, $g^{-1}(\{ A \}) = A_{p}(A)$, 
Donc, $|g^{-1}(A)| = |A_{p}(A)| = \frac{p!}{(p-p)!} = p!$
Par le principe des bergers, 
$$|A_{p}(Y)| = p!\mathcal{P}_{p}(Y)$$
Donc, 
$$\begin{array}{rl}
|\mathcal{P}_{p}(Y)| &= \frac{|A_{p}(Y)|}{p!} \\
&= \frac{n!}{p!(n-p)!} \\
&= \binom{n}{p}
\end{array}$$

# IV Redémonstrations combinatoires
$$\forall n \in \mathbb{N}, 2^{n} \geq n+1$$
Démonstration : 
Soit $n \in \mathbb{N}$ et $X$ de cardinal $n$, 
$|\mathcal{P}(X)| = 2^{n}$ et $|\mathcal{P}_{0}(X)| = 1$ ($\varnothing$) et $|\mathcal{P}_{1}(X) = n|$ (singletons)
et comme $\mathcal{P}_{0}(X), \mathcal{P}_{1}(X) \subset \mathcal{P}(X)$ et sont disjoints,
$$2^{n} = |\mathcal{P}(X)| \geq |\mathcal{P}_{0}(X)| + |\mathcal{P}_{1}(X)| = 1+n$$

___
$$\forall n \in \mathbb{N}, \sum_{k = 0}^{n} \binom{n}{k} = 2^{n}$$Soient $n \in \mathbb{N}$ et $X$ de cardinal $n$, 
Alors,
$$\mathcal{P}(X) = \bigsqcup_{k=0}^{n}\mathcal{P}_{k}(X)$$
Donc, 
$$|\mathcal{P}(X)| = \sum_{k = 0}^{n}|\mathcal{P}_{k}(X)|$$
ie
$$2^{n} = \sum_{k = 0}^{n} \binom{n}{k}$$

___
$$\forall n, k \in \mathbb{N}, \binom{n}{k} + \binom{n}{k+1} = \binom{n+1}{k+1}$$
Démonstration : 
Soient $n \in \mathbb{N}$ et $X$ de cardinal $n+1$, 
On choisit un élément de $X$, $x_{0}$ et on note $Y = X \setminus \{ x_{0} \}$ 
On a alors, $|Y| = n$, 

Excal 2.
On divise une partie a $k+1$ éléments de $X$ en deux temps : celle qui contienne $x_{0}$ et les autres,
ie, 
On pose : 
$$\mathcal{P_{0}} = \{ A \in \mathcal{P}_{k+1} | x_{0} \in A \}$$
$$\mathcal{P}_{1} = \mathcal{P}_{k+1}(X) \setminus P_{0} = \mathcal{P}_{k+1}(Y)$$
(donc, $|P_{1}| = \binom{n}{k+1}$)
On a alors, 
$$\mathcal{P}_{k+1}(X) = P_{0} \sqcup P_{1}$$
Donc, 
$$ \binom{n+1}{k+1} = |\mathcal{P}_{k+1}(X)| = |P_{0}| + |P_{1}|$$

On pose : 
$$\phi : \begin{cases}
\mathcal{P}_{k}(Y) \to \mathcal{P}_{0} \\
\mathcal{B} \mapsto \mathcal{B} \sqcup \{ x_{0} \}
\end{cases}$$
Qui admet comme réciproque : 
$$\psi : \begin{cases}
\mathcal{P}_{0} \to \mathcal{P}_{k}(Y) \\
A \mapsto A \setminus \{ x_{0} \}
\end{cases}$$
Donc, elle est bijective
Ainsi, $|P_{0}| = |\mathcal{P}_{k}(Y)| = \binom{n}{k}$
et 
$$\binom{n}{k} + \binom{n}{k+1} = \binom{n+1}{k+1}$$
___
$A$ un anneau, 
$$\forall a, b \in A, \forall n \in \mathbb{N}, \left( ab = ba \Rightarrow (a+b)^{n} = \sum_{k = 0}^{n} \binom{n}{k}a^{k}b^{n-k} \right)$$
Idée : 
$$(a+b)^{n} = (a+b)(a+b)\dots(a+b)$$
$$=\sum_{k = 0}^{n}\sum_{\underset{|\{i \in [\![1,n]\!]| x_{i} =a\}| = k}{(x_{1}, \dots, x_{n}) \in \{ a, b \}^{n}}} a^{k}b^{n-k}$$

Or l'application : 
$$\begin{cases}
\mathcal{P}_{k}([\![1, n]\!]) \to \{ (x_{1}, \dots, x_{n}) \in \{ a, b \}^{n} | \space |\{ i \in [\![1, n]\!] | x_{i} = a \}|=k \} \\
I \mapsto (x_{1}, \dots, x_{n}) \text{ tel que }\begin{cases}
\forall i \in I, x_{i} = a \\
\forall i \not\in I, x_{i}=b
\end{cases}
\end{cases}$$
Est clairement bijective

Donc, 
$$(a+b)^{n} = \sum_{k = 0}^{n}a^{k}b^{n-k} |\mathcal{P}_{k}([\![1, n]\!])| = \sum_{k = 0}^{n}\binom{n}{k}a^{k}b^{n-k}$$
