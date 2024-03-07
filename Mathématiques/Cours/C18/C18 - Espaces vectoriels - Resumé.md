# Définition d'un espace vectoriel
$(E, +, \cdot)$ est un $\mathbb{K}$-espace vectoriel ssi
- $(E, +)$ est un groupe abélien
- $\cdot$ est une loi externe $\begin{cases} \mathbb{K} \times E \to E \\ (\lambda, u) \mapsto \lambda u  \end{cases}$
- On à les 4 propriétés : 
  - La propriété des flemmards :
    $$\forall u \in E, 1_{\mathbb{K}}\cdot u = u$$
  - L'associativité mixte : 
    $$\forall \lambda, \mu \in \mathbb{K}, \forall u \in E, (\lambda \mu)u = \lambda(\mu u)$$
  - Distributivité a gauche : 
   $$\forall \lambda \in \mathbb{K}, \forall u, v \in E, \lambda(u+v) = \lambda u-\lambda v$$
  - Distributivité à droite : 
   $$\forall \lambda, \mu \in \mathbb{K}, \forall u \in E, (\lambda+\mu)u = \lambda u + \mu u$$
# Propriété
$$\forall \lambda \in\mathbb{K}, \forall u\in E, \lambda u = 0_{E} \Leftrightarrow (\lambda = 0_{\mathbb{K}} \text{ ou } u = 0_{E})$$

# Propriété
$$\forall u \in E, (-1_{\mathbb{K}})u = -u$$

# Propriété
Tout produit cartésien d'espace vectoriels (comme définit dans le cours) est un espace vectoriel.

# Cas particulier important
Soit $J \subset \mathbb{N}$, 
Soit $E_{j}$ un ev pour tout $j \in J$,
On pose $E = (E_{j})_{j \in J}$
Si tous les $E_{j}$ sont identiques.
Alors le produit cartésien de tous les éléments de la famille $E$ est : $E^{J}$, ses éléments sont des familles d'éléments de $E$ tous indexés par $J$, i.e. des applications de $J \to E$ 

En général lorsqu'on utilise le cadre des applications on note $E^{X}$ avec $X$ un ensemble quelconque. 

# Propriété 
Pour $X$ un ensemble quelconque et $E$ un $\mathbb{K}$-e.v., 
$E^{X}$ est naturellement muni d'une structure de $\mathbb{K}$-e.v. : la structure produit. 

# Cas général (CL généralisées)

Soit $(x_{i})_{i \in I}$ un famille de vecteurs de $E$ et 
$(\lambda_{i})_{i \in I}$ une famille <u>presque nulle</u> de scalaires
On appelle combinaison linéaire des $x_{i}$ le vecteur de $E$ défini par : 
$$\sum_{i \in I}\lambda_{i}x_{i}$$

# Proposition
Pour $I$ un ensemble quelconque, $\mathbb{K}^{(I)}$ est un $\mathbb{K}$-ev pour les lois induites par celles de $\mathbb{K}^{I}$

# Définition
Soit $E$ un $\mathbb{K}$-ev
Alors $F$ est un sous-espace vectoriel de $E$ ssi
$F \subset E$ est stable par addition et par multiplication par des scalaires et munie des lois induites c'est un $\mathbb{K}$-ev


Soit $E$ un $\mathbb{K}$-ev et $F \subset E$, 
Alors, $F \underset{sev}{\subset} E$ ssi
## Caractérisation 1
$F$ est stable par $CL$ généralisées

## Caractérisation 2
- $F \neq \varnothing$
- $\forall \lambda \in \mathbb{K}, \forall x, y \in F, \lambda x + y \in F$

## Caractérisation 3
- $F \neq \varnothing$
- $F$ est stable par $+$
- $F$ est stable par multiplication par les scalaires

(Cas ou les calculs sont compliqués)

## Exemple important
L'ensemble des droites du plan est un sous espace vectoriel de $\mathbb{R}^{2}$.


# Propriété
Pour tout $F \underset{sev}{\subset} E$, $0_{E} \in F$
Par contraposition : 
Si $0_{E} \notin F$, $F$ n'est pas un sev de $E$

(Car une droite affine de $\mathbb{R}^{2}$ qui ne passe pas par l'origine n'est pas un sev de $\mathbb{R}^{2}$)

# Propriété
Les sev de $\mathbb{R}^{2}$ sont :
- $\{(0, 0)\}$
- Les droites vectorielles (ie passant par $(0, 0, 0)$)
- $\mathbb{R}^{2}$

# Propriété
Les sev de $\mathbb{R}^{3}$ sont : 
- $\{(0, 0, 0)\}$
- Les droites vectorielles (ie passant par $(0, 0, 0)$)
- Les plans vectoriels (ie passant par $(0, 0, 0)$)
- $\mathbb{R}^{3}$

# Propriété
Un sous espace vectoriel d'un sous espace vectoriel de $E$ est un sous espace vectoriel de $E$

# Proposition
Toute intersection de sous espace vectoriel de $E$ est un sous espace vectoriel de $E$

# Définition : Sous espace vectoriel engendré (Ensemble)
Soit $X \subset E$, 
On note $\mathcal{F}_{X}$ l'ensemble des sev $F$ de $E$ tel que $X \subset F$
On appelle sous espace vectoriel engendré par $X$ : 
$$Vect(X) = \bigcap_{F \in \mathcal{F}_{X}} F = \bigcap_{\underset{\text{tq }X \subset F}{F \underset{sev}{\subset} E}}F$$

# Définition : Sous espace vectoriel engendré (Famille)
Si $(x_{i})_{i \in I} \in E^{I}$, le sev engendré par $x_{i}$ est :
$$Vect(x_{i})_{i \in I} = Vec(\{x_{i}; i \in I\}) = \bigcap_{F \underset{sev}{\subset} E}F$$

# Propriété
Avec les notations ci dessus
A sens de l'inclusion, 
$Vect(X)$ est le plus petit sev de $E$ qui contient $X$ 
(resp. $Vect(x_{i})_{i \in I}$ est le plus petit des sev de $E$ qui contient $\{x_{i}, i \in I\}$)


# Définition : colinéarité
Pour $u, v \in E$ or on dit que $u$ et $v$ sont colinéaires ssi
$$\exists \lambda \in \mathbb{K}, (u = \lambda v \text{ ou } v = \lambda u)$$

# Proposition
Soit $X \subset E$ (resp $(x_{i})_{i \in I} \in E^{I}$)
Alors $Vect(X)$ (resp. $Vect(x_{i})_{i \in I}$) 
est l'ensemble des $CL$ d'éléments de $X$ (resp. de la famille $(x_{i})_{i \in I}$)

# Propriété
Toute CL de CL de $(x_{i})_{i \in I}$ est encore une CL de $(x_{i})_{i \in I}$

# Propriété
Soient $X, Y \subset E$, 
Alors
$$X \subset Vect(X)$$
$$X \subset Y \Rightarrow Vect(X) \subset Vect(Y)$$
$$F \underset{sev}{\subset} E \Rightarrow Vect(F) = F$$

# Définition
On dit que $X \subset E$ (resp. $(x_{i})_{i \in I} \in E^{I}$) est génératrice (de $E$) ou qu'elle engendre $E$ ssi
$$Vect(X) = E \space (\text{resp. } Vect(x_{i})_{i \in I} = E)$$


# Propriété
Dans un espace vectoriel $E$, toute sur-famille d'une famille génératrice est génératrice

___
# Théorème : Caractérisation de la somme directe de sous espaces vectoriels
$\sum_{i = 1}^{p} F_{i}$ est directe $(\Leftrightarrow \overset{p}{\underset{i = 1}{\oplus}} F_{i})$
ssi
$$\begin{cases}
\forall(f_{i})_{i = 1}^{p} \in \prod_{i=1}^{p} F_{i}, \\
\left( \sum_{i =1}^{p} f_{i} = 0 \Rightarrow \forall i \in [\![1, p]\!], f_{i} = 0 \right)
\end{cases}$$
Car la décomposition de vecteurs non nul est unique

