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

Démonstration : 
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
Si $(x_{i})_{i \in I} \in E^{I}$, le sev engendré par $x_{i}$ est :
$$Vect(x_{i})_{i \in I} = Vec(\{x_{i}; i \in I\}) = \bigcap_{F \underset{sev}{\subset} E}F$$


#### Propriété
Avec les notations ci dessus
A sens de l'inclusion, 
$Vect(X)$ est le plus petit sev de $E$ qui contient $X$ 
(resp. $Vect(x_{i})_{i \in I}$ est le plsus petit des sev de $E$ qui contient $\{x_{i}, i \in I\}$)

Démonstration immédiate
1. $Vect(X)$ est un sev comme intersection de sev
2. $Vect(X) \supset X$ par définition de l'intersecition (par la propriété précédente)
3. Par définition de l'intersection , pour $F \underset{sev}{\subset} E$ tel que $X \subset F$, $Vect(X) \subset F$



#### Représentation de droites
- Cartésien : 
  $\mathbb{R}^{2}$ : 
  $$ax+by = c$$
  $\mathbb{R}^{3}$ :
  $$\begin{cases}
ax+by+cz=d \\
a'x+b'y+c'z=d'
\end{cases}$$
avec $\vec{n}\begin{array}{|l}a \\ b \\ c\end{array}$ et $\vec{n'}\begin{array}{|l}a' \\ b' \\ c'\end{array}$ non colinéaires 


- Paramétrique
  $\mathbb{R}^{2}$ :
  $$\begin{cases}
x = x_{0}-\lambda b \\
y = y_{0}+\lambda a'
\end{cases}$$
avec $\lambda \in \mathbb{R}$ et $\vec{v}  = \begin{array}{|l}-b \\ a\end{array}$ qui dirige $\mathcal{D}$ et $(x_{0}, y_{0}) \in \mathcal{D}$

  $\mathbb{R}^{3}$ : 
  $$\begin{cases}
x = x_{0} + \lambda a'' \\
y = y_{0}+\lambda b'' \\
z = z_{0}+\lambda c''
\end{cases}$$
ou $\vec{u} \begin{array}{|l} a'' = \vec{n} \wedge \vec{n'} \\  \end{array}$

#### Exemple
Soit $u\in E \backslash\{0\}$
$$Vect(u) (= Vect({u})) = \{\lambda u : \lambda \in \mathbb{K}\}$$
(représentation paramétrique)
Démonstration : 
C'est un sev et si $F \underset{sev}{\subset} E$ tq $v \in F$ alors tout $\lambda u \in F$

$Vect(\{\varnothing\}) = \{0\}$
$Vect(0) = \{0\}$
$E$ espace vectoriel entier : 
$Vect(E) = E$
(Le seul sous espace vectoriel de E qui contient $E$ est $E$)

#### Définition
Pour $u, v \in E$ or on dit que $u$ et $v$ sont colinéaires ssi
$$\exists \lambda \in \mathbb{K}, (u = \lambda v \text{ ou } v = \lambda u)$$

Soient $u,  v \in E$ non colinéaires
Que dire de $Vect(u, v)$
Excalibur 4
C'est $P = \{\lambda u+\mu v ; \lambda, \mu \in \mathbb{K}\}$
qu'on appelle un plan vectoriel

Cela amène a la proposition suivante : 

#### Proposition
Soit $X \subset E$ (resp $(x_{i})_{i \in I} \in E^{I}$)
Alors $Vect(X)$ (resp. $Vect(x_{i})_{i \in I}$) 
est l'ensemble des $CL$ d'éléments de $X$ (resp. de la famille $(x_{i})_{i \in I}$)

Démonstration : Pour les familles (l'autre cas est semblable)
Soit $(x_{i})_{i \in I} \in E^{I}$
On pose,
$$G = \left\{ \sum_{i \in I}\lambda_{i}x_{i} ; (\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)} \right\}$$

Montrons que $G \underset{sev}{\subset} E$
- La $CL$ vide vaut $0$ donc $0 \in G$
- $G$ est stable par addition : 
  Si $(\lambda_{i})_{i \in I}, (\mu_{i})_{i \in I} \in \mathbb{K}^{(I)}$, 
  alors $(\lambda_{i} + \mu_{i})_{i \in I} \in \mathbb{K}^{(I)}$, 
  et
  $$\sum_{i \in I}\lambda_{i}x{i} + \sum_{i \in I}\mu_{i}x_{i} = \sum_{i \in I}(\lambda_{i}+\mu_{i})x_{i}$$
  Car c'est une somme finie
  Ainsi $G$ est stable par addition

- $G$ est stable par multiplication externe
  Soit $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$ et soit $\mu \in \mathbb{K}$
  Alors, 
  $$\mu \sum_{i \in I}\lambda_{i}x_{i} = \sum_{i \in I}(\mu \lambda_{i})x_{i}$$
  Avec, $(\mu \lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$
  Donc $G$ est stable par $\cdot$
  Ainsi $G \underset{sev}{\subset} E$
  En prenant pour $i_{0} \in I$, la famille $(\delta_{i, i_{0}})_{i \in I}$ est presque nulle et $$\sum_{i \in I} \delta_{i, i_{0}}x_{i} = x_{i_{0}}$$
  Donc $x_{i_{0}} \in G$
  
  Ainsi $G \underset{sev}{\subset} E$ tel que ($\forall i \in I, x_{i} \in G$)
  Montrons que c'est le plus petit : 
  Soit $F \underset{sev}{\subset} E$ tel que ($\forall i \in I, x_{i} \in F$)
  Soit $x \in G$,
  c'est par définition de $G$ une combinaison linéaire des $x_{i}$,
  or $F \underset{sev}{\subset} E$ donc il est stable par CL et ($\forall i \in I, x_{i} \in F$) donc $x \in F$
  Ainsi, $G \subset F$

Finalement $G = Vect(x_{i})_{i \in I}$


#### Remarque
Le fait que $Vect(x_{i})_{i \in I} \subset E$ se reformule ainsi :

#### Propriété
Toute CL de CL de $(x_{i})_{i \in I}$ est encore une CL de $(x_{i})_{i \in I}$


#### Propriété
Soient $X, Y \subset E$, 
Alors
$$X \subset Vect(X)$$
$$X \subset Y \Rightarrow Vect(X) \subset Vect(Y)$$
$$F \underset{sev}{\subset} E \Rightarrow Vect(F) = F$$

Démonstration : Exo facile


#### Retour sur $\mathbb{R}^{2}$, $\mathbb{R}^{3}$
Une droite vectorielle $\mathcal{D}$ de $\mathbb{R}^{2}$ a une équation de type : 
$ax+by = 0$ avec $(a, b) \neq (0, 0)$
et alors $\mathcal{D} = Vect((-b, a))$
(remarque : avec la structure euclidienne usuelle, $\vec{n}\begin{array}{|l}a \\ b\end{array}$ est normal à $\mathcal{D}$ orthogonal)

Une droite vectorielle de $\mathbb{R}^{3}$ est $Vect(u)$ avec $u \in \mathbb{R}^{3} \backslash \{(0, 0, 0)\}$ (représentation paramétrique)
Elle admet des représentations cartésiennes : 
$$\begin{cases}
ax + by +cz = 0 \\
a'x+b'y+c'z = 0
\end{cases}$$
avec $(a, b, c)$ et $(a', b', c')$ non colinéaires
Un plan vectoriel de $\mathbb{R}^{3}$ est $Vect(u, v)$ avec $u,v$ non colinéaires (resp. param)

Il admet une représentation paramétrique de la forme : 
$$ax+by+cz=0$$
(Avec la structure usuelle de $\mathbb{R}^{3}$, $(a, b, c)$ est normal au plan)


#### Exercice
Dans $\mathbb{R}^{3}$, determiner
$$F = Vect((1, 3, 5), (2, 2, 2), (5, -1, -7))$$
On pose $u_{1} = (1, 3, 5)$, $u_{2} = (2, 2, 2)$ et $u_{3} = (5, -1, -7)
On sait déja que $F$ est soit :
- L'espace nul
- Une droite vectorielle
- un plan vectoriel
- $\mathbb{R}^{3}$

Comme $(1, 3, 5) \neq (0, 0, 0)$ et $(1, 3, 5) \in F$, $F\neq \{0\}$
Comme dans une droite vectorielle tous les vecteurs sont colinéaires et $(1, 3, 5)$ et $(2, 2, 2)$ ne sont pas colinéaires, $F$ ne peut pas être restreint à une droite

Ainsi, sans calcul, $F$ est soit un plan vectoriel soit $\mathbb{R}^{3}$

> Attention :
> 3 vecteurs qui sont deux a deux non colinéaires peuvent être coplanaires. 


Soient $(x, y, z) \in \mathbb{R}^{3}$, 
Existe-t-il, $\alpha, \beta, \gamma \in \mathbb{R}$ tel que $u = \alpha u_{1} + \beta u_{2} + \gamma u_{3}$
ie tel que :
$$\begin{cases}
x = \alpha + 2 \beta + 5 \gamma \\
y = 3\alpha + 2 \beta - \gamma \\
z = 5 \alpha + 2 \beta-7\gamma
\end{cases}$$

On applique la méthode du pivot :
$$\left(\begin{array}{ccc|c}
1 &2&5&x \\
3&2&-1&y \\
5&2&7&z
\end{array}\right) \sim \left( \begin{array}{ccc|c}
1&2&5&x \\
0&-4&-16&y-3x \\
0&-8&-32&z-5x
\end{array} \right) \sim \left( \begin{array}{ccc|c}
1&2&5&x \\
0&-4&-16&y-3x \\
0&0&0&x-2y+z
\end{array} \right)$$
Ainsi, $u \in F$ ssi $x-2y+z = 0$
ie 
$F$ est un plan vectoriel de $\mathbb{R}^{3}$ d'équation $x-2y+z = 0$

#### Autres exemples
Dans $\mathbb{K}[X]$, 
$$Vect(1, X, X^{2}, \dots, X^{n}) = \mathbb{K}_{n}[X]$$

$$Vect(X^{n})_{n \in \mathbb{N}} = \mathbb{K}[X]$$

Soit $E = \mathbb{K}^{\mathbb{N}}$
On pose : $e_{i} = (\delta_{n, i})_{n \in \mathbb{N}}$
$$Vect(e_{i})_{i \in \mathbb{N}} = \mathbb{K}^{(\mathbb{N})}$$

___
Retour à $\mathbb{K}[X]$, 
$$Vect(X^{n})_{n \geq n_{0}} = X^{n_{0}}\mathbb{K}[X]$$


# IV. Famille de vecteurs
## 1. Familles génératrices
#### Définition
On dit que $X \subset E$ (resp. $(x_{i})_{i \in I} \in E^{I}$) est génératrice (de E) ou su'elle engendre $E$ ssi
$$Vect(X) = E \space (\text{resp. } Vect(x_{i})_{i \in I} = E)$$

#### Remarque
$(x_{i})_{i \in I}$ engendré par $E$
ssi
$$\forall x \in E, \exists(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}, x = \sum_{i \in I} \lambda_{i}x_{i}$$


Question : Familles génératrices de $\mathbb{R}^{3}$ ? 
$e = ((1, 0, 0), (0, 1, 0), (0, 0, 1)) = (e_{1}, e_{2}, e_{3})$
Tout $u = (x, y, z) \in \mathbb{R}^{3}$ s'écrit $u = xe_{1} + y e_{2} + ze_{3}$

Donc, 
$$Vect(e) = \mathbb{R}^{3}$$
ie $e$ engendre $\mathbb{R}^{3}$. 
On verra que cette famille s'appelle la base canonique de $\mathbb{R}$.

Trois vecteurs de $\mathbb{R}^{3}$ non coplanaires forment une famille génératrice. 

On a vu que la base canonique dans $((1, 0, 0), (0, 1, 0), (0, 0, 1))$ engendre $\mathbb{K}^{3}$ 
On a vu que $Vect((1, 3, 5), (2, 2, 2), (5, -1, -7))$ est le plan de $\mathbb{R}^{3}$ d'équation : $x-2y+z = 0$.
Cette famille n'est pas génératrice de $\mathbb{R}^{3}$

$\mathbb{K}^{n} = Vect(e_{i})_{i = 1}^{n}$
ou pour $i \in [\![1, n]\!]$, 
$$e_{i} = (\delta_{j, i})_{j = 1}^{n}$$
$(e_{i})_{i = 1}^{n}$ est la base canonique de $\mathbb{K}^{n}$

$\mathbb{K}_{n}[X]$ est engendré par : $(X^{k})_{k = 0}^{n}$ 


#### Exercice
Donner une famille génératrice de $\mathcal{M}_{3, 2}(\mathbb{K})$
$$(E_{i, j})_{i \in [\![1, 3]\!], j \in [\![1, 2]\!]}$$ est une famille génératrice de $\mathcal{M}_{3, 2}$


#### Exercice
Soit $(E_{1}) : y''=y$ et $(E_{2}) : y'' +y=0$
1. Trouver une famille qui engendre $S_{(E_{1})}$
2. Trouver une famille qui engendre $S_{(E_{2})}$

1. $S_{(E_{1})} = Vect(\exp, x \mapsto e^{ -x }) = Vect(ch, sh)$
2. $S_{(E_{2})} = Vec(\cos,\sin)$


#### Exercice
Trouver une famille génératrice de l’espace des solutions de :
$$(S) \begin{cases}
x + 3y +5z = 0 \\
2x + 2y +2z =0 \\
5x-y-7z =0
\end{cases}$$
Par l'algorithme du pivot appliqué a la matrice non augmenté de $(S)$ : 
$$\begin{pmatrix}
1&3&5 \\
2&2&2 \\
5&-1&-7
\end{pmatrix} \sim \begin{pmatrix}
1&3&5 \\
0&-4&-8 \\
0&0&0
\end{pmatrix} \sim \begin{pmatrix}
1&0&-1 \\
0&1&2 \\
0&0&0
\end{pmatrix} $$
Échelonné et réduite 

Ainsi le solutions sont : 
$$\begin{pmatrix}
1 \\
-2 \\
1
\end{pmatrix}\mathbb{R} = Vect\left(\begin{pmatrix}
1 \\
-2 \\
1
\end{pmatrix}\right)$$

#### Exercice
Trouver une famille génératrice de
$$E = \{u \in \mathbb{R}^{\mathbb{N}}|\forall n \in \mathbb{N}, u_{n+2} = u_{n+1} + u_{n}\}$$
Soit $(u_{n}) \in \mathbb{R}^{\mathbb{N}}$, tel que $u_{n+2} = u_{n+1} + u_{n}$
On est en présence d'une suite définie par une récurrence linéaire homogène à coefficient constant. 

L'équation caractéristique est : 
$$r^{2}- r-1=0$$
Les racines sont : 
$$\phi_{1,2} = \frac{1\pm\sqrt{ 5 }}{2}$$
Donc les solutions sont de la forme : 
$$(\lambda\phi_{1}^{n}+\mu \phi_{2}^{n})_{n \in \mathbb{N}}$$
ou $\lambda, \mu \in \mathbb{K}$
Donc, 
$$((\phi_{1})^{n})_{n \in \mathbb{N}}, ((\phi_{2})^{n})_{n \in \mathbb{N}}$$
Engendre $E$, 

Autre famille génératrice : 
Soit $e, f \in \mathbb{K}^{\mathbb{N}}$ définie par : 
$e_{0} = 1$, $e_{1} =0$ et $\forall n\in \mathbb{N}, e_{n+2} = e_{n+1} + e_{n}$
$f_{0} = 0$, $f_{1} = 1$ et $\forall n \in \mathbb{N}, f_{n+2} = f_{n+1}+f_{n}$  

Soit $u \in E$, 
Alors, 
$$u = u_{0} e + u_{1}f$$
En effet $u \in E$ et $u_{0}e+u_{1}f \in E$
(car $E$ est un sev de $\mathbb{K}^{\mathbb{N}}$)
Donc, elles vérifient la relation de recurrence double et comme leuts deux premiers termes sont égaux. 
$$\begin{cases}
(u_{0}e+u_{1}f)(0) = u_{0}e_{0}+u_{1}f_{0} = u_{0} \\
(u_{0}e+u_{1}f)(1) = u_{0}e_{1}+u_{1}f_{1} = u_{1}
\end{cases}$$
elles sont égales
Ainsi $E =  Vect(e, f)$

#### Propriété
Dans un espace vectoriel $E$, toute sur-famille d'une famille génératrice est génératrice

Démonstration : 
Soient $E$ un ev, $(x_{i})_{i \in J} \in E^{J}$
et $I \subset J$ tel que $(x_{i})_{i \in I}$ engendre $E$

Soit $u \in E$, 
Comme $E = Vect(x_{i})_{i \in I}$,
Il existe $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$ tel que
$$u = \sum_{i \in I} \lambda_{i}x_{i}$$
On pose pour $i \in J \backslash I, \lambda_{i} = 0$
et on obtiens ainsi $(\lambda_{i})_{i \in J}$ est presque nulle
(puisque $\{i \in J, \lambda_{i} \neq 0\} = \{i \in I, \lambda_{i} \neq 0\}$ est fini)
tel que
$$\sum_{i \in J} \lambda_{i}x_{i} = \sum_{i \in J \backslash I}0 x_{i}+ \sum_{i \in I} \lambda_{i}x_{i} = \sum_{i \in I} \lambda_{i} x_{i} = u$$
$$\text{Trivialité } \square$$


#### Remarque
Une famille $(x_{i})_{i \in I}$ engendre $E$ $\Leftrightarrow$
$$\phi_{x} :\begin{cases}
\mathbb{K}^{(I)} \to E \\
(\lambda_{i})_{i \in I} \mapsto \sum_{i \in I} \lambda_{i}x_{i}
\end{cases}$$
est surjective



#### Remarque TRES IMPORANTE
$Vect(u_{i})_{i = 1}^{n} = \mathbb{R}u_{1} + \mathbb{R}u_{2}+\mathbb{R}_{u_{3}}+ \dots + \mathbb{R}u_{n}$


## 2. Familles libres
$$u = (u_{1}, u_{2}, u_{3}) = ((1, 3, 5), (2, 2,2), (5, -1, -7))$$
On engendre $P$ d'équation : $x-2+z = 0$
pour avoir une famille génératrice de $\mathbb{R}^{3}$ on lui rajoute un vecteur $u_{4} = (1, -2, 1)$ 
Ou un des vecteurs de base canonique : 
$$u = (u_{1}, u_{2}, u_{3}, u_{4})$$
Engendre $\mathbb{R}^{3}$
(a prouver comme dans le cours précédent en résolvant le système : $\alpha u_{1}+\beta u_{2} + \gamma u_{3} + \delta u_{4} = v$ pour $v \in \mathbb{R}^{3}$ quelconque)

Est-ce une famille génératrice belle? 
Non car il y a des vecteurs inutiles : On peut par exemple enlever : $(5, -1, -7)$ (ou un des deux autres mais pas le vecteur normal !!!)

#### Exemple
Montrer que $(u_{1}, u_{2}, u_{4})$ engendre $\mathbb{R}^{3}$ : Comme avant

###### Question : Peut on enlever un vecteur a $(u_{1}, u_{2}, u_{4})$ tout en conservant une famille dans $\mathbb{R}^{3}$?
Non

#### Conclusion
$(u_{1}, u_{2}, u_{4})$ est belle 

#### Définition
Une famille est dite belle si il n'y a pas de vecteurs inutiles

#### Définition
$(x_{i})_{i \in I}$ est libre ssi 
$$\forall(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}, \left( \sum_{i \in I} \lambda_{i}x_{i} = 0 \Rightarrow \forall i \in I, \lambda_{i} = 0 \right)$$


#### Terminologie
Une famille non libre est dite liée
On dit aussi au lieu $(x_{i})_{i \in I}$ est libre, les vecteurs $x_{i} (i \in I)$ sont linéairement indépendants. 
Et au lieu de $(x_{i})_{i \in I}$ est liée, les vecteurs $x_{i}, i \in I$ sont linéairement dépendants. 

#### Exemple
$(u_{1}, u_{2}, u_{3})$ est lié : 
Si on trouve des solutions non nuls la famille est liée
Sinon elle est libre
On résout le système : 
$$(S):\alpha u_{1}+\beta u_{2}+\gamma u_{3} = 0$$
$$(S) \Leftrightarrow \begin{cases}
 \alpha + 2\beta + 5\gamma = 0 \\
3\alpha + 2\beta - \gamma =0\\
5\alpha + 2\beta - 7 \gamma=0
\end{cases}$$
On applique le pivot à : 
$$A = \begin{pmatrix}
1&2&5 \\
3&2&-1 \\
5&2&-7
\end{pmatrix}$$
$$\begin{pmatrix}
1&2&5 \\
0&-4&-16 \\
0&-8&-32
\end{pmatrix} \sim \begin{pmatrix}
1&2&5 \\
0&-4&-16 \\
0&0&0
\end{pmatrix}$$

Ainsi il existe $(\alpha, \beta, \gamma) \neq (0, 0, 0)$ tel que $\alpha u_{1}+\beta u_{2}+\gamma u_{3} = 0$
Donc, $(S)$ admet des solutions non nuls,  
Ainsi la $(u_{1}, u_{2}, u_{3})$ est liée

##### Plus généralement
Pour montrer qu'un famille est liée on prove l'existence d'une famille : 
$$(\lambda_{i})_{i \in I} \in \mathbb{K}^{I}\backslash\{0_{\mathbb{K}^{(I)}}\}$$
telle que :
$$\sum_{i \in I}\lambda_{i}x_{i} = 0$$
ie
$$\exists(\lambda i)_{i \in I} \in \mathbb{K}^{(I)}\{0_{\mathbb{K}^{(I)}}\}, \sum_{i \in I} \lambda_{i}x_{i} = 0_{E}$$

Pour determiner si une famille finie est libre ou liée la décente de l'algorithme du pivot suffit


#### Remarque
$(u_{1}, u_{2}), (u_{2}, u_{3}), (u_{1}, u_{3})$ sont libres


#### Remarque IMPORTANTE
Une partie $X \subset E$ est libre ssi $(x)_{x \in X}$ est libre
ie 
$$\forall (\lambda_{x})_{x \in X} \in \mathbb{K}^{(X)}, \left( \sum_{x \in X} \lambda_{x}x = 0 \Rightarrow \forall x \in X, \lambda_{x} =0 \right)$$


#### Remarque
$()$ est libre

(() est la famille vide)

#### Question 
Soit $u \in E$
A quelle condition $(x)$ est libre? 


#### Proposition
$$\forall x \in E, ((x)\text{ libre} \Leftrightarrow x \neq 0)$$

Démonstration : 
- Si $x = 0$,
$1x = 0$
avec $1 \neq 0$ donc $(x)$ est liée
- Si $x \neq 0$, 
Pour tout $\lambda \in \mathbb{K}$ tel que $\lambda x = 0$
on a : $\lambda = 0$ (produit mixte nul)


#### Remarque 
> $(x_{i})_{i \in I}$ est libre ssi tout CL des $x_{i}$ qui est nulle a ses coefs tous nuls

> $(x_{i})_{i \in I}$ est liée ssi'il existe une CL des $x_{i}$ nulle à coefs non tous nuls



##### Question : Pour $x, y \in E, (x, y) \text{ libre} \Leftrightarrow \space ?$

#### Proposition
Pour $x, y \in E$, $(x, y)$ est libre ssi $x$ et $y$ ne sont pas colinéaires

Démonstration : 
Soit $x, y \in E$, 
Par double implication
- $\Rightarrow$ : Par contraposition
  Supposons $x$ et $y$ sont colinéaires : 
  On a 2 cas
  - Si $y = 0$, par la propriété suivante, la famille est liée 
  - Si $y \neq 0$, il existe $\alpha \in \mathbb{K}$ tq $x = \alpha y$,
    On a alors $1x + (-\alpha) y = 0$
    Avec $1 \neq 0$, donc $(x,y)$ est liée
  Dans les 2 cas : $(x, y)$ est lilée

- $\Leftarrow$ : Par contraposition
  Supposons que $(x, y)$ est liée, ie il existe $(\lambda, \mu) \in \mathbb{K}^{2}\backslash\{(0, 0)\}$ tel que $\lambda x + \mu y = 0$
  Quite à échanger les notations son peut supposer que $\lambda \neq 0$, et on a alors, 
  $$x = -\frac{\mu}{\lambda}y$$
  Donc, $x$ et $y$ sont colinéaires. 

#### Propriété
Si l'un des vecteurs d'une famille est nul alors cette famille est liée

Démonstration : 
Soit $(x_{i})_{i \in I} \in E^{I}$ tel que $x_{i_{0}} =0$ pour un $i_{0} \in I$,

On pose $\lambda_{i} = \delta_{i, i_{0}}$ pour $i \in I$
Alors $(\lambda_{i})_{i \in I}$ est presque nulle car elle a un seul coefficient non nul et 
$$\sum_{i \in I}\lambda_{i}x_{i} = 0$$
avec $(\lambda_{i})_{i \in I} \neq 0_{\mathbb{K}^{(I)}}$



#### Propriété
Dans $\mathbb{R}^{3}$, $(u, v, w)$ est libre ssi $u$, $v$ et $w$ ne sont pas coplanaires. 

#### Remarque
Trois (ou plus) vecteurs ed $E$ qui sont 2 a 2 non colinéaires ne forment pas en général une famille libre. 

Contrexemple universel : excal5

#### Propriété
Si en écrivant en ligne (rep colone) des vecteurs de $\mathbb{K}^{n}$ sous forme de matrice on obtiens une matrice échelonnée par lignes (resp colonnes) sans lignes (resp colones) nulles, alors la familles est libre. 


#### Exemple
$$\begin{pmatrix}
1&2&3 \\
0&4&5
\end{pmatrix}$$
est échelonnée par lignes

Donc, 
$$\left(
\begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
0 \\
4 \\
5
\end{pmatrix}\right)$$
est libre dans $\mathbb{R}^{3}$
(on identifie les $n$-uplets aux matrices colones )

Donc,
$$\begin{pmatrix}
1&0 \\
2&4 \\
3&5
\end{pmatrix}$$
est échelonné par colones
Donc, 
$$\left(
\begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
0 \\
4 \\
5
\end{pmatrix}\right)$$
est libre

Idée démonstration : 
Pour $u_{1}, \dots, u_{p} \in \mathbb{K}^{\mathbb{n}}$
vérifiant l'hypothèse, si $\lambda_{1}\dots \lambda_{p} \in \mathbb{K}$ vérifient
$$\sum_{i=1}^{p}\lambda_{i}u_{i} =0$$
la colonne du premier pivot donne $\lambda_{1} = 0$
puis ma colonne du deuxième donne $\lambda_{2} = 0$
etc...


Par exemple ici, si $\alpha, \beta$ vérifient, 
$$\alpha \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix} + \beta \begin{pmatrix}
0 \\
4 \\
5
\end{pmatrix}$$

En regardant la matrice : 
$$\begin{pmatrix}
1&2&3 \\
0&4&5
\end{pmatrix}$$
Pas compris???


#### Définition
Une famille finie ou non de polynômes : $P_{0}, P_{1}, \dots$ est dite échelonnée en degré ssi $0 < deg(P_{0}) < deg(P_{1}) < \dots$


#### Proposition
Tout famille de polynôme échelonné en degré est libre


#### Remarque
Plus généralement l'indépendance linéaire ne dépend pas de l'order des vecteurs. 

#### Conséquence
Tout famille de polynômes à degré 2 a 2 distincts est libre


#### Exemple
La base canonique de $\mathbb{K}^{n}$ est libre
La base canonique $(1, X, \dots, X^{n})$ de $\mathbb{K}_{n}[X]$ est libre 
La base canonique $(X^{n})_{n \in \mathbb{N}}$ de $\mathbb{K}[X]$ est libre
La base canonique de $\mathcal{M}_{3, 2}(\mathbb{R})$ est libre

C'est immédiat


#### Exemple
Dans $\mathbb{R}^{\mathbb{R}}$, $(\cos, \sin, \exp)$ est libre

Soit $\alpha, \beta, \gamma \in \mathbb{R}$ tq $\alpha \cos + \beta \sin + \gamma \exp = 0$

Montrons par l'absurde que $\gamma = 0$ :
Sinon si $\gamma > 0$, $\gamma \exp(x) \underset{x \to + \infty}{\rightarrow} + \infty$
or $\alpha \cos + \beta \sin$ est bornée, donc
$$0 = \alpha \cos(x) + \beta \sin(x) + \gamma \exp(x) \underset{x \to + \infty}{\rightarrow} + \infty$$

Contradiction 
De même pour $\gamma <0$, 
Ainsi, $\gamma = 0$

Ainsi $\alpha \cos + \beta \sin = 0$
en $0$ : $\alpha \cos(0) + \beta\sin(0)$ or $\sin \neq 0_{\mathbb{R}^{\mathbb{R}}}$ donc, $\beta = 0$

#### Remarque
On peut aussi dériver


#### Propriété
Toute sous famille d'une famille d'une famille libre est libre

Démonstration : en exo
En s'inspirant de la propriété duale par les familles génératrices


#### Propriété / Remarque
Pour $x = (x_{i})_{i \in I}$
et, 
$$\phi_{x} : \begin{cases}
\mathbb{K}^{(I)} \to E \\
(\lambda_{i})_{i \in I} \mapsto \sum_{i \in I} \lambda_{i}x_{i}
\end{cases}$$
$x$ est libre ssi $\phi_{x}$ est injective

Démonstration : 
- $\Leftarrow$ : Supposons $\phi_{x}$ injective
  Soit $(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}$ tel que 
  $$\sum_{ i \in I}\lambda_{i}x_{i} =0$$
  On pose $\mu_{i} = 0$ pour tout $i \in I$.
  et on a :
  $$\phi_{x}((\lambda_{i})_{i}) = \sum_{i \in I} \lambda_{i}x_{i}=0=\sum_{i \in I} \mu_{i}x_{i} = \phi_{x}((\mu_{i})_{i})$$
  Par injectivité : $(\lambda_{i})_{i \in I} = (\mu_{i})_{i \in I}$
  ie $\forall x \in I, \lambda_{i} = \mu_{i} = 0$
  Donc, $(x_{i})_{i \in I}$ est libre

- $\Rightarrow$ : Supposons que $(x_{i})_{i \in I}$ est libre.
  Soient $(\lambda_{i})_{i \in I}, (\mu_{i})_{i \in I} \in \mathbb{K}^{(I)}$ tels que, $\phi_{x}((\lambda_{i})_{i \in I}) = \phi_{x}((\mu_{i})_{i})$
  Alors, 
  $$\sum_{i \in I} \lambda_{i}x_{i} = \sum_{i \in I} \mu_{i}x_{i}$$
  Donc, 
  $$\sum_{i \in I}(\lambda_{i}-\mu_{i})x_{i} = 0$$
  Comme $(x_{i})_{i \in I}$ est libre, $\forall i \in I, \lambda_{i}-\mu_{i} = 0$,


On a la :
#### Propriété
$O$ est absorbant
$$\text{Fopof }\in \text{Tchatcheurs}$$


## 3. Bases et coordonnées
#### Définition
$e = (e_{i})_{i \in I} \in E^{I}$ est une base de $E$ ssi elle est libre et génératrice (de $E$)

#### Exemple
Toutes les bases canoniques vues précédemment sont des bases (on a vu qu'elles ékovert libre et génératrices)


#### Propriété
Si $(x_{i})_{i \in I} \in E^{I}$ est libre alors c'est une base de $Vect(x_{i})_{i \in I}$

Démonstration : Triviale

#### Exemple
Deux vecteurs non colinéaires de $\mathbb{R}^{3}$ forment une base du plan qu'ils engendrent. 

#### Autres exemples
$$(u_{1}, u_{2}, u_{4}) = ((1, 3, 5), (2, 2, 2), (1, -2, 1))$$
est elle une base de $\mathbb{R}^{3}$
On a vu qu'elle est libre 
Est-elle génératrice? 

Pour $(x, y, z) \in \mathbb{R}^{3}$ on cherche si 
$$\begin{cases}
\alpha+2\beta+\gamma = x \\
3\alpha+2\beta -2\gamma = y \\
5\alpha + 2 \beta + \gamma = z
\end{cases}$$

On cherche si ce système a des solutions ce qui se verra a la fin de la descente.

Sinon on peut appliquer nos connaissances des sous espaces vectoriels de $\mathbb{R}^{2}$ :
Comme $(u_{1}, u_{2})$ est une sous famille d'une famille libre $((u_{1}, u_{2}, u_{4}))$ elle est libre, donc engendre un plan vectoriel de $\mathbb{R}^{3}$.
Comme $(u_{1}, u_{2}, u_{4})$ est libre ses vecteurs ne sont pas coplanaires donc, $u_{4} \notin P$
Ainsi $F = Vect(u_{1}, u_{2}, u_{4}) \supsetneq P$ 
D'après notre connaissance des sev de $\mathbb{R}^{3}$, comme $F$ n'est pas un plan, une droite ou $\{0\}$, c'est que $F = \mathbb{R}^{3}$. 
Dans les deux cas on a prouvé que $(u_{1}, u_{2}, u_{4})$ engendre $\mathbb{R}^{3}$ et connue elle est libre c'est une base de $\mathbb{R}^{3}$.


En combinant les résultats précédemment on à la 
#### Propriété : Une caractérisation des bases
Soit $x = (x_{i})_{i \in I} \in E^{I}$ et 
$$\phi_{x}: \begin{cases}
\mathbb{K}^{(I)} \to E \\
(\lambda_{i})_{i \in I} \mapsto \sum_{i \in I} \lambda_{i}x_{i}
\end{cases}$$
Alors 
$x$ est une base ssi $\phi_{x}$ est bijective

###### Reformulation
$x$ est une base ssi
$$\forall u \in E, \exists!(\lambda_{i})_{i \in I} \in \mathbb{K}^{(I)}, \sum_{i \in I}\lambda_{i}x_{i} = u$$


#### Définition
Soit $e = (e_{i})_{i \in I}$ une base de $E$.
Pour $x \in E$, par ce qui précède il existe une unique famille $(x_{i})_{i \in I} \in \mathbb{K}^{(I)}$ telle que 
$$x = \sum_{i \in I}x_{i}e_{i}$$
qu'on appelle famille des coordonnées de $x$ dans la base $e$ 

#### Exemple
Les coordonnées de $(x, y, z) \in \mathbb{R}^{3}$ dans la base canonique sont $x, y$ et $z$

## 1. Cas d'une base finie
Si $E$ possède une base finie $(e_{i})_{i =1}^{n}$.
Alors on peut représenter la famille eds coordonées de $x \in E$
par une matrice colonne qu'on appelle la matrice de $x$ dans la base $e$
$$Mat_{e}(x) = \begin{pmatrix}
x_{1} \\
x_{2} \\
. \\
. \\
. \\
x_{n}
\end{pmatrix}$$
ou les $x_{i}$ sont les uniques scalaires tels que $x = \sum_{i = 1}^{n}x_{i}e_{i}$ ie les coordonnés de $x$.

#### Exercice
Pour $u = (x, y, z) \in \mathbb{R}^{3}$, calculer
$Mat_{b}(u)$, pour $b = (b_{1}, b_{2}, b_{3}) = ((1, 3, 5), (2, 2, 2), (1, -2, 1))$
et donner une interprétation matricielle de ce calcul. 

# V. Somme de sous espaces vectoriels
Soir $E$ un $\mathbb{K}$-ev
## 1. Somme
#### Définition
Soient $F, G \underset{sev}{\subset} E$, 
La somme de $F$ et $G$ est
$$F+G = \{f + g ; (f, g) \in F \times G \}$$


#### Exemple
$$\mathbb{R}\begin{pmatrix} 1 \\
0 \\
1 \end{pmatrix} + \mathbb{R} \begin{pmatrix}
1 \\
2 \\
0
\end{pmatrix} = \left\{\begin{pmatrix}
\lambda \\
0 \\
\lambda
\end{pmatrix}+ \begin{pmatrix}
\mu \\
2\mu \\
0
\end{pmatrix};\lambda, \mu \in \mathbb{R}\right\}$$


#### Propriété
Si $F, G \underset{sev}{\subset} E$, $F+G$ est le sev de $E$

Démonstration : 
1. $0_{E} = O_{E} + O_{E} \in F+G$ car $F, G \underset{sev}{\subset} E$
2. Soit $\lambda \in \mathbb{K}$ et $u_{1}, u_{2} \in F+G$ 
   Il existe $f_{1}, f_{2} \in F$ et $g_{1}, g_{2} \in G$ tel que
   $$\begin{cases}u_{1} = f_{1}+g_{1} \\ u_{2} = f_{2} + g_{2}\end{cases}$$
   Alors, $\lambda u_{1}+u_{2} = (\lambda f_{1}+f_{2}) + (\lambda g_{1}+g_{2}) \in F+G$ ($F, G$ sev)

Comme $F+G$ est non vide et stable par combinaison linéaire $F+G \underset{sev}{\subset} E$

#### Exemple
excal 6.
Comment distinguer ces 2 cas? 
Qu'y a-t-il de spécial dans le second cas?
L'écriture de $u \in \mathbb{R}^{3}$ comme somme de $d+p$ est unique

#### Définition
Soient $F, G \underset{sev}{\subset} E$, 
On dit que la somme $F+G$ est directe et on la note alors $F \oplus G$ lorsque tout vecteur de $F + G$ s’écrit de manière unique comme somme d'un élément de $F$ et d'un élément de $G$ ie
$$\forall u \in F+G, \exists!(f, g) \in F \times G, U = f + g$$

#### Remarque
En notant
$$\Psi_{F, G} : \begin{cases}
F \times G \to E \\
(f, g) \mapsto f+g
\end{cases}$$
On a :
$F+G = \Psi_{F, G}(F \times G)$
et $F+G$ est directe ssi $\Psi_{F, G}$ est injective


#### Théorème : Caractérisation des sommes directe de deux sev
Soient $F, G \underset{sev}{\subset} E$, 
Alors $F+G$ est directe ssi $F \cap G = \{0\}$ 

Démonstration : 
Par double implication : 
Supposons que $F+G$ soit directe, alors $0 \in F\cap G$ (car $F \cap G$ sev)
Soit $x \in F \cap G$
Alors, 
$$\begin{cases}
x = x + 0 \text{ on a : } x \in F \text{ et } 0 \in G \\
x = 0 + x \text{ on a : } 0 \in F \text{ et } x \in G
\end{cases}$$
Donc par unicité de l'écriture de $x$ comme somme d'un élément de $F$ et d'un élément de $G$,
Donc, $F \cap G = \{0\}$

Réciproquement
Supposons que $F \cap G = \{0\}$, 
Soit $u \in F+G$

et deux éléments de $u$
$$u = f_{1} (\in F) + g_{1} (\in G) = f_{2} (\in F) + g_{2} (\in G)$$
Alors, 
$$f_{1}-f_{2} = g_{2}-g_{1} \in F \cap G$$
Donc, $f_{1}-f_{2}=0$, donc $f_{1}=f_{2}$
et $g_{2}-g_{1} = 0$ donc $g_{1}=g_{2}$
Ainsi tout $u \in F+G$ s'écrit de manière unique comme somme d'un élément de $F$ d'un de $G$ ie
$F+G$ est directe

#### Exemple
Dans $\mathbb{R}^{3}$ : deux droites (vectorielles) different, une droite et un plan qui ne la contient pas.

#### Exemple
$P = \{\text{fonction paire sur }\mathbb{R}\}$
$I = \{\text{Fonction impaire sur }\mathbb{R}\}$

$\mathbb{R}^{\mathbb{R}} = P \oplus I$
$\mathcal{M}_{n}(\mathbb{R}) = S_{n}(\mathbb{R}) \oplus A_{n}(\mathbb{R})$

#### Définition
Pour $F, G \underset{sev}{\subset} E$ on dit qu'ils sont supplémentaires ssi 
$$E = F \oplus G$$

#### Exemple
$P$ et $I$ sont supplémentaires dans $\mathbb{R}^{\mathbb{R}}$
$\mathcal{S}_{n}(\mathbb{R})$ et $\mathcal{A}_{n}(\mathbb{R})$ sont supplémentaires dans $\mathcal{M}_{n}(\mathbb{R})$

#### Définition
Soient $F_{1}, \dots, F_{p} \underset{sev}{\subset} E$, 
Alors, 
$$\sum_{i=1}^{p} F_{i} = \left\{  \sum_{i=1}^{p} f_{i} \space ; \space \forall i \in [\![1, p]\!], f_{i} \in F_{i} \right\}$$
est la somme des $F_{i}$


#### Définition
$$\sum_{i =1}^{p} F_{i} \text{ est directe ssi}$$
$$\forall x \in \sum_{i = 1}^{p}F_{i}, \exists!(f_{i})_{i =1}^{p} \in \prod_{i = 1}^{p} F_{i}, x = \sum_{i = 1}^{p} f_{i}$$
Notation : 
$$c$$


#### Théorème : Caractérisation
$\sum_{i = 1}^{p} F_{i}$ est directe 
ssi
$$\begin{cases}
\forall(f_{i})_{i = 1}^{p} \in \prod_{i=1}^{p} F_{i}, \\
\left( \sum_{i =1}^{p} f_{i} = 0 \Rightarrow \forall i \in [\![1, p]\!], f_{i} = 0 \right)
\end{cases}$$
Car la décomposition de vecteurs non nul est unique


#### Exercice
Exprimer indépendance linéaire en terme de somme directe 

> Attention 
> $$F_{1} \cap F_{2} \cap F_{3} = \{0\} \nRightarrow F_{1}+F_{2}+F_{3} \text{ est directe}$$ 


Excal 7

> Attention
> $$F_{1} \cap F_{2} = F_{2} \cap F_{3} = F_{3} \cap F_{1} = \{0\} \nRightarrow F_{1}+F_{2}+F_{3} \text{ est directe}$$ 



## 2. Bases adaptés
#### Définition
$F \underset{sev}{\subset} E$
Une base de $E$ adapté à $F$ et une vase $(b_{i})_{i \in J \sqcup K}$ de $E$ tel que $(b_{i})_{i \in J}$ soit une base de $F$


#### Exmemple
Vase adapté à un plan dans $\mathbb{R}^{3}$
$(b_{1}, b_{2}, b_{3})$ base de $\mathbb{R}^{3}$
tel que $(b_{1}, b_{2})$ base de $P$


#### Propriété
Supposons que $E = \overset{p}{\underset{k = 1}{\oplus}} F_{k}$
et pour tout $k \in [\![1, p]\!]$, 
$(b_{i})_{i \in I_{k}}$ soit une base de $F_{k}$ (avec $I_{k}$ 2 à 2 disjoint)
Alors,
$$(b_{i})_{i \in \bigsqcup_{k=1}^{p}I_{k}}$$
est une base de $E$, dite adaptée à la décomposition de $E$ en somme directe : 
$$E = \overset{p}{\underset{k = 1}{\oplus}} F_{k}$$


#### Propriété
Si $(b_{i})_{i \in \bigsqcup_{k = 1}^{p} I_{k}}$ est une base de $E$,
alors en notant pour tout $k \in [\![11, p]\!]$, $F_{k}=Vect(b_{i})_{i \in I_{k}}$
On a : 
$$E = \overset{p}{\underset{k = 1}{\oplus}} F_{k}$$
(et la base est adapté a cette décomposition de $E$)


# VI. Complément sur les familles
#### Théorème
Une famille de $E$ est une base
ssi elle est libre maximale
ssi elle est génératrice minimale

(ou "libre maximale" signifie qu'elle est .......) 

Démonstration : 
Supposons $x = (x_{i})_{i \in I}$ base de $E$.
Montrons qu'elle est libre maximale

1. Comme c'est une base elle est libre
2. Quitte a enlever des vectedurs ce qui conserve l'indépendance linéaire, on prend un famille avec un vecteur supplémentaire et on montre qu'elle est liée. On note $x_{i_{0}}$ avec $i_{0} \notin I$ le vecteur. Comme $x$ est une base, $x_{i_{0}}$ s'écrit dans cette base : $x_{i_{0}} = \sum_{i \in I} \lambda_{i}x_{i}$. 

Donc en posant $\lambda_{i_{0}} = 1$, on a
$$\sum_{i \in I \cup \{i_{0}\}} \lambda_{i}x_{i} = 0$$
Avec les $\lambda_{i}$ noun tous nuls car $\lambda_{i_{0}} \neq 0$, 
Donc, $(x_{i})_{i \in I \cup \{i_{0}\}}$ est liée
Ainsi toute sur-famille de $x$ est liée donc $x$ est libre maximale. 

Réciproquement, 
Supposons que $x$ est libre maximale et montrons que c'est une base

Soit $y \in E$. Si $y = 0$ c'est trivial.
Sinon, on pose avec $i_{0} \notin, x_{i_{0}} =y$
Alors la famille $(x_{i})_{i \in I \cup \{i_{0}\}}$ est une famille stricte de $x$ donc est liée donc il existe, 
$$(\lambda_{i})_{i \in I \cup \{i_{0}\}} \in \mathbb{K}^{(I \cup \{i_{0}\})} \backslash\{0\}$$
$$\sum_{i \in I \cup \{i_{0}\}} \lambda_{i}x_{i}=0$$
Montrons par l'absurde que $\lambda_{i_{0}} \neq 0$ 
S'il l'était on aurait : 
$$\sum_{i \in I} \lambda_{i}x_{i} = 0$$
avec les $\lambda_{i}$ presque non nuls
et comme $x$ est libre, c'est une contradiction

Ainsi, $\lambda_{i_{0}} \neq 0$, et 
$$y = x_{i_{0}} = \sum_{i \in I}\left( - \frac{\lambda_{i}}{\lambda_{i_{0}}} \right)x_{i}$$
Ainsi, tout $y \in E$ est CL eds $x_{i}$ 
ie $x$ est génératrice
et comme elle est libre c'est une base
























$$\overset{p}{\underset{i = 1}{\oplus}}$$
$$\underset{sev}{\subset}$$