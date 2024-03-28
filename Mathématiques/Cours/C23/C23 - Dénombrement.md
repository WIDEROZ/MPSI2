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

#### Corollaire : Lemme de berger
Soit $k \in \mathbb{N}^{*}$ et $f : X \to Y$ tq
pour tout $y \in Y$ a exactement $k$ antécédents alors, 
$$|X| = k |Y|$$

#### Théorème
Soient $X, Y$ finis de cardinal $p, n$ tq $p \leq n$
Alors, 
$$|Inj(X, Y)| = \frac{n!}{(n-p)!}$$

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
