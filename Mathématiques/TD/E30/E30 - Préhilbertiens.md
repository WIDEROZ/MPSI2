# Exercice 1
## 1.
#### Analyse
Soit $x,x', y, y' \in E$, et $\lambda, \mu \in \mathbb{R}$
Supposons que :
$$
\phi(x, y) = \phi(y, x)
$$
et 
$$\phi(x + \lambda y, x') = \phi(x, x') + \lambda \phi(y, x')$$


___
On a :
$$
ax_{1}y_{1}+2x_{1}y_{2}+bx_{2}y_{1}+2x_{2}y_{2}+x_{1}y_{3}+x_{3}y_{1}+x_{3}y_{3}
$$
$$= ay_{1}x_{1}+2y_{1}x_{2}+by_{2}x_{1}+ 2y_{2}x_{2}+y_{1}x_{3}+y_{3}x_{1}+y_{3}x_{3}$$
Alors, 
$$
2x_{1}y_{1}+bx_{2}y_{1}=2y_{1}x_{2}+by_{2}x_{1}
$$
$b = 2$
$a \in \mathbb{R}$, 

___
#### Synthèse
Ah oui ca marche

## 2.
$$
\phi(x, x) = ax_{1}^{2}+ 2x_{1}x_{2}+bx_{1}x_{2}+ 2x_{2}^{2}+x_{1}x_{3}+x_{1}x_{3}+x_{3}^{2}
$$
$$\phi(x, x) = ax_{1}^{2} + 4x_{1}x_{2}+2x_{2}^{2}+2x_{1}x_{3}+x_{3}^{2} $$
$$= ax_{1}^{2} + 4x_{1}x_{2} +2x_{2}^{2} +2x_{1}x_{3} + x_{3}^{2}$$
$$= (a-2)x_{1}^{2} + (\sqrt{ 2 }x_{1}+\sqrt{ 2 }x_{2})^{2}+2x_{1}x_{3}+x_{3}^{2}$$
$$
= (a-3)x_{1}^{2} + 2(x_{1}+x_{2})^{2} + (x_{1}+x_{3})^{2}
$$
Ainsi, 
$$\alpha = a-3 \text{ et } 2 = \beta \text{ et } \gamma = 1$$

## 3.
Pour $b = 2$ et $a \in \mathbb{R}$ $\phi$ est bilinéaire symétrique pour ces valeurs. 
On veut que :
$$
\begin{cases}
\forall x \in E, \phi(x, x) \geq 0 \\
\forall x \in E, \phi(x, x) = 0 \Leftrightarrow x = 0
\end{cases}
$$

#### Analyse
Supposons que $\phi$ soit définie positivement :
$$\begin{cases}
\forall x \in E, \phi(x, x) \geq 0 \\
\forall x \in E, \phi(x, x) = 0 \Leftrightarrow x = 0
\end{cases}$$
On pose : $x = (1, -1, -1) \in E \setminus \{ 0 \}$
Alors, 
$$
\phi(x, x) = a-3 > 0
$$
Donc, 
$$a>3$$

#### Synthèse
Supposons que $a > 3$, 
Alors,
On a bien : 
$$\phi(x, x) \geq 0$$
Si $\phi(x, x) = 0$ 
Alors, 
$$
(a-3) x_{1}^{2} +2(x_{1}+x_{2})^{2} + (x_{1}+x_{3})^{2} = 0
$$
Alors, 
$$\begin{cases}
x_{1}=0 \\
x_{1}+x_{2}=0 \\
x_{1}0x_{3} = 0
\end{cases}$$
Donc, 
$$\begin{cases}
x_{1}=0 \\
x_{2}=0 \\
x_{3}=0
\end{cases}$$

## 4.
$$
\phi(x, y) = (a-3)x_{1}y_{1} + \beta x_{1}y_{2} + \beta x_{2}y_{1} + \beta x_{2}y_{2}+x_{1}y_{3}+x_{3}y_{1} + x_{3}y_{3}+3x_{1}y_{1}
$$
$$\phi(x, y) = (a-3)x_{1}y_{1} + \beta(x_{1}y_{2}+x_{2}y_{1}+x_{2}y_{2}) + x_{1}y_{3}+x_{3}y_{1}+x_{3}y_{3}+3x_{1}y_{1}$$


# Exercice 2
Soient $A, A',B \in S_{n}(\mathbb{R})$ et $\lambda \in \mathbb{R}$
Montrer que :
$$
(tr(AB+BA))^{2}\leq 4tr(A^{2})tr(B^{2})
$$
___
On pose : 
$$\left< A, B \right> = tr(AB+BA)$$
C'est bien symétrique
On montre que c'est bilinéaire :
$$\left< A + \lambda A', B \right> = tr((A+\lambda A')B+ B(A+\lambda A'))$$
$$= tr(AB + BA +\lambda (A'B+BA'))$$
$$= tr(AB + BA) + \lambda tr(A'B+BA') = \left< A, B \right> + \lambda \left< A', B \right> $$

C'est bilinéaire.
On montre que c'est défini positivement : 
$$\left< A, A \right> = 2tr(A^{2}) = 2\sum_{i =1}^{n}A^{2}[i, i] = 2\sum_{i = 1}^{n} \sum_{k = 1}^{n} A[n, k]A[k, n] $$
$$= 2\sum_{i = 1}^{n}\sum_{k = 1}^{n}(A[n, k])^{2} \geq 0$$
Supposons que $\left< A, A \right> = 0$
Alors, 
$$\forall k\in [\![1, n]\!], A[n, k] = 0$$
Ainsi,
$$
A = 0_{S_{n}}
$$

Donc, $\left< A, B \right> = tr(AB+BA)$ est un produit scalaire. 
Donc, 
Par l'inégalité de Cauchy-Swartz : 
$$tr(AB+BA)=\left< A, B \right> \leq |\left< A, B \right>| \leq \left|\left| A \right|\right| \left|\left| B \right|\right|  = 2 \sqrt{ tr(A^{2})tr(B^{2}) }$$
Ainsi, 
$$
\boxed{tr(AB + BA)^{2} \leq 4 tr(A^{2})tr(B^{2})}
$$

# Exercice 4
## 1.
$$2x+3y+4z+5t=0$$
Alors, 
Une base de $H$ est : 
$$ f = (f_{1}, f_{2}, f_{3})
\begin{pmatrix}
\begin{pmatrix}
-3 \\
2 \\
0 \\
0
\end{pmatrix}, \begin{pmatrix}
-2 \\
0 \\
1 \\
0
\end{pmatrix}, \begin{pmatrix}
-5 \\
0 \\
0 \\
2
\end{pmatrix}
\end{pmatrix}
$$
On note : 
$$\forall i \in [\![1, 3]\!], u_{i} = f_{i} - \sum_{k = 1}^{i-1} \left< f_{i}, e_{k} \right>e_{k} \text{ et } e_{i} = \frac{u_{i}}{\left|\left| u_{i} \right|\right| } $$
Alors par le procédé d'orthogonalisation de gran-Schmidt
$$e_{1} = \frac{f_{1}}{\left|\left| f_{1} \right|\right| } = \begin{pmatrix}
-\frac{3}{\sqrt{ 13 }} \\
\frac{2}{\sqrt{ 13 }} \\
0 \\
0
\end{pmatrix}$$
$$e_{2} = \begin{pmatrix}
-\frac{2}{\sqrt{ 5 }} \\
0 \\
\frac{1}{\sqrt{ 5 }} \\
0
\end{pmatrix}$$
$$e_{3} = \begin{pmatrix}
-\frac{5}{\sqrt{ 29 }} \\
0 \\
0 \\
\frac{2}{\sqrt{ 29 }}
\end{pmatrix}$$

# Exercice 8
On cherche un vecteur normal au plan : $P = Vect(u, v)$
ou 
$$Mat_{e}$$