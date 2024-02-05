# Définition d'un LCI
Soit $M$ un ensemble quelconque.
Une L.C.I. "$\top$" sur M est une application
$$\top: \left\{ \begin{array}{l}
M \times M \to M \\
(x, y) \mapsto x\top y \end{array} \right.$$

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
Si $A$ est une partie stable de $M$ par $\top$, la loi induite $\top_{A}$ définie par
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
((x_{1}, x_{2}), (y_{1}, y_{2})) \mapsto (x_{1}\top_{1} y_{1}, x_{2}\top_{2}y_{2})
\end{array} \right.$$
c'est un magma appelé produit de $(M_{1}, \top_{1})$ et $(M_{2}, \top_{2})$ (abusivement de $M_{1}$ et $M_{2}$)
La loi $\top$ est la LCI : produit de $\top_{1}$ et $\top_{2}$ 

# Extension du produit cartésien de LCI
Loi produit d'un nombre fini de lois
- Exemple : $(\mathbb{R}^n, +)$ : 
  $$(x_{1}, \dots, x_{n}) + (y_{1}, \dots, y_{n}) = (x_{1} + y_{1}, \dots, x_{n}+y_{n})$$

# Définition de $\overset{\cdot}{\top}$ sur $M^E$
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

# Propriétés de $\overset{\cdot}{\top}$ 
#### Cas 1 : Pour une partie de $M$
Soit $(M, \top)$ un magma et $A \subset M$ stable par $\top$ Ainsi,
- $(M, \top)$ associatif $\Rightarrow (A, \top)$ associatif
- Si $M$ admet un neutre $e \in A$ et $e \in A$, alors $e$ est neutre de $A$
- Si $e \in A$ et $x \in A$ admet un symétrique $x'$ dans $M$ et $x'\in A$ alors $x$ est symétrisable dans $A$


#### Cas 2 : Pour un Produit cartésien
- Si $(M_{1}, \top_{1})$ et $(M_{2}, \top_{2})$ sont associatifs (resp. commutatifs) alors $M_{1} \times M_{2}, \top$ l'est aussi ($\top$ loi produit)
- Si $(M_{1}, \top_{1})$ et $(M_{2}, \top_{2})$ admettent un neutre (resp.  $e_{1}$ et $e_{2}$) alors $(e_{1}, e_{2})$ est neutre de $M_{1} \times M_{2}$
- Dans le cas précédent, si de plus $x = (x_{1}, x_{2}) \in M_{1} \times M_{2}$ vérifie que $x_{1}$ est symétrisable dans $M_{1}$ et $x_{2}$ symétrisable dans $M_{2}$ alors $x$ est symétrisable

#### Cas 3 : Pour $M^E$
- Si $(M, \top)$ associatif (resp. commutatif) alors $(M^E, \top)$ l'est aussi. 
- Si $(M, \top)$ admet un neutre alors celui-ci est neutre de $(M^E, \top)$
- Si $x \in M$ est symétrisable dans $(M, \top)$ alors $x$ l'est aussi dans $(M^E, \top)$

# Définition d'un groupe
Un groupe est un magma associatif unitaire (qui admet un neutre) dont tout élément est symétrisable

# Définition : Groupe Abélien
Un groupe est dit Abélien ou commutatif lorsque sa loi est commutative

# Définition $S_{E}$
Si $E$ est un ensemble quelconque, 
On note $S_{E} = \mathrm{Bij}(E, E)$ l'ensemble des bijections de $E$ vers $E$. 
On introduit le vocabulaire suivant : 
Un bijection de $E$ vers $E$ est appelé une permutation de $E$ 

# Propriété groupe des permutations
$(S_{E}, \circ)$ est un groupe qu'on appelle groupe des permutations de $E$ vers $E$ ou un groupe symétrique de $E$ 

# Définition matrices carrés inversibles
Pour $\mathbb{K} \in \{\mathbb{R}, \mathbb{C}\}$ on note $GL_{n}(\mathbb{K})$ l'ensemble des matrices carré d'ordre $n$ inversibles

# Propriété (Avant première)
$GL_{n}(\mathbb{K}, \times)$ est un groupe

# Définition
Pour $n \in \mathbb{N}^*$, 
On définit
$$S_{n} = S_{[\![1;\dots;n ]\!]}$$

# Notation $S_{E}$
$\sigma \in S_{n}$ est noté sous forme "matricielle" aussi 
$$\left( \begin{array}{c}
1 & 2 & \dots & n \\
\sigma(1) & \sigma(2) & \dots & \sigma(n)
\end{array} \right)$$

# Définition p-cycle
Soit $p \in [\![2, n]\!]$ 
Un p-cycle de $S_{n}$ est une transposition $c$ telle qu'il existe $a_{1}, .., a_{p} \in [\![1,n]\!]$ différents tq, 
$\sigma(a_{1}) = a_{2}$, $\dots$, $\sigma(a_{p-1}) = a_{p}$ et $\sigma(a_{p}) = a_{1}$
et pour tout $x \notin \{a_{1}, \dots, a_{p}\}$, $\sigma(x) = x$ 
On note alors $c = (a_{1}a_{2}\dots ap)$ ($= (a_{2}\dots a_{p}a_{1})$ etc)

# Définition support
Si $\sigma \in S_{n}$, $sup(\sigma) = \{k \in [\![1, n]\!] | \sigma(k)\neq k\}$ (support de $k$)

# Théorème 
Toute $\sigma \in S_{n}$ s'écrit comme un produit commutatif de cycles à supports disjoints

# Lemme
Deux permutations à support deux à deux disjoints commutent

# Définition : transposition
Un $2$-cycle est appelé une transposition

# Définition : Sous-groupe
Soir $(G, \cdot)$ un groupe
Une partie de $H\subset G$ est appelé un sous-groupe de $G$ (en fait de $(G, \cdot)$)
ssi
1. $H$ est stable par $\cdot$
2. $H$ munie de la loi induite par $\cdot$ est un groupe

### Notation : $H \underset{sg}{\subset} G$ 
# Lemme du neutre
Soit $(G, \cdot)$ un groupe et $H \subset G$, 
$$H \underset{sg}{\subset} G \Rightarrow 1_{H} = 1_{G}$$

# Caractérisation des sous-groupes
Soit $G$ un groupe, 
Alors les trois propositions sont équivalentes,
Pour $H$ un ensemble. 
1. $$H \underset{sg}{\subset} G$$
2. $$\left\{ \begin{array}{l}
H \subset G \\
H \neq \varnothing \\
H \text{ est stable par } \cdot \\
H \text{ est stable par passage a l'inverse}
\end{array} \right.$$
3. $$\left\{ \begin{array}{l}
H \subset G \\
1_{G} \in H \\
\forall x, y \in H, xy^{-1} \in H
\end{array} \right.$$

# Théorème sous-groupes de $(\mathbb{Z}, +)$
Les sous groupes de $(\mathbb{Z}, +)$ sont les $n\mathbb{Z}$ où $n \in \mathbb{N}$ 

# Définition : morphisme de groupes
Soient $(G, \cdot_{_{G}})$ et $(G', \cdot_{_{G'}})$ 
Deux groupes
Un morphisme (de groupes) de $G$ vers $G'$ est une application $\phi : G \to G'$ qui préserve la loi
$$\forall x, y \in G, \phi(x \cdot_{_{G}} y) = \phi(x) \cdot_{_{G'}} \phi(y) $$

# Propriété neutre et symétrique
Soit $\phi : G \to G'$ un morphisme de groupes. Alors
1. $\phi(1_{G}) = 1_{G'}$
2. $\forall x \in G, \phi(x^{-1}) = (\phi(x))^{-1}$ 

# Propriété composition de morphismes
Soient $\phi : G \to G'$ 
et $\Psi : G' \to G''$ 
Deux morphismes de groupes
Alors, 
$$\Psi \circ \phi : G \to G''$$
est un morphisme de groupes


# Propriété d'un morphisme d'un groupe cyclique
$$\phi: (\mathbb{Z}, +) \to (G, \cdot)$$
Un morphisme, uniquement déterminé par $g = \phi(1)$ alors :
$$\forall n \in \mathbb{Z}, \phi(n) = g^n$$

# Propriété "Stabilité du morphisme pour les sous groupes"
Soit $\phi : G \to G'$
Le morphisme de groupes
Alors 
1. Pour tout $H \underset{sg}{\subset} G$,
   On a $\phi(H) \underset{sg}{\subset} G'$ 
2. Pour tout $H' \underset{sg}{\subset} G'$, 
   On a $\phi^{-1}(H') \underset{sg}{\subset} G$ 

# Définition $Ker$ et $\text{Im}$
Avec les notations précédentes : 
On note
$$\mathrm{Im}(\phi) = \phi(G)$$
On note : 
$$Ker \, \phi = \phi^{-1}(\{1_{G'}\})$$
Le noyau de $\phi$ qui est un sous groupe de $G$

# Propriété de $Ker$ et $\text{Im}$
Avec ces notations
$\phi$ est surjective ssi $\mathrm{Im}\,\phi = G'$
et $\phi$ est injective ssi $Ker \, \phi = \{1_{G}\}$ 

# Définition Isomorphisme et Automorphisme
Un isomorphisme de groupes est un morphisme de groupes bijectif un automorphisme d'un groupe $G$ est un isomorphisme de $G$ vers $G$ (l'ensemble des automorphismes de $G$ est noté $Aut(G)$)

# Propriété isomorphisme réciproque
Soit $\phi : G \to G'$ un isomorphisme de groupes
Alors $\phi^{-1}: G' \to G$ est "automatiquement" un morphisme de groupe (Donc un isomorphisme)

# Propriété : Conjugaison par $G$
Soit $(G, \cdot)$ un groupe
Pour $g \in G$ fixé on note
$$C_{g} : \left\{ \begin{array}{l}
G \to G \\
x \mapsto gxg^{-1}
\end{array} \right.$$
(conjugaison par $g$)
qui est un automorphisme de $G$ 

# Proposition ????????
Soit $G$ un groupe, 
Alors
$$ \phi :
\left\{ \begin{array}{l}
G & \longrightarrow & S_G \\
g & \longmapsto & \phi_g : \left\{ \begin{array}{l}
G \to G \\
x \mapsto gx
\end{array} \right.
\end{array} \right.$$
est un isomorphisme de groupes injectif

# Théorème : Signature (Avant première)
Pour $n \geq 2$ il existe un unique morphisme $\epsilon$ non trivial ($\neq (x \mapsto 1)$) de $(S_{n}, \circ)$ vers ($\{\pm 1\}, x$)
Il vérifie que pour toute transposition $\tau$ (2-cycle)
$$\epsilon(\tau) = -1$$
$\epsilon$ s'appelle la signature. 

# Définition : Noyau de la signature
$$Ker \space \epsilon = A_{n}$$
est le sous groupe symétrique alterné qui est un sous groupe de $S_{n}$

# Théorème de Cayley
$S(G) = bij(G, G)$
Soit G un groupe alors il existe un morphisme injectif $\phi : G \to S(G)$
i.e. $G$ est isomorphe à un sous-groupe de $S(G)$ 

# Définition Anneau
Un anneau est un magma $(A, +, \times)$ qui vérifie :
- $(A, +)$ est un groupe abélien (de neutre $0_{A}$)
- $\times$ est associative et $\times$ admet un neutre $1_{A} \neq 0_{A}$ 
- $\times$ est distributive par rapport a $+$ (a gauche et a droite)

# Définition Anneau commutatif
Un anneau commutatif est un anneau $(A, +, \times)$ tq $\times$ soit commutative

# Propriété : L'élément neutre de l'addition est l'absorbant de la multiplication 
Soit $(A, +, \times)$ un anneau
Alors $0_{A}$ est absorbant pour $\times$ ie
$$\forall x \in A, x \times O_{A} = O_{A}\times x= O_{A}$$

# Théorème du Binôme de Newton
Soit $(A, +, \times)$ un anneau, $x, y \in A$ et $n \in \mathbb{N}$

Si $xy = yx$, alors
$$(x+y)^n = \sum_{k = 0}^n \binom{n}{k}x^{n-k}y^k$$

# Théorème : Formule de Bernoulli
Soit $(A, +, \times)$ un anneau, $x, y \in A$ et $n \in \mathbb{N}$, 

Si $xy =yx$, alors
$$x^{n+1} - y^{n+1} = (x-y)\sum_{k = 0}^{n} x^{n-k}y^k$$

# Notation $A^\times$
Soit $(A, +, \times)$
On note $A^\times$ (se dit "$A$ croix" ) l'ensemble des éléments de $A$
i.e. l'ensemble des éléments $x$ de $A$ qui admettent un symétrique pour $\times$ 
($x \in A \text{ tq } xx' = x'x = 1_{A}$ qui est alors unique puisque $\times$ est associative, et qu'on note $x^{-1}$) 

# Propriété $(A^\times, \times)$ est un groupe
Pour la loi induite par $\times$ sur $A^\times$, qu'on note encore $\times$ 
$$(A^\times, \times) \text{ est un groupe}$$
appelé groupe des inversibles de l'anneau $A$ 

# Propriété : Inverse d'une matrice carré d'ordre 2
Si $ad-bc \neq 0$
$$\left( \begin{array}{c}
a&b \\
c&d
\end{array}\right)^{-1} = \frac{1}{ad-bc} \left( \begin{array}{c}
d & -b \\
-c & a
\end{array} \right) $$

# Propriété
$$P(E)^\times = \{E\}$$

# Définition : Corp
Un corp $K$ est un anneau commutatif tq $K^\times = K \backslash \{0\} = K^*$ 

# Définition : Sous-anneau
Un sous anneau de $A$ est un sous-groupe additif de $A$ qui contient $1_{A}$ et est stable par multiplication

# Propriété d'une partie d'un anneau
Une partie d'un anneau est un sous anneau ssi : 
- Elle contient 1
- Elle est stable par addition, passage à l'opposé et produit

# Définition : Morphisme d'anneaux
$\phi : A \to A'$ (A et A' deux anneaux)
est un morphisme d'anneaux ssi $\phi(1_{A}) = 1_{A'}$
$$\forall x, y \in A, \left\{ \begin{array}{l}
\phi(x + y) = \phi(x) + \phi(y)  \\
\phi(xy) = \phi(x)\phi(y)
\end{array} \right.$$
En particulier $\phi$ est un morphisme de groupes de $(A, +)$ vers $(A', +)$ donc $\phi'(0_{A}) = O_{A'}$ 

# Définition : $Ker$ et $\text{Im}$
Pour $\phi$ un morphisme d'anneaux, 
$$Im (\phi) = \phi(A)$$
$$Ker (\phi) = \phi^{-1}(\{O_{A'}\})$$

# Propriété de $Ker$ et $\text{Im}$
$Im (\phi)$ est un sous-anneau de $A'$
$Ker (\phi)$ est un sous-groupe de $A$

# Définition Isomorphisme d'anneaux
Un isomorphisme d'anneaux est un morphisme d'anneaux bijectif

# Propriété : Image d'un corp par un morphisme d'anneau
L'image d'un corp par un morphisme d'anneau est un corps

