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

