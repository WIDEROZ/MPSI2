Soit $(\Omega, P)$ un espace probabilisé fini
#### Remarque
Certaines définitions de cette année seront spécifiques à ce cas fini. 

# I. Définitions
#### Définition
Une variable aléatoire (VA) sur $\Omega$ est une application $X : \Omega \to E$ (un ensemble)

Si $E = \mathbb{R}$, on dit que c'est une VA réelle (VAR)
Si $E \subset \mathbb{R}$, on change $E$ en $\mathbb{R}$. 
Ce qui fait de $X$ une (VAR).

#### Exemple
Le pile ou face à un coup : 
On dit que le joueur gagne $1$ €, lorsque la pièce tombe sur Pile et rien sinon.
   
1. On modélise cela par $\Omega = \mathcal{P} \sqcup \mathcal{F}$
   Avec $P : \text{"Tomber sur Pile"}$, $\mathcal{F} : \text{"Tomber sur Face"}$ et le gain est alors la VAR : 
$$X : \begin{cases}
\Omega \to \mathbb{R} \\
\omega \mapsto \begin{cases}
1 \text{ si } \omega \in \mathcal{P} \\
0 \text{ si } \omega \in \mathcal{F}
\end{cases}
\end{cases}$$
On a $X(\Omega) \subset \{ 0, 1 \}$


2. On lance un dé pipé telle que la proba d'obtenir un $6$ est $\frac{1}{2}$ est celle d'obtenir un $i \neq 6$ est $\frac{1}{10}$ pour chaque tel $i$
   
   On modélise le résultat de la VAR : 
   $X : \Omega \to \mathbb{R}$ qui vérifie : $X(\Omega) = [\![1, 6]\!]$


3. On lance deux dés et on fait la somme des résultats
   On modélise cela par la VAR : 
   $S : S \to \mathbb{R}$ tq $S(\Omega) = [\![2, 12]\!]$

4. On lance $n \in \mathbb{N}$ fois la pièce avec la même règle de gain a chaque coup
   
   On modélise le gain total par : 
   $X_{n} : \Omega \to \mathbb{R}$, On a : $S_{n}(\Omega) \subset [\![0, n]\!]$

#### Notations
Pour une VA $X : \Omega \to E$, 
Pour $A \subset E$ et $x \in E$ on note :
- $(X \in A) = X^{-1}(A) = \{ \omega \in \Omega | X(\omega) \in A \}$
  ie $\text{"La valeur de X est élément de A"}$
- $(X = x) = X^{-1}(\{ x \}) = \{ \omega \in \Omega | X(\omega) = x\}$ 
  ie $\text{"X vaut }x \text{ "}$

#### Convention
On écrit alors $P(X \in A)$ au lieu de $P((X \in A))$

Si de plus $X$ est une VAR en étendant l'ensemble  d'arrivée à $\mathbb{R}$, 
on note : $(X \geq x) = X^{-1}([x, + \infty[)$, $(a \leq X \leq b) = X^{-1}([a, b])$

4.  
Pour $k \in [0, n]$ fixé, la probabilité de gagner moins de $k$ euros est $P(S_{n} < k)$ 

#### Définition
Soit $X \in E^{\Omega}$ une VA, 
Sa loi est l'application : 
$$P_{X} : \begin{cases}
\mathcal{P}(X(\Omega)) \to [0,1] \\
A \mapsto P_{X}(A) = P(X \in A)
\end{cases}$$
On dit aussi que $X$ suit la loi $P_{X}$. 

#### Notation
Pour $X, Y \in E^{\Omega}$, 
On note : $X \sim Y$ ssi $P_{X} = P_{Y}$
($X$ à même loi que $Y$)

#### Remarque
C'est clairement une relation d'équivalence sur $E^{\Omega}$. 

#### Propriété
Avec les notations précédentes, $P_{X}$ est une probabilité sur $X(\Omega)$, elle est uniquement déterminée par la donnée : 
$P(X = x) = P_{X}(\{ x \}))$ pour $x \in X(\Omega)$ par la formule : 
$$\forall A \in \mathcal{P}(X(\Omega)), P_{X}(A) = \sum_{x \in A} P(X = x) = \sum_{x \in A}P_{X}(\{ x \})$$

Démonstration : 
- $X(\Omega)$ est fini ($\Omega$ est fini)
- $P_{X} : \mathcal{P}(X(\Omega)) \to [0, 1]$

Soient $A, B \in \mathcal{P}(X(\Omega))$ tq $A \cap B = \varnothing$, 
Il reste a montrer que $P_{X}(X(\Omega)) = 1$
et $P_{X}(A \sqcup B) = P_{X}(A) + P_{X}(B)$

- On a : 
  $$P_{X}(X(\Omega)) = P(X^{-1}(X(\Omega)))$$
  De manière générale, $\Omega \subset X^{-1}(X(\Omega))$
  Mais ici, $\Omega$ est l'ensemble de départ de $X$ donc $X^{-1}(X(\Omega)) \subset \Omega$ et finalement 
  $$P_{X}(X(\Omega)) = P(\Omega) = 1$$
  Car $P$ est une probabilité

- $P_{X}(A \sqcup B) = P(X^{-1}(A \sqcup B))$
  Or $X^{-1}(A \cup B) = X^{-1}(A) \cup X^{-1}(B)$
  De plus $X^{-1}(A) \cap X^{-1}(B) = X^{-1}(A \cap B) = X^{-1}(\varnothing) = \varnothing$
  Donc, $X^{-1}(A)$ et $X^{-1}(B)$ sont disjoints.
  Or $P$ est une proba, donc
  $$P_{X}(A \sqcup B) = P(X^{-1}(A) \sqcup X^{-1}(B))$$
  $$= P(X^{-1}(A)) + P(X^{-1})(B) = P_{X}(A) + P_{X}(B)$$


Ainsi, $P_{X}$ est une probabilité sur $X(\Omega)$ et la formule donnée est connue. 

#### Remarque
En pratique lorsqu'on donne ou demande la loi de $X$ c'est donc de $X(\Omega)$ et des $P(X = x)$ pour $x \in X(\Omega)$ qu'il s'agit

Parfois on donne seulement un ensemble $F \supset X(\Omega)$ et les $P(X= x)$ pour $x \in F$

C'est le cas des exemples 1. et 4. précédents 
Pour le 1. :
Tant qu'on ne connais pas la proba $p \in [0, 1]$ de tomber sur $\mathcal{P}$ on ne sait pas si $X(\Omega)$ vaut $\{ 0, 1 \}$ ($\{ 0 \}$ ou $\{ 1 \}$)
mais on donne dans ce cadre général la loi de $X$ par : 
$$\begin{cases}
X(\Omega) \subset \{ 0, 1 \} \\
P(X = 0) = 1-p \\
P(X= 1) = p
\end{cases}$$

#### Exemple
Prenons le point 2. (dé pipé)
La loi $P_{Y}$ de $Y$ est déterminée par : 
$$\begin{cases}
Y(\Omega) = [\![1, 6]\!] \\
P_{Y}(\{ 6 \}) = \frac{1}{2} \\
\forall i \in [\![1, 5]\!], P_{Y}(\{ i \}) = \frac{1}{10}
\end{cases}$$
(Faut pas donner la proba de toutes des possibilités c'est criminel (y'en a $2^{6}$))

#### Définition
Pour $X \in E^{\Omega}$ et $f : E \to F$, 
On note $f(X)$ la composée $f \circ X$ qui est une VA sur $\Omega$ à valeur dans $F$ 
On appelle $f(X)$ la VA image de $X$ par $f$

#### Remarque
D'après la propriété précédente, sa loi $P_{f(X)}$ est uniquement déterminée par les 
$$P(f(X) = y) = P(X \in f^{-1}(\{ y \})) = P_{X}(f^{-1}\{ y \})$$
pour les $y \in f(X(\Omega))$, Donc uniquement déterminée par $f$ et la loi de $X$ : 
$$\forall X, Y \in E^{\Omega}, \forall f \in F^{E}, X \sim Y \Rightarrow f(X) \sim f(Y)  $$

#### Exercice
Avec le dé pipé précédent, on imagine que le joueur gagne le carré de la différence entre le résultat du dé et $3$. : 
La VA de gain est alors :
$$\mathcal{Z} = (Y-3)^{2}$$
Vérifier que la loi est donnée par
- $\mathcal{Z}(\Omega) = \{ 0, 1, 4, 9 \}$
- $P(\mathcal{Z} = 0) = \frac{1}{10}$
- $P(\mathcal{Z} = 1) = \frac{1}{5}$
- $P(\mathcal{Z}=4) = \frac{1}{5}$
- $P(\mathcal{Z} = 9) = \frac{1}{2}$

#### Définition
Pour $X \in E^{\Omega}$ et $A \subset \Omega$ de probabilité non nulle, on définit
$$P_{A}(X \in \cdot) : \begin{cases}
\mathcal{P}(X(\Omega)) \to [0, 1] \\
B \mapsto P_{A}(X \in B)
\end{cases}$$
On l'appelle la loi de $X$ sachant $A$

#### Proposition
L'application $P_{A}(X \in \cdot)$ est une probabilité sur $X(\Omega)$

Démonstration : 
Elle est bien définie. 
On remarque que c'est la loi $(P_{A})_{X}$ de $X$ en prenant $P_{A}$ comme proba sur $\Omega$ 
ie en considérant la VA $X$ sur l'espace probabilisé $(\Omega, P_{A})$

# II. Lois usuelles
## 1. Variables Aléatoires constantes
Ce sont les $X : \Omega \to E$ qui prennent une seule valeur : 
Il existe $x_{0} \in E$ tq $\forall \omega \in \Omega, X(\omega) = x_{0}$

## 2. Variables Aléatoires uniformes
#### Définition
Soit $X : \Omega \to E$ et $F \subset E$ non vide, 
La VA $X$ est uniforme d'image $F$ ssi 
$$\begin{cases}
X(\Omega) = F \\
P_{X} \text{ est uniforme sur } F
\end{cases}$$
Reformulation :
$$\forall x \in F, P(X = x) = \frac{1}{|F|}$$
On note $X \sim \mathcal{U}(F)$, (Parfois $X \leadsto \mathcal{U}(F)$ ou $X \circlearrowright \mathcal{U}(F)$)

#### Exemple
Une telle loi apparaît lorsque les issues d'une expérience aléatoire sont équiprobables suite à une hypothèse explicite (dé non pipé, pièce équilibrée ou non truquée, boule d'une urne indiscernable au toucher, etc...). 
Ou implicite (On choisit un nombre entre $1$ et $100$ au hasard) ou autre cas où ne pas supposer l’équiprobabilité rendrait le problème infaisable si on ne prend pas une loi uniforme. 
Par exemple si $X$ est le résultat d'un lancé de dé non pipé, $X \leadsto \mathcal{U}([\![1, 6]\!])$
Pour une pièce équilibrée, $Y \leadsto \mathcal{U}([\![0, 1]\!])$ avec gain $0$ ou $1$

## 3. VA de Bernoulli
#### Définition
Soit $p \in [0, 1]$, 
Une VA $X$ est de Bernoulli de paramètre $p$ ssi : 
$$\begin{cases}
X(\Omega) \subset \{ 0,1 \} \\
P(X = 1) = p
\end{cases}$$
On note cela : $X \sim \mathcal{B}(p)$
On a 

#### Remarque
Il se peut que
- $X(\Omega) = \{ 0 \}$ lorsque $p = 0$
- $X(\Omega)= \{ 1 \}$ lorsque $p=1$

#### Remarque
Toute VAR $X$ tq $X(\Omega) \subset \{ 0, 1 \}$ est une VA de Bernoulli
$X \sim \mathcal{B}(P(X=1))$

#### Exemples importants
1. Rappel : la fonction indicatrice d'un évènement $A$ : 
$$\mathbb{1}_{A} : \begin{cases}
\Omega \to \{ 0, 1 \} \\
\omega \mapsto \begin{cases}
1 \text{ si } \omega \in A \\
0 \text{ si } \omega \not\in A
\end{cases}
\end{cases}$$
On a $\mathbb{1}_{A} \sim \mathcal{B}(P(A))$

2. On lance une pièce qui a une proba $p$ de tomber sur Pile et le joueur gagne $1$ € pour Pile et $0$ pour face. 
   Le gain $X$ suit une VA de Bernoulli : 
   $$X \sim \mathcal{B}(p)$$

3. Si une urne contient $N$ boules ($N \neq 0$) dont $R$ boules roses  alors $Y$ défini par : 
$$Y = \begin{cases}
1 \text{ si la boule est rose} \\
0 \text{ sinon}
\end{cases}$$
est de Bernoulli : $X \sim \mathcal{B}\left( \frac{R}{N} \right)$

###### Généralement
On effectue une expérience aléatoire de Bernoulli et $X$ vaut $1$ en cas de succès et $0$ en cas d'échec alors $X \sim \mathcal{B}(p)$ ou $p$ est la proba de succès. 

## 4. Variables Aléatoires Binomiales
#### Définition
Soient $n \in \mathbb{N}^{*}$ et $p \in [0, 1]$, 
On note $q = 1-p$

Une VAR $X$ est une VA binômiale de paramètres $n$ et $p$ ssi
$$\begin{cases}
X(\Omega) \subset [\![0, n]\!] \\
\forall k \in [\![0, n]\!], P(X = k) = \binom{n}{k}p^{k}q^{n-k} \\
\text{On note : } X \sim \mathcal{B}(n, p)
\end{cases}$$


#### Remarque
$$X \sim \mathcal{B}(1, p) \Leftrightarrow X \sim \mathcal{B}(p)$$

#### Propriété
Soit $n \in \mathbb{N}^{*}$ et $p \in [0, 1]$
Lors d'un succession d'ea de Bernoulli indépendantes et de même probabilité de succès $p$, le nombre total $X$ de succès vérifie : $X \sim \mathcal{B}(n, p)$

Démonstration : 
Soit $p \in [0, 1]$ fixé, 
On raisonne par récurrence sur $n \in \mathbb{N}^{*}$ en posant :
$$\begin{array}{c}
\mathcal{A}_{n}: \text{"Lors d'un succession de }n \text{ expériences aléatoires} \\
\text{ de Bernoulli indépendantes de paramètre } p \text{  : nbre de succès }X \\
\text{suit une loi }\mathcal{B}(n, p)
\end{array}$$

##### Initialisation
Pour $n=1$, $X \sim \mathcal{B}(p)$ ie $X \sim \mathcal{B}(1, p)$

##### Hérédité
Soit $n \in \mathbb{N}^{*}$ tq $\mathcal{A}_{n}$, 
On considère une succession de $n+1$ ea Bernoulli "indépendantes" de paramètre $p$.
On note $X_{n}$ le nombre de succès obtenu lors des $n$ premières et $X_{n+1}$ le nombre total de succès. 

Par H.R. $X_{n} \sim \mathcal{B}(n,p)$
En notant : 
$$S_{n+1} :\text{"La }n+1^{\text{eme}} \text{ epreuve est un succès}$$

On sait que : $X_{n+1}(\Omega) \subset [\![0, n+1]\!]$, 
On a, pour $k \in [\![0, n+1]\!]$, 
$$(X_{n+1}=k) = (X_{n} = k) \cap \overline{S_{n+1}} \sqcup  (X_{n} = k-1) \cap S_{n+1}$$
Par l'indépendance physique : 
$(X_{n} = k)$ et $\overline{S_{n+1}}$ sont indépendants
$(X_{n} = k-1)$ et $S_{n+1}$ sont indépendants

En utilisant l'additivité disjointe et la définition de l'indépendance de deux évènements : 
$$\begin{array}{rl}
P(X_{n+1}) &= P(X_{n}=k) P(\overline{S_{n+1}}) + P(X_{n} = k-1)P(S_{n+1}) \\
&= \binom{n}{k}p^{k}q^{n-k}\times q + \binom{n}{k-1}p^{k-1}q^{n-k+1}\times p \\
&= (\binom{n}{k}+ \binom{n}{k-1})p^{k}q^{n+1-k} \\
&= \binom{n+1}{k}p^{k}q^{(n+1)-k}
\end{array}$$
Ainsi $X \sim \mathcal{B}_{n+1, p}$ et $\mathcal{A}_{n+1}$

#### Exemples
1. On lance $n$ fois une pièce qui a une probabilité $p$ de tomber sur face
   Le nombre total de "Face" obtenus $X$ vérifie $X \sim \mathcal{B}(n, p)$
2. On tire $n$ fois avec remise une boule dans une urne contenant $N$ boules dont $R$ roses
   Le nombre de tirage "Roses" obtenu suit une loi : $\mathcal{B}\left( n, \frac{R}{N} \right)$

#### Remarque
L'indépendance est une indépendance physique des expériences ie les résultats des différentes expériences n’influent pas les uns sur les autres. On modélise cela par de l'indépendance mathématique. 


# III. Couples des VA
#### Définition
Pour $X : \Omega \to E$ et $Y : \Omega \to F$
On définit la VA :
$$(X, Y) : \begin{cases}
\Omega \to E \times F \\
\omega \mapsto (X(\omega), Y(\omega))
\end{cases}$$
et on l'appelle un couple de VA
La loi $P_{(X, Y)}$ de $(X, Y)$ est appelée la loi conjointe de $X$ et $Y$
Les lois $P_{X}$ et $P_{Y}$ sont appelés les lois marginales du couple $(X, Y)$

#### Remarque
En notant : 
$$\begin{cases}
X(\Omega) = \{ x_{1}, \dots, x_{k} \} \\
Y(\Omega) = \{ y_{1}, \dots, y_{l} \}
\end{cases}$$
On peut représenter toutes ces lois dans une table : 
$$\begin{array}{c|c|c|c|c|c}
_X\setminus^{Y}&y_{1}&\dots&y_{j}&\dots&y_{l}&P_{X} \\ \hline
x_{1}&&&&&&P(X = x_{1}) \\ \hline
\vdots \\\hline
x_{i}&&&P((X, Y) = (x_{i}, y_{j}))&&&P(X = x_{i}) \\\hline
\vdots \\ \hline
x_{k}&&&&&& P(X = x_{k}) \\ \hline
P_{y}&P(Y = y_{1})&\dots&P(Y = y_{j})& \dots& P(Y = y_{l})&1
\end{array}$$
On a par additivité disjointe, pour $i$ fixé : 
$$\sum_{j = 1}^{l} P(X = x_{i}, Y = y_{j}) = P(X =x_{i})$$
De même pour $j$ fixé
$$\sum_{i = 1}^{k}P(X = x_{i}, Y = y_{j}) = P(Y = y_{j})$$

#### Exemple
$$\begin{array}{c | c}
_{X}\setminus^{Y}&0&1&P_{X} \\ \hline
A& \frac{1}{3}&0& \frac{1}{3} \\ \hline
B& \frac{5}{12}& \frac{1}{4}& \frac{2}{3} \\ \hline
P_{Y} & \frac{3}{4}& \frac{1}{4 } & 1
\end{array}$$

#### Propriété
Soit $(X, Y)$ un couple de VA, 
$$\forall x \in X(\Omega), P(X = x) = \sum_{y \in Y(\Omega)}P(X = x, Y = y)$$
$$\forall y \in Y(\Omega), P(Y = y) = \sum_{x \in X(\Omega)}P(X = x, Y = y)$$
#### Remarque
Ici la loi conjointe détermine les lois marginale (réciproque fausse)
On veut remplir ce tableau : 

$$\begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& && &\frac{1}{3} \\ \hline
1& &&&\frac{1}{3} \\ \hline
2& && & \frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$
On a plusieurs manières : 
$$T_{1} : \begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& \frac{1}{9}& \frac{1}{9} & \frac{1}{9} &\frac{1}{3} \\ \hline
1& \frac{1}{9}& \frac{1}{9}& \frac{1}{9} &\frac{1}{3} \\ \hline
2& \frac{1}{9}& \frac{1}{9} & \frac{1}{9} & \frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$
$$T_{2} : \begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& \frac{1}{3}&0&0& \frac{1}{3} \\ \hline
1& 0& \frac{1}{3}& 0 &\frac{1}{3} \\ \hline
2& 0& 0 & \frac{1}{3} & \frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$
$$T_{3} :\begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& \frac{1}{9} & \frac{2}{9} &0 &\frac{1}{3} \\ \hline
1& 0& \frac{1}{9}& \frac{2}{9} &\frac{1}{3} \\ \hline
2& \frac{2}{9} &0&  \frac{1}{9} &\frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$
etc...

Question : Selont les tableaux, les VA vous semblent elle plus ou moins dépendantes
$T_{1}$ semble indépendant
$T_{2}$ semble dépendant
$T_{3}$ semble dépendant

On remarque que pour $j \in [\![1, l]\!]$, la table permet de trouver facilement la loi de $X$ sachant $Y = y_{j}$
en divisant $P(X = x_{i}, Y = y_{j})$ par $P(Y = y_{j})$ (fin de ligne)
ce qui donne pour tout $i \in [\![1, k]\!]$, $P_{(Y = y_{j})}(X = x_{i})$

#### Exercice
Soit $(X, Y)$ un couple de VA dont la loi conjointe est donnée par la table : 
$$\begin{array}{c | c}
_{X}\setminus^{Y}&A&B&C&P_{X} \\ \hline
S& \frac{1}{4} & \frac{1}{8}& \frac{1}{3}& \\ \hline
E& \frac{1}{8} &0& \frac{1}{6}& \\ \hline
P_{Y} & &  & &1
\end{array}$$
Déterminer les loi marginales et toutes les lois conditionnelles

# IV. Variables Aléatoires indépendantes
## 1. Indépendance de deux Variables Aléatoires
#### Définition
Deux VA $X$ et $Y$ sur un même univers fini $\Omega$ sont dites indépendantes ssi 
Pour tout $A\subset X(\Omega)$ et $B \subset Y(\Omega)$ les évènements
$(X \in A)$ et $(Y \in B)$ sont indépendants. 

Ce qui se réécrit : 
$$\forall A \subset X(\Omega), \forall B \subset Y(\Omega), P(X \in A, Y \in B) = P(X \in A) P(X \in B)$$
Ou encore : 
$$\forall(A, B) \in \mathcal{P}(X(\Omega))\times \mathcal{P}(Y(\Omega)), P_{(X,Y)}(A \times B) = P_{X}(A)P_{Y}(B)$$

#### Remarque
Cette définition est très pratique lorsque l'indépendance provient de l'énoncé.
Elle n'est pas pratique pour prouver l'indépendance, pour ca on utilise en général la caractérisation suivante : 

#### Proposition : Caractérisation de l’indépendance
L'indépendance de $X$ et $Y$ équivaut à
$$\forall(x, y) \in X(\Omega) \times Y(\Omega), P(X = x, Y = y) = P(X = x)P(Y = y)$$

Démonstration : 
Si $X$ et $Y$ sont indépendants en prenant pour $(x, y) \in X(\Omega)\times Y(\Omega)$ 
$A = \{ x \}$ et $B = \{  Y \}$, on obtiens l'égalité voulue. 

Montrons la réciproque 
On suppose que $X$ et $Y$ sont deux VA sur $\Omega$ et vérifient :
$$\forall(x, y) \in X(\Omega) \times Y(\Omega), P(X = x, Y = y) = P(X = x)P(Y = y)$$

Soient $A \subset X(\Omega)$ et $B \subset Y(\Omega)$
Alors, 
$$P(X \in A, Y \in B) = P((X, Y) \in A \times B)$$
$$= \sum_{(x, y) \in A \times B} P((X, Y) = (x, y))$$
par additivité disjointe
$$= \sum_{(x, y) \in A \times B} P(X = x, Y = y)$$
$$= \sum_{(x, y) \in A \times B} P(X = x)P(Y = y)$$
$$=\left(  \sum_{x \in A}P(X = x)  \right)\left( \sum_{y \in B}P(Y = y) \right)$$
Ainsi, 
$$P(X \in A, Y \in B) = P(X \in A)P(X \in B)$$


#### Remarque
Cela se voit sur la table en vérifiant que chaque case intérieur est le produit des cases marginales correspondantes. 

#### Exemple
Les deux VA $X$ et $Y$ dont la loi conjointe étaient données par la table $T_{1}$, sont indépendantes.
Remarquer que cela ne dépend que de la loi conjointe par spécifiquement de la VA $(X, Y)$
Avec $T_{2}$ et $T_{3}$, $X$ et $Y$ sont indépendantes  

####  Propriété
Une VA constante est indépendante de tout autre VA (sur le même univers)

Démonstration : $\oplus$

#### Proposition
Pour $X$ et $Y$ <u>indépendantes</u>, les lois marginales déterminent la loi conjointe. 

Démonstration : Par la caractérisation

#### Proposition
Un couple de VA uniformes indépendantes suit une loi uniforme

#### Proposition
Soit deux VA $X$ et $Y$ sur un même univers et $\mathcal{Z} = X + Y$, 
Soit $n, m \in \mathbb{N}^{*}$, 
Soit $p \in [0,1]$
Si
$$\begin{cases}
X \sim \mathcal{B}(m, p) \\
Y \sim \mathcal{B}(n, p)
\end{cases}$$
et $X$ et $Y$ sont indépendants
Alors, $\mathcal{Z} \sim \mathcal{B}(n+m, p)$

Démonstration : 
Supposons que :
$$\begin{cases}
X \text{ et } Y \text{ soient indépendante} \\
X \sim \mathcal{B}(m, p) \\
Y \sim \mathcal{B}(n, p)
\end{cases}$$
(on note $q = 1-p$)
Il est clair que $\mathcal{Z}(\Omega) \subset [\![0, m+n]\!]$
Soit $k \in [\![0, m+n]\!]$, Alors
$$(\mathcal{Z} = k)= \bigsqcup_{i=0}^{k}(X = i) \cap (Y = k-i)$$
(certains de ces évènements peuvent être impossible)
Supposons $p$ et $q$ non nuls, 
On a par l'additivité disjointe : 
$$P(\mathcal{Z} = k) = \sum_{i = 0}^{k}P(X = i, Y = k-i)$$
Par indépendance : 
$$= \sum_{i = 0}^{k} P(X = i)P(Y = k-i)$$
Par déf des binomiaux :
$$= \sum_{i = 0}^{k}\binom{m}{i}p^{i}q^{m-i} \binom{n}{k-i}p^{k-i}q^{n-k+i}$$
$$=\left( \sum_{i = 0}^{k} \binom{m}{i}\binom{n}{k-i} \right)p^{k}q^{(m+n)-k}$$
(Cette formule fonctionne encore pour $p=0$ ou $q=0$)
On utilise alors le lemme : 
##### Lemme
$$\forall m, n \in \mathbb{N}, \forall k \in [\![0, m+n]\!], \sum_{i = 0}^{k} \binom{m}{i}\binom{n}{k-i} = \binom{m+n}{k} $$

Démonstration : 
Soient $m, n \in \mathbb{N}$ et $k \in [\![0, m+n]\!]$,
Soit $E, F$ deux ensembles de card $m$ et $n$ tq $E \cap F = \varnothing$, 
On compte le nombre de parties à $k$ éléments de $E \sqcup F$ : 
de deux manières : 
Comme $|E \sqcup F| = |E| + |F| = m + n$, 
$$|\mathcal{P}_{k}(E \sqcup F)| = \binom{m+n}{k}$$
Notons pour $i \in [\![0, k]\!]$, 
$$\mathcal{A}_{i} = \{ A \in \mathcal{P}_{k}(E \sqcup F) | \space |A \cap E| = i \}$$
Excal 1.

On a clairement : $\mathcal{P}_{k}()$
Par ailleurs pour $i \in [\![0, k]\!]$, choisir un élément de $A_{i}$ c'est : 
- Choisir un élément de $\mathcal{P}_{i}(E)$
- Choisir un élément de $\mathcal{P}_{k-i}(F)$

et en faire la réunion (disjointe)
Donc, $|A_{i}| = \binom{m}{i}\binom{n}{k-i}$
et finalement : 
$$|\mathcal{P}_{k}(E \sqcap F)| = \sum_{i = 0}^{k}\binom{m}{i}\binom{n}{k-i}$$
Ainsi, 
$$\binom{m+n}{k} = |\mathcal{P}_{k}(E \sqcap F)| = \sum_{i = 0}^{k}\binom{m}{i}\binom{n}{k-i}$$

#### Remarque
Excal 2

#### Propriété
Soient $X$ et $Y$ deux VA sur $\Omega$ : 
$X \in E^{\Omega}$ et $Y \in F^{\Omega}$
et $f \in E'^{E}$ et $g \in F'^{F}$
Si $X$ et $Y$ sont indépendants, alors $f(X)$ et $g(Y)$ sont indépendants.

Démonstration : 
Supposons $X$ et $Y$ indépendants, 
Soient $x' \in f(X(\Omega))$ et $y' \in g(Y(\Omega))$
Alors,
$$\begin{array}{rl}
P(f(X) = x', g(Y) = y')&= P(X \in f^{-1}(\{ x^{'} \}), Y \in g^{-1}(\{ y' \})) \\
&= P(X \in f^{-1}(\{ x' \}))  P(Y \in g^{-1}(\{ y' \})) \\
&= P(f(X) = x')P(g(Y) = y')
\end{array}$$
Par la caractérisation : $f(X)$ et $g(Y)$ sont indépendants

#### Exemple
Si $X$ et $Y$ sont indépendants, $X^{2}$ et $Y^{3}$ le sont

## 2. Indépendance mutuelle d'un nombre fini de Variables Aléatoires
#### Définition
Soit $n \in \mathbb{N}^{*}$,
Soient $X_{1}, \dots, X_{n}$ des VA (sur le même univers), 
Elles sont mutuellement indépendantes ssi : 

Pour tout $A_{1}, .., A_{n} \in \prod_{i=1}^{n}\mathcal{P}(X_{i}(\Omega))$, 
Les évènements $(X_{i} \in A_{i})$ ($i \in [\![1, n]\!]$) sont mutuellement indépendants. 

#### Remarque
L'indépendance mutuelle implique forcément l'indépendance deux a deux.

#### Rappel
Pour $n \geq 3$, la simple égalité : 
$$P(X_{i} \in A_{i})_{i = 1}^{n} = \prod_{i = 1}^{n}P(X_{i} = A_{i})$$
Ne suffit pas à montrer l'indépendance mutuelle. 

#### Théorème
Avec les notations précédentes : 
L'indépendance mutuelle des $(X_{i})_{i = 1}^{n}$ équivaut à :
$$\forall (A_{i})_{i = 1}^{n} \in \prod_{i = 1}^{n} \mathcal{P}(X_{i}(\Omega)), P(X_{i} \in A_{i})_{i = 1}^{n} = \prod_{i = 1}^{n}P(X_{i} \in A_{i})$$

Démonstration : 
$\Rightarrow$ : Évident car la mutuelle indépendance des $(X_{i} \in A_{i})$ avec ($i \in [\![1, n]\!]$) implique que
$$P(X_{i} \in A_{i})_{i = 1}^{n} = \prod_{i = 1}^{n}P(X_{i} \in A_{i})$$

$\Leftarrow$ : 
Supposons : 
$$\forall (A_{i})_{i = 1}^{n} \in \prod_{i = 1}^{n} \mathcal{P}(X_{i}(\Omega)), P(X_{i} \in A_{i})_{i = 1}^{n} = \prod_{i = 1}^{n}P(X_{i} \in A_{i})$$
Soient $A_{1} \subset X_{1}(\Omega), \dots, A_{n} \subset X_{n}(\Omega)$,

On veut que les $(X_{i} \in A_{i})$ avec ($i \in [\![1, n]\!]$) soient musellements indépendants ie : 
$$\forall I \subset [\![1, n]\!], P(\forall i \in I, X_{i} \in A_{i}) = \bigcap_{i \in I}(X_{i} \in A_{i})$$

Soit $I \in [\![1,n]\!]$, 
On pose pour $i \in [\![1,n]\!]$ : 
$$A_{i}' = \begin{cases}
A_{i} \text{ si } i\in I  \\
X_{i}(\Omega) \text{ si } i \notin I
\end{cases}$$
On applique la proposition supposée à $(A'_{i})_{i = 1}^{n}$ ce qui donne : 
$$P\left( \bigcap_{i=1}^{n}(X_{i} \in A'_{i})_{i = 1}^{n}\right)= \prod_{i= 1}^{n}P(X_{i} \in A_{i})$$
Or pour $i \in [\![1, n]\!] \setminus I$, 
$A'_{i} = X_{i}(\Omega)$ donc, 
1. $(X_{i} \in A'_{i}) = \Omega$
2. $P(X_{i} \in A'_{i}) = 1$

Cela se réécrit :
$$P\left( \bigcap_{i \in I} (X_{i} \in A'_{i}) \right) = \prod_{i \in I}P(X_{i} \in A'_{i})$$
et par définition des $A'_{i}$
$$P\left( \bigcap_{i \in I} A_{i} \right) = \prod_{i \in I}P(X_{i}\in A_{i})$$
Ainsi les $(X_{i} \in A_{i})_{i = 1}^{n}$ sont mutuellement indépendants. 


#### Corollaire
Les VA $(X_{i})_{i = 1}^{n}$ sont mutuellement indépendantes ssi
$$\forall(x_{i})_{i = 1}^{n} \in \prod_{i = 1}^{n}X_{i}(\Omega), P(X_{i} = x_{i})_{i = 1}^{n} = \prod_{i = 1}^{n}P(X_{i} = x_{i})$$

Démonstration : La même que pour $n = 2$

#### Théorème : Lemme des coalitions
Soient $(X_{i})_{i = 1}^{n}$ des VA mutuellement indépendantes et $(I_{i})_{i = 1}^{k}$ des parties deux a deux disjointes de $[\![1, n]\!]$ :

Si pour tout $j \in [\![1, k]\!]$,
$\mathcal{Z}_{j}$ est une VA fonction des $X_{i}$ avec $i \in I$, 
Alors, 
$(\mathcal{Z}_{i})_{i = 1}^{k}$ sont mutuellement indépendantes.

#### Remarque
Au fond la preuve est la même que pour 2 VA

#### Exemple
Soient $(X_{i})_{i = 1}^{9}$ des VA mutuellement indépendantes. 
Alors les VA : 
$$\begin{array}{l}
\mathcal{Z}_{1} = X_{5} +X_{7} \\
\mathcal{Z}_{2} = \cos(X_{8}) \\
\mathcal{Z}_{3} = \sin(X_{1}+X_{9}) \\
\mathcal{Z}_{4} = X_{3}
\end{array}$$
Sont mutuellement indépendantes. 

#### Corollaire
Si $(X_{i})_{i = 1}^{n}$ sont mutuellement indépendantes
et $1 \leq i_{1} < \dots < i_{k} \leq n$ 
Alors, 
$(X_{i_{j}})_{j = 1}^{k}$ sont indépendantes.

#### Propriété
Soit $n \in \mathbb{N}^{*}$ et $p \in [0, 1]$,
La somme de $n$ VA de Bernoulli mutuellement indépendantes et de même paramètre $p$ suit une loi $\mathcal{B}(n, p)$

Démonstration : 
On pourrait montrer cela de la même façon que pour le nombre de succès dans une succession d'épreuves de Bernoulli indépendantes et de même paramètre (par récurrence)
Dans cette preuve on déduisait l'indépendance de certains évènements de l'indépendance physique des épreuves et ici il faudrait remplacer cette justification par le lemme des coalitions. 

On peut aller plus vite en se servant du résultat déjà prouvé sur la somme de deux binômales ce qu'on va faire ici :

On fixe $p \in [0,1]$ et on raisonne par récurrence rapide sur $n \in \mathbb{N}$ :

Pour $n =2$ : 
On a une somme de deux VA suivent une loi $\mathcal{B}(p) = \mathcal{B}(1, p)$ indépendantes, donc la proposition sur la somme de deux binomiales donne directement : $X_{1} + X_{2} \sim \mathcal{B}(2, n)$

Supposons qu'on connaisse le résultat pour $n \geq 2$. 
On prend $(X_{i})_{i = 1}^{n+1}$ mutuellement indépendantes de même loi $\mathcal{B}(p)$ 
(on dit que $(X_{i})_{i = 1}^{n}$ sont i.i.d. (indépendantes et identiquement distribuées) de loi $\mathcal{B}(p)$)
Alors
$$\sum_{i = 1}^{n+1} X_{i} = \sum_{i = 1}^{n} X_{i} + X_{n+1}$$
Par hypothèse de récurrence : 
$\sum_{i = 1}^{n} X_{i} \sim \mathcal{B}(n, p)$ et $X_{n+1} \sim \mathcal{B}(1, p)$
Ainsi, 
D'après la propriété utilisé à l'initialisation :
$$\sum_{i = 1}^{n+1} X_{i} \sim \mathcal{B}(n+1, p)$$

# V. Espérance d'une Variable Aléatoire réelle
## 1. Introduction heuristique
On imagine une VAR $X$ qui représente le gain à un jeu
Elle peut prendre les valeurs : $(x_{i})_{i = 1}^{N} \in \mathbb{R}^{n}$
On veut calculer le gain moyen par coup qu'on peut atteindre si on joue un "grand" nombre de fois (qu'on peut asymptotiquement atteindre)
ie la limite du gain sur $n$ coup lorsque le nombre de coups $n$ tend vers $+ \infty$
C'est ce gain moyen qu'on appellera espérance de $X$ Noté $E(X)$
On note : $(p_{i})_{i = 1}^{N}$ les probabilités d'obtenir $(x_{i})_{i = 1}^{N}$
On a déjà vu que $p_{j}$ (avec $j \in [\![1, N]\!]$) est la limite théorique de la fréquence d'obtention de $x_{j}$ lorsque $n \to + \infty$

Soit $n \in \mathbb{N}^{*}$, 
On joue $n$ coup, ie on prend $n$ réalisation du jeu et on note : $y_{i}$ le résultat. 
La moyenne des gains par coup est alors : 
$$\frac{1}{n}\sum_{i=1}^{n}y_{i}= \sum_{j = 1}^{N}  \frac{|\{ i \in [\![1, n]\!] | y_{i} = x_{j} \}|}{n}x_{j}$$
On passe a la limite lorsque $n \to + \infty$ : 
$$E(X) = \sum_{j = 1}^{N}p_{j}x_{j} = \sum_{j = 1}^{N}P(X = x_{j})x_{j}$$
On prendra cela comme définition de l'espérance. 

## 2. Définition
#### Définition
Soit $X$ une VAR, sur $\Omega$ fini, 
On note : $E(X$) ou $E[X]$ et on appelle l'espérance de $X$ :
$$E(X) =  \sum_{x \in X(\Omega)}P(X = x)x$$

#### Remarque
Cette espérance est une application : 
$$E: \begin{cases}
\mathbb{R}^{\Omega} \to \mathbb{R} \\
X \mapsto \sum_{x \in X(\Omega)}P(X = x)x
\end{cases}$$
On a $\mathbb{R}^{\Omega}$ qui est un espace vectoriel
$E$ est alors une forme linéaire si elle est linéaire. 

#### Remarque importante
L'espérance ne dépend que de la loi $P_{X}$ de $X$ !!!!!!!!!!!

#### Remarque
Pour toute partie finie (ou pas) $F$ de $\mathbb{R}$ qui contient $X(\Omega)$, on a : 
$$E(X) = \sum_{x \in F}P(X = x)x$$
On peut donc noter : 
$$E(X) = \sum_{x \in \mathbb{R}}P(X = x) x$$
Certains auteurs note cela : 
$$E(X) = \sum_{x} P(X = x)x$$

#### Exemple
On prend le dé pipé précédent
Si le résultat est pair, le joueur gagne $1$ €,
Si il vaut $1$, il perd $2$ €
Si il vaut $3$, il ne perd ni ne gagne rien
Si il vaut $5$, il perd $3$ €

Ce jeu est-il favorable au joueur : 
On note $X$ la VA gain
On a : 
$$\begin{array}{rl}
E(X) &= P(X = -3) \times (-3) \\
&+ \space P(X = 2) \times (-2) \\
&+ \space P(X = 0) \times 0 \\
&+ \space P(X = 1) \times 1
\end{array}$$
Or
- $P(X = -3) = \frac{1}{10}$ (resultat = 5)
- $P(X = -2) = \frac{1}{10}$ (résultat = 1) 
- $P(X = 1) = \frac{1}{10} + \frac{1}{10} + \frac{1}{2} = \frac{7}{10}$ (résultat = 2 ou 4 ou 6)

Ainsi, 
$$E(X) = -\frac{3}{10}-\frac{2}{10}+\frac{7}{10} = \frac{1}{5}$$

#### Remarque
$$\begin{array}{rl}
E(X) &= \frac{1}{10} \times (-3) + \frac{1}{10} \times (-2) + \frac{1}{10} \times 0  \\
&+ \space \frac{1}{10} \times 1 + \frac{1}{10} \times 1 + \frac{1}{2} \times 1 \\
&= \frac{1}{5}
\end{array}$$

#### Propriété
$$E(X) = \sum_{\omega \in \Omega} P(\{ \omega \})X(\omega)$$

Démonstration : 
On a : $\Omega = \bigsqcup_{x \in X(\Omega)}(X = x)$
Donc, 
$$\sum_{\omega \in \Omega}P(\{ \omega \})X(\omega)=\sum_{x \in X(\Omega)}\sum_{\omega \in (X = x)}P(\{ \omega \})X(\omega)$$
$$= \sum_{x \in X(\Omega)}\left( \sum_{\omega \in (X = x)} P(\omega)  \right)x = \sum_{x \in X(\Omega)} P(X = x)x$$

#### Définition
Une VAR $X$ est centrée ssi $E(X) = 0$

#### Proposition
Si $X$ est une VAR alors $X - \mathbf{E}(X)$ est centrée

Démonstration : 
Soit direct, soit en utilisant ce qui suit (linéarité).

#### Remarque
Un jeu est équitable ssi sa variable de gain est centrée

#### Proposition
1. Linéarité
   Soient $X, Y \in \mathbb{R}^{\Omega}$ et $\lambda, \mu \in \mathbb{R}$, 
   Alors, 
   $$E(\lambda X + \mu Y) = \lambda E(X) + \mu E(Y)$$
   Ainsi,
   $$E \in \mathcal{L}(\mathbb{R}^{\Omega}, \mathbb{R})$$

2. Positivité
   Soit $x \in \mathbb{R}^{\Omega}$ tq $X(\Omega) \subset \mathbb{R}_{+}$ (ie $X \geq 0$)
   Alors, $E(X) \geq 0$

3. Croissance
   Soient $X, Y \in \mathbb{R}^{\Omega}$ Alors, 
   $$X \leq Y \Rightarrow E(X) \leq E(Y)$$


Démonstration : 
En utilisant la formule : 
$$E(X) = \sum_{\omega \in \Omega} P(\{ \omega \})X(\omega)$$
ez

#### Propriété
1. Constante : $\forall \lambda \in \mathbb{R}, E(\lambda) = \lambda$
2. Indicatrice / Bernoulli :
   Si $A \subset \Omega$, $E(\mathbb{1}_{A}) = P(A)$
   Si $X \sim \mathcal{B}(p)$, $E(X) = p$
3. Binomiale : Si $X \sim(n, p)$, $E(X) = np$


Démonstration : 
\1. et 2. triviaux
Montrons la 3 de 3 manières différentes et TOUTES à connaitre :
##### Méthode $1$ : Calcul direct
Soit $n \in \mathbb{N}^{*}$, $p \in [0,1]$
Supposons que $X \sim \mathcal{B}(n, p)$
$$E(X) = \sum_{k = 0}^{n}\binom{n}{k}p^{k}q^{n-k}k = \sum_{k = 1}^{n} \frac{n!}{(k-1)!(n-p)!} p ^{k}q^{n-k}$$
$$=n \sum_{k = 1}^{n} \frac{(n-1)!}{(k-1)!((n-1)-(k-1))!}p^{k}q^{n-k}$$
$$= n \sum_{k = 1}^{n}\binom{n-1}{k-1}p^{k}q^{n-k} = np \sum_{j = 0}^{n-1}\binom{n-1}{j}p^{j}q^{n-j+1}$$
Ainsi, 
$$E(X) = np \sum_{j = 0}^{n-1}\binom{n-1}{j}p^{j}q^{(n-1)-j} = np(p+q)^{n-1} = np$$



##### Méthode 2 : 
On définit : $f : x \mapsto (x+q)^{n} = \sum_{k  =0}^{n} \binom{n}{k}x^{k}q^{n-k}$ qui est dérivable sur $\mathbb{R}$

En dérivant chaque expression on obtient, pour tout $x \in \mathbb{R}$
$$n(x+q)^{n-1} = \sum_{k = 0}^{n} \binom{n}{k}x^{k-1}q^{n-k}k$$

En l'appliquant en $p$ et en multipliant par $p$ : 
$$np = \sum_{k = 0}^{n} \binom{n}{k}p^{k}q^{n-k}k = E(X)$$


##### Méthode 3 :
Soient $(Y_{i})_{i = 1}^{n}$ i.i.d. de loi $\mathcal{B}(p)$
$$\mathcal{Z} = \sum_{i = 1}^{n}Y_{i}$$
Alors, d'une part par la linéarité de l’espérance, 
$$E(\mathcal{Z}) = \sum_{i = 1}^{n}E(Y_{i}) = np$$
car $E(Y_{i}) = p$
et d'autre part, un résultat précédent assure que $\mathcal{Z} \sim \mathcal{B}(n, p)$ et comme l'espérance ne dépend que de sa loi :
$$E(X) = E(\mathcal{Z}) = np$$

#### Remarque
En posant $X \sim \mathcal{B}\left( n, \frac{1}{2} \right)$
$$\sum_{k = 0}^{n}\binom{n}{k}k = 2^{n} \sum_{k = 0}^{n}\binom{n}{k}\left( \frac{1}{2} \right)^{k}\left( \frac{1}{2} \right)^{n-k}k = 2^{n}E(X) = 2^{n}\times \frac{n}{2}$$

#### Exercice
Montrer que,
Pour $a, b \in \mathbb{Z}$, tq $a \leq b$ et $X \sim \mathcal{U}([\![a, b]\!])$
On a :
$$E(X) = \frac{a+b}{2}$$


#### Théorème : Formule de transfert
Pour $X \in E^{\Omega}$ et $f \in \mathbb{R}^{X(\Omega)}$
On a : 
$$E(f(X)) = \sum_{x \in X(\Omega)}P(X = x)f(x)$$

Démonstration : 
On a : $\Omega = \bigsqcup_{x \in X(\Omega)}(X = x)$
Donc, 
$$E(f(X)) = \sum_{\omega \in \Omega}P(\{ \omega \})f(X(\omega))$$
$$= \sum_{x \in X(\Omega)}\sum_{\omega \in (X = x)}P(\{ \omega \})f(X(\omega))$$
$$= \sum_{x \in X(\Omega)}\left( \sum_{\omega \in (X = x)} P(\{ \omega \}) \right)f(x)$$
$$= \sum_{x \in X(\Omega)}P(X = x)f(x)$$


#### Remarque
$E(f(X))$ ne dépend que de la loi de $X$ et de $f$
Aussi, on a :
Si $F \supset X(\Omega)$ et $f : F \to \mathbb{R}$, 
$$E(f(X)) = \sum_{x \in X(\Omega)}P(X = x)f(x)$$

#### Exercice
Si $X \sim \mathcal{B}(p)$, calculer $E(X^{2})$ en remarquant par exemple que la formule de transfert est inutile : 
$(X^{2} = X)$

#### Exercice
Utiliser la F.T. pour calculer $E(X^{2})$ lorsque $X \sim \mathcal{B}(n, p)$
(voir les démonstrations précédentes pour le calcul de $E(X)$)


#### Théorème
Si $X$ et $Y$ sont deux VAR indépendantes alors
$$E(XY) = E(X)E(Y)$$

Démonstration : 
Soient $X,Y \in \mathbb{R}^{\Omega}$
En appliquant la formule de transfert à la VA : $\mathcal{Z} = (X, Y)$ et la fonction :
$$f : \begin{cases}
\mathbb{R}^{2} \to \mathbb{R} \\
(x, y) \mapsto xy
\end{cases}$$

On a  : 
$$
E(f(\mathcal{Z})) = \sum_{z \in \mathbb{R}^{2}}P(\mathcal{Z} = z)f(z)$$
$$= \sum_{(x, y) \in \mathbb{R}^{2}}P(X = x, Y = y)xy$$
$$= \sum_{x \in \mathbb{R}}\sum_{y \in \mathbb{R}}P(X = x)P(Y = y)xy$$
car $X$ et $Y$ sont indépendants
$$= \left( \sum_{x \in \mathbb{R}}P(X = x)x \right)\left( \sum_{y \in \mathbb{R}}P(Y = y)y \right)$$
Ainsi : 
$$E(XY) = E(X)E(Y)$$

#### Remarque
Souvent on combine ce résultat avec le lemme des coalitions (cas simple) : 
Si $X \in E^{\Omega}$, $Y \in F^{\Omega}$, $f \in E'^{E}$, $g \in F'^{F}$ et $X$ et $Y$ sont indépendantes alors, 
$$E(f(X)g(Y)) = E(f(X))E(g(Y))$$

#### Remarque
Si $A, B \subset \Omega$, 
$$E(\mathbb{1}_{A}\mathbb{1}_{B}) = E(\mathbb{1}_{A \cap B}) = P(A \cap B)$$
Si $A$ et $B$ sont indépendants :
$$E(\mathbb{1}_{A})E(\mathbb{1}_{B}) = P(A)P(B)$$
Si $\mathbb{1}_{A}$ et $\mathbb{1}_{B}$ sont indépendants, alors $(\mathbb{1}_{A} = 1)$ et $(\mathbb{1}_{B} = 1)$
ie $A$ et $B$ sont indépendants

##### Question :
Si $A$ et $B$ sont indépendants, est-ce que $\mathbb{1}_{A}$ et $\mathbb{1}_{B}$ le sont. 
$$\begin{array}{|c|c|} \hline
_{\mathbb{1}_{A}}\setminus^{\mathbb{1}_{B}}&0&1&P_{\mathbb{1}_{A}} \\ \hline
0&(1-P(A))(1-P(B))&P(B)(1 - P(A))&1-P(A) \\ \hline
1&P(A)(1-P(B))&P(A)P(B)&P(A) \\ \hline
P_{\mathbb{1}_{B}}&1-P(B)&P(B)&1  \\ \hline
\end{array}$$

##### Conclusions : Cas particuliers du Théorème
1. Pour $A, B \subset \Omega$,
   $\mathbb{1}_{A}$ est indépendant de $\mathbb{1}_{B}$ $\Leftrightarrow$ $A$ est indépendant de $B$
2. Pour $A, B \subset \Omega$, 
   $\mathbb{1}_{A}$ indép $\mathbb{1}_{B}$ $\Leftrightarrow$ $E(\mathbb{1}_{A}\mathbb{1}_{B}) = E(\mathbb{1}_{A})E(\mathbb{1}_{B})$

#### Exemple
Dans l'expérience précédentes on avait 3 cas
##### On considère $T_{1}$ : 
$$T_{1} : \begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& \frac{1}{9}& \frac{1}{9} & \frac{1}{9} &\frac{1}{3} \\ \hline
1& \frac{1}{9}& \frac{1}{9}& \frac{1}{9} &\frac{1}{3} \\ \hline
2& \frac{1}{9}& \frac{1}{9} & \frac{1}{9} & \frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$

Alors en ne comptant que grâce aux lois marginales : 
$$E(X) = 1 \text{ et } E(Y) = 2$$
Et pour $XY$ : 
$XY$ vaut : 
$$\begin{array}{c} \\
0 \\
1 \\
2
\end{array} \space\space\begin{array}{c}
\begin{array}{c}
1&2&3
\end{array} \\
\begin{array}{|c|c|} \hline
0&0&0 \\ \hline
1&2&3 \\ \hline
2&4&6 \\ \hline
\end{array}\end{array}$$
$$E(XY) = \frac{1}{9}(0+0+0+1+2+3+2+4+6) = 2 = E(X)E(Y)$$
Par la seconde formule de l'espérance

##### On considère $T_{2}$ :
$$T_{2} : \begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& \frac{1}{3}&0&0& \frac{1}{3} \\ \hline
1& 0& \frac{1}{3}& 0 &\frac{1}{3} \\ \hline
2& 0& 0 & \frac{1}{3} & \frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$
Ici : 
$$E(XY) = \frac{1}{3}(0+2+6) = \frac{8}{3}\neq 2 = E(X)E(Y) $$
$X$ et $Y$ ne sont donc pas indépendants. 

##### On considère $T_{3}$ :
$$T_{3} :\begin{array}{c | c}
_{X}\setminus^{Y}&1&2&3&P_{X} \\ \hline
0& \frac{1}{9} & \frac{2}{9} &0 &\frac{1}{3} \\ \hline
1& 0& \frac{1}{9}& \frac{2}{9} &\frac{1}{3} \\ \hline
2& \frac{2}{9} &0&  \frac{1}{9} &\frac{1}{3} \\ \hline
P_{Y} & \frac{1}{3}& \frac{1}{3} & \frac{1}{3} &1
\end{array}$$
$$\begin{array}{rl}
E(XY) &= \frac{1}{9}\times 0 + \frac{2}{9} \times 0 + 0 \times 0 \\
&+ 0 \times 1 + \frac{1}{9} \times 1 + \frac{2}{9} \times 1 \\
&+ \frac{2}{9} \times 2 + 0 \times 2 + \frac{1}{9} \times 2 \\
&= \frac{1}{9}(2+6+4+6) \\
&= 2
\end{array}$$

Ici on a : 
$$E(XY) = E(X)E(Y)$$
Mais $X$ et $Y$ non indépendantes (la réciproque du théorème est fausse)

# VI. Variance, écart type, covariance
## 1. Variance et écart-type
### Introduction
L'espérance permet de "localiser" la VA
#### Cas continu
Excal 3.
La variance mesure la dispersion (ou écart type)
Excal 4.

#### Définition
Soit $X$ une VAR, 
La <u>variance</u> de $X$ est : 
$$V(X) = E((X-E(X))^{2})$$
L'<u>écart type</u> de $X$ est : 
$$\sigma(X) = \sqrt{ V(X) }$$

#### Remarque
$V(X)$ et $\sigma(x)$ ne dépendent que de la loi de $X$
(en utilisant la formule de transfert)

#### Exercice
Soit $X$ la VA résultat d'un lancé de dé non pipé : 
$X_{1}$ et $X_{2}$ indépendantes de même loi que $X$
$Y = \frac{1}{2}(X_{1}+X_{2})$
$$E(Y) = E\left( \frac{1}{2}(X_{1} + X_{2}) \right) = \frac{1}{2}(E(X_{1}) + E(X_{2})) = E(X)$$
car l'espérance ne dépend que de la loi. 

##### Question : $Y$ est elle plus ou moins dispersée que $X$ ?
On pose : $m = E(X) = \frac{7}{2}$, 
$$\begin{array}{rl}
V(Y) &= E((Y - E(Y))^{2}) \\
&= E\left( \left( \frac{1}{2}(X_{1}+X_{2})-m \right)^{2} \right) \\
&= E\left(  \frac{1}{4}(X_{1}+X_{2})^{2}-m(X_{1}+X_{2})+ m^{2} \right) \\
&= E\left( \frac{X_{1}^{2}}{4} + \frac{X_{2}^{2}}{4}+ \frac{X_{1}X_{2}}{2}-mX_{1}-mX_{2}+m^{2} \right) \\
&= \frac{1}{4}(E(X_{1}^{2}) + E(X_{2}^{2})) + \frac{1}{2}E(X_{1})E(X_{2}) \\
&- m(E(X_{1}) +E(X_{2}))+m^{2} \\
&= \frac{1}{2}(E(X^{2})+E(X_{1})E(X_{2})-4m^{2}+2m^{2}) \\
&= \frac{1}{2}E(X^{2}-m^{2}) \\
&= \frac{1}{2}V(X)
\end{array}$$
Donc, $Y$ est moins dispersée que $X$
$$E(X^{2}) = \sum_{x} P(X= x)x^{2} = \frac{1}{6}\left( \frac{6(6+1)(2\times 6 + 1)}{6} \right) = \frac{91}{6}$$
et $m^{2} = \left( \frac{7}{2} \right)^{2} = \frac{49}{4}$

On calcule $V(X)$ pour avoir $V(Y)$
$$\begin{array}{rl}
V(X) &= E((X-m)^{2}) \\
&= E(X^{2}-2mX+m^{2}) \\
&= E(X^{2}) - 2mE(X) + m^{2} \\
&= E(X^{2})-m^{2} \\
&= \frac{91}{6}-m^{2} \\
&= \frac{91}{6}- \frac{49}{4} \\
&= \frac{35}{12}
\end{array}$$

#### Définition
Une VAR $X$ est réduite ssi $\sigma(X_{0} = 1) (\Leftrightarrow V(X) = 1)$
Elle est dite centrée réduite ssi
$$\begin{cases}
E(X) = 0 \\
\sigma(X) = 1
\end{cases}$$

#### Propriété
$$V(X) = E(X^{2}) - (E(X))^{2}$$

Démonstration : 
$$\begin{array}{rl}
V(X) &= E((X-E(X))^{2}) \\
&= 
\end{array}$$

#### Exercice
Soit $X \sim \mathcal{B}(p)$
Alors,
$$V(X) = E(X^{2})-(E(X))^{2} = p- p^{2} = p(1-p) = pq$$

#### Proposition
Soit $X$ une VAR et $a, b \in \mathbb{R}$, 
Alors,
$$V(aX+b) = a^{2}V(X)$$

Démonstration : (en exo)
$$\begin{array}{rl}
V(aX + b) &=  \\
&= 
\end{array}$$

#### Remarque
En particulier $V(-X)=V(X)$

#### Corollaire
1. $$\forall X \in \mathbb{R}^{\Omega}, V(X-E(X)) = V(X)$$
2. Si $\forall X \in \mathbb{R}^{\Omega}, V(X) > 0 \Rightarrow \frac{X-E(X)}{\sigma(X)}$ 

Démonstration : $\oplus$

#### Exercice
Centrer réduire une binomiale par un calcul direct (pénible mais intuitif).
On voit une méthode rapide plus loin.

## 2. Covariance
#### Remarque
La variance d'une somme n'est pas en général la somme des variances. 

Mais cela est vrai sous une hypothèse de décorrélation qui utilise en particulier la notion suivante de covariance.

#### Définition
Soient $X, Y$ deux VAR (sur le même univers)
La covariance de $X$ et $Y$ est : 
$$\mathrm{Cov}(X, Y) = E((X-E(X))(Y-E(Y)))$$

#### Définition
On dit que $X$ et $Y$ sont décorrélés ssi $\mathrm{Cov}(X, Y) = 0$

#### Remarque
$$\mathrm{Cov}(X, X) = V(X)$$

#### Remarque
$$\mathrm{Cov}(X-E(X), Y - E(Y)) = \mathrm{Cov}(X, Y)$$

#### Propriété
$$\mathrm{Cov}(X, Y) = E(X, Y)-E(X)E(Y)$$

Démonstration : 
$$\begin{array}{rl}
\mathrm{Cov}(X, Y) &= E((X-E(X))(Y-E(Y))) \\
&= E(XY-XE(Y) - E(X)Y+E(X)E(Y)) \\
&= E(XY) - E(Y)E(Y)-E(X)E(Y)+E(X)E(Y) \\
&= E(XY)-E(X)E(Y)
\end{array}$$

#### Remarque
Elle étend la formule déjà vue pour la variance

#### Corollaire
Deux VAR indépendantes sont décorrélées.

#### Remarque
La réciproque est fausse

#### Propriété
Soient $X_{1}, \dots, X_{n}$ des VAR
$$V\left( \sum_{ i = 1}^{n}X_{i} \right) = \sum_{i = 1}^{n}V(X_{i}) + 2 \sum_{1\leq i < j \leq n}\mathrm{Cov}(X_{i}, Y_{j})$$

En particulier : 
$$V(X + Y) = V(X)+V(Y) + 2\mathrm{Cov}(X, Y)$$

Démonstration : 
On a vu que centrer les $(X_{i})_{i = 1}^{n}$ ne change ni les variances, ni les covariances donc on peut supposer sans perte de généralité que les $(X_{i})_{i = 1}^{n}$ sont centrés. 
La somme et alors aussi centrée (par linéarité).
Ainsi : 
$$\begin{array}{rl}
V\left( \overset{n}{\underset{i = 1}{\sum}}X_{i} \right) &= E\left( \left( \overset{n}{\underset{i = 1}{\sum}} X_{i} \right)^{2} \right) \\
&= \overset{n}{\underset{i = 1}{\sum}} E(X_{i}^{2})+2 \underset{1\leq i < j \leq n}{\sum}E(X_{i}, X_{j}) \\
&= \overset{n}{\underset{i = 1}{\sum}} V(X_{i}) + 2 {\underset{1 \leq i < j \leq n}{\sum}} \mathrm{Cov}(X_{i}, X_{j})
\end{array}$$

#### Corollaire
La variance d'une somme de VAR deux a deux décorrélées est la somme de leur variance. 

En particulier : 
C'est le cas si les VAR sont deux a deux indéendantes

#### Propriété
Soit $X \sim \mathcal{B}(n, p)$
Alors, $V(X) = npq$

Démonstration : 
Soit $Y$ la somme de $n$ VA mutuellement indépendantes $(Y_{i})_{i = 1}^{n}$ de même loi $\mathcal{B}(p)$
On sait que $Y \sim \mathcal{B}(n, p)$
Donc, $V(X) = V(Y)$ car $X \sim Y$
Or, 
$$V(Y) = \sum_{i = 1}^{n} V(Y_{i})$$
car les $(Y_{i})_{i  =1 }^{n}$ sont deux a deux décorrélés (puisque mutuellement donc deux a deux indépendants)
par le résultat sur connu sur les VA de Bernoulli, 
$$V(X) = npq$$


#### Remarque
Pour $n=1$ on retrouve la variance d'une VA de Bernoulli

#### Exercice
Si $X \sim \mathcal{B}(n,p)$, calculer $E(X^{2})$
On a : 
$$E(X^{2}) = V(X) + E(X)^{2} = npq + (np)^{2} = np(q + np)$$

#### Exercice
Encore plus feinteux : 
Pou un ennoncé du type : 
$$\text{Calculer } \sum_{k = 0}^{n}k^{2} \binom{n}{k}$$
Dire $S = E(X^{2})$ où $X \sim \mathcal{B}\left( n, \frac{1}{2} \right)$
$$S = 2^{n} E(X^{2}) = 2^{n}(V(X) + E(X)^{2}) = 2 ^{n} \left( \frac{n}{4} + \left( \frac{n}{2} \right)^{2} \right)$$
$$= n(n-1)2^{n-2}$$
Autrement on aurait dit pour $n\geq 2$ : 
$$\sum_{k = 0}^{n} k^{2} \binom{n}{k} = \sum_{k = 0}^{n}k(k-1) \binom{n}{k} + \sum_{k = 0}^{n}k \binom{n}{k}$$
$$= n(n-1)\sum_{k = 2}^{n} \frac{(n-2)!}{(k-2)!((n-2)-(k-2))!}$$
$$+ n \sum_{k = 1}^{n} \frac{(n-1)!}{(k-1)!((n-1)-(k-1))!}$$
$$= n(n-1)2^{n-2}+n2^{n-1}=n2^{n-2}(n-1+2) = n(n+1)2^{n-2}$$
Et on vérifie la formule pour $n \in \{ 0, 1 \}$

# VII. Inégalités
## Inégalité de Markov
#### Propriété
Soit $X$ une VAR tq $X(\Omega) \subset \mathbb{R}_{+}$, 
Alors, 
$$\forall c > 0, P(X \geq c)\leq \frac{E(X)}{c}$$

Démonstration : 
Soit $c > 0$, 
On a : 
$$E(X) = \sum_{x \in \mathbb{R}_{+}}P(X = x)x$$
$$= \sum_{x \in [0, c[}P(X = x)x+\sum_{x \geq c} P(X = x)x\geq 0 + c \sum_{x \geq c}P(X = x)$$
Ainsi, 
$$E(X) \geq cP(X \geq c)$$

#### Remarque
Elle sert à démontrer l'inégalité de Bienaymé-Tchebychev

#### Remarque
Une autre formulation de Markov est : 
Soit $X : \Omega \to E$ et $f : E \to \mathbb{R}_{+}$
Alors,
$$\forall c > 0, P(f(X) \geq c) \leq \frac{E(f(X))}{c}$$

#### Remarque
Comme on ne fait aucune hypothèse sur la loi de $X$, l'inéquation de Markov est un oubli universel donc pu précis.
Dès qu'on a des informations sur la loi, on en déduis en général des inégalités plus fines. 

#### Exemple
On tire 100 fois à pile ou face avec une pièce qui a une probabilité de $\frac{2}{3}$ de tomber sur