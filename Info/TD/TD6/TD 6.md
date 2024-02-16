# Exercice 1 
## 1.
On raisonne par recurrence : 
On pose : 
$$\mathcal{A}_{n} : \text{"} \text{Un arbre à }n \text{ nœuds possède }n+1 \text{ sous-arbres vides} \text{"}$$

#### Initialisation
Pour $n=0$, l'arbre est vide et contient donc 1 sous arbre vide. 

#### Hérédité
Soit $n \in \mathbb{N}$ tel que, $\forall k \in [\![0, n]\!], A_{k}$, 
Montrons que tout arbre à $n+1$ nœuds contient $n+2$ sous arbres vides. 

Soit $A$ un arbre à $n+1$ nœuds,
Soient $A_{G}$ et $A_{D}$ les sous arbres gauche et droite de $A$
Le nombre de sous arbres vides de $A$ est égal à la somme du nombre des sous arbres vides de $A_{G}$ et de $A_{D}$
Comme $n(A_{g})\leq n$ et $n(A_{D})\leq n$, cette somme vaut : 
$$n(A_{G}) + 1 + n(A_{D}) + 1 = n(A) + 1 = n+1+1=n+2$$

## 2.
On note $N_{0}$ le nombre de feuilles et $N_{1}$ le nombre de nœuds à un fils.
s.a.v. : sous arbre vide
$$N_{s.a.v} = 2 \times N_{0} + N_{1} = n+1$$
$$2N_{0}\leq 2N_{0} +N_{1} = n+1$$
Donc, 
$$N_{0}\leq \frac{n+1}{2}$$
$$2N_{0} = n+1-N_{1}$$
Donc, 
$$N_{0}= \frac{n+1}{2} \Leftrightarrow n+1 \Leftrightarrow N_{1} = 0$$

# Exercice 2
## 1. Trivial $\square$
## 2.
$$C_{n} : \begin{cases}
C(0) = 0 \\
C(n+1) = \sum_{k = 0}^{n} C(k)\times C(n-k)
\end{cases}$$

