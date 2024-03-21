# Propriété
Soit $E, F$ deux ev et $E' \underset{sev}{\subset} E$ 
Alors, 
1. $$\forall u \in \mathcal{L}(E, F), u|_{E'} \in \mathcal{L}(E', F)$$
2. $$\text{rest}_{E'} : \mathcal{L}(E, F) \to \mathcal{L}(E', F) \text{ est linéaire}$$
   ie $\text{rest}_{E'} \in \mathcal{L}(\mathcal{L}(E, F), \mathcal{L}(E', F))$

# Théorème
La composition est bilinéaire : 
1. 
$$\forall u \in \mathcal{L}(E, F), \forall v_{1}, v_{2} \in \mathcal{L}(F,G), \forall \lambda \in \mathbb{K},$$
$$(\lambda v_{1}+v_{2}) \circ u = \lambda(v_{1}\circ u)+v_{2}\circ u$$
2. 
$$\forall u_{1}, u_{2} \in \mathcal{L}(E, F), \forall \lambda \in \mathbb{K}, \forall v\in \mathcal{L}(F, G),$$
$$v\circ (\lambda u_{1}+u_{2}) = \lambda(v\circ u_{1})+v\circ u_{2}$$

# Théorème
Soit $u \in \mathcal{L}(E, F)$ bijective
Alors, $u^{-1}$ est linéaire (ie $u^{-1} \in \mathcal{L}(F, E)$)
(La réciproque d'une application linéaire bijective est automatiquement linéaire)

# Propriété
Soit $E, F$ deux $\mathbb{K}$-ev, 
$u \in \mathcal{L}(E, F)$, 
$E' \underset{\text{sev}}{\subset} E, F' \underset{\text{sev}}{\subset} F$, 
Alors, 
$$u(E') \underset{\text{sev}}{\subset} F$$
$$u^{-1}(F') \underset{\text{sev}}{\subset} E$$

# Propriété
Soit $u \in \mathcal{L}(E, F)$, et $(x_{i})_{i \in I} \in E^{I}$,
Alors
$$u(Vect(x_{i})_{i \in I}) = Vect(u(x_{i}))_{i \in I}$$

# Propriété
L'image d'une famille libre par application linéaire injective est libre

# Proposition
Soit $u \in \mathcal{L}(E, F)$ et $v \in \mathcal{L}(F, G)$
Alors, 
$$
\begin{rcases}
u \text{ de rang fini} \\
v \text{ injective}
\end{rcases} \Rightarrow 
\begin{cases}
v \circ  u \text{ de rang fini} \\
rg(v \circ  u) = rg(u)
\end{cases}
$$
et 
$$\begin{rcases}
u \text{ surjective} \\
v \text{ de rang fini} 
\end{rcases} \Rightarrow \begin{cases}
v \circ u \text{ est de rang fini} \\
rg(v \circ  u) = rg(v)
\end{cases}$$

# Proposition (moins important)
Si $E$ est de dimension finie $n \geq 2$, alors $\mathcal{L}(E)$ n'est pas commutatif. 

# Corollaire
Deux espaces de dimension finie sont isomorphes ssi ils ont la même dimension


#### Remarque importante
pour un endomorphisme dim ev de dim finie
$u$ inversible a gauche $\Leftrightarrow$ $u$ est inversible $\Leftrightarrow$ $u$ est inversible a droite

Est faux en dimension finie

# Théorème
Soit un ev $E$ décomposé en somme directe : $E = \underset{i = 1}{\overset{p}{\oplus}} E_{i}$, 
$F$ un autre ev, et pout tout $i \in [\![1, p]\!]$, $u_{i} \in \mathcal{L}(E_{i}, F)$,
Alors, 
$$\exists!u \in \mathcal{L}(E, F) \text{ tq } \forall i \in [\![1, p]\!], u|_{E_{i}} = u_{i}$$

# Théorème
Soit $E, F$ deux $\mathbb{K}$-ev quelconques,
Soit $u \in \mathcal{L}(E, F)$, et $S$ un supplémentaire de $\text{Ker }u$ dans $E$
Alors il existe un isomorphisme de $S$ vers $\mathrm{Im}(u)$ : 
$$\tilde{u} : \begin{cases}
S \to \mathrm{Im}(u) \\
x \mapsto u(x)
\end{cases}$$

# Définition / Propriété
Soit $E$ un $\mathbb{K}$-ev quelconque et $e = (e_{i})_{i \in I}$ un base de $E$ : 
Pour $x \in E$, 
On note $(x_{i})_{i \in I} \in \mathbb{K}^{I}$ ses coordonnées dans la base $e$. 
$x$ s'écrit : $x = \sum_{i \in I} x_{i}e_{i}$
On définit : pour $i \in I$, l'application 
$$e_{i}^{*} : \begin{cases}
E \to \mathbb{K} \\
x \mapsto x_{i}
\end{cases}$$
La forme coordonnée d'indice $i$ relative a la base $e$ : 
On a : 
$$\forall i \in I, e_{i}^{*} \in E^{*}$$

# Propriété
Pour $e = (e_{i})_{i \in I}$ une base d'un ev $E$,
la famille $e^{*} = (e_{i}^{*})_{i \in I}$ est libre

# Corollaire
Si $E$ est de <u>dimension finie</u>, et $e = (e_{i})_{i = 1}^{n}$ est une base de $E$,
Alors, $e^{*} = (e_{i}^{*})_{i = 1}^{n}$ est une base de $E^{*}$, appelée base duale de $e$

