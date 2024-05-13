# Titre
###### Titre
La masse de la terre est : $m = 12345$ 

L'intégrale de gauss est : 
$$
\sqrt{ \pi } = \int _{- \infty}^{+ \infty} e^{-x^{2}} \, dx
$$

$$\mathbb{L}'\mathbb{E} \forall \mathbb{A} \mathbb{R} I \mathbb{S}\mathbb{T}\mathbb{E}$$

#### Démo
$$\forall u \in \mathcal{L}(E), \exists ! \lambda \in \mathbb{R}, \forall f \in \mathbb{A}_{n}, \forall x \in E^{n}, f(u(x)) = \lambda f(x)$$

Soit $u \in \mathcal{L}(E)$, 

###### Analyse
Supp qu'il existe $\lambda \in \mathbb{R}$ tq pour tout $f \in \mathcal{A}_{n}$, et pour tout $e \in E^{n}$ une base
Comme $\det_{e} \in \mathcal{A}_{n}$ 
$$\det_{e}(u(e)) = \lambda \det_{e}(e) = \lambda$$

##### Synthèse
$$g : \begin{cases}
E^{n} \to \mathbb{K} \\
x \mapsto f(u(x))
\end{cases}$$
Azi c n-linéaire et alterné
Pour $e \in E^{n}$
$g \in \mathcal{A}_{n}$
$$g = g(e)\det_{e} = f(u(x))\det_{e} = f(e)\det_{e}(u(e))\det_{e} = \lambda f(e)\det_{e} = \lambda_{f}$$


#### Démo
$$\det_{e}(x) = \sum_{\sigma \in S_{n}} \epsilon(\sigma) \prod_{j = 1}^{n} e^{*}_{\sigma(j)}(x_{j})$$

$$f(x_{1}, \dots, x_{n}) = f\left( \sum_{i = 1}^{n}e^{* }_{i_{1}}(x_{1}) e_{i_{1}}, \dots, \sum_{i = 1}^{n}e^{* }_{i_{n}}(x_{n}) e_{i_{1}}\right)$$
$$= \sum_{1\leq i_{1}\leq \dots \leq i_{n} \leq n}\prod_{j = 1}^{n}(e_{i_{j}}^{*}(x_{j}))f(e_{i_{1}}, \dots, e_{i_{2}})$$
$$= \sum_{\sigma \in S_{n}}\prod_{j=1}^{n}(e_{\sigma(j)}(x_{j}))f(e_{\sigma(1)}, \dots, e_{\sigma(n)})$$
$$= \sum_{\sigma \in S_{n}}\epsilon(\sigma)\prod_{j = 1}^{n}e_{\sigma(j)}(x_{j})f(e)$$

#### Démo
Soit $n \in \mathbb{N}$, 
Soit $\sigma' \in S_{n}$, 
Soit $x = (x_{i})_{i=1}^{n} \in E^{n}$
$$\det_{e}(x_{\sigma'(i)})_{i = 1}^{n} = \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{i = 1}^{n} e_{\sigma(i)}^{*}(x_{\sigma'(i)})$$
$i = \sigma'^{-1}(j)$ 

$$= \sum_{\sigma \in S_{n}}\epsilon(\sigma) \prod_{j = 1}^{n}e^{*}_{\sigma(\sigma^{-1}(j))}(x_{j})$$
$\phi = \sigma \sigma'^{-1}$

$$= \sum_{\phi \in S_{n}} \epsilon(\phi \circ \sigma') \prod_{j = 1}^{n}e_{\phi(j)}^{*}(x_{j})$$
$$= \epsilon(\sigma') \det_{e}(x)$$

#### Vandermonde


# Problème 2
## 1.
$$|S_{n}| = |Bij([\![1, n]\!], [\![1, n]\!])| = n!$$
On prend un $n$-uplet et on compte le nombre d’arrangements c'est $n!$.

## 2. 
### a.
Le nombre de transposition reviens a compter le nombre d'échanges de valeurs dans un $n$-uplet : 
On choisit la transposition : $n(n-1)$ possibilités
On choisit la place du premier échange ($n$ possibilité) et la deuxième ($n-1$ possibilités)

On a donc une proba de $\frac{5\times 4}{5!} = 0.1\overline{6}$ de tomber sur une permutation
Pour un 3-cycle : 
$\frac{5 \times 4 \times 3}{5!} = 0.5$

### b.
En premier on choisit la valeur du premier chiffre du cycle : $n$ possibilité, ensuite on choisit la 2 eme valeur : $n-1$ possibilités enfin par réccurence rapide : $n-r+1$ est le nbre de $r$ cycles possibles ainsi, 
On a $\frac{(n-r+1)!}{n!} = \frac{1}{\prod_{i = n-r+2}^{n}i}$ possibilités 

## 3.
### a.
On choisit la deuxième valeur du cycle :
$(n-1)$ possibilités
On choisit la troisième valeur du cycle :
$(n-2)$ possibilités
On a donc
$P(B) = \frac{1}{5}$

### b.
Calculer $P(A \cap B)$ reviens a 


___
$$- \frac{\frac{\partial f}{\partial  x_{2}}}{\frac{\partial f}{\partial x_{1}}} = - \frac{x_{1}^{1/4} \times \frac{1}{4} \times x_{2}^{3/4}}{x_{2}^{1/4} \times \frac{1}{4} \times x_{1}^{3/4}}= - \frac{x_{1}^{1/4} \times \frac{1}{4} \times x_{1}^{-3/4}}{x_{2}^{1/4} \times \frac{1}{4} \times x_{2}^{-3/4}}$$
___
Soit $X, Y \in \mathbb{R}^{\Omega}$, 
Soit : 
$$f : \begin{cases}
\mathbb{R}^{2} \to \mathbb{R} \\
(x, y) \mapsto xy
\end{cases}$$
On applique la formule du transfert : 
$$E(XY) = \sum_{(x, y) \in X(\Omega) \times Y(\Omega)}xyP(X = x, Y = y)$$
$$ = \sum_{x \in \mathbb{R}} \sum_{y \in \mathbb{R}}xyP(X = x, Y = y) $$
$$= \left( \sum_{x \in \mathbb{R}}xP(X = x) \right)\left( \sum_{y \in \mathbb{R}}y P(Y =y) \right) = E(X)E_{Y}$$
$$E(f(X)) = \sum_{x \in X(\Omega)}f(x)P(X = x)$$

___
Soit $n \in \mathbb{N}^{*}$ et $p \in [0, 1]$, puis $X \sim \mathcal{B}(n, p)$, 
$$E(X) = \sum_{k = 0}^{n}kP(X = k) = ⚡ \sum_{k = 0}^{n} k \binom{n}{k}p^{k}(1-p)^{n-k}$$
$$= n\sum_{k = 1}^{n} \frac{(n-1)!}{(k-1)!((n-1)-(k-1))!}p^{k}(1-p)^{n-k} $$
$$=n \sum_{k = 1}^{n}\binom{n-1}{k-1}p^{k}(1-p)^{n-k}$$
$$= n \sum_{k = 0}^{n-1}\binom{n-1}{k} p^{k+1}(1-p)^{n-k-1}$$
$$= np \sum_{k = 0}^{n-1} \binom{n-1}{k}p^{k}(1-p)^{n-1-k}$$
$$=np (p + 1-p)^{n-1} = np$$
___
Soit : 
$$f : \begin{cases}
\mathbb{R} \to \mathbb{R} \\
x \mapsto (x + (1-p))^{n} = \sum_{k = 0}^{n} \binom{n}{k}p^{k}(1-p)^{n-k}
\end{cases}$$
$$f'(x) = n(x + (1-p))^{n-1} = \sum_{k = 0}^{n} k\binom{n}{k} x^{k-1}(1-p)^{n-k}$$

$$pf'(p) = np = \sum_{k = 0}^{n}k \binom{n}{k}p^{k}(1-p)^{n-k} = E(X)$$

___
Soit $(Y_{i})_{i \in [\![1, n]\!]} \sim \mathcal{B}(p)\in \mathbb{R}^{\Omega}$ et indépendantes.
On note : 
$$Z = \sum_{k = 1}^{n}Y_{k} \sim \mathcal{B}(n, p)$$
$$E(Z) = \sum_{k = 1}^{n}E(Y_{k}) = \sum_{k = 1}^{n}p = np$$
___
$$E(X) = \sum_{x \in X(\Omega)}x P(X = x) = \sum_{\omega \in \Omega }P(\{ \omega \})X(\omega)$$
$$\Omega = \bigsqcup_{x \in X(\Omega)}(X = x)$$
$$\sum_{\omega \in \Omega}P(\{ \omega \})X(\omega) = \sum_{x \in X(\Omega)}\sum_{\omega \in (X = x)}P(\{ \omega \})X(\omega)$$
$$= \sum_{x \in X(\Omega)}\left( \sum_{\omega \in (X = x)}P(\{ \omega \}) \right) x$$
$$= \sum_{x \in X(\Omega)}P(X = x) x$$

$$E(f(X)) = \sum_{\omega \in \Omega}P(\{ \omega \})f(X(\omega))$$
$$= \sum_{x \in X(\Omega)}\sum_{\omega \in (X = x)}P(\{ \omega \})f(X())$$

$$\mathrm{Cov}(X, Y) = E((X - E(X))(Y - E(Y)))$$

$$V\left( \sum_{i = 1}^{n} X_{i} \right)= \sum_{i=1}^{n}E\left( X_{i}^{2} \right) + 2 \sum_{1\leq i < j \leq n}E(X_{i}X_{j})$$
$$V\left( \sum_{i = 1}^{n}X_{n} \right) = \sum_{i = 1}^{n}E(X_{i}^{2}) + 2 \sum_{1 \leq i < j \leq n}\mathrm{Cov}(X_{i}, X_{j})$$
Car on a centré les $X_{i}$

