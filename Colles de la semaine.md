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
Soit $p \in \mathbb{N}^{*}$, 
Soit $(e_{i})_{i = 1}^{p}$ une famille orthonormée, 
Soit $f \in E \setminus Vect(e_{i})_{i  =1}^{p}$, 
Il existe un unique $e_{p+1} \in  E \setminus Vect(e_{i})_{i  =1}^{p}$ tel que : 
- $Vect(e_{i})_{i = 1}^{p+1} = Vect(e_{1}, \dots, e_{p}, f)$
- $\left< f, e_{p+1} \right> > 0$
- $(e_{i})_{i = 1}^{p+1}$ soit orthonormée

Démonstration : 
###### Analyse
Supposons que les hypothèses du haut soient vérifiés : 
il existe $(\lambda_{i})_{i=  1}^{p} \in \mathbb{R}^{[\![1, p]\!]}$ et $\lambda \in \mathbb{R}$ tels que :
$$e_{p+1} = \sum_{i = 1}^{p} \lambda_{i} e_{i} + \lambda f$$
Alors comme $(e_{i})_{i= 1}^{p+1}$ est orthonormée, 
Soit $j \in [\![1, p]\!]$, 
$$0 = \left< e_{j}, e_{p+1} \right> = \left< e_{j},  \sum_{i = 1}^{p} \lambda_{i} e_{i} + \lambda f \right> = \lambda_{j} + \lambda\left< e_{j}, f \right> $$
Alors, 
$$\lambda_{j} = -\lambda \left< f, e_{j} \right> $$
Donc en posant $u$ :
$$e_{p+1} =\lambda\left(f-  \sum_{i = 1}^{p} \left< f, e_{i} \right> e_{i} \right) = \lambda u$$
Alors comme,
$$1 = \left< e_{p+1}, e_{p+1} \right> = \lambda \left< e_{p+1}, f \right> > 0 $$
par hypothèse $\left< e_{p+1}, f \right> > 0$
Alors, $\lambda > 0$, 
Ainsi, 
$$
1 = \left|\left| e_{p+1} \right|\right| = \lambda \left|\left| u \right|\right| 
$$
Donc, comme
$\lambda = \left|\left| u \right|\right|^{-1}$
Ainsi, 
$$e_{p+1} = \left|\left| u \right|\right| ^{-1}u$$

#### Projection
$$\begin{cases}
\forall x \in E,& d(x, p_{F}(x)) = d(x , F) \\
\forall x, y \in E, &d(x,F) = d(x, y) \Rightarrow y = p_{F}(x)
\end{cases}$$

Démonstration :

Soit $x \in E$, et $y \in F$
$$d(x, y) = \left|\left| x-y \right|\right| = \left|\left| x-p_{F}(x) + p_{F}(x)-y \right|\right|  $$
Comme $x-p_{F} \in F^{\perp}$ et $p_{F} - y \in F$, 
Par le théorème de Pythagore : 
$$\begin{array}{rl &  & }
d(x, y)^{2} &= \left|\left| x-p_{F}(x)  \\
\right|\right|^{2} + \left|\left| p_{F}(x)-y \right|\right|^{2}  \\
&\geq \left|\left| x-p_{F}(x) \right|\right|^{2} = d(x, p_{F}(x))^{2}
\end{array}$$

Donc, 
$$d(x, y) \geq d(x, p_{F}(x))$$
Ainsi, $d(x, p_{F}(x)) = d(x, F)$
___
Soit $x \in E$, et $y \in F$
Supposons que :
$$d(x, y) = d(x, F)$$
On a : 
$$d(x, y) = d(x, p_{F}(x))$$
alors, 
$y = p_{F}(x)$ car $y \in F$






