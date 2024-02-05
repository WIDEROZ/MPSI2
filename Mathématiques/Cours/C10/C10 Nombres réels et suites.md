# I. Rappels et compléments sur $\mathbb{R}$
## 1. Borne supérieure dans $\mathbb{R}$
- Pour $A \subset \mathbb{R}$, et $M \in \mathbb{R}$
  M majore A $\Leftrightarrow$ $\forall x \in A, x \leq M$
  Pour $A \subset \mathbb{R}$ :A
  A est majoré $\Leftrightarrow$ $\exists M\in \mathbb{R}, \forall x\in A, \space x \leq M$ 
- Remarque 9 :


  - $\varnothing$ n'a pas de borne sup car tout réel majore $\varnothing$ et  $\mathbb{R}$ n'admet pas de plus petit élément.
  - Une partie non majorée a pour ensemble de majorants $\varnothing$ qui n'admet pas de plus petit élément
  - Dans ($\mathbb{Q}$, $\leq$), il existe des parties non vides et majorée qui n'admettent pas de borne sup : $\{ q \in \mathbb{q} | q^2\leq 2 \}$ $(\mathbb{Q} \cap [-\sqrt{ 2 }, \sqrt{ 2 }])$. 
  - Tout corp totalement ordonné qui vérifie la propriété de la borne sup est "pareil" que $\mathbb{R}$ au sens ou il existe $\phi:K \rightarrow \mathbb{R}$ tq
    $$ \left\{ \begin{array}{l}  \forall x, y \in K, \left\{ \begin{array}{l} \phi(x + y) = \phi(x) + \phi(y) \\ \phi(xy) = \phi(x) \phi(y) \\ \end{array} \right. \\ \phi(\mathbb{1_{K}}) = \mathbb{1}_{\mathbb{R}} \end{array} \right. $$
	$\phi$ est un morphisme de corp

- Proposition 12 : Démonstration
  On raisonne par disjonction de cas en utilisant la propriété de la borne supérieure dans $\mathbb{R}$
  - Si $A \subset \mathbb{R}$
    - Si $A \neq \varnothing$ et A est majoré
      Alors l'ensemble des majorants dans $\mathbb{R}$, M admet un plus petit élément et son ensemble de majorants dans $\overline{\mathbb{R}}$ est $M \cup \{+ \infty\}$ (car $- \infty$ ne majore pas A puisque $A \neq \varnothing$ et $A \subset \mathbb{R}$) et $sup_{\mathbb{R}}(A)$ est encore le plus petit élément de $M \cup \{+\infty\}$
      Donc $sup_{\mathbb{R}}(A) = sup_{\overline{\mathbb{R}}}(A)$
    - Si A est non majorée, l'ensemble de ses majorants dans $\overline{\mathbb{R}}$ est $\overline{\mathbb{R}}$ et $min(\overline{\mathbb{R}})= - \infty$
 - Si $A \nsubseteq \mathbb{R}$
   - Si $+ \infty \in A$ alors l'ensemble des majorants de A est $\{+ \infty\}$ donc son plus petit élément existe ($+ \infty$)
   - Si $+ \infty \notin A$ Alors $- \infty \in A$
     -> Si A = $\{-\infty\}$, $sup_{\overline{\mathbb{R}}}\{+ \infty\} = - \infty$ existe
     -> Sinon $A = \{- \infty\} \cup B$ avec $b \subset \mathbb{R}$ et $B \neq \varnothing$ 
     et alors l'ensemble des majorants de A est celui de B donc $sup_{\overline{\mathbb{R}}}(A) = sup_{\overline{\mathbb{R}}}(B)$ qui existe par ce qui précède.

## 2. Archimédianité et approximations décimales
- Exercice 19 : Excalibur 1
## 3. Densité de $\mathbb{Q}$ et de $\mathbb{R}$ \\ $\mathbb{Q}$ dans $\mathbb{R}$
## 4. Convexité
Excalibur 2

# II. Généralités sur les suites réelles
## 1. Définition et exemples
- Exercice 36 : Excalibur 3
  On conjecture :
  1. Si $u_{0} < -1$, $u_{1}$ n'est pas définit
  2. Si $u_{0} \in [-1; l[$ $u_{n} \rightarrow l$ et $(u_{n}) \uparrow$
  3. Si $u_{n} = l$ $u$ est constante de valeur l
  4. Si $u_{n} > l$, $u_{n}$ $\rightarrow l$ et $(u_{n}) \downarrow$ 
  
  Puis on e démontre :
  1. Rien a dire
  2. Trivial (recurrence immédiate)
  3. Par exemple, on montre par recurrence que $(u_{n}) \uparrow$ On pose pour $n \in \mathbb{N}$ 
     $$ A_{n} : \space "-1 \leq u_{n}<u_{n+1} < l" $$
     Lemme :
     $$\forall x \in [-1, l[, x w f(x) < l$$
     Démonstration :
     Etude de fonction ou
     Calcul algébrique :
     Soit $x \in [-1, l[$, 
     $$ l-f(x) = f(l) - f(x) = \sqrt{ 1+l } - \sqrt{ 1+x } = \frac{l-x}{\sqrt{ 1+l }+\sqrt{ 1+x }}$$
     Or 
     $$ \sqrt{ 1+l } + \sqrt{ 1+x } \geq \sqrt{ 1+l }>1 $$
     Comme $l-x > 0$,
     $$ 0 < l-f(x) < l-x $$
     Donc 
     $$ f(x) > x \space $$
     $$ \square $$
     
     
     Initialisation : 
     On a $u_{0} \in [-1, l[$. 
     et $u_{1} = f(u_{0})$ donc par le lemme $+1 \leq u_{0} < u_{1} < l$
     Hérédité :
     Soit n tq $A_{n}$ 
     Alors par le lemme : 
     $$-1 \leq u_{n} \leq f(u_{n}) < l$$
     Or $f(u_{n}) = u_{n+1}$
     Donc on a bien $A_{n+1}$
     
     Ainsi :
     $(u_{n}) \uparrow$ et est majoré par l
     Par le théorème de la limite monotone, $(u_{n})$ converge vers $l' \in [-1, l]$
     Pour cela on admet le Théorème de la limite finie : 
     Si $(u_{n})_{n `\in \mathbb{N}}$ vérifie $\forall n \in \mathbb{N}, u_{n+1} = f(u_{n})$ et converge vers $l'$ avec $f$ continue en $l'$, alors $f(l') = l'$
     
     Ici $f$ est continue en $l'$ car d est continue sur $[-1, l]$, donc $l'$ est fixe et comme le point fixe est unique, $l' = l$
     Ainsi 
     $(u_{n}) \uparrow$ et $u_{n} \rightarrow l$


  4. Même chose

## 2. Propriété générales des suites
#### Exercice 40
$$ \text{u est majorée} \Leftrightarrow \forall n \in \mathbb{N}, \exists M \in \mathbb{R}, u_{n} \leq M $$
$$ \text{u est croissante} \Leftrightarrow \forall n \in \mathbb{N}, u_{n} \leq u_{n+1} \Leftrightarrow \forall n\in \mathbb{N}, (u_{n}) \uparrow $$
$$ \text{u est stationnaire} \Leftrightarrow \exists n_{0} \in \mathbb{N}, \forall n\geq n_{0}, u_{n} = u_{n_{0}} $$
$$ \text{u est périodique} \Leftrightarrow \exists k \in \mathbb{N}^*, \forall n \in \mathbb{N}, u_{n+k} = u_{n}$$

# III. Limite d'une suite réelle
## 1. Définition
#### Proposition 58 (Démonstration)
Soir $u \in \mathbb{R}^\mathbb{N}$ tendant vers $l \in \mathbb{R}$
$$\forall \epsilon > 0, \exists N\in\mathbb{N} ,\forall n \geq N, |u_{n} - l|\leq \epsilon$$
En prenant "$\epsilon = 1>0$" dans cette def,
On obtiens $N \in \mathbb{N}$ tq 
$$\forall n \geq N, |u_{n}-l|\leq 1$$
A fortiori, pour $n\geq N$, 
$$|u_{n}|-|l|\leq 1$$
i.e.
$$|u_{n}|\leq 1+|l|$$
En posant : $M = max(|u_{0}|, \dots, |u_{n-1}|, 1+l)\in\mathbb{R}$
On a pour tout $n\in \mathbb{N}$,
$$|u_{n}|\leq M$$
Ainsi u est bornée. 


#### Exemple 64 
Soit $A \in \mathbb{R}$, 
On pose $N = \lceil A^2 \rceil \in \mathbb{N}$
Pour tout $n\geq N$,
$n\geq A^2$
Donc,
$$\sqrt{ n }\geq \sqrt{ A^2 } = |A| \geq A$$
Ainsi,
$$\forall A\in \mathbb{R}, \exists N\in\mathbb{N}, \forall n\geq N, \sqrt{ n }\geq A$$
i.e.
$$\sqrt{ n } \longrightarrow + \infty$$


#### Corollaire 67 (Démonstration)
$$\left\{ \begin{array}{l}
(\lambda)_{n \in \mathbb{N}} \rightarrow \lambda \\
(\mu)_{n\in \mathbb{N}} \rightarrow \mu
\end{array} \right.$$
Puis some de produits de limites. 

ATTRAPER LE COURS

## 2. Opérations sur les limites
#### Montrons que $(-1)^n$ n'admet pas de limite
- Si $l\in \mathbb{R}$
	On suppose par l'absurde que $(-1)^n \underset{+ \infty}{\rightarrow} l$
	$$\forall \epsilon >0, \exists N \in \mathbb{N}, \forall n\geq N, |u_{n}-l|\leq \epsilon$$
	On a alors en prenant $\epsilon = \frac{1}{2}>0$
	On obtiens $N \in \mathbb{N}$ tq
	$$\forall n\geq N, |u_{n}-l|\leq \frac{1}{2}$$
	On a alors
	$$2 = |u_{n}-u_{n+1}| = |u_{n}-l+l-u_{n+1}| \leq |u_{n}-l|+|u_{n+1}-l|\leq \frac{1}{2}+\frac{1}{2}=1$$
	Contradiction

- Si $l = + \infty$
	On suppose par l'absurde que $(-1)^n \underset{+ \infty}{\rightarrow} l$
	$$\forall A \in \mathbb{R}, \exists M \in \mathbb{N}, \forall n\geq N, u_{n}\geq A$$
	En prenant $A = 2$ on obtiens $N$ tq
	$$\forall n\geq N, u_{n}\geq 2$$
	Mais 
	$$2 \leq u_{n} \in\{-1, 1\}$$
	Contradiction

- Si $l = - \infty$
  La même

#### Théoreme 72 Démonstration
##### Dans le cas ou $lim \space u = - \infty$ et $l<0$
- $l\in \mathbb{R_{-}^*}$
  Soit $A \in \mathbb{R}_{-}^*$ et soit $A \in \mathbb{R}_{+}^*$
  Par définition de $lim \space u = - \infty$ et $l <0$
  $\forall n \geq N, u_{n}\leq \frac{2A}{l}$
  Par déf de $lim \space v = l$, comme $-\frac{l}{2}>0$
  Il existe $N \in \mathbb{N}$ tq,
  $$\forall n\geq N', v_{n} \in \left[ \frac{3l}{2}, \frac{l}{2} \right]$$
  Soit $N'' = max(N, N')$
  Pour $n\geq N''$,
  $$\left\{ \begin{array}{l} u_{n} \leq \frac{2A}{l} <0 \\ v_{n}\leq \frac{l}{2}<0 \end{array} \right.$$
  Donc
  $$u_{n}v_{n}\geq \frac{2A}{l}\frac{l}{2}=A$$
  Ainsi
  $$\forall A \in \mathbb{R}_{+}, \exists N'' \in \mathbb{N}, \forall n \geq N'', u_{n}v_{n}\geq A$$
  i.e.
  $$ lim \space uv = + \infty $$

#### Propriété limites exposants et Démonstration
Soit $\alpha \in \mathbb{R}$, quand $n \rightarrow + \infty$
- Si $\alpha<0$, $n^\alpha \rightarrow 0^+$
- Si $\alpha = 0$, $n^\alpha \rightarrow 1$
- Si $\alpha > 0$, $n^\alpha \rightarrow + \infty$

Démo:
- Cas $\alpha = 0$
  $(n^0)_{n}$ est constante de solution 1
  Donc
  $$n^0 \underset{n \rightarrow + \infty}{\longrightarrow} 1$$
- Cas $\alpha > 0$
  Soit $A \in \mathbb{R}_{+}^*$ 
  On pose $N = \lceil A^{1/\alpha} \rceil$
  Soir $n \geq N$,
  On a :
  $n \geq A^{1/\alpha}$
  Ainsi 
  $$\forall A\in\mathbb{R}_{+}^*, \exists N \in \mathbb{N}, \forall n\geq N, n^\alpha\geq A$$
  i.e.
  $$n^\alpha \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$$
- Cas $\alpha < 0$
  Comme   $n^{-\alpha} \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$
  Par inverse de la limite, 
  $$n^\alpha \underset{n \rightarrow + \infty}{\longrightarrow} 0^+$$


## 3. Limites et ordre

#### Théorème 81 Démonstration
On raisonne par l'absurde (ordre total)
Supposons que $l>l'$
Montrons que $u-v$ admet une limite appartenant a $\mathbb{R}_{+}^* \cup \{- \infty\}$ 
Par disjonction de cas :
- Si $l, l' \in \mathbb{R}$, $u-v \to l-l' > 0$
- Si $l=+\infty$, comme $l'<+\infty$
  v est majorée donc -v est minorée
  et comme $u \to + \infty$, $u + (-v) \to + \infty$ !!!!!!!!!!!!!
  i.e. $u-v \to + \infty > 0$

- Si $l \in \mathbb{R}$ et $l' = - \infty$
  On a $-v \to - \infty$
  et u est minorée (car bornée)
  donc $u-v = u + (-v) \to + \infty > 0$

Notons $l'' = lim(u-v) \in \mathbb{R}_{+}^* \cup \{ + \infty \}$

- Si $l'' \in \mathbb{R}_{+}^*$ 
  Par définition de $l''$, $u_{n} - v_{n} \geq l''-\frac{l''}{2} > 0$
  APDC Rang $N_{0}$ Ainsi $u_{n}>v_{n}$
  ce qui contredit $(\forall n\in \mathbb{N}), \space u_{n} \leq v_{n}$

- Si $l'' = + \infty$
  APDC Rang, $u_{n}-v_{n}\geq 1$ définition de la limite
  Donc $u_{n}>v_{n}$
  ce qui contredit $\forall n \in \mathbb{N}$, $u_{n}\leq v_{n}$

Ainsi $l \leq l'$


On peut le noter aussi :
$$ \left. \begin{array}{c}
& u_{n} & < & v_{n} \\
n \to + \infty & \downarrow & & \downarrow \\
& l & \leq & l'
\end{array} \right.$$

#### Théorème 85 Démonstration
Soit $\epsilon > 0$
Comme $lim \space u = l$, il existe $N \in \mathbb{N}$ tq
$\forall n \geq N$, $u_{n} \in [l-\epsilon, \space l + \epsilon]$
Comme $lim \space w = l$, il existe $N' \in \mathbb{N}$. tq
$\forall n\geq N'$, $w_{n} \in [l-\epsilon, \space l + \epsilon]$
On pose $N'' = max(N, N')$

Pour $n\geq N''$
$$l-\epsilon \leq u_{n}\leq v_{n}\leq w_{n}\leq l+\epsilon$$ car $n\geq N'$
Ainsi
$$\forall \epsilon >0, \exists N''\in\mathbb{N},\forall n\geq N'', v_{n}\in[l-\epsilon, l+ \epsilon]$$
i.e.
$$lim \space v = l$$


#### Propriété sur les limites des suites géométriques
- Si $a>1$, $a^n \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$
- Si $a=1$, $\forall n\in \mathbb{N}, 1^n = 1$ Donc $1^n \to 1$
- Si $a \in ]-1, 1[$, $a^n \underset{n \rightarrow + \infty}{\longrightarrow} 0$
- Si $a = -1$, $((-1)^n)_{n\in\mathbb{N}}$ est bornée (périodique est divergente)
- Si $a < -1$, $(a^n)_{n\in\mathbb{N}}$ Diverge sans limite et n'est pas bornée (et même $|a^n| \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$)

##### Démonstration :
- Cas $a > 1$
  On pose $\epsilon = a -1 >0$ 
  Pour $n \in \mathbb{N}$
  $$a^n = (1 + \epsilon)^n$$
  $$ \overset{binome}{=} 1 + n\epsilon + \dots \geq 0$$
  $$\leq 1 + n\epsilon  \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$$
  Donc $a^n \to + \infty$ d'après le théorème de convergence par encadrement

- Cas $a = 1$ trivial 
- Cas $a \in ]-1, 1[ / \{0\}$
  On a $\frac{1}{|a|}>1$, donc $\left( \frac{1}{|a|} \right)^n \underset{n \to + \infty}{\longrightarrow} + \infty$
  Donc $\frac{1}{|a^n|} \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$
  Donc $|a^n| \underset{n \rightarrow + \infty}{\longrightarrow} 0^+$
  Donc $|a^n| \underset{n \rightarrow + \infty}{\longrightarrow} 0$
- Cas a = 0 Trivial
- Cas a < -1
  On a $|a^n| = |a|^n \underset{n \rightarrow + \infty}{\longrightarrow} + \infty$ car $|a| > 1$
  et même
  $$ a^{2k} = (a^2)^k \underset{k \rightarrow + \infty}{\longrightarrow} + \infty$$
  $$a^{2k + 1} = a(a^2)^k \underset{n \rightarrow + \infty}{\longrightarrow} - \infty$$
  
  
  Elle ne peut donc pas tendre vers $- \infty$ ou vers $+ \infty$
  Elle ne peut pas non plus converger car elle n'est pas bornée.
  Donc elle n'admet pas de limite


# IV. Suites monotones
#### Théorème 90 Démonstration
Soit $u \in \mathbb{R}^{\mathbb{N}}$ croissante et majorée
Alors $u(\mathbb{N})$ est en partie non vide et majorée de $\mathbb{R}$, donc elle admet une borne supérieure : 
$l = sup(u(\mathbb{N})) \in \mathbb{R}$ 

Soit $\epsilon > 0$
Comme $l-\epsilon < l$ et l est le plus petit majorant de $u(\mathbb{N})$, alors $l-\epsilon$ ne majore pas $u(\mathbb{N}) = \{u_{n}; n \in \mathbb{N}\}$
Donc il existe $N \in \mathbb{N}$ tq pour tout $n \in \mathbb{N}, n \geq N$ et
$u_{n} > l - \epsilon$ 
A fortiori $u_{n} \geq l - \epsilon$
Par ailleurs $l$ majore $u(\mathbb{N})$
i.e. $\forall n \in \mathbb{N}$, $u_{n} \leq l$
Comme la suite est croissante, pour $n \geq N$
$$ l - \epsilon \leq u_{N} \leq u_{n} \leq l \leq l + \epsilon $$
Ainsi : 
$$\forall n \geq N, \space u_{n} \in [l - \epsilon, l + \epsilon]$$
Finalement, 
$$u_{n} \underset{n \rightarrow + \infty}{\longrightarrow} l$$
#### Théorème 94 Suites adjacentes
Excalibur  4.
Démonstration :
Comme $lim \space v - u = 0$ 
Alors (comme 1 > 0):
$$\exists N \in \mathbb{N}, \forall n \geq N, |v-u| \leq 1$$
En particulier $u_{N} - v_{N} \leq |v_{N}-u_{N}|\leq 1$
Donc 
$$\left\{ \begin{array}{lr}
u_{N}\leq 1+v_{N} \leq 1 + v_{0} & (v \downarrow)\\
v_{N} \geq u_{N}-1 \geq u_{0}-1 & (u \uparrow)
\end{array} \right.$$
Ainsi u est croissante et majorée donc Converge par le théorème de la limite monotone et v est décroissante et minorée donc converge de même. 
De plus on a alors
$$0 = lim(v-u) = lim \space v - lim \space u$$
Donc
$$lim \space v = lim \space u$$
#### Lemme 97 Démonstration
Vue dans le théorème de la limite monotone (car $l = sup(u(\mathbb{N}))$ )
Mais se montre aussi de manière plus élémentaire
Soit $n \in \mathbb{N}$,
Pour tout $p \geq n$, $u_{n}\leq u_{p}$
En faisant tendre p vers $+ \infty$ $u_{n}\leq l$


#### Théorème 103
Preuve dans le cas de $l \in \mathbb{R}$ :
Soit $\epsilon > 0$
Comme $lim \space u = l$, il existe $N \in \mathbb{N}$ tq
$\forall n \geq N$, $|u_{n}-l|\leq \epsilon$
Et pour $n\geq N$, $\phi(n) \geq n \geq N$
Donc $|u_{\phi(n)}-l|\leq \epsilon$
Ainsi
$$\forall \epsilon >0, \exists N\in\mathbb{N}, \forall n\geq, |u_{\phi(n)}-l|\leq \epsilon$$
i.e.
$$lim \space u = l$$

Preuve dans le cas de $l = + \infty$ et $l = - \infty$

#### Théorème 106
Cas ou $l = + \infty$
Soit $A \in \mathbb{R}$
Soit $N \in \mathbb{ N}$, tel que
$$\forall k \geq N, u_{2k}\geq A$$
Soit $N'$ tel que
$$\forall k \geq N',u_{2k+1}\geq A $$
Soit $N'' = max(2N, 2N'+1)$
- Si n est pair 
  $$\frac{n}{2} \geq N$$
  Donc
  $$u_{n} = u_{2 \left( \frac{n}{2} \right)}\geq A$$
- Si n est impair
  $$\frac{n-1}{2} \geq N'$$
  Donc
  $$u_{n} = u_{2\left( \frac{n-1}{2} \right)+1}\geq A$$
Dans les 2 cas :
$u_{n} \geq A$

Ainsi
$$u_{n} \to + \infty$$

#### Exemple 107 !!!!!!!!!!!!!!!!!!!
On pose $(a_{n}) = (w_{2n})$ la suite extraite de w rang pair
et $(b_{n}) = (w_{2n+1})$ la suite extraite de w de rang impair

Montrons que $(a_{n}) \uparrow$
Soit $n \in \mathbb{N}$
On a :
$$a_{n+1}-a_{n} = w_{2n+2} - w_{2n} = \sum_{k = 1}^{2n+2} \frac{(-1)^{k+1}}{k} \space - \sum_{k = 1}^{2n} \frac{(-1)^{k+1}}{k} = \sum_{k = 2n+1}^{2n+2} \frac{(-1)^{k+1}}{k} = \frac{1}{2n+1} - \frac{1}{2n+2} $$
Donc 
$$ a_{n+1} - a_{n} \geq 0 $$
Ainsi $a \uparrow$
De même, pour $n \in \mathbb{N}$
$b_{n-1}-b_{n} \leq 0$
Donc $b \downarrow$

De plus pour $n \in \mathbb{N}$, 
$$b_{n} - a_{n} = \sum_{k = 1}^{2n+1} \frac{(-1)^{k+1}}{k} \space - \sum_{k = 1}^{2n} \frac{(-1)^{k+1}}{k} = \frac{1}{2n+1} \underset{n \to + \infty}{\longrightarrow} 0 $$
i.e. : 
$$ b - a \to 0 $$

Ainsi a et b sont adjacentes.
Par le théorème des suites adjacentes, 
a et b convergent et ont la même limite l. 
Par le théorème de convergence par les suites extraites des rangs pairs et de rangs impairs
w converge vers l ("$l = \sum_{k = 1}^{+ \infty} \frac{(-1)^{k +1}}{k}$")

#### Théorème 108 
##### Etape 1 : Construction des 2 suites
On construit par récurrence 2 suites a et b qui vérifient :
1. $\forall n \in \mathbb{N}, A_{n} : \left\{ \begin{array}{l} b_{n} - a_{n} = \frac{b-a}{2^n}\\ I_{n} = \{i \in \mathbb{N}|u_{i} \in [a_{n}, b_{n}]\} \end{array} \right.$ 
2. $\forall n \in \mathbb{N^*}, B_{n} : a_{n-1}\leq a_{n} \leq b_{n} \leq b_{n-1}$ 


   - Initialisation :
     On pose $\left\{\begin{array}{} a_{0} = a \\ b_{0} = a \end{array}\right.$
     \1. est clairement vérifié
   - Hérédité : 
     Soit $n \in \mathbb{N}$
     Supposons avoir construit 
     $a_{0}; \dots; a_{n}$ et $b_{0};\dots;b_{n}$
     tq $A_{n}$
     Comme $b_{n} - a_{n} = \frac{b - a}{2^n} > 0$ 
     alors $a_{n} \leq \frac{a_{n} + b_{n}}{2} \leq b_{n}$
     
     On a 2 cas :
     - Si $\left\{ i \in \mathbb{N} | u_{i} \in \left[ a_{n}, \frac{a_{n} + b_{n}}{2} \right] \right\}$ est infini
       On pose : 
       $$ \left\{ \begin{array}{l} a_{n+1} = a_{n} \\ b_{n+1} = \frac{a_{n} + b_{n}}{2} \end{array} \right.$$
    - Sinon 
      Comme par H.R. $I_{n}$ est infini, alors $\left\{ i \in \mathbb{N} | u_{i} \in \left[ \frac{a_{n} + b_{n}}{2}, b_{n} \right] \right\}$ est infini
      On pose
     $$ \left\{ \begin{array}{l} a_{n+1} = \frac{a_{n} + b_{n}}{2} \\ b_{n+1} = b_{n} \end{array} \right.$$
    Dans les deux cas,
    $$ \left\{ \begin{array}{l} b_{n+1} - a_{n+1} = \frac{b_{n}-a_{n}}{2} \overset{H.R.}{=} \frac{b-a}{2^{n+1}} \\ I_{n+1} = \{i \in \mathbb{N} | u_{i} \in [a_{n+1}, b_{n+1}]\} \text{ est infini} \end{array} \right. $$
    i.e.
    $A_{n+1}$ est vérifiée
    De plus par construction $a_{n+1} \leq b_{n+1}$ et $a_{n} \leq a_{n+1}$ et $b_{n+1} \leq b_{n}$
    i.e.
    $B_{n+1}$ est vérifiée
  
  On a donc construit par recurrence deux suites $(a_{n}), (b_{n}) \in \mathbb{R}^{\mathbb{N}}$ tel que $a_{0} = a$, $b_{0} = b$ et
  $$\begin{array}{c} \forall n \in \mathbb{N}, A_{n} \\ \forall n \in \mathbb{N^*}, B_{n}\end{array}$$
  
  Comme 
  $b_{n} - a_{n} = \frac{b-a}{2^n} \to 0$
  et $(a_{n}) \uparrow$ et $(b_{n}) \downarrow$ 
  Les suites $(a_{n})$ et $(b_{n})$ sont adjacentes avec $a_{0} = a$ et $b_{0} = b$
  
  Par le théorème des suites adjacentes et stabilité des inégalités larges par passage à la limite,
  $(a_{n}), (b_{n})$ convergent vers une limite commune $l \in [a, b]$
  
  
##### Etape 2 : Extraction
Comme pur tout $n \in \mathbb{N}$, 
$I_{n} = \{ i\in \mathbb{N} | u_{i} \in [a_{n}, b_{n}] \}$ est infini

Alors on peut construire $\phi : \mathbb{N} \to \mathbb{N}$
strictement croissante par récurrence ainsi : 
$\phi = 0$ ($\in \mathbb{N} = I_{0}$)

$$\forall n \in \mathbb{N}, \phi(n+1) = min(I_{n+1} \cap ]\phi(n); + \infty[)$$
Partie non vide de $\mathbb{N}$ car $I_{n+1}$ est infini (et $\mathbb{N}$ n'est pas majoré)
On a alors
$$\forall n \in \mathbb{N}, a_{n} \leq u_{\phi(n)}\leq b_{n}$$ et par encadrement :
$$\lim_{ n \to + \infty } u_{\phi(n)} = l \in [a, b]$$ Donc u converge

# VI. Traductions séquentielles
#### Définition
Soit $A \subset \mathbb{R}$
On dit que A est  dense ssi elle rencontre tout intervalle ouvert non vide I

#### Propriété
Soit $A \subset \mathbb{R}$
A est dense dans $\mathbb{R}$ ssi
$$\forall x \in \mathbb{R}, \exists(a_{n}) \in A^{\mathbb{N}}, a_{n} \underset{n \to + \infty}{\longrightarrow} x $$
#### Propriétés
Supposons A dense dans $\mathbb{R}$
Soit $x \in \mathbb{R}$, 
Excalibur 5

On pose pour tout $n \in \mathbb{N}$, $I_{n} = ]x - \frac{1}{n+1}, x+ \frac{1}{n+1}[$
RATTRAPER

On a alors a fortiori : 
$$\forall n \in \mathbb{N}, x-\frac{1}{n+1}\leq a_{n} \leq x + \frac{1}{n+1}$$
Par le théorème des gendarmes
$$a_{n} \underset{n \to + \infty}{\longrightarrow} x$$

___


Supposons avoir à disposition pour tout $x \in \mathbb{ R}$, 
une suite $(a_{n}) \in A^{\mathbb{N}}$ qui converge vers $x$.
Soit I un intervalle ouvert non vide de $\mathbb{R}$ 
Soit $x \in I$. 
Comme I est ouvert, il existe $\epsilon > 0$ tq $[x - \epsilon, x + \epsilon] \subset I$
Or lui aussi
RAATRAPPPPERRRRRR

#### Propriété
Soit $A \subset \mathbb{R}$ bornée non vide et $b \in \mathbb{R}$  Alors
$$b = sup(A) \Leftrightarrow \left\{ \begin{array}{l} \text{b marjore a} \\
\exists(a_{n}) \in A^{\mathbb{N}}, a_{n} \to b \end{array} \right. $$

Démonstration :
Par double implication

Soit $b = sup(A)$
Par définition de la borne supérieure, b majore A
Pour $n \in \mathbb{N}, b - \frac{1}{n+1} < b$ 
Donc ... ne majore pas A, don il existe $a_{n} \in ]b - \frac{1}{n+1}, b]$
A fortiori $b - \frac{1}{n+1} \leq a_{n} \leq b$ 
Par le théorème des gendarmes, $a_{n} \to b$


Soit b majorant A
tel qu'il existe $(a_{n}) \in A^{\mathbb{N}}$ tq $a_{n} \to b$
Soit b un majorant de A
On a
$$\forall n \in \mathbb{N}, a_{n} \leq b'$$
Ainsi b est le plus petit majorant de A i.e.
$$b = sup(A)$$

#### Propriété ("Cas infini")
Soit $A \subset \mathbb{R}$
Alors A est non majoré ssi
$(\exists(a_{n}) \in A^{\mathbb{N}}, a_{n} \to + \infty)$

Démonstration en exercice


# VII. Itération de fonctions
#### Proposition Hors Programme (Exercice 113)
Si $f \downarrow$ et $E \subset D_{f}$ et stable par $f$ alors pour u vérifiant * et $u_{n} \in E$, les suites $(u_{2k})$ et $(u_{2k+1})$ sont de monotonies "opposées"

Démonstration :
Sous ces hypothèses, 
- Si $u_{0}\leq u_{2}$, $u_{1} = f(u_{0}) \geq f(u_{2}) = u_{3}$
  puis en ré appliquant f, $u_{2}\leq u_{4}, u_{3}\geq u_{5} \dots$ 
  Donc $(u_{2k}) \uparrow$ et $(u_{2k+1}) \downarrow$ 
- Si $u_{0} > u_{2}$
  De même $(u_{2k}) \downarrow$ et $(u_{2k+1}) \uparrow$ 

# VIII Suites a valeurs complexes
#### Définition 115
Excalidraw 6

#### Définition 123
Excalibur 7

#### Théorème 126
Démonstration "Extraction successive"
Soit $u \in \mathbb{C}^\mathbb{N}$ Bornée
i.e. 
Il existe
$$M \in \mathbb{R}_{+} \text{ tq } (\forall n \in \mathbb{N}, |u_{n}|\leq M)$$
On a alors
$|Re(u_{n})| \leq |u_{n}| \leq M$
$|Im(u_{n})| \leq |u_{n}| \leq M$

Comme $Re(u)$ est bornée il existe une extractrice $\phi$ tq $(Re(u_{\phi(n)}))$ converge
De plus $(Im(u_{\phi(n)}))$ est bornée 
Donc on peut trouver une extractrice $\phi$ tq $(Im(u_{\phi(n)}))$ converge
Comme $(Re(u_{(\phi \circ \psi)(n)}))$ est extraite de la suite convergente $(Re(u_{\phi(n)}))$ alors elle converge
Comme $(Re(u \circ (\phi \circ \psi)) = (Re(u)) \circ \phi \circ \psi$  et $(Im(u \circ (\phi \circ \psi)) = (Im(u)) \circ \phi \circ \psi$ convergent
Alors $u \circ (\phi \circ \psi)$ converge. 
Comme c'est une suite extraite de u on a fini
