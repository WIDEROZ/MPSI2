Soit $X, Y, Z$ des ensembles quelconques
#### Rappel des définitions
$$Bij(X, Y), Inj(X, Y), Surj(X, Y)$$

# I. Cardinal d'un ensemble fini
#### Définition
$$X \text{ fini} \Leftrightarrow \exists n \in \mathbb{N}, Bij([\![1, n]\!], X) \neq \varnothing$$

#### Propriété
Dans ce cas $n$ est unique appelé cardinal de $X$ est noté : 
$$Card(X) = |X|$$

###### Voir les lemmes sur le poly
(Ce qui est écrit sur la tableau : Voir lemmc techniqus su le poly)

#### Propriété
$$\begin{rcases}
Inj(X, Y) \neq \varnothing \\
Y \text{ fini}
\end{rcases} \Rightarrow \begin{cases}
X \text{ fini} \\
|X| \leq |Y|
\end{cases}$$

#### Corollaire
Toute partie $A$ d'un ensemble fini $X$ est fini et de cardinal inférieur à celui de l'ensemble : $|A|\leq |X|$

#### Rappel
$$\begin{cases}
A \to X \\
x \mapsto x
\end{cases}$$
est l'injection canonique

#### Théorème : Miracle des cardinaux finis
Soit $f : X \to Y$, 
Si
$$\begin{cases}
X, Y \text{ finis} \\
|X| = |Y|
\end{cases}$$
Alors, 
$$f \text{ inj} \Leftrightarrow f \text{ surj} \Leftrightarrow f \text{ bij}$$

# II. Opérations
Tous les ensembles sont ici finis, 
#### Propriété
$$\left|\bigsqcup_{i = 1}^{p} X_{i}\right| = \sum_{i=1}^{p}|X_{i}|$$

#### Corollaire
$$|X \setminus Y| = |X| - |X \cap Y|$$
