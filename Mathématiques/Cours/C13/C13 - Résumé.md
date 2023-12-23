# Définition d'un LCI
Soit $M$ un ensemble quelconque.
Une L.C.I. "T" sur M est une application
$$T: \left\{ \begin{array}{l}
M \times M \to M \\
(x, y) \mapsto xTy \end{array} \right.$$

# Définition : Associatif, commutatif, élément neutre
Soit $(M, \top)$ un magma
Alors la loi $\top$
- Est associative ssi $\forall x, y, z \in M, (x\top y)\top z=x\top(y\top z)$
- Est commutative ssi $\forall x, y \in M, x \top y = y \top x$ 
- Admet $e \in M$ pour élément neutre ssi
  $$\forall x \in M, \left\{ \begin{array}{l}
 x \top e = x \\
 e \top x = x
 \end{array} \right.$$

# Propriété : unicité de l'élément neutre
Avec ces notations, si $\top$ admet un neutre alors ce neutre est unique. 

# Définition du symétrique
Soit $(M, \top)$ unitaire i.e. tel que $\top$ admette un neutre $e$ qui est alors unique. 
Pour $x, y \in M$, 
On dit que $x$ admet $y$ pour symétrique (pout $\top$) ssi
$$\left\{ \begin{array}{l}
x \top y = e \\
y \top x = e
\end{array} \right.$$

# Propriété : Unicité du symétrique
Si $(M, \top)$ est un magma unitaire associatif (i.e. $\top$ est associative)
Alors lorsque pour $x \in M$, si il admet un symétrique, ce symétrique est unique.

# Propriété : Produit symétrisable
Si $(M, \top)$ est un magma unitaire associatif (i.e. $\top$ est associative)
Si $x, y \in M$, sont symétrisables, de symétriques $x', y'$ alors $xy$ est aussi symétrisables. 

# Définition : Distributivité de $\bot$
Soit $(M, \top, \bot)$ un magma
On dit que $\bot$ est distribuable par rapport a $\top$
ssi $\forall x, y, z \in M$, 
$$\left\{ \begin{array}{l}
x \bot (y \top z) = (x \bot y) \top (x \bot y) \\
(x \top y)\bot z = (x \bot z) \top(y \bot z)
\end{array} \right.$$

# Définition stabilité
Soit $(M, \top)$ un magma. 
Une partie $A \subset M$ est dite stable par $\top$ ssi
$$\forall x, y\in A, x \top y \in A$$

# Propriété stabilité
Si $A$ est une partie stable par $M$ pat $\top$, la loi induite $\top_{A}$ définie par
$$\top_{A} : \left\{ \begin{array}{l}
A \times A \to A \\
(x, y) \mapsto x \top y
\end{array} \right.$$
est bien définie et est une LCI sur $A$ 

# Définition : Produit cartésien de LCI
Soient $(M_{1}, \top_{1})$, $(M_{2}, \top_{2})$ deux magmas. 
Alors $(M_{1}\times M_{2}, \top)$

$$\top : \left\{ \begin{array}{l}
(M_{1} \times M_{2}) \times (M_{1} \times M_{2}) \to M_{1} \times M_{2} \\
((x_{1}, y_{1}), (y_{1}, y_{2})) \mapsto (x_{1}\top_{1} y_{1}, x_{2}\top_{2}y_{2})
\end{array} \right.$$
c'est un magma appelé produit de $(M_{1}, \top_{1})$ et $(M_{2}, \top_{2})$ (abusivement de $M_{1}$ et $M_{2}$)
La loi $\top$ est la LCI : produit de $\top_{1}$ et $\top_{2}$ 

# Extension du produit cartésien de LCI
Loi produit d'un nombre fini de lois
- Exemple : $(\mathbb{R}^n, +)$ : 
  $$(x_{1}, \dots, x_{n}) + (y_{1}, \dots, y_{n}) = (x_{1} + y_{1}, \dots, x_{n}+y_{n})$$

# Définition de $\overset{\cdot}{\top}$
Soit $(M, \top)$ un magma de $E$ un ensemble quelconque.
On définit la loi $\overset{\cdot}{\top}$ sur $M^E$ par : 
$$\overset{\cdot}{\top} : \left\{ \begin{array}{l}
M^E \times M^E \\
(f, g) \mapsto f \overset{\cdot}{\top}g : \left\{ \begin{array}{l}
E \to M \\
x \mapsto f(x)\top g(x)
\end{array} \right.
\end{array}
\right.$$

