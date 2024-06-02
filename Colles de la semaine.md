# Mathématiques
#### Inégalité de Cahchy-Swartz
Soit $x, y \in E$, 
$$\left|\left| x+y \right|\right| \leq \left|\left| x \right|\right| \left|\left| y \right|\right| $$
Démonstration :

On pose : 
$$f : \begin{cases}
\mathbb{R} \to \mathbb{R} \\
\lambda \mapsto \left|\left| x \right|\right|^{2}\lambda^{2}+ 2<x, y>\lambda + \left|\left| y \right|\right|^{2}
\end{cases}$$
car :
Pour $\lambda \in \mathbb{R}$, 
$$\begin{array}{rl}
\left|\left| x + \lambda y \right|\right|^{2} &= <x+\lambda y, x+\lambda y>  \\
&= \left< x, x+\lambda y \right> +\lambda \left< y, x+\lambda y \right>  \\
&= \left|\left| x \right|\right| ^{2}+\lambda\left< x, y \right> + \lambda \left< y, x \right> +\lambda^{2}\left|\left| y \right|\right| \\
&= \left|\left| y \right|\right| ^{2}\lambda^{2}+2\left< x, y \right> \lambda+\left|\left| x \right|\right| ^{2} 
\end{array}$$


Comme le trinôme $f$ est à valeur dans $\mathbb{R}_{+}$, son discriminant est négatif ou nul ie : 
$$4\left< x, y \right>^{2} -4\left|\left| x \right|\right| ^{2}\left|\left| y \right|\right| ^{2}\leq 0$$
Ainsi, 
$$ \left| \left< x, y \right> \right| \leq \left|\left| x \right|\right|\left|\left| y \right|\right| $$
car $\left|\left| \cdot \right|\right|\geq 0$

#### Inégalité de Minkovski
$$\forall x, y \in E, \left|\left| x + y \right|\right|  \leq \left|\left| x \right|\right| +\left|\left| y \right|\right| $$

Démonstration :

Soit $x, y \in E$, 
$$\begin{array}{rl}
\left| \left< x, y \right> \right|\leq \left|\left| x \right|\right| \left|\left| y \right|\right| &\Leftrightarrow \left|\left| x \right|\right| ^{2} + \left|\left| y \right|\right| ^{2} + 2 \left< x, y \right> \\
& \leq \left|\left| x \right|\right| ^{2} + \left|\left| y \right|\right| ^{2} +2\left|\left| x \right|\right| \left|\left| y \right|\right|  \\
& \Leftrightarrow \left|\left| x+y \right|\right| ^{2} \\
&\leq (\left|\left| x \right|\right| + \left|\left| y \right|\right| )^{2} \\
\end{array}$$
Ainsi, 
Comme : $\left|\left| \cdot \right|\right| \geq 0$, 
$$\left|\left| x+y \right|\right| \leq \left|\left| x \right|\right| +\left|\left| y \right|\right| $$
#### Lemme 1
Soit $(e_{i})_{i = 1}^{p}$ une famille orthonormale de $E$, 
et $f \in E \setminus Vect(e_{i})_{i = 1}^{p}$
Alors il existe un unique $e_{p+1} \in E$ tel que : 
- $Vect(e_{i})_{i = 1}^{p+1} = Vect(e_{1}, e_{2},\dots, e_{p}, f)$
- $(e_{i})_{i=1}^{p+1}$ soit orthonormé
- $\left< f, e_{p+1} \right> > 0$

Démonstration :

###### Analyse
Supposons qu'il existe un unique $e_{p+1} \in E$ tel que : 
- $Vect(e_{i})_{i = 1}^{p+1} = Vect(e_{1}, e_{2},\dots, e_{p}, f)$
- $(e_{i})_{i=1}^{p+1}$ soit orthonormé
- $\left< f, e_{p+1} \right> > 0$

Comme $e_{p+1} \in Vect(e_{1}, \dots, e_{p}, f)$, 
Soit $(\lambda_{j})_{j = 1}^{p}$ une famille de coefficients
Soit $\lambda \in \mathbb{R}$, 
$$e_{p+1} = \sum_{i =1}^{p} \lambda_{i} e_{i} + \lambda f$$
Comme $(e_{i})_{i=1}^{p+1}$ est orthonormale :
Soit $j \in [\![1, p]\!]$, 
$$0 = \left< e_{j}, e_{p+1} \right> = \left< e_{j}, \sum_{i =1}^{p} \lambda_{i}e_{i} \right>+\left< e_{j}, \lambda f \right> = \lambda_{j} + \lambda \left< e_{j}, f \right>  $$
Alors, 
$\lambda_{j} = -\lambda \left< e_{j}, f \right>$
Donc, 
$$e_{p+1} = \lambda\left( f-\sum_{i = 1}^{p} \left< e_{i}, f \right> e_{i} \right) = \lambda u$$

$\left< f, e_{p+1} \right> > 0$ alors, 
$$1=\left< e_{p+1}, e_{p+1} \right> = \left|\left| e_{p+1} \right|\right| ^{2} = \left|\left| \lambda u \right|\right| ^{2} = \left| \lambda\right|^{2}\left|\left| u \right|\right| ^{2}$$
Alors, 
$$1 = \left| \lambda\right|\left|\left| u \right|\right| \Leftrightarrow \left| \lambda\right| = \frac{1}{\left|\left| u \right|\right| }$$
On a : 
$$1 = \left< e_{p+1}, e_{p+1} \right> = \left< e_{p+1}, \lambda\left( f-\sum_{i = 1}^{p} \left< e_{i}, f \right> e_{i} \right) \right> = \lambda\left< e_{p+1}, f \right> $$
$1>0$ alors, comme $\left< e_{p+1}, f \right>>0$ 
$$\lambda >0$$
Alors, 
$$\lambda = \frac{1}{\left|\left| u \right|\right| }$$
Ainsi, 
$$e_{p+1} = \left|\left| u \right|\right| ^{-1}u$$

#### Projection
$$\begin{cases}
\forall x \in E,& d(x, p_{F}(x)) = d(x , F) \\
\forall x, y \in E, &d(x,Y) = d(x, y) \Rightarrow y = p_{F}(x)
\end{cases}$$

Démonstration :

Soit $x \in E$, et $y \in F$
$$d(x, y) = \left|\left| x-y \right|\right| = \left|\left| x-p_{F}(x) + p_{F}(x)-y \right|\right|  $$
Comme $x-p_{F} \in F^{\perp}$ et $p_{F} - y \in F$, 
Par le théorème de Pythagore : 
$$\begin{array}{c}
d(x, y)^{2} = \left|\left| x-p_{F}(x) \right|\right|^{2} + \left|\left| p_{F}(x)-y \right|\right|^{2} \geq \left|\left| x-p_{F}(x) \right|\right|^{2}
\end{array}$$
$$= d(x, p_{F}(x))^{2}$$
$$d(x, y) \geq f(x, p_{F}(x))$$
Ainsi, $f(x, p_{F}(x)) = d(x, F)$
