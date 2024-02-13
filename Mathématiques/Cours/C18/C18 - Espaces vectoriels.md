Soit $\mathbb{K} \in \{\mathbb{R}, \mathbb{C}\}$
# I. Définition et exemples
## 1. Définitions
$(E, +, \cdot)$ est un $\mathbb{K}$-espace vectoriel ssi
- $(E, +)$ est un groupe abélien
- $\cdot$ est une loi externe $\begin{cases} \mathbb{K} \times E \to E \\ (\lambda, u) \mapsto \lambda u  \end{cases}$
- On à les 4 propriétés : 
  - La propriété des flemmards :
    $$\forall u \in E, 1_{\mathbb{K}}\cdot u = 0$$
  - L'associativité mixte : 
    $$\forall \lambda, \mu \in \mathbb{K}, \forall u \in E, (\lambda \mu)u = \lambda(\mu u)$$
  - Distributivité a gauche : 
   $$\forall \lambda \in \mathbb{K}, \forall u, v \in E, \lambda(u+v) = \lambda u-\lambda v$$
  - Distributivité à droite : 
   $$\forall \lambda, \mu \in \mathbb{K}, \forall u \in E, (\lambda+\mu)u = \lambda u + \mu u$$


#### Propriété
$$\forall \lambda \in\mathbb{K}, \forall u\in E, \lambda u = 0_{E} \Leftrightarrow (\lambda = 0_{\mathbb{K}} \text{ ou } u = 0_{E})$$

Démonstration : 
Soit $\lambda \in \mathbb{K}$
Soit $u \in E$, 
On raisonne par double implication : 
$\Leftarrow$ : 
  Supposons $\lambda = 0_{\mathbb{K}}$ ou $u = 0_{E}$
  Disjonction de cas : 
  - $\lambda = 0_{\mathbb{K}}$
    $$0_{\mathbb{K}}u = 0_{\mathbb{K}}u + u - u= 0_{\mathbb{K}}+1_{\mathbb{K}}u-u = (0_{\mathbb{K}}+1_{\mathbb{K}})u - u=u-u = 0_{E}$$
  - $u = 0_{E}$
    $$\lambda 0_{E} = \lambda 0_{E} + \lambda 0_{E} - (\lambda 0_{E}) = \lambda(0_{E}+0_{E}) - (\lambda 0_{E}) = \lambda 0_{E} - (\lambda 0_{E}) = 0_{E}$$

$\Rightarrow$ : 
Par disjonction de cas : 
- $\lambda = 0_{\mathbb{K}}$
- $\lambda \neq 0_{\mathbb{K}}$ 
  Alors
  $$u = 1_{\mathbb{K}}u = \left( \frac{1}{\lambda}\times\lambda \right)u = \frac{1}{\lambda}(\lambda u)=\frac{1}{\lambda}(0_{E}) = O_{E}$$


#### Propriété
$$\forall u \in E, (-1_{\mathbb{K}})u = -u$$
Démonstration : 
$$(-1_{\mathbb{K}})u = (-1_{\mathbb{K}})u+u-u = (-1_{\mathbb{K}})u + 1_{\mathbb{K}}u -u = (-1_{\mathbb{K}} + 1_{\mathbb{K}})u - u$$
$$= 0_{\mathbb{K}}u - u =-u$$

#### Exemples
$(\mathbb{R}^{2}, +, \cdot)$
avec l'addition usuelle composante par composante : 
$u + v = (e, 2)$
et la multiplication externe définie par : $\lambda(x, y) = (\lambda x, \lambda y)$
pour $\lambda \in \mathbb{R}$ et $(x, y) \in \mathbb{R}^{2}$
excalibur 1 

$\mathbb{R}^{3}$ la même
$\{0\}, \mathbb{R}, \mathbb{R}^{4}, \mathbb{R}^{n}$

De même des $\mathbb{C}^{n}$ avec $n \in \mathbb{N}$ sont des $\mathbb{C}$-espaces vectoriels 
Mais aussi, si $E$ est $\mathbb{C}$-e.v. alors la multiplication externe $\cdot$ donne une restriction : 
$$\cdot|_{\mathbb{R}\times E} : \begin{cases}
\mathbb{R}\times E \to E \\
(\lambda,u) \mapsto \lambda u
\end{cases}$$
Qui vérifie trivialement des 4 propriétés d'e.v., ce qui induit une structure de $\mathbb{R}$-e.v. sur $E$

#### Exemple
$\mathbb{C}$ est un $\mathbb{R}$-e.v.
Tous les $\mathbb{C}^{k}$ sont des $\mathbb{R}$-e.v.


Autres espaces vectoriels : 
$\mathbb{K}[X]$ est un $\mathbb{K}$-e.v. à l'aide de l'inclusion $\mathbb{K} \subset \mathbb{K}[X]$ et de la structure d'anneau de $\mathbb{K}[X]$

De même $\mathbb{K}(X)$ est un e.v.

## 2. Produit d'espaces vectoriels
Cas de 2 espaces vectoriels $E_{1}$ et $E_{2}$ : 
$E_{1} \times E_{2}$ est muni d'une structure de groupe produit (somme composante par composante) : 
$$(x_{1}, y_{1}) + (x_{2}, y_{2}) = (x_{1}+x_{2}, y_{1}+y_{2})$$
Pour $\lambda \in \mathbb{K}$ et $(x_{1}, x_{2}) \in E_{1} \times E_{2}$ on pose : 
$$\lambda(x_{1}, x_{2}) = (\lambda x_{1}, \lambda x_{2})$$
Cela définit une loi externe : $\cdot : \mathbb{K} \times E \to E$
On vérifie facilement les $4$ propriétés

On définirait de même l'espace vectoriel : $E_{1} \times E_{2} \times \dots \times E_{p}$
Pour $E_{1}, E_{2}, \dots, E_{p}$ des $\mathbb{K}$-e.v.

#### Cas général : Produit quelconque d'espaces vectoriels
Soit $(E_{j})_{j \in J}$ un famille de $\mathbb{K}$-e.v.
On définit : 
$$\prod_{j \in J} = \{(x_{j})_{j \in J};\forall j \in J, x_{j} \in E_{j}\}$$
et pour $x = (x_{j})_{j \in J}$, $y = (y_{j})_{j \in J} \in E$
On pose : 
$$x+_{E}y = (x_{j}+_{E_{j}}y_{j})_{j \in J}$$
et pour $\lambda \in \mathbb{K}$ et $x = (x_{j})_{j \in J} \in E$, 
$$\lambda \cdot_{\mathbb{K}\times E} x = (\lambda \cdot_{\mathbb{K}\times E_{j}} x_{j})_{j \in J}$$

On vérifie que $E$ est un $\mathbb{K}$-e.v. : 
Avec les notations ci dessus : 

- Pour $x, y, z \in E$, 
$$(x+y)+z = (x_{j} + y_{j})_{j \in J} + (z_{j})_{j \in J} = ((x_{j}+y_{j})+z_{j})_{j \in J}$$
Par associativité de $+_{E_{j}}$ pour tout $j \in J$
$$(x_{j}+ (y_{j} + z_{j}))_{j\in J} = x + (y + z)$$

- $0_{E} = (O_{E_{j}})_{j \in J}$ est facilement neutre de $(E, +)$
- Pour $x \in E$, $-x = (-x_{j})_{j\in J}$ est l'opposé de $x$

Ainsi $(E, +)$ est un groupe Abélien
La loi $\cdot_{\mathbb{K}\times E}$ est bien une li externe

Les 4 propriétés d'espaces vectoriels se vérifient "composante par composante"
Par exemple pour $\lambda \in \mathbb{K}$ et $x, y \in E$, 
$$\lambda(x+y) = \lambda(x_{j}+y_{j})_{j \in J} = (\lambda (x_{j} + y_{j}))_{j \in J} = (\lambda x_{j} + \lambda y_{j})_{j \in J}$$
$$(\lambda x_{j})_{j \in J} + (\lambda y_{j})_{j \in J} = \lambda x + \lambda y$$

#### Conclusion
Si pour tout $j \in J$, $E_{j}$ est un $\mathbb{K}$-e.v., alors
$\prod_{j \in J}E_{j}$ est naturellement muni d'une structure  de $\mathbb{K}$-e.v. : c'est l'e.v. produit cartésien de $E_{j}, j \in J$

#### Cas particulier important
Si les $E_{j}$ sont tous identiques ie $\forall j \in J, E_{j} = E_{j}$
Alors ce produit est : $E^{J}$, ces éléments sont des familles d'éléments de $E$ tous indexés par $J$, i.e. des applications de $J \to E$ 

En général lorsqu'on utilise le cadre des applications on note $E^{X}$ avec $X$ un ensemble quelconque 

#### Propriété
Pour $X$ un ensemble quelconque et $E$ un $\mathbb{K}$-e.v., 
$E^{X}$ est naturellement muni d'une structure de $\mathbb{K}$-e.v. : la structure produit

#### Exemple
$$\mathbb{K}^{n} = \mathbb{K}^{[\![1, n]\!]}$$
Ses éléments sont : 
$$x = (x_{1}, \dots, x_{n}) = \begin{cases}
[\![1, n]\!] \to \mathbb{K} \\
x \mapsto x_{i}
\end{cases} \space\space = (x_{i})_{i \in [\![1, n]\!]} = (x_{i})_{i = 1}^{n}$$
- Si $I$ est un intervalle de $\mathbb{R}$, 
$\mathbb{R}^{I}$ est un $\mathbb{R}$-ev
- $\mathcal{M}_{n, p}(\mathbb{K}) = \mathbb{K}^{[\![1,n]\!]\times[\![1, p]\!]}$ 
Ses éléments sont : 
$$(a_{i, j})_{(i, j) \in [\![1, n]\!] \times [\![1, p]\!]}$$
est naturellement un $\mathbb{K}$-ev

Attention :
La multiplication matricielle n'a rien avoir avec cette structure d'espace vectoriel. 

-> $\mathbb{K}^{\mathbb{N}}$ espace des suites a valeurs dans $\mathbb{K}$

<u>HAHAHA c'est MARANT : </u>
$$(\{\overline{0}, \overline{1}\}^{X}, +, \cdot)$$est un $\mathbb{Z}/_{2\mathbb{Z}}$-ev
isomorphe à $(\mathcal{P}(X), \Delta, \cdot)$ : 
$\overline 0 \cdot A = \varnothing$
$\overline 1 \cdot A = A$

# II. Combinaison linéaire
#### Combinaison linéaire de deux vecteurs
On prend $\lambda, \mu \in \mathbb{K}$, et $x, y \in E$
La combinaison linéaire de $x$ et $y$ ... des coefs $\lambda$ et $\mu$ est : $\lambda x + \mu y \in E$

#### Cas de p vecteurs
$$\begin{cases}
\lambda_{1}, \dots, \lambda_{p} \in \mathbb{K} \\
x_{1}, \dots, x_{p} \in E
\end{cases}$$
$$\sum_{i=0}^{p}\lambda_{i}x_{i}$$

##### Cas particuliers
- $p = 1$ $\lambda_{1}x_{1}$
- $p = 0$ : $0_{E}$

##### Cas général (CL généralisées)

Soit $(x_{i})_{i \in I}$ un famille de vecteurs de $E$ et 
$(\lambda_{i})_{i \in I}$ une famille <u>presque nulle</u> de scalaires
On appelle combinaison linéaire des $x_{i}$ le vecteur de $E$ défini par : 
$$\sum_{i \in I}\lambda_{i}x_{i}$$
###### Rappel : 
Une famille presque nulle de scalaires indexés par $I$ est une famille $(\lambda_{i})_{i \in I}$ telle que $\{i \in I | \lambda_{i} \neq 0\}$ soit fini
On note leur ensemble : $\mathbb{K}^{(I)}$ 


#### Remarque
Si $I = \varnothing$,
$$\sum_{i \in \varnothing} \lambda_{i}x_{i} = 0_{E}$$

#### Exemple
$$P = \sum_{n=0}^{\infty} a_{n}X^{n} \in \mathbb{K}[X]$$
est une CL des $X^{n}$, $n \in \mathbb{N}$
car Pour $I = \mathbb{N}$, $(\lambda_{i})_{i \in \mathbb{N}} \in \mathbb{K}^{\mathbb{N}}$
est presque nulle sssssssssssssssssssi elle est nulle APDCR

#### Proposition
Pour $I$ un ensemble quelconque, $\mathbb{K}^{(I)}$ est un $\mathbb{K}$-ev pour les lois induites par celles de $\mathbb{K}^{I}$


# III. Sous espaces vectoriels
## 1. Définition et caractérisation
#### Définition
Soit $E$ un $\mathbb{K}$-ev
Alors $F$ est un sous-espace vectoriel de $E$ ssi
$F \subset E$ est stable par addition et par multiplication par des scalaires et munie des lois induites c'est un $\mathbb{K}$-ev

Soit $E$ un $\mathbb{K}$-ev et $F \subset E$, $F \underset{sev}{\subset} E$ ssi
#### Caractérisation 1
$F$ est stable par $CL$ généralisées

#### Caractérisation 2
- $F \neq \varnothing$
- $\forall \lambda \in \mathbb{K}, \forall x, y \in F, \lambda x + y \in F$

#### Caractérisation 3
- $F \neq \varnothing$
- $F$ est stable par $+$
- $F$ est stable par multiplication par les scalaires

(Cas ou les calculs sont compliqués)


#### Démonstration des caractérisations
(def $\Rightarrow$ cara. 1 $\Rightarrow$ carac 2. $\Rightarrow$ carac 3. $\Rightarrow$ def)

##### Def $\Rightarrow$ caractérisation 1
Soit $F \underset{sev}{\subset} E$,
On pose pour $n \in \mathbb{N}$, 
$$\mathcal{A}_{n}:''\text{Pour toute famille }(x_{i})_{i \in I} \in F^{I}, \text{ et toute famille }(\lambda _{i})_{i \in I} \in \mathbb{K}^{I}$$
$$\text{telle que } |\{i \in I | \lambda_{i} \neq 0\}| =n,$$
$$\sum_{i \in I} \lambda_{i}x_{i} \in F ''$$

On démontre par recurrence sur $n$,

###### Initialisation
Soient $(x_{i})_{i \in I} \in F^{I}$ et $(\lambda_{i})_{i\in I}\in \mathbb{K}^{(I)}$ tel que :
$\forall i \in I, \lambda_{i} = 0$, 
Alors, 
$$\sum_{i \in I}\lambda_{i}x_{i} = \sum_{i \in \varnothing}\lambda_{i}x_{i} = 0_{E}$$
Or $0_{E} \in F$ car $F$ est en particulier un sous groupe de $(E, +)$
Ainsi $A_{0}$ est vraie

###### Hérédité
Soit $n \in \mathbb{N}$ tq $A_{n}$, 
Soient $(x_{i})_{i \in I} \in F^{I}$ et $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$
tq
$$|\{i \in I | \lambda_{i} \neq 0\}| = n+1$$
Comme $n+1\geq 0$, il existe $i_{0} \in I$ tel que $\lambda_{i_{0}} \neq0$
On définit $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$
par 
$$\begin{cases}
\forall i \in I \{i_{0}\}, \widetilde{\lambda_{i}} = \lambda_{i} \\
\widetilde{\lambda_{i_{0}}} = 0
\end{cases}$$
Ainsi, 
$|\{i \in I|\widetilde{\lambda_{i}}\neq 0\}| =n$
et par hypothèse de récurrence : 
$$\sum_{i \in I} \widetilde{\lambda_{i}}x_{i} \in F$$
Alors, 
$$\sum_{i \in I}\lambda_{i}x_{i} = \lambda_{i_{0}}x_{i_{0}} + \sum_{i \in I}\widetilde{\lambda _{i}}x_{i} \in F$$
$\lambda_{i_{0}}x_{i_{0}} \in F$ car $F$ sev de $E$ donc stable par multiplication externe

Ainsi $A_{n+1}$

Par récurrence on a : $\forall n \in \mathbb{N}, A_{n}$
ie $F$ est stable par CL généralisées

##### Caractérisation 1 $\Rightarrow$ Caractérisation 2
Supposons que $F$ soit stable par $CL$ généralisées, alors d'une part, la CL vide montre que $0_{E} \in F$ donc $F \neq \varnothing$
et d'autre part, si $\lambda \in \mathbb{K}$ et $x, y \in F$
alors en prenant : 
$$\begin{cases}
I = \{1, 2\} \\
\lambda_{1} = \lambda, \lambda_{2} = 1_{\mathbb{K}} \\
x_{1}=x, x_{2} = y
\end{cases}$$
$$x\lambda+y = \sum_{i \in I}\lambda_{i}x_{i} \in F$$

Supposons que $F \neq \varnothing$ et $(\forall \lambda \in \mathbb{K}, \forall x, y \in F, \lambda x + y \in F)$
Alors $F \neq \varnothing$.
En prenant $\lambda = 1$ on voit que $F$ est stable par $+$
En prenant $\lambda = 0$ on voit que $F$ est stable par multiplication externe

##### Caractérisation 2 $\Rightarrow$ Caractérisation 3
Supposons que $F \neq \varnothing$, $F$ est stable par $+$ et $F$ soit stable par multiplication externe
Alors $F$ est stable par $+$ et multiplication externe

Pour $x, y \in F$ on a $-y \in F$ (stable par multiplication par $-1$)
puis $x-y \in F$ (stable par $+$) 
Comme ($F \neq \varnothing$ et $\forall x, y \in F, x-y \in F$)
par la caractérisation des sous groupes, 
$F \underset{sg}{\subset} (E, +)$ donc $(F, +)$ est un groupe
Par stabilité par multiplication externe, l'application : 
$$\cdot_{\mathbb{K}\times F} : \begin{cases}
\mathbb{K} \times F \to F \\
(\lambda, x) \mapsto \lambda x
\end{cases}$$
est bien définie
et elle vérifie les 4 propriété d'espace vectoriel car $\cdot_{\mathbb{K}\times E}$ les vérifies. 
Ainsi $(F, +_{F}, \cdot_{\mathbb{K}\times F})$ est un $\mathbb{K}$-ev, 
donc finalement $F \underset{sev}{\subset} E$

<u>Classiquement</u>, on dit que $F$ est un sev de $E$ si $F \subset E$, $F$ est "non vide et stable par combinaison linéaire" (en prenant implicitement des CL de 2 vecteurs "$\lambda x + \mu y$"), mais qu'on peut restreindre a CL du type : "$\lambda x + y$")

Le fait que la stabilité par CL généralisé entraînant $F \neq \varnothing$ n'est pas très "connu"

Question : 
sev de $\mathbb{R}^{2}$ de $\mathbb{R}^{3}$

#### Exercice
Montrer que
$$\mathbb{K}^{(I)} \underset{sev}{\subset} \mathbb{K}^{I}$$





























































$$\underset{sev}{\subset}$$