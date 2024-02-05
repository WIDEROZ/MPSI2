# I. Relations
## 2. Relations d'équivalences
$$
\forall x \in E, x \in \overline{x}
$$
Démonstration par réflexivité
Pour $y-2=2-x$ :
$$ \overline{3} = \{1, 3, 4, 5\} = \overline{4} $$
Il est facile de voir directement que pour k $\geq$ 2 entier
$\forall m,n,m',n'\in \mathbb{Z}$,
$$ \left. \begin{array}{r}
m \equiv m' [k] \\
n \equiv n' [k]
\end{array} \right\}
\Rightarrow 
m+n \equiv m'+n' [k]$$
($\equiv_{k}$ et + sont "compatibles")

Conséquence : 
$^{k}\overline{m+n}$ ne dépends que de $^{k}\overline{m}$ et $^{k}\overline{n}$
Donc on part poser $^{k}\overline{m}$ + $^{k}\overline{n}$ = $^{k}\overline{m+n}$
Puisque ... ne déprends pas de représentation de classe ...

Plus précisément en notant C<sub>k</sub> l'ensemble des classes modulo k
Pour c, c' $\in$ C$_{k}$ on définit $c+c=\overline{n+n'}$ ou $n \in C$ et $n' \in C'$ 
Sont des représentants quelconques des classes

PHOTO

On verra qu'on obtiens un groupe abélien ($C_{k}$, +) qui est noté : $(\mathbb{Z}/k\mathbb{Z}, +)$ ou $\mathbb{Z}/\equiv_{k}$ Groupe cyclique. 
Ce groupe est un quotient du groupe $(\mathbb{Z}, +)$ par le sous groupe $k\mathbb{Z}$ : 
Idée on décide que tous les multiples de k sont "nuls". 

Exclaibur 2. 

En posant en quotient, on obtiens un anneau $(\mathbb{Z}/k\mathbb{Z}, +, \times)$


$$ \phi : \left\{ \begin{array}{l}
t \mapsto e^{ it } \\
\mathbb{R} \rightarrow \mathbb{U}
\end{array} \right. $$
$\mathbb{U} \simeq \mathbb{R}/2\pi \mathbb{Z}$ est isomorphe (iso : bijectif ; morphisme : transporte la loi) à 
$$ \phi : \left\{ \begin{array}{l}
(\mathbb{E}/6\mathbb{Z}, +) \rightarrow (\mathbb{U}, \cdot) \\
E \mapsto e^{ \frac{2\pi t}{6} }
\end{array} \right. $$
$\phi(\mathbb{Z}/6\mathbb{Z}) = \mathbb{U}_{6}$ $(\mathbb{U}_{6}, \cdot)$ et $(\mathbb{Z}/\mathbb{Z}, +)$ sont isomorphes

Construction des ensembles : 
$\mathbb{N} \leftarrow$ Donné par les dieux / l'inspecteur général / ZFR
$\mathbb{Z} \leftarrow$ $\mathbb{N}\times\mathbb{N}$ $(m,n)+(m',n') = (m+m', n+n')$ 
$\mathbb{Z} = \mathbb{N} \times \mathbb{N}/\sim (m,n)\sim(m',n') \Leftrightarrow \space(m-n=m'-n') \Leftrightarrow \space m+n' = m'+n$ 
"$\mathbb{N}\subset \mathbb{Z}$"
On prends $\{ \overline{(n, o)}; n\in\mathbb{N} \}$ 
$\mathbb{Q} = \mathbb{Z}\times \mathbb{Z}^{*}/\sim$ 
où $(p, q) \sim (p', q') \Leftrightarrow \left( \frac{p}{q} = \frac{p'}{q'} \right) \Leftrightarrow pq' = p'q$ 
Notons $\frac{p}{q} = \overline{(p, q)}$ 
par exemple $(2, 4) \sim (1, 2)$ ie $\overline{(2, 4)} = \overline{(1, 2)}$ ie $\frac{2}{4} = \frac{1}{2}$

## 3. Relations d'ordre
- $(\mathbb{R}, \leq)$ est un ensemble totalement ordonné l'ordre "$\subset$" sur P(E) n'est pas total des que $|E| = card(E) \geq 2$ : 
  Soient x, y différents dans E alors, 
  $\{ x \}$ no $\subset \{y\}$ et {y} no $\subset$ {x}  

Excalibur 3. 

- Exemple 33
  X admet un plus petit élément (minimum) qui est $\varnothing$ et un plus grand {0, 1, 2}
  Soit A $\subset$ X
  Est-ce que A admet ... un plus petit et un plus grand élément. 
  exemple : A = {$\varnothing$, {0}, {2, 0}, {0, 1}} min(A) = $\varnothing$
  mais A n'admet pas de plus grand élément.
  ($\mathbb{N}, 1$) où $\forall a, b \in \mathbb{N}, (a|b \Leftrightarrow (\exists k\in\mathbb{N}, ka=b))$ 

- Proposition 32 (Démonstration) :
  Soient M, M' deux majorants de A appartenant à A alors, 
  Comme M majore A et M' $\in$ A alors M' $\leq$ M
  En échangeant les rôles, M $\leq$ M' donc M = M'

- Quel lien entre 1 et $[0; 1[$ ? 
  1 majore $[0; 1[$ cependant 2 majore $[0; 1[$ aussi, mais 1 est le plus petit des majorants de $[0;1[$ 

- Cela existe-t-il toujours? ($\mathbb{R}, P(F), \mathbb{N}, \dots$)
  CN évidente on a besoin que la partie soit majorée.

- Exemple 35 (Démonstration):
  Montrons que $\left\{  \frac{1}{n} ; n \in \mathbb{N} / \{0\} \right\}$ admet une borne inférieure dans $\mathbb{R}$
  Montrons que l'ensemble des minorants de A est $]-\infty; 0]$ par double inclusion
  Si $n \in ]-\infty; 0]$, pour tout $n \in \mathbb{N}^*$, $n \leq 0 \leq \frac{1}{n}$ donc n minore A. 
  Soit n un minorant de A
  Alors $\forall n \in \mathbb{N}^*$, $n\leq \frac{1}{n}$
  Donc par passage a la limite dans une inégalité large $m\leq 0$
  $]-\infty;0]$ est 0, inf(A) = 0

- Exercice 36
	Soit A $\subset P(E)$ ,
	Soit M $\in P(E)$ (i.e. $M \in E$)
	
	M majore A 
	$$\Leftrightarrow \forall X\in A, X \subset M$$
	$$1.\Leftrightarrow \bigcup_{X \in \varnothing}X \subset M$$
	$$ (\forall X \in A, X \subset M (\Leftrightarrow \forall X \in A, \forall z \in X, z \in M)) $$
	$$ \Leftrightarrow \forall X \in A, \forall z \in E (z \in X \Rightarrow z \in M) $$
	$$ \Leftrightarrow \forall z \in E, \forall X \in A, (z \in X \Rightarrow z \in M)  $$ 
	$$ \forall z \in E, \forall X \in P(E), X \in A \Rightarrow \dots $$
	M majore A
	$$ \Leftrightarrow \left\{ \begin{array}{l}
	X \subset M \\
	Y \subset M \\
	Z \subset M
	\end{array} \right. \Leftrightarrow X \cup Y\cup Z \subset M $$
	$\Leftarrow$ : 
	
	Si $X \cup Y \cup Z \subset M$ alors :
	$$ \left\{ \begin{array}{l}
	X \subset X \cup Y \cup Z \subset M \\
	Y \subset \dots \subset M \\
	Z \subset \dots \subset M
	\end{array} \right. $$
	$\Rightarrow$ : 
	Supposons $X \subset M$, $Y \subset M$, $Z \subset M$
	Soit $z \in X \cup Y \cup Z \subset M$
		Si $z \in X$ comme $X \subset M$, alors $z \in M$ 
		Si $z \in Y$ comme ...
		Si ...
	
	
	Mq : 
	$$ \forall X \in A, X \subset M \Leftrightarrow \bigcup_{X \in A}X \subset M $$
	$\Leftarrow$ : 
	Supposons $\bigcup_{X' \in A}X' \subset M$
	Soit $X \in A$ 
	Alors $X \subset \bigcup_{X' \in A}X'$
	Donc $X \subset M$
	("Par transitivité de $\subset$")
	
	$\Rightarrow$ : 
	Supposons que $\forall X \in A$, $X \subset M$
	Soit $z \in \bigcup_{X \in A}X$
	Alors il existe $X_{0} \in A$ tq $z \in X_{0}$
	Comme $X_{0} \in A$
	Alors $X_{0} \subset M$
	Donc $z \in M$
	
	
	Ainsi
	$\bigcup_{X \in A}X$ est plus petit (Par inclusion au sens large) que tout majorant de A
	
	- Est-ce que $\bigcup_{X \in A}X$ est un majorant de A?
	  Oui par 1. car $\bigcup_{X \in A}X \subset \bigcup_{X \in A}X$
	  (Ou plus basiquement car si $X \in A$, $X \subset \bigcup_{X \in A}X$)
	
	Conclusion :
		$\bigcup_{X \in A}X$ est le plus petit des majorants de A, donc A admet une borne supérieure : 
		$sup(A) = \bigcup_{X \in A}X$



- Propriété 37
  Soit E un ensemble
  Pour l'ordre de l'inclusion sur P(E) toute partie A de P(E) admet une borne supérieure et inférieure qui sont :
  $$ sup(A) = \bigcup_{X \in A}X $$
  $$ inf(A) = \bigcap_{X \in A}X $$
  En particulier si $A = \varnothing$
  $$ \left\{ \begin{array}{l}
sup(\varnothing) = \varnothing \\
inf(\varnothing) = E
\end{array} \right. $$
# II. Applications
## 1. Point de vue intuitif
#### Notion :
L'ensemble des applications de E vers F est noté : $F^E$
- Ensemble des fonctions def sur I : $\mathbb{R}^I$
- Ensemble des suites réelles : $\mathbb{R}^\mathbb{N}$ 
- Ensemble des familles d'éléments de P(E) indexées par I : $P(E)^I$
- $|\cdot|$, $Re$, $Im$, $\in \mathbb{R}^{\mathbb{C}}$


## 2. Point de vue formel
- Si $n \in \mathbb{N}$ et E un ensemble l'ensemble : $E^{[|1, n|]}$ est noté $E^n$ en assimilant les applications / familles x $\left\{ \begin{array}{l} [|1, n|] \rightarrow E \\ i \mapsto x_{i} \end{array} \right.$
  avec les n n-uplets $x = (x_{1}, \dots, x_{n})$
  qu'on note aussi $x = (x_{i})_{i \in [|1, n|]}$

- Définition
  Soient $f:E \rightarrow F$n $A \subset E$, $B \subset F$
  tq : $\forall x \in A, f(x) \in B$
  Alors, l'application b est définie
  $$ \tilde{f}:\left\{ \begin{array}{l}
 A \rightarrow B \\
 x \mapsto f(x)
 \end{array} \right. $$
 est appelé implication induite de B par f

## 3. Surjectivité et injectivité
## 4. Notion d'antécédent
- Définition 74 : 
  Voir $f^{-1}$ écrit ne veut pas dire que $f^{-1}$ existe

- Rappel : Image d'une partie A de E par f :
  Pour $A \subset E$, 
  $$ f(A) = \{y \in F | \exists x \in A, y = f(x)\} = {f(x);x\in A} $$
  Image réciproque d'une partie de B (de F) par f :
  Pour $B \subset F$, 
  $$ f^{-1}(B) = \{x \in E|f(x) \in B\} $$
  ATTENTION : $f^{-1}$ n’existe pas
  Excalidraw 4

## 5. Relations ensemblistes concernant les images directes et réciproques
- Proposition 78 : Démonstration :
  Soient $A, A' \in P(E)$ tq $A \subset A'$
  Soit $y \in f(A)$.
  Par définition de l'image directe, il existe $x \in A$ tq $f(x) = y$
  Comme $A \subset A$, $x \in A'$ donc $y \in f(A')$
- Proposition 79 : Démonstration $f(A \cup A') = f(A) \cup f(A')$
  Par double inclusion :
	  On a $A \subset A \cup A'$ donc par croissance des images directes, $f(A) \subset f(A \cup A')$.
	  De même $f(A') \subset f(A \cup A')$
	  Donc $f(A) \cup (A') \subset f(A \cup A')$

	 Soit $y \in f(A \cup A')$.
	 Par définition de l'image directe, il existe $x \in A \cup A'$ tq $f(x) = y$.
	 On fait une disjonction de cas : 
	 - Si $x \in A$,
	   Alors $y = f(x) \in f(A) \subset f(A) \cup f(A')$
	- Si $x \in A'$
	  Alors $y = f(x) \in f(A') \subset f(A) \cup f(A')$
	 
	 Dans les 2 cas $y \in f(A) \cup f(A')$
	 Par double inclusion, $f(A \cup A') = f(A) \cup f(A')$


## 6. Composition
- Proposition 87 : Démonstration
  ... L’ensemble de départ de $h \circ (g \circ f)$ est celui de $g \circ f$ i.e. celui de f i.e. E
  Celui de $(h \circ g) \circ f$ est celui de f i.e. E
  Plus précisément, comme $f \in F^E$ et $g \in G^F$
  Alors $g \circ f$ est bien définie et $g \circ f \in G^F$. 
  Puis comme $(g \circ f) \in G^E$ et $h \in H^G$, alors $h \circ (g \circ f)$ est bien défini et $h \circ (g \circ f) \in H^E$ 
  De même comme $g \in G^F$ et $h \in H^G$, 
  $h \circ g$ et un élément de $H^F$ bien défini, pas $(h \circ g) \circ f$ est un élément de $H^E$ bien défini.
  
  Ainsi $h \circ (g \circ f)$ et $(h \circ g) \circ f$ ont le même ensemble de départ E et le même ensemble d'arrivé $H$ 
  Il suffit alors de montrer qu'elles ont le même graphe i.e. qu'elles donnent la même image de chaque élément de E :
  $$h \circ (g \circ f)(x) = h((g \circ f)(x)) = h(g(f(x))) = (h \circ g)(f(x)) = ((h \circ g) \circ f)(x) $$

- Proposition 89 : Démonstration
  Comme $f \in F^E$ et $Id_{E}  \in E^E$, $f \circ Id_{E} \in F^E$
  Or, $f \in F^E$ donc il suffit de vérifier, pour $x \in E$ $(f \circ Id_{E})(x) = f(Id_{E}) = f(x)$
  De même pour toute l'égalité

## 7. Réciproque d'une bijection
- Proposition 94 : Démonstration
  Supposons que f soit bijective. 
  On pose pour tout $y \in F$, $g(y)$ l'unique élément de E tq $f(x) = y$ (existe et est unique par bijectivité de $f$)
  Cela définit $g \in E^F$
  On a alors :
  - D'une part, pour tout $x \in E$, $g(f(x))$ qui est l'unique $x' \in E$ tq $f(x') = f(x)$ 
    et qui vérifie donc $x = x'$ par injectivité de f, donc $g(f(x)) = x$. 
    Ainsi, $g \circ f = Id_{E}$ 
  - D'autre part, pour $y \in F$, $f(g(y)) = y$ par définition de $g(y)$.
    Ainsi $f \circ g = Id_{F}$
  Ainsi $g$ est réciproque de $f$

  Supposons que $f$ admette une réciproque $g$.
  Alors $g \circ f = Id_{E}$ est injective (car bijective)
  Donc f est injective
  Puis $f \circ g = Td_{F}$ est surjective (car bijective)
  Donc f est surjective
  
  Ainsi f est bijective
  
  On a alors l'équivalence voulue.
  Montrons l'unicité de la réciproque : 
  Supposons que f soit bijective et prenons deux réciproques $g$ et $g'$ de f
  On a $g, g' \in E^F$
  Prenons $y \in F$
  On a $f'(g(y)) = y = f(g'(y))$ (car $f \circ g = f \circ g'$)
  Or f est injective donc $g(y) = g'(y)$
  Ainsi $g = g'$ 

- Proposition 98 : Démonstration n°1
  On a $g^{-1} \in F^G$ et $f^{-1} \in E^F$
  Donc $f^{-1} \circ g^{-1} \in E^G$ 
  Et aussi $(g \circ f)^{-1} \in E^G$

   Pour $z \in G$
   $$ (g \circ f)((f^{-1} \circ g^{-1})(z)) = g((f \circ f^{-1})(g^{-1}(z))) = g(g^{-1}(z)) = z = (g \circ f)((g \circ f)^{-1}(z)) $$
   Or $g \circ f$ est injective (car bijective)
   Donc $f^{-1} \circ g^{-1}(z) = (g \circ f)^{-1}(z)$
   Finalement : 
   $$ (g \circ f)^{-1} = f^{-1} \circ g^{-1} $$

- Proposition 98 : Démonstration n°2
  Comme $g^{-1} \in F^G$ et $f^{-1} \in E^F$
  Alors : $f^{-1} \circ g^{-1} \in E^G$ et :
  $$ (f^{-1} \circ g^{-1})\circ(g\circ f) = f^{-1} \circ((g^{-1} \circ g)\circ f) = f^{-1} \circ (Id_{F} \circ f) = f^{-1} \circ f = Id_{E}$$
  et 
  $$ (g \circ f)(f^{-1} \circ g^{-1}) = g \circ (f \circ f^{-1}) \circ g^{-1}  = g \circ Id_{F} \circ g^{-1} = g \circ g^{-1 } = Id_{G}$$
  Donc :
  $$ f^{-1} \circ g^{-1} = (g\circ f)^{-1}$$

## 8. Théorème de Cantor-Bernstein
## 9. Cardinal d'un ensemble fini
- Lemme 104 : Démonstration :
  Par recurrence finie
  $$ \forall k \in [|1, p|], A_{k} : f(k) \geq k $$
  - Initialisation
    $$ f(1) \in [|1, n|] \space donc \space f(1) \geq 1 $$
  - Hérédité
    Soit $k \in [|1, p-1|]$ tq $A_{k}$
    Alors par stricte croissance :
    $$ f(k+1) > f(k) $$
    Mais comme se sont des entiers,
    $$ f(k+1) \geq f(k) + 1 $$
    Or par H.R. $f(k) \geq k$, donc $f(k+1) \geq k+1$ donc $A_{k+1}$
  - Conclusion :
	Par récurrence, 
	$$ \forall k \in [|1, p|], f(k) \geq k $$
	En particulier :
	$$ p \leq f(p) \leq n $$

- Lemme 105 : Démonstration :
  Les images des éléments de $[|1, p|]$ étant deux à deux distinctes on les notes en les ordonnant : 
  $$ 1 \leq j_{1} < j_{2} < \dots < j_{p} \leq n$$
  On pose alors pour $i \in [|1, p|], \space \phi(i)$ l'unique élément de $[|1, p|]$ tq $f(\phi(i)) = f_{i}$
  - Montrons que $\phi$ est injective :
    Soient $k, k' \in [|1, p|]$ tq $\phi(k) = \phi(k')$
    Alors $j_{k} = f(\phi(k)) = f(\phi(k')) = j_{k}'$ 
    et par stricte croissance de la suite finie : 
    $$ (j_{i})_{i \in [|1, p|]}, \space k = k' $$
  - Montrons que $\phi$ est surjective : 
    Soit $k \in [|1, p|]$ par définition des $j_{i}$
    Il existe $l \in [|1, p|]$ tq $f(k) = j_{i}$
    Par ailleurs, $f(\phi(l)) = j_{l}$, 
    Donc par injectivité de j $\phi(l) = k$

  Ainsi $\phi$ est bijective

- Remarque :
  On définit les ensembles infinis par : E ssi il existe $f : E \mapsto E$ injective et non surjective. Tous les autres sont des ensembles finis. 

## 10. Opération sur les cardinaux finis

- Propositions :
  $$|E \sqcup F| = |E| + |F|$$
  $$ |E \times F| = |E| |F| $$
  $$ |F^E| = |F|^{|E|} $$
  $$ |P(E)| = 2^{|E|} $$

- Proposition 121 :
	Notons pour E, F deux ensembles quelconques. 
	Inj(E, F) l'ensemble des injections dans d'ensemble $F^E$
	Surj(E, F) ...
	Bij(E, F) ...
	
	Soient, E, F finis de cardinaux $p \leq n$
	Combien d'injections de E vers F? 
	i.e. |Inj(E, F)| = ?
	(Si $p > n$n Inj(E,F) = $\varnothing$)
	Comme |E| = p on peut numéroter les éléments de E; $x_{1}, x_{2}, \dots, x_{p}$
	(Comme on a une bijection $\left\{ \begin{array}{l} [|1, p|] \rightarrow E \\ i \mapsto x_{i} \end{array} \right.$ )
	De même choisir une injection de E vers F c'est :
	- Choisir $f(x_{1})$ (n possibilités)
	- Puis choisir $f(x_{2})$ (n-1 possibilités)
	- ...
	- Et enfin Choisir $f(x_{p})$ (n-p+1 possibilités)
	Il y a donc $n \times (n-1) \times \dots \times (n-p+1)$ choix
	i.e. : $\frac{n!}{(n-p)!}$ choix
	
	- Remarque : 
	  Le fait qu'on ait : $p \leq n$ assure que les choix peuvent se faire jusqu'à celui de $f(x_{p})$.
	
	Image mentale : arbre  (Excalibur 5.)
	
	On a donc bien : 
	$$|Inj(E, F) | = \frac{n!}{(n-p)!}$$


- Proposition 122 :
  - Définition : 
    Soit $E$ et $k \in \mathbb{N}$
    On note :
    $$ P_{k} = \{A \in P(E)| \space |A| = k\} $$
    Remarque : si E est fini de cardinal $n < k$, 
    $$ P_{k} = \varnothing $$



## 11. Ensembles infinis
- Démonstration : ("Diagonale" de Cantor) :
  On prouve que $|\mathbb{N}|<| [0, 1] |$
  ($1 = 0.9999\dots$)
  Par l’absurde en supposant qu'on peut dénombrer/numéroter \[0, 1\] et on écrit dans un tableau (infini) une écriture décimale de chaque élément de \[0, 1\] par ordre de numérotation. ($\phi : \mathbb{N} \rightarrow [0, 1]$ est la bijection)
  
  $$ \begin{array}{c|c}
n & \phi(n) \\
0&0,1789233345\dots \\
1&0,3614254789\dots \\
2&0.11111112111\dots \\
 \\
k&0,273 \space \space \space \space \space \space \space \space \space \space \space \space \space \space d
\end{array} $$
  Ou d est la $(k+1)^{eme}$ décimale
  
  On construit un développement décimal tq la n-ieme décimale de ce développement soit différente de 0 de 9 et de la n-ieme décimale de $\phi(n-1)$
  Par exemple ici :
  0,273...
  On note x le nombre admettant ce développement décimal 
  Comme $\phi$ est bijective, il existe $k\in \mathbb{N}$ tq $x = P(k)$. En regardant la diagonale don doit avoir $d \neq d$ pour la $(k+1)^{eme}$ décimale de ce development. 
   Ainsi $[0, 1]$, n'est pas dénombrable
   Or $|[0, 1]| \geq |\mathbb{N}|$
   Donc $|[0, 1]| > |\mathbb{N}|$
   Donc $|\mathbb{R}| \geq |[0, 1]| > |\mathbb{N}|$

- Proposition 128 :
  Excalibur 6.

- Proposition 129 : 
  Excalibur 7.