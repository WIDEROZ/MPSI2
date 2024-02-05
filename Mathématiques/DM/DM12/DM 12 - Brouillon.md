# Exercice 1
## 1.
Soit $n \in \mathbb{N}$, 
Soit $k \in [\![0, n]\!]$
Soit $x \in \mathbb{R}$,
Comme $x\mapsto x \in \mathcal{C}^k(I)$ et $$x\mapsto x^{n-1} \in \mathcal{C}^k(I)$$
$$\left( x x^{n-1} \right)^{(k)} = \sum_{i = 0}^{k} \binom{k}{i} (x)^{(k-i)} (x^{n-1})^{(i)} = k!\sum_{i = 0}^{k} \frac{(x)^{(k-i)} (x^{n-1})^{(i)}}{(k-i)!i!}  $$

## 2. 
Soit $n \in \mathbb{N}$
Soit $x \in \mathbb{R}$, 
$$(x^nx^n)^{(n)} = \sum_{i = 0}^n \binom{n}{i}(x^n)^{(i)}(x^n)^{(n -i)} = \sum_{i = 0}^n \binom{n}{i} \sum_{j = 0}^i \binom{i}{j} (x^{n/2})^{(j)} (x^{n/2})^{(i - j)}  \sum_{k = 0}^{n-i} \binom{i}{j} (x^{n/2})^{(j)} (x^{n/2})^{(i - j)} $$


# Exercice 2
## 1. 
$$ D_{i, \lambda} = \left( \begin{array}{c}
\lambda & 0 &\cdots & 0 \\
0 & \ddots & & \vdots\\
\vdots & & \ddots  &0 \\
0 &  \cdots & 0 & 1
\end{array} \right)$$
Si $i = 1$

$$D_{i, \lambda} = I_{n} + (\lambda - 1)E_{i, i}$$

Exercice 3
Montrer que :
$$f : x \mapsto e^{ 2x - \cos x }$$
est convexe sur $\mathbb{R}$ : 
$$f''(x) = ((2 + \sin x)^{2} + \cos x)e^{ 2x-\cos x }$$
$$f''(x) = e^{ 2x-\cos x }\times(\cos x + 4\sin x + \sin^2 x +4)$$
$$= e^{ 2x-\cos x }\times( 1 + \cos x + 3 + 4\sin x + \sin ^{2}x) $$
On pose : 
$$X = \sin x$$
On a donc : 
$$X^{2} + 4X + 3$$
On cherche les racines : 
$$\Delta = 16 - 12 = 4$$

$$X_{1} = -3$$
$$x_{2} = -\frac{1}{2}$$
