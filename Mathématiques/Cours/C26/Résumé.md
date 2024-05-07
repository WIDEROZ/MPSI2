# Définition
Une forme $n$-linéaire sur $E$ est une application $f : E^{n} \to \mathbb{K}$
qui est linéaire en chacune de ses composantes, ie : 
$$\forall (x_{i})_{i = 1}^{n} \in E^{n}, \forall k \in [\![1, n]\!], f(x_{1}, \dots, x_{k-1}, \cdot, x_{k+1}, \dots, x_{n}) \in E^{*}$$

# Définition
Elle est de plus dite <u>alternée</u> ssi elle s'annule lorsque deux de ses composantes sont égales. ie
$$\begin{array}{c}
\forall(x_{i})_{i = 1}^{n} \in E^{n}, \forall(i, j) \in [\![1, n]\!]^{2},  \\
((i \neq j \text{ et } x_{i} = x_{j}) \Rightarrow f(x_{1}, \dots, x_{n}) = 0)
\end{array}$$

# Définition
Elle est dite antisymétrique ssi l'échange de deux composantes fournit un résultat opposé :
$$\begin{array}{c}
\forall (x_{i})_{i = 1}^{n} \in E^{n}, \forall(i, j) \in [\![1, n]\!]^{2}, \\
(i<j \Rightarrow f(x_{1}, \dots, x_{i}, \dots, x_{j}, \dots, x_{n})  \\
= - f(x_{1}, \dots, x_{j}, \dots, x_{i}, \dots, x_{n}))
\end{array}$$

# Propriété
Soit $f \in \mathcal{A}_{n}(E)$, 
1. 
$$\forall(x_{i})_{i = 1}^{n} \in E^{n}, \forall \sigma \in S_{n}, f(x_{\sigma(1)}, \dots, x_{\sigma(n)}) = \epsilon(\sigma)f(x_{1}, \dots, x_{n})$$ 
2. L'image d'une famille liée par $f$ est nulle


# Théorème
1. $\mathcal{A}_{n}(E)$ est une droite vectorielle
2. Pour toute base $e$ de $E$, l'application de $E^{n}$ vers $\mathbb{K}$
   $$\det_{e} : (x_{1}, \dots, x_{n}) \mapsto \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j= 1}^{n} e^{*}_{\sigma(j)}(x_{j})=\sum_{\phi \in S_{n}}\epsilon(\phi) \prod_{i  =1}^{n}e_{i}^{*}(x_{\phi(i)})$$
   Est l'unique vecteur directeur de $f$ vérifiant $f(e) = 1$
   Le scalaire $\det_{e}(x_{1}, \dots, x_{n})$ est appelé le determinant de la famille $(x_{i})_{i = 1}^{n}$ dans la base $e$
3. $\forall f \in \mathcal{A}_{n}(E), f=f(e)\det_{e}$

# Propriété : Formule de changement de base
Pour $e, e'$ deux bases de $E$, 
$$\det_{e'} = \det_{e'}(e)\det_{e}$$

# Corollaire : Relation de Chasles
Pour $e, e', e''$ trois bases de $E$, 
$$\det_{e}(e')\det_{e'}(e'') = \det_{e}(e'')$$

# Corollaire
Pour deux bases de $E$, $e$ et $e'$, 
$(\det_{e'}(e)\det_{e}(e') =1)$ donc, 
$\det_{e}(e')\neq 0$
et 
$$\det_{e'}(e) = \det_{e}(e')^{-1}$$

# Propriété
Soient $e$ une base de $E$ et $x \in E^{n}$,
Alors,
$$x \text{ est une base de E} \Leftrightarrow \det_{e}(x) \neq 0 $$

# Belle Propriété
$$\forall u \in \mathcal{L}(E), \exists ! \lambda \in \mathbb{K}, \forall f \in \mathcal{A}_{n}(E), \forall x \in E^{n}, f(u(x)) = \lambda f(x)$$

# Définition
Ce $\lambda$ est appelé le déterminant de $u$ et est noté : $\det(u)$

# Propriété
Si $e$ est une base de $E$, 
$$\det(u) = \det_{e}(u(e))$$

# Propriété
$$\forall u \in \mathcal{L}(E), u \in GL(E) \Rightarrow \det(u) \neq 0$$

# Propriété
L'application $u \mapsto \det(u)$ est un morphisme de groupe surjectif de $(GL(E), \circ)$ vers $(\mathbb{K}^{*}, \times)$.

# Définition
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$, 
et $u_{A}$ l'endomorphisme canoniquement associé à $A$, 
On appelle déterminant de $A$ le scalaire :
$$\det(A) = \det(u_{A})$$

# Propriété
Soit $u \in \mathcal{L}(E)$, et $e$ un base de $E$
alors, $\det(Mat_{e}(u)) = \det(u)$

# Propriété
$$\forall A \in \mathcal{M}_{n}(\mathbb{K}), A \in GL_{n}(A) \Leftrightarrow \det(A) \neq 0$$

# Propriété
Un système linéaire de $n$ équations à $n$ inconnues est de Cramer ssi la matrice de son système homogène associé est de determinant non nul

# Conséquence
Une matrice antisymétrique d'ordre <u>impair</u> ($n$ impair) n'est pas inversible. 

# Propriété
Le déterminant d'une matrice est celui de ses vecteurs colonnes (resp. lignes) dans la base canonique. 
Le déterminant matriciel
$$\det : \begin{cases}
\mathcal{M}_{n}(\mathbb{K}) \to \mathbb{K} \\
M \mapsto \det(M)
\end{cases}$$
est une application qui est "$n$-linéaire alternée" par rapport aux colonnes (resp. lignes) de sa variable. 

# Propriétés
Pour une matrice carrée : 
1. $L_{i} \leftrightarrow L_{j}$
   Un échange de deux lignes (resp. colonnes) ie une transposition de lignes (rep. colonnes) change son déterminant en son opposé
2. $L_{i} \leftarrow \lambda L_{i}$
   Une dilatation de facteur $\lambda$ sur une ligne (colonne) multiplie son déterminant par $\lambda$
3. $L_{i} \leftarrow L_{i} + \lambda L_{j}$
   Une transvection sur les lignes (rep. colonnes) ne change pas son déterminant
4. L'ajout à une ligne (rep. colonne) d'une CL des autres lignes (resp. colonnes) ne change pas le déterminant.

# Propriété
Le déterminant d'une matrice triangulaire (ou triangulaire par blocs) est le produit de ses coefficients diagonaux

# Définition
On note : 
$$\mathrm{cof}(A, k, l) = (-1)^{k+l}\det(\mathrm{ext}(A, k, l))$$
qu'on appelle le cofacteur de $A$ associé à la $k^{\text{ieme}}$ ligne et $l^{\text{ieme}}$ colonne

# Théorème
Pour $k \in [\![1,n ]\!]$ fixé, 
$$\det(A) = \sum_{l =1}^{n}a_{k, l}\mathrm{cof}(A, k, l)$$
Pour $l \in [\![1,n]\!]$ fixé, 
$$\det(A) = \sum_{k = 1}^{n}a_{k, l} \mathrm{cof}(A, k, l)$$
# Définition
Un déterminant de Vandermonde (VDM) est un déterminant de la forme :
$$V_{n}(\lambda_{1}, \dots, \lambda _{n}) =\left| \begin{array}{c}
1&1&\dots&1 \\
\lambda_{1}&\lambda_{2}&\dots&\lambda_{n} \\
\lambda_{1}^{2}&\lambda_{2}^{2}&\dots&\lambda_{n}^{2} \\
\vdots&\vdots&\vdots&\vdots \\
\lambda_{1}^{n-1}& \lambda_{2}^{n-1}& \dots & \lambda_{n}^{n-1}
\end{array} \right|  $$
ou $\lambda_{1}, \dots, \lambda_{n} \in \mathbb{K}$.

# Proposition
$$\forall \lambda_{1}, \lambda_{n} \in \mathbb{K}, V_{n}(\lambda_{1}, \dots, \lambda_{n}) = \prod_{1 \leq i < j \leq n}(\lambda_{j}- \lambda_{i})$$

# Définition
Soit $A \in \mathcal{M}_{n}(\mathbb{K})$,
Sa comatrice est la matrice de ses cofacteurs : 
$$\mathrm{Com}(A) = (\mathrm{cof}(A, i, j))_{1\leq i, j \leq n}$$

# Théorème
$$\forall A \in \mathcal{M}_{n}(\mathbb{K}), (\mathrm{Com}(A))^{T}A = \det(A)I_{n}$$
En particulier si $A \in GL_{n}(\mathbb{K})$, 
$$A^{-1} = \frac{1}{\det(A)}(\mathrm{Com}(A))^{T}$$
