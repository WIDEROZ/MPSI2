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
$$\forall x, y \in E, no$$