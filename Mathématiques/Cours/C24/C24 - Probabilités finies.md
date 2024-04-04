### Problème 1
$$\mathcal{P}(\text{"Deux eleves de cette classe soit nées le même jour de l'année"})$$
$$ 1 - \frac{365!}{365^{42}(365-42)!} \approx -0.085 969+1 = 0.914 031$$

Les hypothèses sont : 
- Une année a 365 jours
- Le jour de naissance de chaque élève est tiré avec équiprobabilité
- Les jours de naissance des élèves (différents) sont "indépendants"

(Partie de modélisation $\uparrow$)

Sous ces hypothèses les 42-uplets de jours de naissance de la classe (ordre alphabétique) sont équiprobables. 

Ainsi, $\Omega = [\![1, 365]\!]^{42}$ est muni d'une probabilité uniforme et en conséquence Pour $A \subset \Omega$, 
$$\mathcal{P}(A) = \frac{|A|}{|\Omega|}$$
En posant l’événement (énoncé d'évenement): 
$$A : \text{"Les jours des naissances sont 2 a 2 } \neq \text{"}$$
on a : $A = \mathcal{A}_{42}([\![1, 365]\!])$
Donc, $|A| = \frac{365!}{(365-42)!}$
Donc, 
$$\mathcal{P}(A) =  \frac{365!}{365^{42}(365-42)!} \approx0.085 \space 969$$

### Problème 2
#### Cas 1
J'ai deux enfants et mon ainé, Arthur joue au tennis. 
#### Cas 2
J'ai deux enfants dont l'un, Arthur, Joue au tennis

#### Question 
$$\mathcal{P}(\text{"L'autre enfant est une fille"})$$

- Les sexes des enfants sont indépendants
- Le sexe est équiprobable

On modélise la probablilité par : 
$\Omega = \{ F, G \}^{2}$
ou $\omega = (\omega_{1}, \omega_{2}) \in \Omega$
$$\begin{cases}
\text{le sexe de l'ainé par }\omega_{1} \\
\text{le sexe du cadet par } \omega_{2}
\end{cases}$$
On a équiprobabilité sur $\Omega$
(Par les deux hypothèses)
ie 
$$\forall \omega \in \Omega, \mathcal{P}(\{ \omega \}) = \frac{1}{|\Omega|} = \frac{1}{4}$$

On définit les événements : 
$$\begin{array}{l}
A_{1} : \text{"L'ainé est un garçon"} \\
A_{2} : \text{"Il y a au moins un garçon"} \\
B : \text{"Il y a au moins une fille"}
\end{array}$$
A calculer : $P(B | A_{1})$ ($= P_{A_{1}}(B)$) et $P(B | A_{2})$
On a : 
$$P(B | A_{1}) = \frac{P(A_{1} \cap B)}{P(A_{1})}$$
qui existe car $P(A_{1}) \neq 0$
En effet : 
$$A_{1} = \{ (G, F), (G, G) \}$$
Donc, 
$$P(A_{1}) = P(\{ (G, G) \}) + P(\{ (G, F) \})$$
L'additivité disjointe $\uparrow \downarrow$
$$\forall A, B \in \Omega \text{ disjoints}, P(A \sqcup B) = P(A) + P(B) = \frac{1}{4}+\frac{1}{4} = \frac{1}{2}$$
ou alors, $P(A_{1}) = \frac{|A_{1}|}{|\Omega|} = \frac{2}{4} = \frac{1}{2}$
et de même $B = \{ (F, F), (F, G), (G, F) \}$ 
Donc, $B \cap A_{1} = \{ (G, F) \}$ et $P(B \cap A_{1}) = \frac{1}{4}$
Donc, 
$$P(B | A_{1}) = \frac{\frac{1}{4}}{\frac{1}{2}} = \frac{1}{2}$$


Cas 2 : 
De même, 
$A_{2} = \{ (F, G), (G, F), (G, G) \}$ et $B \cap A_{2} = \{ (F, G), (G, F) \}$
Donc,
$$P(B | A_{2}) = \frac{P(B \cap A_{2})}{P(A_{2})}= \frac{\frac{1}{2}}{\frac{3}{4}} = \frac{2}{3}$$


### Problème 3
Poly

# I. Probabilité sur un univers fini
## 1. Experience aléatoire et univers
#### Définition
Une experience aléatoire est une experience reproductible mais dont le résultat est à priori imprévisible

#### Exemple
1. On lance un dé standard
2. On lance une pièce
3. On tire successivement $p$ boules avec remise dans une urne contenant des boules de 3 couleurs différentes (Rouge, Vert, Bleu) indiscernable au toucher
4. On lance une infinité de fois une pièce
5. On attends "un certain temps" à la cantine. (mesuré en secondes)

#### Définition
Le résultat d'une experience aléatoire est appelé réalisation ou issue

#### Exemple
1. 3
2. Face
3. $(B, B, V, R, R)$
4. $(Face, Pile, Pile, Pile, Pile, Face, Pile, Face, \dots)$
5. $1789,275\dots$

#### Définition
L'univers d'une experience aléatoire est l'ensemble des réalisations possibles, noté $\Omega$

#### Remarque
Parfois il y a plusieurs choix possibles pour $\Omega$ (dépend du format du résultat)
salamualikum 

#### Exemple
1. $\Omega = [\![1, 6]\!]$
2. $\Omega = \{ \text{Pile}, \text{Face} \}$
3. $\Omega = \{ R, V, B \}^{p}$ 
4. $\Omega = \{ \text{Pile}, \text{Face} \}^{\mathbb{N}}$
5. $\Omega = \mathbb{R}_{+} \setminus [0, 600]$

Lors d'une experience aléatoire on est en général intéressé non pas par le résultat brut mais par une ou plusieurs propriétés de ce résultat. 

#### Exemple
Simulation de $\text{Pile}$ ou $\text{Face}$ avec un dé. 
On peut s'intéresser à la parité su résultat du dé uniquement. 
Ce qui définit deux parties de $\Omega$ : 
$$B = \{2, 4, 6 \} \text{ et } A = \{ 1, 3, 5 \}$$
qui pourrait se décrire en Francais : 
$$A : \text{"Le résultat est impair"}$$
$$B : \text{"Le résultat est pair"}$$

On appliquera ces parties des événements 
Lorsque la partie est un singleton on parle d’événement "élémentaire"

#### Définition
Un événement $A$ est une partie de $\Omega$
$A \subset \Omega$ ie ($A \in \mathcal{P}(\Omega)$)

Un événement élémentaire est un singleton inclus dans $\Omega$ : $\{ \omega \}$, ou $\omega \in \Omega$
Lorsqu’on décrit l'événement en langage courant, (ou formel) on parle d'énoncé d'événements, noté entre guillemets ou parfois entre crochets. 


#### Exemple
1. $$C : \text{"Le résultat du lancet est au moins 4",} \text{ ie } C = \{ 4, 5, 6 \}$$
2. Si le joueur $X$ a choisi pile alors l'événement "$X$ gagne" est $\{ \text{Pile} \}$


#### Remarque
On construit souvent l'évenement à l'aide d'opérations ensemblistes. 
Cependant, par tradition le vocabulaire probabiliste diffère

#### Définition
- $\Omega$ est l'événement certain
- $\varnothing$ est l'événement impossible
- Pour $A \subset \Omega$ son complémentaire dans $\Omega$n $\Omega \setminus A$ est appelé l'événement contraire et noté aussi $\bar{A}$
- Pour $A, B \subset \Omega$, 
  $A \cap B$ est aussi noté : $\text{"A et B"}$
- Pour $A, B \subset \Omega$, 
  $A \cup B$ est aussi noté : $\text{"A ou B"}$
- Deux événements disjoints sont dits incompatibles ($\text{"A et B"}$ est impossible)

#### Exemple
Avec les notations de l'exemple du dé
.... Azi c trivial clc d'écrire

#### Définition
Soit $n \in \mathbb{N}$, 
Un système complet d'événements (S.C.E.) est une famille finie : $(A_{i})_{i = 1}^{n} \in \mathcal{P}(\Omega)^{n}$ d'éléments qui sont : 
1. Deux a deux incompatibles
   $$\forall i, j \in [\![1, n]\!], i \neq j \Rightarrow A_{i} \cap A_{j} = \varnothing$$
2. De réunion contraire : 
   $$\bigcup_{i = 1}^{n}A_{i} = \Omega$$

On résume souvent cela par la notation :
$$\bigsqcup_{i=0}^{n} A_{i} = \Omega$$

#### Exemple
Les événements élémentaires forment un système complet d'événements

#### Exemple
1. $(A, B)$ est un S.C.E.
   Plus généralement si $A \in \mathcal{P}(\Omega)$ $(A, \bar{A})$ est un SCE
   
   $(\{ 1 \}, \{ 2, 5 \}, \{ 3, 4, 6 \})$ est un SCE


#### Remarque pour l'an prochain
-> La condition de finitude d'un SCE ne sera plus imposé
-> Toutes les parties de $\Omega$ ne seront plus automatiquement des événements (notion de "tribu")


## 2. Espaces probabilisés fini
On "imagine" une experience aléatoire
Un "probabilité" un objet mathématique : 
Une application qui a tout évènement $A$, fait correspondre un nombre qui quantifie une certitude que l'évènement $A$ se produise de impossible (valeur $0$) à certain (valeur $1$)
$$P : A \mapsto p \in [0, 1]$$
On aimerait que si on répète un grand nombre de fois l'experience aléatoire, la fréquence des cas ou $A$ se produit soit "proche" de $P(A)$
(Ce phénomène (loi des grand nombres, ca particulier) pourra par la suite être prouvé)

Comme les fréquences correspondent à deux évènements incompatibles $A$ et $B$ s'ajoutent.
La fréquence d'obtenir $A$ ou $B$ est celle d'obtenir $A$ plus celle d'obtenir $B$. 
On veut que $P(A \sqcup B) = P(A) + P(B)$
(avec $n$ répétitions, $n_{A}$ le nombre d'obtention de $A$, $n_{B}$ le nombre d'obtention de $B$ et $n_{A \sqcup B}$ celui d'obtenir $A \sqcup B$, $n_{A \sqcup B} = n_{A} + n_{B}$ donc $\frac{n_{a \sqcup B}}{}$)
(avec $n$ répétitions, $n_{A}$ le nombre d'obtention de $A$, $n_{B}$ le nombre d'obtention de $B$ et $n_{A \sqcup B}$ celui d'obtenir $A \sqcup B$, $n_{A \sqcup B} = n_{A} + n_{B}$ donc
$\frac{n_{A \sqcup B}}{n} = \frac{n_{A}}{n} + \frac{n_{B}}{n} \Leftrightarrow P(A \sqcup B) = P(A) + P(B)$)

Alors on a : 

#### Définition
Une probabilité sur $\Omega$ est une application : $P : \mathcal{P}(\Omega) \to [0, 1]$ qui vérifie : 
- $P(\Omega) = 1$
- $\forall A, B \in \mathcal{P}(\Omega), A \cap B = \varnothing \Rightarrow P(A \sqcup B) = P(A) + P(B)$

#### Exemple
Jouons avec un dé qui a une "probabilité" $p$ de tomber sur Pile : 
On modélise cela par : 
-> L'univers $\Omega = \{ \text{Pile}, \text{Face} \}$
-> La probabilité : $$P : \varnothing \mapsto 0 , \{ \text{Pile} \} \mapsto p, \{ \text{Face} \}\mapsto 1-p, \Omega \mapsto 1$$

#### Exercice
Si on joue avec un dé équilibré quel univers et quelle proba prendra-t-on. 

#### Définition : Espace probabilisé fini
Si $\Omega$ est un ensemble fini et $P$ une partie de sur $\Omega$, 
le couple $(\Omega, P)$ est appelé un espace probabilisé fini

#### Propriété : Probabilité de l'évènement contraire
$$\forall A \in \mathcal{P}(\Omega), P(\bar{A}) = 1- P(A)$$

Démonstration : 
Soit $A \in \mathcal{P}(\Omega)$
On a $A \sqcup \bar{A} = \Omega$
Par additivité disjointe et proba de l'évènement certain : 
$$P(A) + P(\bar{A}) = 1$$
Donc, $P(\bar{A}) = 1 - P(A)$

#### Corollaire : Probabilité de l'évènement impossible
$$P(\varnothing) = 0$$

Démonstration : 
$\varnothing = \bar{\Omega}$, donc $P(\varnothing) = 1 - P(\Omega) = 1-1 = 0$

#### Proposition
Soient $A, B \in \mathcal{P}(\Omega)$, 
On a :
1. $P(A \setminus B) = P(A) - P(A \cap B)$
2. $P(A \cup B) = P(A) + P(B) - P(A \cup B)$
3. $A \subset B \Rightarrow P(A) \leq P(B)$

Démonstration : 
1. 
$$A = (A \setminus B) \sqcup A \cap B$$
Donc, 
$$P(A) = P(A \setminus B) + P(A \cap B)$$
Ainsi, 
$$P(A \setminus B) = P(A) - P(A \cap B)$$

2. 
$$A \cup B = (A \setminus B) \sqcup B$$
Ainsi, 
$$P(A \cup B) = P(A \setminus B) + P(B) = P(A) + P(B) - P(A \cap B)$$

3. 
Supposons que $A \subset B$, 
par 1., 
$$P(B \setminus A) = P(B) - P(A \cap B) = P(B) - P(A)$$
or, 
$$P(B \setminus A)\geq 0$$
Ainsi, 
$$P(A) \leq P(B)$$

#### Proposition : additivité disjointe finie "générale"
Si $A_{1}, \dots, A_{n}$ sont deux évènements deux a deux incomparables, alors, 
$$P\left(\bigsqcup_{i=1}^{n} A_{i}\right) = \sum_{i = 1}^{n} P(A_{i})$$

Démonstration : 
Par récurrence immédiate : 
$$\begin{array}{rl}
P(A_{1} \sqcup A_{2} \sqcup \dots \sqcup A_{n}) &= P(A_{1} \sqcup A_{2} \sqcup \dots \sqcup A_{n-1}) + P(A_{n}) \\ 
&= P(A_{1}) + P(A_{2}) + \dots + P(A_{n-1}) + P(A_{n})
\end{array}$$

#### Corollaire
Si $(A_{i})_{i = 1}^{n}$ est un SCE et $A \in \mathcal{P}(\Omega)$
Alors, 
$$P(A) = \sum_{i = 1}^{n} P(A \cap A_{i})$$

Démonstration : 
On applique l'additivité disjointe finie à l'égalité :
$$A = \bigsqcup_{i = 1}^{n}(A \cap A_{i})$$

Comme $\Omega$ est fini, on a vu que les singletons forment un SCE alors : 
#### Corollaire
La probabilité $P$ est uniquement déterminé par la famille des images des évènements élémentaires $(P(\{ \omega \}))_{\omega \in \Omega}$
Plus précisément,
$$\forall A \in \mathcal{P}(\Omega), P(A) = \sum_{\omega \in A} P(\{ \omega \})$$

Démonstration : $\square$

#### Remarque
Il suffit même d'avoir les probabilités des évènements élémentaires saut un$!$ 

#### Exemple
$P(\{ \text{Pile} \})= p$ et $P(\{ \text{Face} \}) = 1-p$

#### Propriété
Soit $\Omega$ fini et $(p_{\omega})_{\omega \in \Omega} \in \mathbb{R}^{\Omega}$
(TFAE en EN) <-> Les deux assertions suivantes sont équivalentes <-> (LASSE en FR)

1. Il existe $P$ proba sur $\Omega$ tels que 
   $$\forall \omega \in \Omega, P(\{ \omega \}) = p_{\omega}$$
2.  $$(\forall \omega \in \Omega, p_{\omega} \geq 0) \text{ et } \sum_{\omega \in \Omega}p_{\omega} = 1$$

Démonstration : 
\1. $\Rightarrow$ 2. : trivial
\2. $\Rightarrow$ 1. :
Supp 2.

Alors pour $A \in \mathcal{P}(\Omega)$ on pose : 
$$P(A) = \sum_{\omega \in A}p_{\omega}$$
et on vérifie : 
- $\forall A \in \mathcal{P}(\Omega), P(A) \in [0, 1]$, 
- $P(\Omega) = 1$
- Si $A, B\in \mathcal{P}(\Omega)$ vérifient $A \cap B = \varnothing$, alors $P(A \sqcup B) = P(A) + P(B)$


#### Définition
Une <u><i>distribution de probabilité</i></u> sur un ensemble quelconque $E$ est une famille $(p_{x})_{x \in E} \in\mathbb{R}_{+}^{(E)}$ presque nulle de somme $1$

Avec cette définition générale, le 2. de la propriété précédente se reformule ainsi : 
"$(p_{\omega})_{\omega \in \Omega}$ est une distribution de probas sur $\Omega$"

#### Avant - Première en SPÉ
- $\Omega$ peut être infini
- L'ensemble des évènements ne sera en général pas $\mathcal{P}(\Omega)$ mais une tribu $\mathcal{T} \subset \mathcal{P}(\Omega)$ 
- Les parties seront définies sur $\mathcal{T}$ 
- Le deuxième axiome des proba sera l'additivité disjointe dénombrable : 
  $$P(\bigsqcup_{n \in \mathbb{N}}A_{n})= \sum_{n \in \mathbb{N}}P(A_{n})$$
- En "école" pour $\Omega$ non dénombrable, $P$ n'est plus déterminée par les probas des évènements élémentaires

## 3. Équiprobabilité
#### Définition
Si $\Omega = \{ \omega_{1}, \dots, \omega_{N} \}$, la <u>probabilité uniforme</u> sur $\Omega$ est définie en posant : 
$$\forall i \in [\![1, N]\!], P(\{ \omega_{i} \}) = \frac{1}{N}$$
On parle aussi <u>d'équiprobabilité</u>

#### Remarque
Il est très important de savoir repérer l'hypothèse en langage courant, voir l'absence d'hypothèse qui mène a modéliser le problème par une probabilité uniforme

#### Exemples
- Un dé non pipé
- Une pièce non truquée
- Une pièce équilibrée
- Des boules indiscernables au toucher
- On tire au hasard un nombre entre $1$ et $100$

etc...

Dans ce cadre d'équiprobabilité tout repose sur la fameuse (miam) formule suivante : 

#### Proposition
Si $P$ est une probabilité uniforme sur $\Omega$, 
$$\forall A \in \mathcal{P}(\Omega), P(A) = \frac{|A|}{|\Omega|}$$
$|A|$ <- Nombre de cas favorables
$|\Omega|$ <- Nombre de cas possibles

Démonstration : 
Soit $A \subset \Omega$, 
On a : 
$$\begin{array}{rl}
P(A) &= \sum_{\omega \in A} P(\{ \omega \}) \\
&= \sum_{\omega \in A} \frac{1}{N} \\
&= \frac{|A|}{N} \\
&= \frac{|A|}{|\Omega|}
\end{array}$$

#### Morale


En notant $\mathcal{C}$ l'ensemble des cartes d'un jeu de $32$ cartes, on pose : $\Omega = \mathcal{P}_{5}(\mathcal{C})$

Soit $\mathcal{P}\text{aire}$ l'ensemble des mains (éléments de $\Omega$) qui forment une paire (2 hauteurs semblables et les 3 autres de 3 hauteurs différentes)

On dénombre $\mathcal{P}\text{aire}$ pour pouvoir calculer la proba d'obtenir une paire : $\frac{|\mathcal{P}\text{aire}|}{|\Omega|}$

Choisir une paire c'est choisir :
- On choisit la hauteur de la paire ($8$ possibilités)
- Les couleurs de la paire avec ($\binom{4}{2}$ possibilités)
- Les hauteurs des autres cartes ($\binom{7}{3}$ possibilités)
- La couleur de la plus haute de ces $3$ cartes ($4$ possibilités)
- La couleur de la plus haute de ces $2$ cartes ($4$ possibilités)
- La couleur de la plus base de ces cartes ($4$ possibilités)


Donc il y a :
$$8 \times \binom{4}{2} \times \binom{7}{3} \times 4^{3} $$
paires

et la probabilité cherchée est : 
$$P(\mathcal{P}\text{aire}) = \frac{\binom{8}{1}\binom{7}{3}\binom{4}{2}\binom{4}{1}^{3}}{\binom{32}{5}}$$
$$\frac{8\times 7 \times 6 \times 5 \times 4 \times 3 \times 4^{3} \times 5 \times 4 \times 3 \times 2}{3 \times 2 \times 2 \times 32 \times 31 \times 30 \times 29 \times 28}= \frac{480}{899}$$
