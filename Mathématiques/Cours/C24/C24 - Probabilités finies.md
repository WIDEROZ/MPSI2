### Problème 1
$$\mathcal{P}(\text{"Deux eleves de cette classe soit nées le même jour de l'année"})$$
$$ 1 - \frac{365!}{365^{42}(365-42)!} \approx -0.085 969+1 = 0.914 031$$
$$

$$
Les hypothèses sont : 
- Une année a 365 jours
- Le jour de naissance de chaque élève est tiré avec équiprobabilité
- Les jours de naissance des élèves (différents) sont "indépendants"

(Partie de modélisation $\uparrow$)

Sous ces hypothèses les 42-uplets de jours de naissance de la classe (ordre alphabétique) sont équiprobables. 

Ainsi, $\Omega = [\![1, 365]\!]^{42}$ est muni d'une probabilité uniforme et en conséquence Pour $A \subset \Omega$, 
$$\mathcal{P}(A) = \frac{|A|}{|\Omega|}$$
En posant l’événement (énoncé d'évènement): 
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
On construit souvent l'évènement à l'aide d'opérations ensemblistes. 
Cependant, par tradition le vocabulaire probabiliste diffère

#### Définition
- $\Omega$ est l'événement certain
- $\varnothing$ est l'événement impossible
- Pour $A \subset \Omega$ son complémentaire dans $\Omega \setminus A$ est appelé l'événement contraire et noté aussi $\bar{A}$
- Pour $A, B \subset \Omega$, 
  $A \cap B$ est aussi noté : $\text{"A et B"}$
- Pour $A, B \subset \Omega$, .
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
2. De réunion certaine : 
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
(avec $n$ répétitions, $n_{A}$ le nombre d'obtention de $A$, $n_{B}$ le nombre d'obtention de $B$ et $n_{A \sqcup B}$ celui d'obtenir $A \sqcup B$, $n_{A \sqcup B} = n_{A} + n_{B}$ donc $\frac{n_{A \sqcup B}}{n} = \frac{n_{A}}{n} + \frac{n_{B}}{n}$)
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
Si $\Omega$ est un ensemble fini et $P$ une probabilité sur $\Omega$, 
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
2. $P(A \cup B) = P(A) + P(B) - P(A \cap B)$
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
Il suffit même d'avoir les probabilités des évènements élémentaires sauf un$!$ 

#### Exemple
$P(\{ \text{Pile} \})= p$ et $P(\{ \text{Face} \}) = 1-p$

#### Propriété
Soit $\Omega$ fini et $(p_{\omega})_{\omega \in \Omega} \in \mathbb{R}^{\Omega}$
(TFAE en EN) <-> Les deux assertions suivantes sont équivalentes <-> (LASSE en FR)

1. Il existe $P$ une probabilité sur $\Omega$ telle que 
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

#### Remarque
Il arrive que l'univers évident associé a une experience aléatoire ne soit pas le meilleur pour travailler, c'est en changeant de modèle qu'on arrive a travailler avec une probabilité uniforme. 

#### Exercice
On lance deux dés équilibrés et on s'intéresse à la somme des résultats
On veut calculer la proba : 
$$A : \text{"La somme fait 4"}$$

##### Cas 1
$\Omega_{2} = [\![2, 12]\!]$
Mais on a pas équiprobabilité
Voir la suite $P(A) \neq \frac{1}{11}$

##### Cas 2
On considère l'xp aléatoire on lance les 2 dés et on regarde le couple des résultats (par exemple en peignant en rouge) l'un (qu'on décide le premier et en vert l'autre -> $(n_{R}, n_{V})$)

Cela dans $\Omega_{2} = [\![1, 6]\!]^{2}$
On vera par la suite qu'il y a équiprobabilité car : 
- Les dés sont équilibrés
- Le résultats des dés sont "indépendants"

et alors, 
$$A = \{ (1, 3), (2, 2), (3, 1) \}$$
et 
$$|\Omega_{2}| = 6^{2} = 36$$
Donc, 
$$P(A) = \frac{|A|}{|\Omega_{2}|} = \frac{3}{36} = \frac{1}{12}$$

# II. Probabilités conditionnelles et indépendantes
On considère ici $(\Omega, P)$ un espace probabilisé fini
## 1. Probabilités conditionnelles
On veut définir la probabilité qu'un évènement $A$ arrive sachant que $B$ est réalisé. 
#### Exemple
On lance un dé équilibré, on s'intéresse à l'évènement : 
$$A : \text{"obtenir 6"}$$
Un observateur assure que le résultat est pair,
quel est alors la probabilité d'avoir $A$ connaissant cette information?

Sachant $B$, il ne reste que plus $3$ faces possibles qui sont équiprobables et une qui convient donc le résultat est $\frac{1}{3}$. 

Il semble naturel dans un cadre d'équiprobabilité que le résultat (proba de $A$ sachant $B$) soit $\frac{|A \cap B|}{|B|}$ (avec $P(B)$ non nul)

Reformulation de l'existence de probas : 
$$p = \frac{|A \cap B|}{|\Omega|} \times \frac{|\Omega|}{|B|} = \frac{P(A \cap B)}{P(B)}$$

###### Cas général ($P$ plus forcément uniforme)
Testons cette formule potentielle pour $P(B)$ non nul: 
- Si $A$ et $B$ sont incompatibles,
  $$\frac{P(A \cap B)}{P(B)} = \frac{P(\varnothing)}{P(B)} = 0$$
  C'est naturel (pouce en l'air)
- Si $B \subset A$, 
  Alors dès que $B$ arrive ($\omega \in B$)
  $$\frac{P(A \cap B)}{P(B)} = \frac{P(B)}{P(B)} = 1$$

#### Définition
Soient $A, B \in \mathcal{P}(\Omega)$ tq $P(B) > 0$, 
On note : 
$P(A | B)$ ou $P_{B}(A)$ et on appelle probabilité conditionnelle de $A$ sachant $B$ le nombre :
$$P(A | B) = \frac{P(A \cap B)}{P(B)}$$

On retrouve : 

#### Proposition (Cas uniforme)
Si $P$ est uniforme et $B$ non vide, ($A, B \in \mathcal{P}(\Omega)$)
Alors, 
$$P(A | B) = \frac{|A \cap B|}{|B|}$$

Justification du mot probabilité dans probabilité conditionnelle :
#### Proposition
Soit $B \in \mathcal{P}(\Omega)$ tel que $P(B)>0$, 
Alors l'application : 
$$P_{B} : \begin{cases}
\mathcal{P}(\Omega) \to [0, 1] \\
A \mapsto P_{B}(A) = P(A | B)
\end{cases}$$
est bien définie et est une probabilité sur $\Omega$

Démonstration : 
Soit $A \in \mathcal{P}(\Omega)$, 
On a : $P_{B}(A) = \frac{P(A \cap B)}{P(B)}$
Comme $A \cap B \subset B$, $0\leq P(A \cap B) \leq P(B)$
En divisant par $P(B)$: 
$$0\leq \frac{P(A \cap B)}{P(B)} = P_{B}(A)\leq 1$$
Ainsi $P_{B}$ est bien définie.

Pour montrer que $P_{B}$ est une proba, il suffit de montrer les axiomes : 
1. $P_{B}(\Omega) = \frac{P(\Omega \cap B)}{P(B)} = \frac{P(B)}{P(B)} = 1$
2. Soient $A_{1}$ et $A_{2}$ deux évènements incompatibles alors, comme $P$ est une proba
   $$P((A_{1} \sqcup A_{2})\cap B)= P((A_{1} \cap B) \sqcup(A_{2}\cap B))$$
   Comme $P(B) \neq 0$, 
   $$ P_{B}(A_{1} \sqcup A_{2})= P_{B}(A_{1}) + P_{B}(A_{2})$$

Ainsi, $P_{B}$ est une probabilité sur $\Omega$, 

#### Exemple
<u>ENCORE LE DÉ ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::</u>

Comme $B : \text{"Le résultat est pair"}$
$$P_{B}(\{ 1 \}) = P_{B}(\{ 3 \}) = P_{B}(\{ 5 \})=0$$
$$P_{B}(\{ 2 \}) = P_{B}(\{ 4 \}) = P_{B}(\{ 6 \})=\frac{1}{3}$$
$$P_{B}(A) = P_{B}(\{ 5, 6 \}) = P_{B}(\{ 5 \}) + P_{B}(\{ 6 \}) = 0 + \frac{1}{3}$$


#### Remarque
Si $\Omega = B$, $P_{B} = P$
Savoir $\Omega$ n'apporte aucune information.

## 2. Trois formules fondamentales
#### Théorème : Formule des probabilités totales
Soit $(A_{i})_{i=1}^{n}$ un SCE
Soit $B \in \mathcal{P}(\Omega)$
Alors, 
$$P(B) = \sum_{i=1}^{n} P(A_{i})P(B | A_{i})$$
Avec la convention que $P(A_{i})P(B | A_{i}) = 0$ lorsque $P(A_{i}) = 0$

Démonstration : 
On a : 
$$B = \bigsqcup_{i = 1}^{n} B \cap A_{i}$$
Donc, 
$$P(B) = \sum_{i=1}^{n} P(B \cap A_{i}) = \sum_{\underset{P(A_{i}) \neq 0}{i=1}}^{n}P(B \cap A_{i})$$
(Car $P(A_{i}) = 0$, $P(B \cap A_{i})\leq 0$ donc $= 0$)
$$P(B) = \sum_{i=1}^{n} P(A_{i})P(B | A_{i})$$
Avec la convention. 

#### Exemple
On dispose d'une urne contenant : 
- $6$ boules jaunes
- $3$ boules vertes
- $2$ boules rouges

On effectue $2$ tirages successifs sans remise : 
Quelle est la probabilité de tirer une rouge au deuxième tirage ? 

On note pour $i \in \{ 1, 2 \}$: 
$$R_{i} : \text{"Boule obtenue au }i^{eme} \text{ tirage est Rouge "}$$
On applique la formule des probabilités totals au SCE : $(R_{1}, \bar{R}_{1})$ et à l'évènement $R_{2}$ : 
$$P(R_{2}) = P(R_{1})P(R_{2} | R_{1})+P(\bar{R}_{1})P(R_{2} | \bar{R}_{1})$$
A chaque tirage, les boules réstantes dans l'urne sont équiprobables (car elles sont indiscernables au toucher) donc, 
$P(R_{1}) = \frac{2}{11}$
Donc, 
$P(\bar{R}_{1}) = 1- \frac{2}{11} = \frac{9}{11}$
et $P(R_{1}) \neq 0$ donc, $P_{R_{1}}$ existe et est uniforme par la remarque précédente
Donc, $P_{R_{1}}(R_{2}) = \frac{1}{10}$ de même, $P_{\bar{R}_{1}}(R_{2}) = \frac{2}{10} = \frac{1}{5}$

Finalement, 
$$P(R_{2}) = \frac{2}{11} \times \frac{1}{10} + \frac{9}{11} \times \frac{2}{10} = \frac{2}{11}$$

#### Remarque sur les arabes
On voit que $P(R_{1}) = P(R_{2})$

Excal 1.


#### Formule de Bayes
Soit $(A_{i})_{i = 1}^{n}$ un SCE
Soit $B$ un évènement de probabilité non nulle
Alors, pour $j \in [\![1, n]\!]$, 
$$P(A_{j}|B) = \frac{P(A_{j})P(B | A_{j})}{P(B)} = \frac{P(A_{j})P(B | A_{j})}{\underset{i = 1}{\overset{n}{\sum}} P(A_{i})P(B | A_{i})} $$

Démonstration : 
- Si $P(A_{j}=0)$, 
  $P(A_{j} \cap B) = 0$
  donc, $P(A_{j} | B) = 0$
  et par convention : 
  $P(A_{j})P(B| A_{j}) = 0$ 
  et les formules sont vraies car $0=0=0$
- Sinon,

Photo 05-04


#### Exemple
La boite $1$ contient $3$ boules bleues et $2$ rouges
La boite $2$ contient $2$ boules bleues et $5$ rouges

Les deux boites sont indiscernables. 
On tire une boule dans une boite et elle est bleue
Quelle est la probabilité qu'elle provienne de la boite $1$?

Pour $i \in \{ 1, 2 \}$,
On définit
$$A_{i} : \text{"La boule provient de la boite "}i$$
$$B : \text{"La boule est bleue"}$$

Par la formule des probabilités totales, ($(A_{i})_{i = 1}^{n}$ un SCE, et $B \in \mathcal{ P}(\Omega)$), 
$$P(B) = P(A_{1})P(B | A_{1}) + P(A_{2})P(B | A_{2})$$
On a choisi une des boites au hasard, donc : 
$$P(A_{1}) = P(A_{2}) = \frac{1}{2} \neq 0$$
Par équiprobabilité de boules lors du tirage dans une boite
$P(B | A_{1}) = \frac{3}{5}$ et $P(B | A_{2}) = \frac{2}{7}$

Ainsi, $P(A_{1})P(B | A_{1}) = \frac{3}{10}$ et $P(A_{2})P(B | A_{2}) = \frac{2}{14}= \frac{1}{7}$
$$P(B) = \frac{3}{10}+\frac{1}{7}= \frac{31}{70} \neq 0$$
Donc on peut appliquer la formule de bayes qui donne : 
$$P(A_{1} | B) = \frac{3}{10} \times \frac{70}{31} = \frac{21}{31}$$

#### Théorème : Formule des probabilités composées
Soient $n \geq 2$ et $(A_{i})_{i = 1}^{n}$ une famille d'évènements tq $$P\left( \bigcap_{i=1}^{n-1} A_{i} \right) \neq 0$$
Alors, 
$$P\left( \bigcap_{i=1}^{n} A_{i} \right) = P(A_{1}) \prod_{i = 2}^{n}P\left( A_{i} \left|  \bigcap_{j=1}^{i-1}A_{j} \right.\right)$$
$$= P(A_{1})P(A_{2} | A_{1})P(A_{3}| A_{1} \cap A_{2}) \dots P(A_{n}| A_{1} \cap \dots \cap A_{n-1})$$


Démonstration : 
$$\begin{array}{rl}
P(A_{1} \cap \dots \cap A_{n}) &= P(A_{1} \cap \dots \cap A_{n-1})P(A_{n}|A_{1}\cap \dots \cap A_{n-1}) \\
&= P(A_{1} \cap ... \cap A_{n-2})P(A_{n-1} | A_{1} \cap ... \cap A_{n-2}) \\
& \space\space\space\space \times P(A_{n}|A_{1} \cap \dots \cap A_{n-1}) \\
&= P(A_{1})P(A_{2} | A_{1})P(A_{3}| A_{1} \cap A_{2}) \\
& \space\space\space\space \dots P(A_{n}| A_{1} \cap \dots \cap A_{n-1})
\end{array}$$

##### Exemple
On tire au hasard successivement et sans remise quatre lettres du mot "attachant" :
Quelle est la probabilité d'obtenir "chat" : 
$$\begin{array}{l}
A_{1} : \text{"La première lettre est c"} \\
A_{2} : \text{"La deuxième est h"} \\
A_{3} : \text{"La troisième est a"} \\
A_{4} : \text{"La quatrième est t"}
\end{array}$$

Il est clair que $P({A_{1}\cap A_{2}\cap A_{3}\cap A_{4}}) \neq 0$ 
Par la formules des probabilités composées, 
$$\begin{array}{rl}
P(A_{1} \cap A_{2} \cap A_{3} \cap A_{4}) &= P(A_{1})P(A_{2} | A_{1})P(A_{3} | A_{1} \cap A_{2}) \\
& \space\space\space\space \times P(A_{4} | A_{1} \cap A_{2} \cap A_{3}) 
\end{array}$$
Or,
- $P(A_{1}) = \frac{1}{9}$
- $P(A_{2}|A_{1}) = \frac{1}{8}$
- $P(A_{3} | A_{1} \cap A_{2}) = \frac{3}{7}$
- $P(A_{4} | A_{1} \cap A_{2} \cap A_{3})=\frac{3}{6} = \frac12$

Ainsi, 
$$P(A_{1} \cap A_{2} \cap A_{3} \cap A_{4}) =\frac{1}{9} \frac{1}{8} \frac{3}{7} \frac{1}{2} = \frac{1}{336}$$

## 3. Indépendance
#### Intuition
Si $P(B) \neq 0$, 
Dire que $A$ est indépendant de $B$ c'est dire que "sachant $B$" la proba de $A$ ne change pas
ie $P(A | B) = P(A)$
ie $\frac{P(A \cap B)}{P(B)} = P(A)$
$P(A \cap B) = P(A)P(B)$
- Ce qui est symétrique en $A$ et $B$
- Ne nécessite plus des l'hypothèse $P(B) \neq 0$


#### Définition
Soient $A, B \in \mathcal{P}(\Omega)$, 
On dit qu'ils sont indépendants ssi :
$$P(A \cap B) = P(A) P(B)$$

#### Exemple
On tire au hasard une carte d'un jeu de $32$ cartes. 
Alors,
$$\begin{cases}
A : \text{"La carte est un pique"} \\
B : \text{"La carte est une figure"}
\end{cases}$$
Sont indépendants


En effet par équiprobabilité, 
- $P(A) = \frac{8}{32}= \frac{1}{4}$
- $P(B) = \frac{12}{32}= \frac{3}{8}$
- $P(A \cap B) = \frac{3}{32}$

On a bien : $\frac{1}{4} \frac{1}{8} = \frac{1}{32}$

#### Remarque importante
La plupart du temps, l'indépendance d’évènement est conséquence de l'énoncé pratique du problème qu'on admet alors dans notre modélisation
Par exemple si les parties de l'experience aléatoire sont "physiquement indépendants" on en déduira l'indépendance mathématique des évènements, par exemple : 
- On lance plusieurs pièces ou plusieurs dés en même temps
- On fait des tirages successif dans une urne avec remise

#### Exemple
On lance $2$ dés, et on cherche $P(Q)$ ou
$$Q : \text{"La somme est 4"}$$
On décide qu'il y a un dé $a$ et un dé $b$ 
On note $X_{a}$ le résultat de $a$ (la même pour $b$)
Alors, 
$$Q : \text{"}X_{a} + X_{b} = 4 \text{"}$$

On pose
- $A = (X_{a}, X_{b}) = (1, 3)$
- $B = (X_{a}, X_{b}) = (2, 2)$
- $C = (X_{a}, X_{b}) = (3, 1)$

et on a : $Q = A \sqcup B \sqcup C$

Donc, 
$P(Q) = P(A) + P(B) + P(C)$
On note : 
$A_{a} : \text{"} X_{a} = 1 \text{"}$ et $A_{b} : \text{"} X_{b} = 3 \text{"}$
On a alors, $A = A_{a} \cap A_{b}$
Par indépendance "physique" des lancers de dés, $A_{a}$ et $A_{b}$ sont indépendants donc, $P(A) = P(A_{a})P(A_{b})$
Comme le dé $a$ est équilibré, il y a équiprobabilité des résultats possibles pour ce dé
donc $P(A_{a}) = \frac{1}{6}$
et de même $P(A_{b}) = \frac{1}{6}$
Donc, $P(A) = \frac{1}{36}$


De même, $P(B) = P(C) = \frac{1}{36}$
Finalement, $P(Q) = \frac{3}{36} = \frac{1}{12}$

#### Remarque
On a pas spécifié $\Omega$ ici (c'est la règle en proba)

#### Remarque
Si on aurait volu le spécifier on aurait du prendre $\Omega = [\![1, 6]\!]^{2}$ et le raisonnmet pour le calcul de $P(A)$ aurait montré que 
$$\forall(x, y) \in \Omega, P(\{ (x, y) \}) = \frac{1}{36}$$
Donc la proba serait uniforme, (ce qu'on a affirmé précédement)

#### Propriété
Pour tout $A \in \mathcal{P}(\Omega)$, 
- $A$ et $\Omega$ sont indépendants
- $A$ et $\varnothing$ sont indépendants

Démonstration : ez

#### Notation 
$A || B$ plutôt utilisé pour des variables aléatoires

#### Propriété
Soient $A$ et $B$ deux évènements indépendants, 
Alors, 
- $\bar{A}$ et $B$ sont indépendants
- $A$ et $\bar{B}$ sont indépendants
- $\bar{A}$ et $\bar{B}$ sont indépandants

Démonstration : ez

#### Propriété
Si $A$ ; $B \in \mathcal{P}(\Omega)$ et $P(B) \neq 0$, 
Alors, l'indépendance de $A$ et $B$ équivaut à l'égalité : 
$$P(A | B) = P(A)$$

#### Définition
Les évènements $(A_{i})_{i = 1}^{n}$ sont mutuellement indépendants ssi : 
Pour toute famille extraite $(A_{i_{k}})_{k = 1}^{p}$, 
on a : 
$$P\left( \bigcap_{k =1}^{p} A_{i_{k}} \right) = \prod_{k=1}^{p}P(A_{i_{k}})$$
$$\forall I \subset [\![1, n]\!], P\left( \bigcap_{i \in I} A_{i} \right) = \prod_{i \in I}P(A_{i})$$

#### Propriété
Changer certains des $A_{i}$ en leur complémentaire $\bar{A}_{i}$ ne change pas l'indépendance mutuelle des $A_{i}$

#### Exercice 58 (Voir poly)
Une urne contient 20 boules indiscernables au toucher :
- 11 unicolores : 5 vertes, 4 jaunes, 2 rouges.
- 6 bicolores : 1 vert-rouge, 1 vert-jaune, 4 jaune-rouge. 
- 3 tricolores vert-jaune-rouge.

$$V : \text{“la boule est (au moins partiellement) verte”}$$
la même pour $R$ et $J$ avec rouge et jaune

1. Mq : $P (V ∩ R ∩ J) = P (V ) P (R) P (J)$
2. Mq $V, J, R$ ne sont pas mutuellement indépendants

1. 
Par équiprobabilité de la boule tirée,
- $P(V \cap J \cap R) = \frac{3}{20}$
- $P(V) = \frac{10}{20} = \frac12$
- $P(J) = \frac{12}{20} = \frac{3}{5}$
- $P(R) = \frac{10}{20} = \frac12$

Donc
$$P(V)P(J)P(R) = \frac{3}{2 \times 2 \times 5} = \frac{3}{20} = P(V \cap J \cap R)$$

2. 
$P(V \cap J) = \frac{4}{20} = \frac{1}{5}$
$P(V)P(J) = \frac{3}{10}$
Donc, $P(V \cap J) \neq P(V)P(J)$
Ainsi, $V, J, R$ ne sont pas mutuellement indépendants. 

#### Exercice
On lance deux dés équilibrés, un rouge et un bleu.
Montrer que les évènements
- $R :\text{“le résultat du dé rouge est pair”}$
- $B : \text{“le résultat du dé bleu est pair”}$
- $S : \text{“la somme des résultats des deux dés est paire”}$

sont deux-à-deux indépendants, mais pas mutuellement indépendants.

Comme le dé rouge est équilibré : 
$P(R) = \frac{3}{6} = \frac{1}{2}$
De même pour le dé bleu : 
$P(B) = \frac{3}{6} = \frac12$

On a : 
$S = R \cap B \sqcup \bar{R} \cap \bar{B}$
donc, $P(S) = P(R \cap B) + P(\bar{R} \cap \bar{B})$

Par indépendance physique du lancer du dé rouge et par lancé du dé bleu, $R$ et $B$ sont indépendants et donc, $\bar{R}$ et $\bar{B}$ sont indépendants
Ainsi, 
$$P(R \cap B) =  P(R)P(B) = \frac{1}{4}$$
$$P(\bar{R} \cap \bar{B} )= P(\bar{R}) P(\bar{B}) = \frac{1}{4}$$
Alors, 
$$P(S) = \frac{1}{2}$$

Or $R$ et $B$ sont indépendants et $R \cap S= R \cap B$
(car sur les 3 nombres : résultat du rouge, résultat su bleu, somme des deux)
dès que deux d'entre eux sont pairs, le troisième l'est aussi (par somme et différence de deux entiers pairs), 
Donc, 
$$\begin{array}{l}
R \cap S = R \cap B \cap S \\
B\cap S = A \cap B \cap S \\
R \cap B = R\cap B \cap S
\end{array}$$
Ainsi, 
$P(R \cap S) = P(R \cap B) = \frac{1}{4} = P(R)P(S)$
Donc, $R$ et $S$ sont indépendants, 
De même, $B$ et $S$ sont indépendants

Ainsi, 
$R$, $B$ et $S$ sont deux à deux indépendants

Par ailleurs, 
$$\begin{array}{rl}
P(R \cap B \cap S) &= P(R \cap B) \\
&= \frac{1}{4} \\
&\neq \frac{1}{2} \times \frac{1}{2} \times \frac{1}{2} \\
&= P(R)P(B)P(S)
\end{array}$$

#### Morale de l'histoire
1. L'indépendance mutuelle est une notion subtile (Dangereuse)
2. Il faut apprendre et retenir a long terme la définition

#### Définition : Épreuve de Bernoulli
C'est une experience aléatoire à deux issues.
($|\Omega| = 2$).

Par exemple on lance une pièce qui peut être truquée

Par convention : $\Omega = \{ S, E \}$ (succès, échec)

On appelle paramètre de cette épreuve le nombre
$p = P(\{ S \})$

#### Exemple
Succession d'épreuves de Bernoulli indépendantes de même paramètre. 
On considère $n$ épreuves de Bernoulli "indépendantes" de même paramètre $p$ (par exemple $n$ lancers de la même pièce truquée)

On traduis cette indépendance physique par l'indépendance mutuelle des évènements : 
$$S_{i} : \text{"Succès à l'épreuve }i \text{"}$$
Pour $k \in [\![0, n]\!]$, on cherche la probabilité d'avoir exactement $k$ succès au cours de ces $n$ épreuves.

Pour $I \subset [\![1, n]\!]$, on note $A_{I}$ l'évènement :
$$\text{"Pour tout } i \in I \text{ on a un succès et pour tout } i \notin I \text{ on a un échec"}$$
ie 
$$A_{I} = \left( \bigcap_{i \in I} S_{i} \right) \cap \left( \bigcap_{i \in [\![1, n]\!] \setminus I} \bar{S}_{i}\right)$$
Par indépendance mutuelle des $S_{i}$ ($i \in I$) et invariance de l'indépendance mutuelle par passage au complémentaire de certains évènements, 
$$P(A_{I}) = \left( \prod_{i \in I} P(S_{i}) \right)\left( \prod_{i \in [\![1,n]\!] \setminus I}P(\bar{S}_{i}) \right) = p^{|I|}(1-p)^{n- |I|}$$
Soit $k \in [\![0,n]\!]$, 
Alors, 
$$K = \text{"Avec }k \text{ succès"} = \bigsqcup_{I \in \mathcal{P}_{k}([\![1, n]\!])} A_{I}$$
Donc, 
$$P(K) = \sum_{I \in \mathcal{P}_{k}([\![1, n]\!])} p^{k}(1-p)^{n-k} = \binom{n}{k}p^{k}(1-p)^{n-k}$$
