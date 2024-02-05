Soit $\mathbb{K} \in \{\mathbb{R}, \mathbb{C}\}$, 
et $n, p, q, r \in \mathbb{N}^*$,

# I. Espaces de matrices
#### Définition
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

#### Rappel
En tant que famille c'est simplement un application
$$\left\{ \begin{array}{l}
[\![1, n]\!] \times [\![1, p]\!] \to \mathbb{K} \\
(i, j) \mapsto a_{i, j}
\end{array} \right.$$

#### Python
$A[i, j] = a_{i,j}$ 
$j$ la colonne et $i$ la ligne
$A[:, j]$ : Matrice colonne
$A[i, :]$ : Matrice ligne

Pour une matrice colonne $X$
On note $X[i]$ l'unique élément de sa $i^{eme}$ ligne i.e. $X[i] = X[i, 1]$

#### Ensemble des matrices
On a $n$ lignes et $p$ colonnes
On note $\mathcal{M}_{n, p}(\mathbb{K})$ 

#### Exemple
$$\mathcal{M}_{2, 3}(\mathbb{C}) = \left\{\left( \begin{array}{l} a&b&c \\
d&e&f \end{array} \right); a, b, c, d, e, f \in \mathbb{C}\right\}$$
Par sa definition sous forme $\mathbb{K}^X$

#### Remarque
$\mathcal M_{n, p}(\mathbb{K})$ est naturellement muni d'une structure de groupe abélien. 

#### Propriété
$$(\mathcal{M}_{n, p}(\mathbb{K}), +) \text{ est un groupe abelien}$$

#### Rappel
L'addition sur $\mathbb{K}^X$ se fait élément par élément et ici cela donne pour $A = (a_{i, j})$ et $B = (b_{i, j}) \in \mathcal{M}_{n, p}(\mathbb{K})$
$$A+B = (a_{i, j} + b_{i, j})$$

On ajoute a cette structure de groupe la loi externe de multiplication par un scalaire se fait coef par coef
$$\left\{ \begin{array}{l}
\mathbb{K} \times \mathcal{M}_{n, p}(\mathbb{K}) \to \mathcal{M}_{n, p} \\
(\lambda, (a_{i, j})) \mapsto \lambda (a_{i, j})=(\lambda a_{i, j})
\end{array} \right.$$

On a alors les propriétés suivantes qui découlent immédiatement de ces définitions, des opérations de $\mathcal{M}_{n, p}(\mathbb{K})$ et des propriétés d'anneau de $\mathbb{K}$

#### Propriété : 4 propriétés d'espaces vectoriels
Propriété des flemmards :
$$\forall A \in \mathcal{M}_{n, p}(\mathbb{K}), 1 \cdot A = A$$
Associativité mixte :
$$\forall \lambda, \mu \in \mathbb{K}, \forall A \in \mathcal{M}_{n, p}(\mathbb{K}), (\lambda \mu)A = \lambda(\mu A)$$
Distributivité mixte à gauche :
$$\forall \lambda \in \mathbb{K}, \forall A, B \in \mathcal{M}_{n, p}, \lambda(A+B) = \lambda A + \lambda B$$
Distributivité mixte à droite :
$$\forall \lambda, \mu \in \mathbb{K}, \forall A \in \mathcal{M}_{n, p}(\mathbb{K}), (\lambda+\mu)A = \lambda A+\mu A$$

On dit que $\mathcal{M}_{n, p}(\mathbb{K})$ est un $\mathbb{K}$ espace vectoriel

#### Remarque importante
Pour l'instant les lois qu'on a n’utilisent pas la structure de la forme géométrique rectangulaire des matrices : En fait on voit facilement que $(\mathbb{K}, +, \times)$ alors un $\mathbb{K}$-espace vectoriel et que
$\mathbb{K}^{[\![1, n]\!]\times[\![1, p]\!]}$ hérite naturellement d'une structure d'espace vectoriel. 

L’intérêt de cette forme rectangulaire réside dans le produit matriciel.

#### Définition
Pour $(k, n)\in [\![1, n]\!] \times [\![1, p]\!]$, 
On note
$$E_{k, l} = \left( \begin{array}{l}
\delta_{(i, j)(k, l)}
\end{array} \right)_{\underset{1 \leq j \leq p}{1 \leq i \leq n}} = (\delta_{i, k}\delta_{j, l})_{i, j} $$
On appelle matrice élémentaires ces matrices. 

#### Remarque
Si il y a ambiguïté sur les dimensions sur les dimensions on les notera : $E_{k, l}^{n ,p}$

#### Rappel : Symbol de Kronetier
$\delta_{x, y} = 1$ si $x = y$
et 0 sinon

#### Exemple
Pour $n = 2$ et $p = 3$, 
$$E_{2, 1} = \left( \begin{array}{l}
0&0&0 \\
1&0&0
\end{array} \right)$$

#### Propriété
Toute matrice $A = (a_{i, j}) \in \mathcal{M}_{n, p}(\mathbb{K})$ s'écrit comme combinaison linéaire a coefficient dans $\mathbb{K}$ des matrices élémentaires, 
de manière unique : 
$$A = \sum_{(k, l) \in [\![1, n]\!] \times [\![1, p]\!]} a_{k, l}E_{k, l}$$
On dira que la famille $(E_{k, l})_{k, l}$ est une base de $\mathcal{M}_{n, p}(\mathbb{K})$ 

Demonstration : 
L'égalité est "évidente" : 
Les deux membres sont bien des éléments de $\mathcal{M}_{n, p}(\mathbb{K})$ et pour $(i, j) \in [\![1, n]\!] \times [\![1, p]\!]$, 
$$\left( \sum_{(k, l)} a_{k, l_{0}E_{k,l}} \right)[i, j] =  \sum_{(k, l)} \left(a_{k, l_{0}E_{k,l}} \right)[i, j] = \sum_{(k,l)}a_{k, l}E_{k,l}[i, j]$$
$$\left( \sum_{(k, l)} a_{k, l_{0}E_{k,l}} \right)[i, j]= \sum_{(k, l)}a_{k, l}\delta_{(i, j)(k, l)} = a_{i, j}$$

Unicité :
Soit $b_{k, l}$ pour $(k, l) \in [\![1, n]\!]\times[\![1, p]\!]$, 
que vérifient 
$$B = \sum_{(k, l)}b_{k,l}E_{k, l} = $$
En posant
$$B = (b_{i, j})_{i, j}$$



#### Définition
$(E_{k, l})_{\underset{1 \leq l \leq p}{1 \leq k \leq n}}$  est appelée la "base canonique" de $\mathcal{M}_{n, p}(\mathbb{K})$ 


# II. Produit matriciel
#### Rappel
Si $A \in \mathcal{M}_{n, p}(\mathbb{K})$ et $B \in \mathcal{M}_{p, q}(\mathbb{K})$ 
On obtiens $AB \in \mathcal M_{n, q}(\mathbb{K})$, 
Ainsi :
Son coefficient d'indices $(i, k)$ est obtenu en sommant les produits suivants : le produit des premiers coefficients de la formule de $A$ de la $i^{eme}$ ligne de $A$ et de la $k^{eme}$ colonne de $B$, le produit des seconds coefs de ------ etc..., le prduit des derniers coefs ------.

#### Définition
Pour $A = (a_{j, k}) \in \mathcal M_{n, p}(\mathbb{K})$ et $B = (b_{j, k}) \in \mathcal M_{p, q}(\mathbb{K})$, 
$AB \in \mathcal M_{n, q}(\mathbb{K})$ est définie par :
$$\forall(i, k) \in [\![1, n]\!] \times [\![1, q]\!], (AB)[i, k] = \sum_{j = 1}^p a_{i, j}b_{j, k}$$

#### Exemple
$$\left( \begin{array}{c}
1&2&3 \\
4&5&6
\end{array} \right)\left( \begin{array}{c}
2&1&-1&0 \\
1&0&1&-1 \\
0&-1&0&1
\end{array} \right) = \left( \begin{array}{c}
4&-2&1&1 \\
13&-2&1&1
\end{array} \right)$$

#### Remarque
Les produits sont prioritaires par rapport a l'addition

#### Proposition
Le produit matriciel est bilinéaire ie linéaire à gauche : 
$$\forall A, A' \in \mathcal M_{n, p}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \forall B \in \mathcal M_{p, q}(\mathbb{K}), (\lambda A + A')B = \lambda (AB) + A'B$$
et à droite : 
$$\forall A \in \mathcal M_{n, p}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \forall B, B' \in \mathcal M_{p, q}(\mathbb{K}), A(\lambda B + B') = \lambda (AB) + AB'$$

#### Remarque
En particulier
$$(\lambda A)B = \lambda(AB)$$
$$A(\lambda B) = \lambda (AB)$$

On écrit plus les parenthèses : 
$$\lambda AB$$

Démonstration : 
Soient $A = (a_{i, j}), A' = (a'_{i, j}) \in \mathcal{M}_{n, p}(\mathbb{K})$, $B = (b_{i, j}), A*B' = (b'_{i, j}) \in \mathcal{M}_{p, q}(\mathbb{K})$
et $\lambda \in \mathbb{K}$

Tous les membres des deux égalités à montrer sont bien des éléments de $\mathcal M_{n, q}(\mathbb{K})$ 
(Le vérifier)

Soient $(i, k) \in [\![1, n]\!] \times [\![1, q]\!]$
Alors
$$((\lambda A + A')B)[i, j] = \sum_{j = 1}^p (\lambda A + A')[i, j]b_{jk} = \sum_{j=1}^p  (\lambda a_{ij}+ a'_{ij})b_{jk}$$
$$= \sum_{j = 1}^p (\lambda a_{ij}b_{jk} + a'_{ij}b_{jk}) = \lambda \sum_{j = 1}^p a_{ij}b_{jk}+ \sum_{j = 1}^p a'_{ij}b_{jk} = \lambda(AB)[i, k]+(A'B)[i, k]$$
Donc : 
$$((\lambda A + A')B)[i, j] = (\lambda(AB)+A'B)[i, k]$$

##### Exo : Faire l'autre égalité 
Attention elle ne peut pas se déduire de la première car en général le produit n'est pas commutatif

#### Lemme : Produit d'un élément de la base canonique avec matrice 
Soit $(i_{0}, j_{0}) \in [\![1,n]\!] \times [\![1, p]\!]$ et $E_{i_{0}, j_{0}}$ l'élément correspondant de la base canonique de $\mathcal M_{n, q}(\mathbb{K})$. 
Alors pour tout $B = (b_{ij}) \in \mathcal M_{p, q}(\mathbb{K})$, 
$E_{i_{0}, j_{0}}B$ est l'élément de $\mathcal M_{n, q}(\mathbb{K})$
Donc la seule ligne non nulle est celle d'indice $i_{0}$, qui de plus est égal a la ligne d'indice $j_{0}$ de $B$, ce qui s'écrit
$$E_{i_{0}, j_{0}}B = (\delta_{i, i_{0}}b_{j_{0}k})_{ik}$$
De même pour $C = (c_{li}) \in \mathcal M_{r, n}(\mathbb{K})$
$$CE_{i_{0}, j_{0}} = (\delta_{j, j_{0}}c_{l, i_{0}})_{l, j}$$
est la matrice dont la seule colonne non nulle est celle d'indice $j_{0}$ qui de plus est égal à la colonne de $C$ d'indice $i_{0}$ 

Démonstration :
Soit $(i_{0}, j_{0}) \in [\![1, n]\!] \times [\![1, p]\!]$
On a
$$\left\{ \begin{array}{l}
E_{i_{0}, j_{0}} \in \mathcal M_{n, p}(\mathbb{K})\\
B \in \mathcal{M}_{p, q}(\mathbb{K})
\end{array} \right.$$
On voit que
$$E_{i_{0}, j_{0}}B = (\delta_{i,i_{0}}b_{j_{0},k})_{i, k}$$
Alors
$$E_{i_{0}, j_{0}}B \in \mathcal M_{n, q}(\mathbb{K}) $$
et pour $(i, k) \in [\![1, n]\!] \times [\![1, q]\!]$
$$(E_{i_{0}, j_{0}}B)[i, k] = \sum_{j = }^pE_{i_{0}, j_{0}}[i, j]b_{jk} = \sum_{j = 1}^p \delta_{i, i_{0}}\delta_{j, j_{0}}b_{jk}$$

#### Corollaire
$$\forall(i, j) \in [\![1, n]\!] \times [\![1, p]\!], \forall(j', k) \in [\![1, p]\!] \times [\![1, q]\!], E_{i, j}^{n, p}E_{j', k}^{p, q} = \delta_{j, j'}E_{i, k}^{n, q}$$

Démonstration
Soit $(i, j), (j', k)$ comme dans l'énoncé. 
$$E_{i, j}^{n, p}E_{j', k}^{p, q} = (\delta_{i'', i}E_{j', k}^{pq}[j, k''])_{i'', k''}=(\delta_{i'', i}\delta_{j, j'}\delta_{k, k''})_{i'', k''} = \delta_{j, j'}(\delta_{i'', i}\delta_{k, k''})_{i'', k''}$$
Donc 
$$E_{i, j}^{n, p}E_{j', k}^{p, q} = \delta_{j, j'}E_{i, k}^{n, q}$$

#### Théorème : Associativité du produit matriciel
$$\forall (A, B, C) \in \mathcal{M}_{n, p}(\mathbb{K}) \times \mathcal{M}_{p, q}(\mathbb{K}) \times \mathcal{M}_{q, r}(\mathbb{K}), (AB)C = A(BC)$$

On peut donc noter $ABC$ (sans parenthèses)et on a de plus,
pour $(i, l) \in [\![1, n]\!] \times [\![1, r]\!]$,
En notant $A = (a_{ij}), B = (b_{jk})$ et $C = (c_{kl})$,
$$(ABC)[i, l] = \sum_{\underset{1\leq k\leq q}{a\leq j\leq p}}a_{ij}b_{jk}c_{kl}$$

Démonstration : 
Soient : 
$$\left\{ \begin{array}{l}
A \in \mathcal M_{n,p}(\mathbb{K}) \\
B \in \mathcal M_{p,q}(\mathbb{K}) \\
C \in \mathcal M_{q,r}(\mathbb{K})
\end{array} \right.$$

Alors les produits sont bien définis et de même dimension : 
Comme $A \in \mathcal M_{n,p}(\mathbb{K})$ et $B \in \mathcal M_{p,q}(\mathbb{K})$ Alors $AB \in \mathcal M_{n,q}(\mathbb{K})$.
puis  $C \in \mathcal M_{q,r}(\mathbb{K})$ Alors $(AB)C \in \mathcal M_{n,r}(\mathbb{K})$.
De même $BC \in \mathcal M_{p,r}(\mathbb{K})$ Donc $A(BC) \in \mathcal M_{n,r}(\mathbb{K})$.

Soit $(i,l) \in [\![1, n]\!] \times [\![1, r]\!]$
Alors
$$((AB)C)[i,l] = \sum_{k = 1}^{q} (AB)[i, k]c_{kl} = \sum_{k = 1}^q\left( \sum_{j = 1}^{p}a_{ij}b_{jk} \right)c_{kl} = \sum_{\underset{a \leq k \leq q}{a \leq j \leq p}}a_{ij}b_{jk}c_{kl}$$
Faire l'autre en exo.

#### Remarque
Cette formule se généralise "Naturellement" à un produit $A_{1} A_{2} \dots A_{n}$

#### Exercice
$$A = \left( \begin{array}{c}
1 & -1
\end{array} \right) \left( \left( \begin{array}{c}
1&2&3 \\
4&5&6
\end{array} \right) \left( \begin{array}{c}
2&1&-1&0 \\
1&0&1&-1 \\
0&-1&0&1
\end{array} \right)\right)$$
$$A = \left(\left( \begin{array}{c}
1 & -1
\end{array} \right) \left( \begin{array}{c}
1&2&3 \\
4&5&6
\end{array} \right) \right)\left( \begin{array}{c}
2&1&-1&0 \\
1&0&1&-1 \\
0&-1&0&1
\end{array} \right)$$
C'est plus rapide
$$\left( \begin{array}{c}
-3&-3&-3
\end{array} \right)\left( \begin{array}{c}
2&1&-1&0 \\
1&0&1&-1 \\
0&-1&0&1
\end{array} \right)$$



# II. Matrices carrées
#### Définition
Une matrice carré d'ordre $n$ est un élément de $\mathcal M_{nn}(\mathbb{K})$, 
qu'on note pour alléger $\mathcal M_{n}(\mathbb{K})$


#### Exemple
$0_{\mathcal M_{n}(\mathbb{K})} \underset{\text{noté}}{=} 0$ quand il n'y a pas d'ambiguïté
$$H = \left( \frac{1}{1+j-1} \right)_{1\leq i, \space j\leq n}$$
Matrice de Hilbert
$$H = \left( \begin{array}{c}
1& \frac{1}{2} & \frac{1}{3} &\dots& \frac{1}{n} \\
\frac{1}{2} & \frac{1}{3} &\dots & \dots & \frac{1}{n+1} \\
\dots & \dots & \dots & \dots & \dots \\
\frac{1}{n} & \frac{1}{n+1} & \dots & \dots & \frac{1}{2n-1}
\end{array} \right)$$

$$P = \left( \begin{array}{c}
1&0&\dots&\dots \\
1&1& \dots & \dots \\
1&2&1 &\dots
\end{array} \right)$$


#### Définition matrice identité
La matrice identité d'ordre $n$ est :

$$I_{n} = \left( \begin{array}{c}
1&0 \\
0&1
\end{array} \right) = (\delta_{i, j})_{\leq i, j\leq n}$$

#### Propriété
$$\forall A \in \mathcal M_{n, p}(\mathbb{K}), I_{n}A = AI_{p} = A$$

Démonstration : 
$I_{n}A \in \mathcal M_{n, p}(\mathbb{K})$ et pour $(i, k) \in [\![1, n]\!] \times [\![1, p]\!]$
$$(I_{n}A)[i, k] = \sum_{j = 1}^n \delta_{ij}a_{jk} = a_{ik}$$
De même dans l'autre sens. 



#### Remarque
La multiplication de matrices induit une LCI $\times$ sur $\mathcal M_{n}(\mathbb{K})$ 
($\times$ pour distinguer de la multiplication externe $\cdot$)

#### Théorème
$$(\mathcal M_{n}(\mathbb{K}), +, \times) \text{ est un anneau}$$
Qui est non commutatif pour $n\geq 2$

Démonstration : 
On sait déjà que $(\mathcal M_{n}(\mathbb{K}), +)$ est un groupe abélien.
$\times$ est associative en tant que LCI de $\mathcal M_{n}(\mathbb{K})$ car le produit matriciel est associatif de manière générale $I_{n}$ est le neutre pour $\times$ et $I_{n} \neq (0)$
Les distributivités à gauche et à droite son conséquences directes de la bilinéarité du produit matriciel. 
(prendre $\lambda = 1$ dans les formules)

Ainsi ($M_{n}(\mathbb{K}), +, \times$) est un anneau.
On remarque, pour $n \geq 2$,
$$E_{1,1} = E_{1, 1} E_{2,1} = 0 \neq E_{2, 1} = E_{2, 1} E_{1, 1}$$
Donc $\mathcal M_{n}(\mathbb{K})$ n'est pas un anneau commutatif. 


#### Remarque
$$E_{1, 1}E_{2, 1} = 0 \text{ avec } \left\{ \begin{array}{c}
E_{1, 1} \neq 0 \\
E_{2, 1} \neq 0
\end{array} \right.$$

#### Remarque
On dit que
$$(\mathcal M_{n}(\mathbb{K}), +, \cdot, \times)$$
est $\mathbb{K}$ algèbre
ie
$$\left\{ \begin{array}{l}
(\mathcal M_{n}(\mathbb{K}), +, \cdot) \text{ } \mathbb{K} \text{ espace vectoriel} \\
(\mathcal M_{n}(\mathbb{K}), +, \times) \text{ anneau} \\
\forall A, B \in \mathcal M_{n}(\mathbb{K}), \forall \lambda \in \mathbb{K}, \lambda(AB) = (\lambda A)B = A(\lambda B)
\end{array} \right.$$

#### Remarque
$$(\mathcal M_{n}(\mathbb{K}), +, \times) \text{ n'est pas un corp}$$

Pour deux raisons :
- Pas commutatif
- Admet des non nuls inversibles

#### Remarque
On peut avoir plus : 
$(E_{2, 1})^2 = 0$ avec $E_{2, 1} \neq 0$

#### Définition
$N \in \mathcal M_{n}(\mathbb{K})$ est dite nilpotente
s'il existe $k \in \mathbb{N}^*$ tq $N^k = 0$
Le plus petit $k$ est appelé l'indice de nilpotence $r$. On a alors :
$$\forall k \geq r, N^k = 0$$

#### Exemple
$0$ est nilpotente d'ordre 1 ($0$ la matrice)
Les $E_{i, j}$ avec $i \neq j$ sont nilpotentes d'indice $2$

#### Rappel : 
$$\forall A \in \mathcal M_{n}(\mathbb{K}), A^0 = I_{n}$$

#### Formule du binôme
Pour tout, $A, B \in \mathcal M_{m}(\mathbb{K})$ telles que $AB = BA$
et $n \in \mathbb{N}$, 
$$(A+B)^n = \sum_{k = 0}^n \binom{n}{k}A^kB^{n-k}$$

#### Formule de Bernoulli
Pour tout, $A, B \in \mathcal M_{m}(\mathbb{K})$ telles que $AB = BA$
et $n \in \mathbb{N}$, 
$$A^{n+1}-B^{n+1} = (A-B)\sum_{k = 0}^{n} A^kB^{n-k}$$

#### Cas particuliers
Comme $I_{n}$ commute avec toute matrice carré d'ordre $n$, 
$$\forall A \in \mathcal M_{n}(\mathbb{K}), \forall n \in \mathbb{N},$$
$$ (I_{n}+A)^n = \sum_{k = 0}^m \binom m k A^k = I_{n} + mA + m(m-1)A^2 + \dots + A^m$$

Comme dans tout anneau $A$, on a le groupe des inversibles $(A^X, \times)$ Ici on le note différemment :

#### Définition
Le groupe des inversibles de $\mathcal M_{n}(\mathbb{K})$ est appelé le groupe linéaire d'ordre $n$ sur $\mathbb{K}$ et noté $GL_{n}(\mathbb{K})$
(groupe pour $\times$)

#### Rappel
Soit $A \in \mathcal M_{n}(\mathbb{K})$, 
$$A \in GL_{n}(\mathbb{K}) \Leftrightarrow \exists A' \in \mathcal M_{n}(\mathbb{K}), AA' = A'A = I_{n}$$
($A$ est inversible)


#### Théorème
Soit $A \in \mathcal M_{n}(\mathbb{K})$, 
Alors $A \in GL_{n}(\mathbb{K})$ ssi
elle est inversible à gauche (ie $\exists A' \in \mathcal M_{n}(\mathbb{K}), A'A = I_{n}$)
ssi elle est inversible à droite (ie $\exists A'' \in \mathcal M_{n}(\mathbb{K}), AA'' = I_{n}$)
Dans ce cas les matrices inversibles sont égales. 
(ie la matrice inverse a gauche est la matrice inverse a droite)


#### Exemple
$$\left( \begin{array}{c}
1&-1 \\
0&1
\end{array} \right)\left( \begin{array}{c}
1&2 \\
0&1
\end{array} \right) = I_{2}$$
Donc les deux matrices sont inversibles et inverses l'unes de l'autre


#### Théorème
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

Démonstration en exo
(Si $\det A \neq 0$, on fait le produit un sens suffit par le théorème précédent si $\det A = 0$, il faut montrer qu'elle n'est pas inversible)

#### Exercice
Retrouver le résultat de l'exemple précédent

#### Propriété
Soient $A, B \in GL_{n}(\mathbb{K})$, 
Alors $AB \in GL_{n}(\mathbb{K})$
et $(AB)^{-1} = B^{-1}A^{-1}$


#### Définition
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




#### Exemple
Les matrices $\lambda I_{n} = diag(\lambda, \dots, \lambda)$
Pour $\lambda \in \mathbb{K}$ s'appellent les matrices d’homothétie et des <u>matrices scalaires</u>. 


#### Propriété
- Toute combinaison linéaire de matrices diagonales est diagonale
- Tout produit de matrices diagonales est diagonal. Et le produit est fait coefficient par coefficient, 
	$$\forall(\lambda_{i})_{i = 1}^n, (\mu_{i})_{i = 1}^n \in \mathbb{k}^n, diag(\lambda_{i})_{i = 1}^n diag(\mu_{i})_{i = 1}^n = diag(\lambda_{i}\mu_{i})_{i = 1}^n$$
- Un matrice diagonale est inversible ssi tous ses coefficients sont diagonaux $\lambda_{i}, i \in [\![1, b]\!]$ sont non nuls et alors
	$$(diag(\lambda_{i})_{i = 1}^n)^{-1} = diag(\lambda_{i}^{-1})_{i =1}^n$$


#### Notation
$D_{n}(\mathbb{K})$ est l'ensemble des matrices diagonales d'ordre $n$

On a alors : 

#### Propriété
$$D_{n} \underset{s.g.}{\subset} \mathcal M_{n}(\mathbb{K}) \text{ (pour +)}$$
et mieux : 
 $(D_{n}(\mathbb{K}), +, \cdot)$ est un sous anneau de $(D_{n}, +, \cdot)$ (et mieux $D_{n}(\mathbb{K})$ est une sous algèbre de $(\mathcal M_{n}(\mathbb{K}), +, \cdot, \times)$. 


#### Définition
$T \in \mathcal M_{n}(\mathbb{K})$ est triangulaire supérieure
ssi tous ses coefficients strictement sous-diagonaux sont nuls ie

$$\forall(i, j)\in [\![1, n]\!]^2, (i>j) \Rightarrow T[i, j] = 0$$

#### Notation
$\mathcal T_{n}^{sup}(\mathbb{K})$ est l'ensemble des matrices supérieures
$\mathcal T_{n}^{inf}(\mathbb{K})$ est l'ensemble des matrices supérieures

#### Propriété
- Toute combinaison linéaire de matrices triangulaires supérieurs est triangulaire supérieure. 
- Tout produit de matrices triangulaires supérieurs est triangulaire supérieure, et sa diagonale est le produit "coefficients par coefficients" des diagonales de ses facteurs (cela ne s'étend pas au reste)

#### Remarque
De même l'ensemble des matrices triangulaire supérieur (resp. inférieur) forme un sous anneau de $\mathcal M_{n}(\mathbb{K})$ (en fait une sous-algèbre) non commutatif des que $n\geq 2$

# IV. Transposition
## 1. Cas général 
Symétrie par rapport a la diagonale


#### Définition
Soit $A \in \mathcal M_{n,p}(\mathbb{K})$, 
Sa transposé $A^T$ est définie par : 
$$\left\{ \begin{array}{l}
A^T \in \mathcal M_{p,n}(\mathbb{K}) \\
\forall (i, j) \in [\![1, p]\!] \times[\![1, n]\!],A^T[i, j] = A[j, i] 
\end{array} \right.$$
ie : 
$$A^T = (a_{ji})_{(i, j) \in [\![1, p]\!] \times[\![1, n]\!]}$$
Les variables sont muettes on peut donc les inverser ($i$ et $j$)

#### Propriété
$$\forall A \in \mathcal M_{n,p}(\mathbb{K}), (A^T)^T = A $$


#### Propriété
L'application de transposition est linéaire
$$t_{n, p} : \left\{ \begin{array}{l}
\mathcal M_{n,p}(\mathbb{K}) \to \mathcal M_{p,n}(\mathbb{K}) \\
A \mapsto A^T
\end{array} \right.$$
est bijective et "linéaire"
ie elle preserve les combinaisons linéaires
$$\forall \lambda, \mu \in \mathbb{K}, \forall A, B \in \mathcal M_{n, p}(\mathbb{K}), (\lambda A + \mu B)^T = \lambda A^T + \mu B^T$$

Démonstration : 
La linéarité simple
La bijectivité s'obtient en exhibant l'application réciproque $t_{p, n}$

#### Remarque
$t_{n, p}$ est un isomorphisme d'espaces vectoriel. 

#### Propriété
$$\forall A \in \mathcal M_{n, p}(\mathbb{K}), \forall B \in \mathcal M_{p, q}(\mathbb{K}), (AB)^T = B^TA^T$$

Démonstration : 
Soient $A$ et $B$ comme dans l'énoncé,
On a :
$AB \in \mathcal M_{n, q}(\mathbb{K})$ 
Donc $(AB)^T \in \mathcal M_{q, n}(\mathbb{K})$
et $B^T \in \mathcal M_{q, p}(\mathbb{K})$
et $A^T \in \mathcal M_{p, n}(\mathbb{K})$
Donc $B^TA^T \in \mathcal M_{p, n}(\mathbb{K})$
Et pour $(i, k) \in [\![1, q]\!] \times[\![1, n]\!]$, 
$$(AB)^T[i, k] = (AB)[k, i] = \sum_{j = 1}^p a_{kj}b_{ji}$$
$$\sum_{j = 1}^p a_{kj}b_{ji} = \sum_{j = 1}^p B^T[i, j]A^T[j, k] = (B^TA^T)[i, k]$$

## 2. Cas des matrices carrés

#### Proposition
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

Démonstration : 
On a vu que $t_{n} = t_{n,n}$ est bijective (ici $t_{n}^{-1} = t_{n}$) et qu'elle preserve les CL (elle est "linéaire") donc elle preserve $+$ et la multiplication externe. 
($\forall A, B \in M_{n}(\mathbb{K}), (A+B)^T = A^T+B^T$ et $\forall A \in \mathcal M_{n}(\mathbb{K}), \forall \lambda \in \mathbb{K}, (\lambda A) ^T = \lambda A^T$)

Pour $A, B$ qui ne commutent pas (cas $n\geq 2$)
$AB \neq BA$ Donc $(AB)^T \neq (BA)^T = A^TB^T$
Par injectivité de $t_{n}$


#### Proposition
Si $A \in GL_{n}(\mathbb{K})$
Alors $A^T \in GL_{n}(\mathbb{K})$ et $(A^T)^{-1} = (A^{-1})^T$

Démonstration : 
$$A^T(A^{-1})^T = (A^{-1}A)^T = I_{n}^T = I_{n}$$
Ainsi
$A^T$ est inversible a gauche et a droite et comme c'est une matrice carré elle est inversible et son inverse est son inverse a droite. $(A^{-1})^T$ 

#### Définition
On dit que $A$ est symétrique (resp. antisymétrique) ssi
$A^T = A$ (resp. $A^T = -A$)
On note $\mathcal S_{n}(\mathbb{K})$ (resp. $\mathcal{A}_{n}(\mathbb{K})$) l'ensemble des matrices d'ordre $n$ symétriques (resp. antisymétriques)

#### Exemples
$$\left( \begin{array}{c}
1&2&3 \\
2&4&5 \\
3&5&6
\end{array} \right)$$
est symétrique

$$\left( \begin{array}{c}
1&2&3 \\
-2&4&5 \\
-3&-5&6
\end{array} \right)$$
n'est ni antisymétrique ni symétrique


#### Proposition
$$\forall A \in \mathcal{A}_{n}(\mathbb{K}), \forall i \in [\![1, n]\!], a_{i, i} = 0$$
("Les coefficients diagonaux d'une matrice antisymétrique sont forcément nuls")

#### Exemple
$$A_{3} = \left( \begin{array}{c}
0&2&3 \\
-2&0&5 \\
-3&-5&0
\end{array} \right)$$

$$A_{4} = \left( \begin{array}{c}
1&2&3 \\
0&0&0 \\
1&2&3
\end{array} \right)$$
n'est ni symétrique ni antisymétrique

#### Proposition
Une matrice a la fois symétrique et antisymétrique est nulle

Démonstration
Soit $A \in \mathcal{S}_{n}(\mathbb{K}) \cap \mathcal{A}_{n}(\mathbb{K})$
Alors
$$A = A^T = -A$$
Donc
$$2A = 0$$
Donc $A = 0$
("produit nul" coefficient par coefficient et non produit matriciel nul)


#### Proposition
$\mathcal{S}_{n}(\mathbb{K})$ et $\mathcal{A}_{n}(\mathbb{K})$ sont des sous groupes de ($\mathcal M_{n}(\mathbb{K}), +)$ qui sont de plus stable par multiplication externes
(ie ce sont des "sous espaces vectoriels" de $(\mathcal M_{n}(\mathbb{K}), +, \cdot$))

Démonstration :
Par la caractérisation des sous groupes
- $\mathcal{S}_{n}(\mathbb{K}) \subset \mathcal M_{n}(\mathbb{K})$ , par def de $\mathcal{S}_{n}(\mathbb{K})$
- $0_{\mathcal M_{n}(\mathbb{K})} \in \mathcal{S}_{n}(\mathbb{K})$ ($0^T = 0$)
- Soient $A, B \in \mathcal{S}_{n}(\mathbb{K})$ On a
    $$(A-B)^T = A^T - B^T = A - B$$
    Donc $A-B \in \mathcal{S}_{n}(\mathbb{K})$

De plus si $A \in \mathcal S_{n}(\mathbb{K})$

Faire le cas de $\mathcal A_{n}(\mathbb{K})$ en exercice

#### Théorème
Toute matrice carré $M \in \mathcal M_{n}(\mathbb{K})$ s'écrit de manière unique comme somme d'une matrice symétrique $S$ et d'une antisymétrique $A$

$$S = \frac{1}{2}(M + M^T) \text{ et } A = \frac{1}{2}(M-M^T)$$


##### Démonstration : 
Soit $M \in \mathcal M_{n}(\mathbb{K})$, 

###### Analyse : 
Soient $S \in \mathcal S_{n}(\mathbb{K})$ et $A \in \mathcal A_{n}(\mathbb{K})$ telle que $M = S + A$
On a alors, par linéarité de la transposition :
$$M^T = S^T + A^T = S - A$$
Donc :
$$\left\{ \begin{array}{l}
M = S + A \\
M^T = S - A
\end{array} \right.$$
Donc :
$$\left\{ \begin{array}{l}
M + M^T = 2S \\
M - M^T = 2A
\end{array} \right.$$
Donc : 
$$\left\{ \begin{array}{l}
S = \frac{1}{2}(M + M^T) \\
A = \frac{1}{2}(M - M^T)
\end{array} \right.$$

###### Synthèse
On pose :
$$\left\{ \begin{array}{l}
S = \frac{1}{2}(M + M^T) \\
A = \frac{1}{2}(M - M^T)
\end{array} \right.$$
On a alors
1. $S + A = \frac{1}{2}(M+M^T + M - M^T) = M$
2. $S^T = \frac{1}{2}(M + (M^T)^T) = \frac{1}{2}(M^T + M) = S$
3. $A^T = \frac{1}{2}(M^T-(M^T)^T) = \frac{1}{2}(M^T-M) = -A$

Donc $S$ et $A$ conviennent

#### Remarque
Cette Démonstration est "méta-isomorphe" à celle du fait que toute fonction définie sur $\mathbb{R}$ s'écrie de manière unique comme une fonction paire et une fonction impaire. 


# V. Calcul pratique de l'inverse
On décrit l'algorithme du pivot : 

On applique cet algorithme a la matrice augmentée : 
$$[A|I_{n}]$$

À la fin de la décente, on obtient $[A'|B]$
$A$ est inversible ssi $A'$ est triangulaire (sup) à coefficients diagonaux tous non nuls. (équivaut a dire qu'il y a $n$ pivots)


Dans ce cas la remonté amène a la matrice augmenté : 
$$[I_{n}|A^{-1}]$$
 

#### Exemple :
Montrer que
$$A = \left( \begin{array}{c}
1&3&5 \\
0&-1&4 \\
1&1&0
\end{array} \right)$$
est inversible et on calcule $A^{-1}$

On applique l'algorithme du pivot a la matrice augmenté $[A|I_{3}]$

$$\left[ \begin{array}{ccc|ccc}
1&3&5&1&0&0 \\
0&-1&4&0&1&0 \\
1&1&0&0&0&1
\end{array} \right]$$
