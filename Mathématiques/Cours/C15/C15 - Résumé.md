# Définition : Matrice
Une matrice à $n$ lignes et $p$ colones à coefficient dans $\mathbb{K}$ est une famille d'éléments de $\mathbb{K}$ indexé par $[\![1, n]\!] \times [\![1, p]\!]$. 
Autrement dit un élément de $\mathbb{K}^{[\![1, n]\!] \times [\![1, p]\!]}$

$$A = \left( \begin{array}{l}
a_{1, 1}&a_{1, 2}&\dots&a_{1, p} \\
a_{2, 1}&a_{2, 2}&\dots&a_{2,p} \\
\dots & \dots & & \dots\\
\dots & & \dots & \dots\\
a_{n, 1}&a_{n, 2}&\dots&a_{n, p}
\end{array} \right) = (a_{i, j}) = (a_{i, j})_{i,j} = (a_{i, j})_{\underset{1\leq j\leq p}{1\leq i\leq n} }$$

$$ = (a_{i, j})_{(i, j) \in [\![1, n]\!]\times [\![1, p]\!]}$$


# Propriété : Groupe abélien $\mathcal M_{n, p}(\mathbb{K})$
$$(\mathcal{M}_{n, p}(\mathbb{K}), +) \text{ est un groupe abelien}$$


# Propriété : 4 propriétés d'espaces vectoriels
Propriété des flemmards :
$$\forall A \in \mathcal{M}_{n, p}(\mathbb{K}), 1 \cdot A = A$$
Associativité mixte :
$$\forall \lambda, \mu \in \mathbb{K}, \forall A \in \mathcal{M}_{n, p}(\mathbb{K}), (\lambda \mu)A = \lambda(\mu A)$$
Distributivité mixte à gauche :
$$\forall \lambda \in \mathbb{K}, \forall A, B \in \mathcal{M}_{n, p}, \lambda(A+B) = \lambda A + \lambda B$$
Distributivité mixte à droite :
$$\forall \lambda, \mu \in \mathbb{K}, \forall A \in \mathcal{M}_{n, p}(\mathbb{K}), (\lambda+\mu)A = \lambda A+\mu A$$

On dit que $\mathcal{M}_{n, p}(\mathbb{K})$ est un $\mathbb{K}$ espace vectoriel


# Définition : Matrices élémentaires
Pour $(k, n)\in [\![1, n]\!] \times [\![1, p]\!]$, 
On note
$$E_{k, l} = \left( \begin{array}{l}
\delta_{(i, j)(k, l)}
\end{array} \right)_{\underset{1 \leq j \leq p}{1 \leq i \leq n}} = (\delta_{i, k}\delta_{j, l})_{i, j} $$
On appelle matrice élémentaires ces matrices. 

# Rappel : Symbol de Kronetier
$\delta_{x, y} = 1$ si $x = y$

# Propriété Réécrite Matrice
Toute matrice $A = (a_{i, j}) \in \mathcal{M}_{n, p}(\mathbb{K})$ s'écrit comme combinaison linéaire a coefficient dans $\mathbb{K}$ des matrices élémentaires, 
de manière unique : 
$$A = \sum_{(k, l) \in [\![1, n]\!] \times [\![1, p]\!]} a_{k, l}E_{k, l}$$
On dira que la famille $(E_{k, l})_{k, l}$ est une base de $\mathcal{M}_{n, p}(\mathbb{K})$ 


# Définition : Base canonique
$(E_{k, l})_{\underset{1 \leq l \leq p}{1 \leq k \leq n}}$  est appelée la "base canonique" de $\mathcal{M}_{n, p}(\mathbb{K})$

# Définition : Produit matriciel
Pour $A = (a_{j, k}) \in \mathcal M_{n, p}(\mathbb{K})$ et $B = (b_{j, k}) \in \mathcal M_{p, q}(\mathbb{K})$, 
$AB \in \mathcal M_{n, q}(\mathbb{K})$ est définie par :
$$\forall(i, k) \in [\![1, n]\!] \times [\![1, q]\!], (AB)[i, k] = \sum_{j = 1}^p a_{i, j}b_{j, k}$$


# Proposition : Bilinéarité du produit matriciel 
Le produit matriciel est bilinéaire ie linéaire à gauche : 
$$\forall A, A' \in \mathcal M_{n, p}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \forall B \in \mathcal M_{p, q}(\mathbb{K}), (\lambda A + A')B = \lambda (AB) + A'B$$
et à droite : 
$$\forall A \in \mathcal M_{n, p}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \forall B, B' \in \mathcal M_{p, q}(\mathbb{K}), A(\lambda B + B') = \lambda (AB) + AB'$$


# Lemme : Produit d'un élément de la base canonique avec matrice 
Soit $(i_{0}, j_{0}) \in [\![1,n]\!] \times [\![1, p]\!]$ et $E_{i_{0}, j_{0}}$ l'élément correspondant de la base canonique de $\mathcal M_{n, q}(\mathbb{K})$. 
Alors pour tout $B = (b_{ij}) \in \mathcal M_{p, q}(\mathbb{K})$, 
$E_{i_{0}, j_{0}}B$ est l'élément de $\mathcal M_{n, q}(\mathbb{K})$
Donc la seule ligne non nulle est celle d'indice $i_{0}$, qui de plus est égal a la ligne d'indice $j_{0}$ de $B$, ce qui s'écrit
$$E_{i_{0}, j_{0}}B = (\delta_{i, i_{0}}b_{j_{0}k})_{ik}$$
De même pour $C = (c_{li}) \in \mathcal M_{r, n}(\mathbb{K})$
$$CE_{i_{0}, j_{0}} = (\delta_{j, j_{0}}c_{l, i_{0}})_{l, j}$$
est la matrice dont la seule colonne non nulle est celle d'indice $j_{0}$ qui de plus est égal à la colonne de $C$ d'indice $i_{0}$ 

# Corollaire du produit d'un élément de la base canonique avec matrice 
$$\forall(i, j) \in [\![1, n]\!] \times [\![1, p]\!], \forall(j', k) \in [\![1, p]\!] \times [\![1, q]\!], E_{i, j}^{n, p}E_{j', k}^{p, q} = \delta_{j, j'}E_{i, k}^{n, q}$$

# Théorème : Associativité du produit matriciel
$$\forall (A, B, C) \in \mathcal{M}_{n, p}(\mathbb{K}) \times \mathcal{M}_{p, q}(\mathbb{K}) \times \mathcal{M}_{q, r}(\mathbb{K}), (AB)C = A(BC)$$

# Définition : Matrice carrée
Une matrice carré d'ordre $n$ est un élément de $\mathcal M_{nn}(\mathbb{K})$, 
qu'on note pour alléger $\mathcal M_{n}(\mathbb{K})$


# Définition matrice identité
La matrice identité d'ordre $n$ est :

$$I_{n} = \left( \begin{array}{c}
1&0 \\
0&1
\end{array} \right) = (\delta_{i, j})_{1\leq i, j\leq n}$$

# Propriété
$$\forall A \in \mathcal M_{n, p}(\mathbb{K}), I_{n}A = AI_{p} = A$$

# Théorème
$$(\mathcal M_{n}(\mathbb{K}), +, \times) \text{ est un anneau}$$

# Remarque
On dit que
$$(\mathcal M_{n}(\mathbb{K}), +, \cdot, \times)$$
est $\mathbb{K}$ algèbre
ie
$$\left\{ \begin{array}{l}
(\mathcal M_{n}(\mathbb{K}), +, \cdot) \text{ } \mathbb{K} \text{ espace vectoriel} \\
(\mathcal M_{n}(\mathbb{K}), +, \times) \text{ anneau} \\
\forall A, B \in \mathcal M_{n}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \lambda(AB) = (\lambda A)B = A(\lambda B)
\end{array} \right.$$

# Remarque
$$(\mathcal M_{n}(\mathbb{K}), +, \times) \text{ n'est pas un corp}$$

Pour deux raisons :
- Pas commutatif
- Admet des non nuls non-inversibles

# Définition : Nilpotence
$N \in \mathcal M_{n}(\mathbb{K})$ est dite nilpotente
s'il existe $k \in \mathbb{N}^*$ tq $N^k = 0$
Le plus petit $k$ est appelé l'indice de nilpotence $r$. On a alors :
$$\forall k \geq r, N^k = 0$$

# Formule du binôme
Pour tout, $A, B \in \mathcal M_{m}(\mathbb{K})$ telles que $AB = BA$
et $n \in \mathbb{N}$, 
$$(A+B)^n = \sum_{k = 0}^n \binom{n}{k}A^kB^{n-k}$$

# Formule de Bernoulli
Pour tout, $A, B \in \mathcal M_{m}(\mathbb{K})$ telles que $AB = BA$
et $n \in \mathbb{N}$, 
$$A^{n+1}-B^{n+1} = (A-B)\sum_{k = 0}^{n} A^kB^{n-k}$$

# Définition : Groupe linéaire
Le groupe des inversibles de $\mathcal M_{n}(\mathbb{K})$ est appelé le groupe linéaire d'ordre $n$ sur $\mathbb{K}$ et noté $GL_{n}(\mathbb{K})$
(groupe pour $\times$)

# Théorème : Matrices inversibles a droite et a gauche
Soit $A \in \mathcal M_{n}(\mathbb{K})$, 
Alors $A \in GL_{n}(\mathbb{K})$ ssi
elle est inversible à gauche (ie $\exists A' \in \mathcal M_{n}(\mathbb{K}), A'A = I_{n}$)
ssi elle est inversible à droite (ie $\exists A'' \in \mathcal M_{n}(\mathbb{K}), AA'' = I_{n}$)
Dans ce cas les matrices inversibles sont égales. 
(ie l'inverse a gauche est l'inverse et celle a droite aussi)

# Théorème : Matrices inversibles / Determinant
Soit,
$$A = \left( \begin{array}{c}
a&b \\
c&d
\end{array} \right) \in  \mathcal M_{n}(\mathbb{K})$$
Alors
$$A \in GL_{2}(\mathbb{K}) \Leftrightarrow \det(A) = ad-bc \neq 0$$

et si c'est le cas : 
$$A^{-1} = \frac{1}{\det A}\left( \begin{array}{c}
d & -b \\
-c & a
\end{array} \right)$$

# Propriété : Produit de matrices
Soient $A, B \in GL_{n}(\mathbb{K})$, 
Alors $AB \in GL_{n}(\mathbb{K})$
et $(AB)^{-1} = B^{-1}A^{-1}$


# Définition : Matrice diagonale
$D \in \mathcal M_{n}(\mathbb{K})$ est dite diagonale
ssi tout ses coefficients non-diagonaux sont nuls ie
$$\forall(i, j) \in [\![1,n]\!]^2,(i \neq j \Rightarrow D[i, j] = 0)$$

Notation pratique
Si $\lambda_{1}, \dots, \lambda_{n} \in \mathbb{K}$, 
$$diag(\lambda_{1}, \dots, \lambda_{n}) = \left( \begin{array}{c}
\lambda_{1} & 0 \\
0 & \lambda_{n}
\end{array} \right)$$
($D[i, i] = \lambda_{i}$ pour tout $i \in [\![1, n]\!]$)

# Propriété sur les matrices diagonales
- Toute combinaison linéaire de matrices diagonales est diagonale
- Tout produit de matrices diagonales est diagonal. Et le produit est fait coefficient par coefficient, 	  $$\forall(\lambda_{i})_{i = 1}^n, (\mu_{i})_{i = 1}^n \in \mathbb{K}^n, diag(\lambda_{i})_{i = 1}^n diag(\mu_{i})_{i = 1}^n = diag(\lambda_{i}\mu_{i})_{i = 1}^n$$
- Un matrice diagonale est inversible ssi tous ses coefficients sont diagonaux $\lambda_{i}, i \in [\![1, b]\!]$ sont non nuls et alors
	$$(diag(\lambda_{i})_{i = 1}^n)^{-1} = diag(\lambda_{i}^{-1})_{i =1}^n$$
# Notation : Matrices diagonales
$D_{n}(\mathbb{K})$ est l'ensemble des matrices diagonales d'ordre $n$

# Propriété
$$D_{n} \underset{s.g.}{\subset} \mathcal M_{n}(\mathbb{K}) \text{ (pour +)}$$
et mieux : 
 $(D_{n}(\mathbb{K}), +, \cdot)$ est un sous anneau de $(D_{n}, +, \cdot)$ (et mieux $D_{n}(\mathbb{K})$ est une sous algèbre de $(\mathcal M_{n}(\mathbb{K}), +, \cdot, \times)$. 

# Définition : Matrices triangulaires sup et inf
$T \in \mathcal M_{n}(\mathbb{K})$ est triangulaire supérieure
ssi tous ses coefficients strictement sous-diagonaux sont nuls ie
$$\forall(i, j)\in [\![1, n]\!]^2, (i>j) \Rightarrow T[i, j] = 0$$

(Inférieur est analogue)

# Notation : Matrices triangulaires sup et inf
$\mathcal T_{n}^{sup}(\mathbb{K})$ est l'ensemble des matrices supérieures
$\mathcal T_{n}^{inf}(\mathbb{K})$ est l'ensemble des matrices supérieures

# Propriété : Opérations
- Toute combinaison linéaire de matrices triangulaires supérieurs est triangulaire supérieure. 
- Tout produit de matrices triangulaires supérieures est triangulaire supérieure, et sa diagonale est le produit "coefficients par coefficients" des diagonales de ses facteurs (cela ne s'étend pas au reste)

# Définition : Matrices transposés
Soit $A \in \mathcal M_{n,p}(\mathbb{K})$, 
Sa transposé $A^T$ est définie par : 
$$\left\{ \begin{array}{l}
A^T \in \mathcal M_{p,n}(\mathbb{K}) \\
\forall (i, j) \in [\![1, p]\!] \times[\![1, n]\!],A^T[i, j] = A[j, i] 
\end{array} \right.$$
ie : 
$$A^T = (a_{ji})_{(i, j) \in [\![1, p]\!] \times[\![1, n]\!]}$$

# Propriété : Transposé d'une transposée
$$\forall A \in \mathcal M_{n,p}(\mathbb{K}), (A^T)^T = A $$


# Propriété : Linéarité de la Transposition
L'application de transposition est linéaire
$$t_{n, p} : \left\{ \begin{array}{l}
\mathcal M_{n,p}(\mathbb{K}) \to \mathcal M_{p,n}(\mathbb{K}) \\
A \mapsto A^T
\end{array} \right.$$
est bijective et "linéaire"
ie elle <u>preserve les combinaisons linéaires</u>
$$\forall \lambda, \mu \in \mathbb{K}, \forall A, B \in \mathcal M_{n, p}(\mathbb{K}), (\lambda A + \mu B)^T = \lambda A^T + \mu B^T$$

# Propriété : Produit d'une transposée
$$\forall A \in \mathcal M_{n, p}(\mathbb{K}), \forall B \in \mathcal M_{p, q}(\mathbb{K}), (AB)^T = B^TA^T$$

# Proposition : Transposé, Automorphisme d'espace vectoriel 
La Transposition
$$t_{n, p} : \left\{ \begin{array}{l}
\mathcal M_{n}(\mathbb{K}) \to \mathcal M_{n}(\mathbb{K}) \\
A \mapsto A^T
\end{array} \right.$$
est un automorphisme du groupe : 
$$(M_{n}, +)$$
Qui préserve la multiplication du groupe externe
("C'est un automorphisme d'espace vectoriel")
Mais ce n'est pas un morphisme d'anneau

# Proposition : Inversion d'une transposé
Si $A \in GL_{n}(\mathbb{K})$
Alors $A^T \in GL_{n}(\mathbb{K})$ et $(A^T)^{-1} = (A^{-1})^T$

# Définition : Matrice symétrique / antisymétrique
On dit que $A$ est symétrique (resp. antisymétrique) ssi
$A^T = A$ (resp. $A^T = -A$)
On note $\mathcal S_{n}(\mathbb{K})$ (resp. $\mathcal{A}_{n}(\mathbb{K})$) l'ensemble des matrices d'ordre $n$ symétriques (resp. antisymétriques)

# Proposition : Les coefs diagonaux d'une Matrice antisymétrique sont nuls
$$\forall A \in \mathcal{A}_{n}(\mathbb{K}), \forall i \in [\![1, n]\!], a_{i, i} = 0$$
("Les coefficients diagonaux d'une matrice antisymétrique sont forcément nuls")

# Proposition : Matrice symétrique et antisymétrique
Une matrice a la fois symétrique et antisymétrique est nulle

# Proposition : Matrices symétriques et antisymétriques, sous-espaces vectoriels
$\mathcal{S}_{n}(\mathbb{K})$ et $\mathcal{A}_{n}(\mathbb{K})$ sont des sous groupes de ($\mathcal M_{n}(\mathbb{K}), +)$ qui sont de plus stable par multiplication externes
(ie ce sont des "sous espaces vectoriels" de $(\mathcal M_{n}(\mathbb{K}), +, \cdot$))

# Théorème
Toute matrice carré $M \in \mathcal M_{n}(\mathbb{K})$ s'écrit de manière unique comme somme d'une matrice symétrique $S$ et d'une antisymétrique $A$
$$S = \frac{1}{2}(M + M^T) \text{ et } A = \frac{1}{2}(M-M^T)$$

# Faire un pivot de Gauss pour trouver l'inverse d'une matrice carré d'ordre $n$

