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
Soit $E = (E_{j})_{j \in J}$ un famille de $\mathbb{K}$-e.v.
On définit :
$$\prod_{j \in J} E_{j} = \{(x_{j})_{j \in J};\forall j \in J, x_{j} \in E_{j}\}$$
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
La loi $\cdot_{\mathbb{K}\times E}$ est bien une loi externe

Les 4 propriétés d'espaces vectoriels se vérifient "composante par composante"
Par exemple pour $\lambda \in \mathbb{K}$ et $x, y \in E$, 
$$\lambda(x+y) = \lambda(x_{j}+y_{j})_{j \in J} = (\lambda (x_{j} + y_{j}))_{j \in J} = (\lambda x_{j} + \lambda y_{j})_{j \in J}$$
$$(\lambda x_{j})_{j \in J} + (\lambda y_{j})_{j \in J} = \lambda x + \lambda y$$

#### Conclusion
Si pour tout $j \in J$, $E_{j}$ est un $\mathbb{K}$-e.v., alors
$\prod_{j \in J}E_{j}$ est naturellement muni d'une structure  de $\mathbb{K}$-e.v. : c'est l'e.v. produit cartésien de $E_{j}, j \in J$

#### Cas particulier important
Si les $E_{j}$ sont tous identiques ie $\forall j_{1}, j_{2} \in J, j_{1}\neq j_{2} \Rightarrow E_{j_{1}} = E_{j_{2}}$
Alors ce produit est : $E^{J}$, ses éléments sont des familles d'éléments de $E$ tous indexés par $J$, i.e. des applications de $J \to E$ 

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
$$\left(\{\overline{0}, \overline{1}\}^{X}, +, \cdot\right)$$est un $\mathbb{Z}/_{2\mathbb{Z}}$-ev
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

Soit $E$ un $\mathbb{K}$-ev et $F \subset E$, 
Alors, $F \underset{sev}{\subset} E$ ssi
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



#### Exemple
1. $\{0_{E}\}$ et $E$ sont des sev de 


2. Pour $I$ un ensemble quelconque $\mathbb{K}^{(I)} \underset{sev}{\subset} \mathbb{K}^{I}$
Soient $\lambda \in \mathbb{K}$ et $x= (x_{i})_{i\in I}, y = (y_{i})_{i\in I} \in \mathbb{K}^{(I)}$
On a déjà montré précédemment que $x+y \in \mathbb{K}^{(I)}$
$x+y = (x_{i} + y_{i})_{i \in I} \in \mathbb{K}^{I}$
$$\{i \in I | x_{i}+y_{i} \neq 0\} \subset \{i \in I|x_{i} \neq 0\} \cup \{i \in I, y_{i} \neq 0\}$$
Ces deux ensembles sont finis donc la réunion est finie.
ie $x+y \in \mathbb{K}^{(I)}$

Par ailleurs
$$\{i \in I | \lambda_{i} \neq 0\} \subset \{i \in I | x_{i} \neq 0\}$$
Donc, $\lambda x \in \mathbb{K}^{(I)}$
Ainsi, $\mathbb{K}^{(I)}$ est une partie non vide et stable  par $+$ et $\cdot$ de $\mathbb{K}^{I}$ Donc, 
$$\mathbb{K}^{(I)} \underset{sev}{\subset} \mathbb{K}^{I}$$

3. sev de $\mathbb{R}^{2}$
$\{(0, 0)\}, \mathbb{R}^{2}$


###### Question : Une droite passant par l'origine est elle un ssev de $\mathbb{R}^{2}$



> Rappel
> Une équation d'une droite de $\mathbb{R}^{2}$ est : $ax+by = c$
> avec $(a, b) \neq (0, 0)$ ie $(a \neq 0)$ ou $(b \neq 0)$
> cela donne directement un vecteur normal :
> $$\vec{n} = \begin{array}{|l}a \\b \end{array}$$ et un vecteur directeur : 
> $$\vec{v} = \begin{array}{|l}-b \\ a\end{array}$$
> ($\vec{u}.\vec{v} = a\times(-b)\times + b \times a = 0$)
> $\mathcal{D}$ passe par l'origine ssi $c = 0$

Montrons que $\mathcal{D} \underset{sev}{\subset} \mathbb{R}$
$(0, 0) \in \mathcal{D}$.

Soit : $u=(x, y)$, $u' = (x', y') \in \mathcal{D}$w
Soit $\lambda \in \mathbb{R}$, 
Alors, 
$$\lambda u + u' = (\lambda x, \lambda y) + (x', y') = (\lambda x + x', \lambda y + y')$$
On a : $(E) : \space \text{"} ax+by = 0 \space \text{"}$
Comme $u \in \mathcal{D}$, $ax+by = 0$
Donc,
$$a(\lambda x+x')+b(\lambda y +y') = \lambda(ax+by) + (ax'+by') = \lambda0 + 0 = 0$$


Donc, $\lambda u + u' \in \mathcal{D}$
Comme $\mathcal{D}$ est non vide et stable par $CL$, $\mathcal{D} \underset{sev}{\subset} \mathbb{R}^{2}$

###### Question : Une droite ne passant pas par l'origine est elle un sev de $\mathbb{R}^{2}$?
Soit $\mathcal{D}$ une telle droite
Contre-exemple
exalibur 2
et $(0,0) \notin \mathcal{D}$ donc $\mathcal{D}$ n'est pas un ev car $(\mathcal{D}, +)$ doit être un groupe

#### Propriété
Pour tout $F \underset{sev}{\subset} E$, $0_{E} \in F$


Par contraposition : 
#### Propriété
Si $0_{E} \notin F$, $F$ n'est pas un ssev de $E$

Car une droite affine de $\mathbb{R}^{2}$ qui ne passe pas par l'origine n'est pas un sev de $\mathbb{R}^{2}$


#### Résumé
$\{0\}$, Les droite affine passant par $(0, 0)$ et $\mathbb{R}^{2}$ sont des sev de $\mathbb{R}^{2}$


###### Question : Y en a t'il d'autre?
Soit $F \underset{sev}{\subset} E$, on a deux cas : 
- $F = \{0, 0\}$
- $F \neq \{0, 0\}$ et comme $(0, 0) \in F$, il existe $(x_{0}, y_{0}) \neq (0, 0)$ te que $(x, y)\in F$ 
  Alors par stabilité de $F$, par multiplication externe, 
  $$\forall \lambda \in \mathbb{R}, \lambda(x, y) \in F$$

Excalibur 3
Ce que signifie que le droite $\mathbb{R} u_{0}$
de représentation paramétrique :
$$\begin{cases}
x = \lambda x_{0} \\
y = \lambda y_{0}
\end{cases}$$
est inclus dans $F$
On a deux sous cas :
- $F$ = $\mathcal{D}$ 
- $F \supsetneq D$ il existe $u_{1} = (x_{1}, y_{1}) \in F \backslash D$ 
  Soit $u = (x, y) \in \mathbb{R}^{2}$
  On cherche $\lambda, \mu \in \mathbb{R}$ tel que
  $u = \lambda u_{0} + \mu u_{1}$
  Or, 
  $$\begin{cases}
x = \lambda x_{0} + \mu x_{1} \\
y = \lambda y_{0} + \mu y_{1}
\end{cases} \Leftrightarrow \begin{pmatrix}
x_{0}&x_{1} \\
y_{0} & y_{1}
\end{pmatrix} \begin{pmatrix}
\lambda \\
\mu
\end{pmatrix}  = \begin{pmatrix}
x \\
y
\end{pmatrix} \Leftrightarrow \begin{pmatrix}
\lambda \\
\mu
\end{pmatrix} = A^{-1} \begin{pmatrix}
x  \\
y
\end{pmatrix}$$
  (Car $A$ est inversible car $\det A = \det(u_{0}, u_{1}) \neq 0$ A.P. : $u_{0}$ et $u_{1}$ sont non colinéaires)

On a vu que pour tout $u \in \mathbb{R}^{2}$ est $CL$ de $u_{0}$ et $u_{1}$
Ainsi tout $u \in \mathbb{R}^{2}$ est élément de $F$ donc $F = \mathbb{R}^{2}$
On apelle droite vectorielle de $\mathbb{R}^{2}$ une droite affine passant par $(0, 0)$

#### Propriété
Les sev de $\mathbb{R}^{2}$ sont :
- $\{(0, 0)\}$
- Les droites vectrorielles
- $\mathbb{R}^{2}$

On montrerait la propriété suivante plus chiante mais nécessitant la même capacité cérébrale.
#### Propriété
Les sev de $\mathbb{R}^{3}$ sont : 
- $\{(0, 0, 0)\}$
- Les droites vectorielles
- Les plans vectoriels (ie passant par $(0, 0, 0)$)
- $\mathbb{R}^{3}$

#### Remarque
L'équation de plan vectoriels est : $ax+by+cz = 0$

#### Remarque
On sniff la notion de dimension

#### Autres exemples de sous espaces vectoriels
Soient $a, b \in \mathbb{R}$, et $F_{a, b} = \{u \in \mathbb{K}^{\mathbb{N}} | \forall n \in \mathbb{N}, u_{n+2} = au_{n+1} + bu_{n}\}$
Alors les $F_{a, b}$ sont des sev de $\mathbb{K}^{\mathbb{N}}$

###### Question : Quelle est la dimension de $F_{a, b}$?
$u \in F_{a, b}$ est déterminée par $u_{0}$ et $u_{1}$
###### Question : Quelle est la dimension de $\mathbb{K}^{\mathbb{N}}$?
C'est infini

- L'espace des solution d'une $EDLH1$ définie sur $I$ est une droite vectorielle (un sev de dimension 1) de $\mathcal{C}^{1}(I)$
- $\mathcal{C}^{1}(I) \underset{sev}{\subset} \mathbb{R}^{I}$
- L'espace des solutions d'une $EDLH2$ à coefficients constants est un sev de $\mathcal{C}^{2}(\mathbb{R})$ de dimension $2$
- Si $(S)$ est un système d'équation linéaire homogène à $p$ inconnues son ensemble de solutions est un sev de $\mathbb{K}^{p}$. 


#### Remarque
Pour ces $EDL$ et ces systèmes linéaires, si on met <u>un second membre non nul</u>, alors l'ensemble des solutions n'est plus un sev. 
(Il ne contient pas $0$, même raison que la droite)

#### Exercice
Montrer que
$$\mathcal{P} = \{f \in \mathbb{R}^{\mathbb{R} }| \forall x \in \mathbb{R}, f(-x) = f(x)\}$$
et
$$\mathcal{I} = \{f \in \mathbb{R}^{\mathbb{R}}|\forall x \in \mathbb{R}, f(-x) = -f(x) \}$$
Sont deux sev de $\mathbb{R}^{\mathbb{R}}$, 

#### Exercice
Monter que
$$\mathcal{S}_{n}(\mathbb{R}) = \{M \in \mathcal{M}_{n}(\mathbb{K})| M^{T} = M\}$$
et 
$$\mathcal{A}_{n}(\mathbb{K}) = \{M \in \mathcal{M}_{n}(\mathbb{K}) | M^{T} = -M\}$$
sont deux sev de $\mathcal{M}_{n}(\mathbb{K})$

#### Exercice
Pour $n \in \mathbb{N}$, 
$$\mathbb{K}_{n}[X] \underset{sev}{\subset} \mathbb{K}[X]$$


#### ENCORE D'AUTRESS EXEMPLES !!!!!!!!
Soit $I$ un intervalle de $\mathbb{R}$ non trivial
$$\mathcal{C}^{k}(I) \underset{sev}{\subset} \mathcal{C}^{1}(I) \underset{sev}{\subset} \mathcal{D}(I)\underset{sev}{\subset} \mathcal{C}^{0}(I)\underset{sev}{\subset} \mathbb{R}^{I}$$


#### Propriété - Remarque - Exercice
Un sous espace vectoriel d'un sous espace vectoriel de $E$ est un sous espace vectoriel ed $E$


#### Exercice
Soit $I$ un intervalle réel non trivial et $a \in I$, 
Soit $\lambda \in \mathbb{R}$
Est-ce que
$$F_{\lambda} = \{f:I\to \mathbb{R}| f(a) = \lambda\}$$ 
est un sev de $\mathbb{R}^{I}$
C'en est un ssi $\lambda = 0$


## 2. Intersections de sous espaces vectoriels
#### Proposition
Toute intersection de sous espace vectoriel de $E$ est un sous espace vectoriel de $E$
Soit $\widetilde{X}$ un ensemble de sous espace vectoriel de $E$, 
et $G = \bigcap_{F \in \widetilde{X}}F$

- Si $\widetilde{X} = \varnothing$, par convention $G = E$
Donc $G$ est un sev de $E$

- Si $\widetilde{X} \neq \varnothing$
On montre que $G \underset{sev}{\subset} E$
par la caractérisation

Comme tout $F \in \widetilde{X}$ est un sev donc admet $0_{E}$ comme élément, 
$$0_{E} \in \bigcap_{F \in \widetilde{X}}F = G$$
Soient $\lambda \in \mathbb{K}$ et $x, y \in G$, 
Soit $F \in \widetilde{X}$,
Par définition de $\cap$, $x, y \in F$
Comme $F \underset{sev}{\subset} E$
Il est stable par $CL$ donc $\lambda x + y \in F$, 
Ainsi, 
$$\forall F \in \widetilde{X}, \lambda x + y \in F$$
ie
$$\lambda x + y \in \bigcap_{F \in  \widetilde{X}}F = G$$
Ainsi, 
$$G \underset{sev}{\subset} E$$

#### Cas particuliers
$F_{1}\cap F_{2} \cap \dots \cap F_{n}$ : fini

mais $X$ peut très bien être infini


#### Définition
Soit $X \subset E$, 
On note $\mathcal{F}_{X}$ l'ensemble des sev $F$ de $E$ tel que $X \subset F$
On appelle sous espace vectoriel engendré par $X$ : 
$$Vect(X) = \bigcap_{F \in \mathcal{F}_{X}} F = \bigcap_{\underset{\text{tq }X \subset F}{F \underset{sev}{\subset} E}}F$$



#### Définition
Si $(x_{i})_{i \in I} \in E^{I}$, le sev engendré par celle est :
$$Vect(x_{i})_{i \in I} = Vec(\{x_{i}; i \in I\}) = \bigcap_{F \underset{sev}{\subset} E}F$$


#### Propriété
Avec les notations ci dessus












$$\underset{sev}{\subset}$$