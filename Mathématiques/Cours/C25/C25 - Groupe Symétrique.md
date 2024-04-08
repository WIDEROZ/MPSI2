$X$ est un ensemble quelconque fini ou infini et $n$ est un entier naturel non nul

# I. Définition et notations
#### Définition
Les bijection de $X$ vers $X$ s'appellent des <u>permutations</u> de $X$

#### Propriété
On note $S_{X} = Bij(X, X)$ leur ensemble, 
$$(S_{X}, \circ) \text{ est un groupe}$$
appelé groupe symétrique de $X$ ou groupe des permutations de $X$. 
Neutre : $Id_{X}$

Démonstration : déja vue.

#### Notation
On note
- $S_{n} = S_{[\![1,n]\!]}$
- Dans le cadre de $S_{n}$ on note aussi $\cdot$ ou rien à la place de $\circ$
- On note $1$ pour $Id_{[\![1,n]\!]}$ : Une composée est aussi appelé produit. 

#### Notation
Un élément $\sigma$ de $S_{n}$ peut être noté à l'aide d'un matrice à deux lignes : 
$$\begin{pmatrix}
1&2&\dots&n \\
\sigma(1)&\sigma(2)&\dots&\sigma(n)
\end{pmatrix}$$

#### Exemple
$$\sigma = \begin{pmatrix}
1&2&3&4&5&6&7 \\
1&4&7&5&2&6&3
\end{pmatrix}$$
Excal 1

#### Proposition
Dès que $|X| \geq  3$, $S_{X}$ n'est pas commutatif, 

Démonstration : 
Soient $a, b, c \in X$, 2 à 2 disjoints, 
On note, $\tau_{1}$ l'élément de $S_{X}$ qui fixe tous les points de $X$ sauf $a$ et $b$ (et donc $\tau_{1}(a)=b$ et $\tau_{1}(b) = (a$))
De même pour $\tau_{2}$ avec $b$ et $c$

On a alors, 
$$\begin{array}{rl}
(\tau_{1}\tau_{2})(a) = b \\
(\tau_{2}\tau_{1})(a)= c
\end{array}$$
Donc, 
$$\tau_{1}\tau_{2} \neq \tau_{2} \tau_{1}$$

#### Définition
Pour $\sigma \in S_{X}$, 
Le support de $\sigma$ est : 
$$supp(\sigma) = \{ x \in X | \sigma(x) \neq x\}$$

#### Proposition
Deux permutations à support disjoints commutent. 

Démonstration : ez. 


#### Exercice
Soient $f, g \in S_{X}$ tq $supp(f) \cap supp(g) = \{ x \}$
avec $x \in X$, 
On note $h = fgf^{-1}g^{-1}$, 
(Remarque : $h = 1$ ssi $f$ et $g$ commutent)
Montrer que $|supp(h)|=3$ en décrivant les éléments de $supp(h)$ et leurs images. 

#### Proposition
Soient $X, Y$ deux ensembles quelconques, 
Si il existe un bijection $f$ de $X$ vers $Y$, alors, $S_{X}$ et $S_{Y}$ sont isomorphes. 

Démonstration : 
$$\begin{array}{rcl}
X& \overset{f}{\longrightarrow}& Y \\
\sigma \in S_{X}\uparrow & \circlearrowright & \uparrow f \circ \sigma \circ f^{-1} \\
X &\underset{f^{-1}}{\longleftarrow} & Y
\end{array}$$

On pose  : 
$$\phi : \begin{cases}
S_{X} \to S_{Y} \\
\sigma \mapsto f \circ \sigma \circ f^{-1}
\end{cases}$$
$$\psi : \begin{cases}
S_{Y} \to S_{X} \\
\sigma' \mapsto f^{-1} \circ \sigma' \circ f
\end{cases}$$
Alors, $\psi$ est réciproque de $\phi$ car pour $\sigma \in S_{X}$, 
$$\begin{array}{rl}
(\psi \circ \phi)(\sigma) &=  \psi(f \circ \sigma f^{-1}) \\
&= f^{-1} \circ f \circ \sigma \circ f^{-1} \circ f \\
&= Id_{X} \circ \sigma \circ Id_{Y} \\
&= \sigma
\end{array}$$
Donc, 
$$\psi \circ \phi = Id_{S_{X}}$$
et de même pour mondtrer que $\phi \circ \psi = Id_{S_{Y}}$
Ainsi, 
$\phi$ est bijective

De plus, pour $\sigma_{1}, \sigma_{2} \in S_{X}$, 
$$\begin{array}{rl}
\phi(\sigma_{1}\sigma_{2}) &= f \sigma_{1}\sigma_{2}f^{-1} \\
&= f \sigma_{1}f^{-1}f \sigma_{2}f^{-1} \\
&= \phi(\sigma_{1})\phi(\sigma_{2})
\end{array}$$
Donc, $\phi$ est un isomorphisme de groupe. 

#### Conclusion
Si $X$ est fini et $n = |X|$,
alors, $S_{X}$ est isomorphe à $S_{n}$

#### A partir de maintenant on travaille sur $S_{n}$

# II. Cycles
#### Définition
Soient $r \geq 2$ et $a_{1}, \dots, a_{r} \in [\![1,n]\!]$, deux a deux disjoints. 
On note $(a_{1} \space a_{2}\space \dots \space a_{r})$ et on appelle $r$-cycle la permutation $c$ de support $\{ a_{1}, a_{2}, \dots, a_{r} \}$ telle que $c(a_{r}) = 1$ et
$$\forall i \in [\![1,r-1]\!], c(a_{i}) = a_{i+1}$$

#### Exemple
$$\begin{pmatrix}
1&2&3&4&5 \\
4&2&1&5&3
\end{pmatrix} = (1 \space 4 \space 5 \space 3)= (5 \space 3 \space 1 \space 4)$$


#### Définition
Un $2$-cycle est appelé une transposition

#### Exemple
$(1 \space n)$ est une transposition de $S_{n}$

#### Théorème
Tout élément de $S_{n}$ s'écrit comme produit de cycles a support disjoint deux à deux. 
Par la propriété précédente cette écriture est, commutative.
Elle est unique à l'ordre des cycles. 

Autrement dit : 
Si $\sigma \in S_{n}$ s'écrit $\sigma = c_{1} \dots c_{k}$ et $\sigma = c_{1}' \dots c_{l}'$
des cycles à support 2 à 2 disjoints
alors, $k=l$ et il existe $f \in S_{l}$ tq $\forall j \in [\![1,l]\!], c'_{j} = c_{f(j)}$

Démonstration : Voir le poly. 

#### Pratique
$$\begin{pmatrix}
1&2&3&4&5&6&7 \\
1&4&7&5&2&6&3
\end{pmatrix} = (2 \space 4 \space 5)(3 \space 7)$$

#### Proposition
Soit $\sigma \in S_{n}$ et sa décomposition en cycles (à support 2 à 2 disjoints), 
$\sigma = c_{1} \dots c_{n}$ ou pour $k \in [\![1,n]\!]$, $c_{k}$ est un $r_{k}$-cycle
Alors, 
$$r_{1} \vee \dots \vee r_{k}$$
(Oui oui le ppcm...)
est le plus petit entier strictement positif tq $\sigma^{r}=1$

#### Remarque
$r$ s'appelle l'ordre de $\sigma$. 
Cela justifie qu'on parle de cycle d'ordre $k$ pour un cycle de longueur $k$.

#### Exemple
Avec l'exemple précédent : 
$$\sigma_{1} = \begin{pmatrix}
1&2&3&4&5&6&7 \\
1&4&7&5&2&6&3
\end{pmatrix} = (2 \space 4 \space 5)(3 \space 7)$$
$$\sigma_{1}^{2019} = \sigma_{1}^{2016}\sigma_{1}^{3} = \sigma_{1}^{3} = (2 \space 4 \space 5)^{3}(3 \space 7)^{3} = (3 \space 7)$$

#### Propriété
Soient $a_{1}, \dots, a_{r} \in [\![1,n]\!]$ 2 à 2 différents, 
Pour $\sigma \in S_{n}$, on a : 
$$\sigma(a_{1} \space a_{2} \space \dots \space a_{r})\sigma^{-1} = (\sigma(a_{1}) \ \space \dots \space \sigma(a_{r}))$$

Démonstration : 
$\sigma(a_{1} \space a_{2} \space \dots \space a_{r})\sigma^{-1}$ et $(\sigma(a_{1}) \ \space \dots \space \sigma(a_{r}))$ sont deux application de $[\![1,n]\!]$ vers $[\![1,n]\!]$,
Montrons qu'elles donnent la même image pour chaque entier de $[\![1, n]\!]$, 
Soit $k \in [\![1, n]\!]$, 
On a plusieurs cas : 
- $k \not\in \{  \sigma(a_{1}), \dots, \sigma(a_{r}) \}$
  Alors, $(\sigma(a_{1}) \space \dots \space \sigma(a_{r}))(k) = k$ et comme $\sigma^{-1}$ est bijective, $$\sigma^{-1}(k) \not\in \{ \sigma^{-1}(\sigma(a_{1})), \dots, \sigma^{-1}(\sigma(a_{r})) \} = \{ a_{1}, \dots, a_{r} \}$$Donc, $(a_{1} \space \dots \space a_{r})$
  Puis, $(\sigma(a_{1} \space \dots \space a_{r})\sigma^{-1})(k) = (\sigma \sigma^{-1})(k) = k$
  Ainsi, $$(\sigma(a_{1} \space \dots \space a_{r})\sigma^{-1})(k) = (\sigma(a_{1}) \space \dots \space \sigma(a_{r}))$$
- $k = \sigma(a_{r})$
  Alors
  $$\begin{array}{rl}
  (\sigma(a_{1} \space \dots \space a_{r})\sigma^{-1})(k) &= (\sigma(a_{1} \space \dots \space a_{r})\sigma^{-1})(a_{r}) \\
  &= \sigma(a_{1}) \\
  &= (\sigma(a_{1}) \dots \sigma(a_{r}))(k)\end{array}$$

- $k = \sigma(a_{i})$ avec $i \in [\![1,r-1]\!]$,
  $$\begin{array}{rl}
(\sigma(a_{1} \dots a_{r})\sigma^{-1})(k) &= (\sigma(a_{1} \dots a_{r}))(a_{i}) \\
& = \sigma(a_{i+1}) \\
& = (\sigma(a_{1}) \dots \sigma(a_{r}))(k)
\end{array}$$

# III. Signature
#### Lemme
Soit $a_{1}, \dots, a_{r} \in [\![1,n]\!]$, 
Tout cycle s'écrit comme produit de transposition : 
$$(a_{1} \dots a_{r}) = (a_{1}\space a_{2})(a_{2} \space a_{3}) \dots (a_{r-1}a_{r})$$

Démonstration : ez clap

#### Remarque
Si $a_{1}, \dots, a_{k}, a_{k+1}, \dots, a_{l} \in [\![1, n]\!]$ sont deux à deux différents, 
$$(a_{1} \space \dots \space a_{k})(a_{k} \space \dots \space a_{l}) = (a_{1} \space \dots \space a_{k-1} \space a_{k} \space a_{k+1} \space \dots \space a_{l})$$
On montre le lemme précédent par recurrence immédiate. 

#### Remarque importante
$$\forall u \in \mathbb{MAALOUL}, \exists û \in \mathbb{ALI}, u(u) = û$$

#### Conclusion
Le produit de 2 cycles 

#### Corollaire
Toute permutation s'écrit comme produit de transpositions. 
On dit que les transpositions engendrent $S_{n}$. 

#### Exemple
$$\sigma_{1}=(2 \space 4 \space 5)(3 \space 7) = (2 \space 4)(4 \space 5)( 3 \space 7)$$
(Supports de chaque transposition plus disjoints en général)

#### Exercice
1. Montrer que les transpositions $(i \space \space \space \space i+1)$ ou $i \in [\![1, n-1]\!]$, engendrent $S_{n}$. 
2. Mq $(1 \space  2)$ et $(1 \space 2 \space \dots \space n)$ engendrent $S_{n}$

#### Théorème
Il existe un unique morphisme $\epsilon$ de $S_{n} \to \mathbb{U}_{2} = \{ \pm1 \}$ tel que:
pour toute transposition $\tau$, $\epsilon(\tau) = -1$
On l'appelle la signature. 

Démonstration : unicité évidente par le corollaire précédent et voir l'existence sur le poly

#### Remarque
Pour $n= 1$,
$\epsilon$ est trivial, ($S_{1}=\{ Id_{\{ 1 \}} \}$ et comme $\epsilon$ est un morphisme, $\epsilon(Id_{\{ 1 \}})=1$)

Pour $n \geq 2$, 
$\epsilon$ est l'unique morphisme non trivial des $S_{n}$ vers $\{ \pm 1 \}$

#### Propriété (Formule signature)
Pour $\sigma \in S_{n}$, 
Dans la preuve du théorème, on voit une formule pour $\epsilon$ :
$$\epsilon(\sigma) = (-1)^{n-f-c}$$
où
- $f$ est le nombres de points fixes
- $c$ est le nombre de cycles dans la décomposition de $\sigma$

#### Exemple
$$\sigma (2 \space 4 \space 5)(3 \space 7)$$
deux points fixes : $1$ et $6$, 
donc, 
$$\epsilon(\sigma_{1}) = (-1)^{7-2-2} = -1$$
ou : 
$$\epsilon((2 \space 4)(4 \space 5)(3 \space 7)) = \epsilon((2 \space 4))\epsilon((4 \space 5))\epsilon((3 \space 7)) = (-1)^{3} = -1$$

#### Propriété
Si $c$ est un $r$-cycle alors
$$\epsilon(c) = (-1)^{r-1}$$

Démonstration : 
$$c= (a_{1} \space \dots \space a_{r}) = (a_{1} \space a_{2})(a_{2} \space a_{3}) \dots (a_{r-1} \space a_{r})$$


#### Définition
On appelle permutation paires les éléments de $\text{Ker }\epsilon$ ie celles de signature $1$ et impaires de signature $-1$. 


#### Remarque
- $1$ est paire
- Les transposition sont impaires
- Les $3$-cycles sont pairs
- Les $4$-cycles sont impairs

#### Complément
$$\text{Ker }\epsilon = \mathcal{A}_{n} \underset{s.g.}{\subset} S_{n}$$
appelé groupe alterné. 

#### Exercice
Il est engendré par les $3$-cycles
(pour $n = 1$, $2$, $\mathcal{A}_{n} = \{ 1 \}$ est engendré par $\varnothing$)
$\int noir \, dx = blanc - C$
wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww*


SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSq