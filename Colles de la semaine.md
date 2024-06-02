# Mathématiques
#### Inégalité de Cahchy-Swartz
Soit $x, y \in E$, 
$$\left|\left| x+y \right|\right| \leq \left|\left| x \right|\right| \left|\left| y \right|\right| $$

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
Alors, il existe un unique $e_{p+1}$ tel que :
- $Vect(e_{i})_{i=1}^{p+1} = Vect(e_{1}, e_{2}, \dots, e_{p}, f)$
- La famille : $(e_{i})_{i=1}^{p+1}$ soit orthonormale
- $\forall $
