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
Juste : $B$ et $\{ 1, 5 \}$ sont incompatible

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
Un "probabilité" un objet mathématique : 
Une application qui a tout évèneme