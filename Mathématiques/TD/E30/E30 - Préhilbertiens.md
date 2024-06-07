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
$$Mat_{e}(u) = \begin{pmatrix}
1 \\
-1 \\
2
\end{pmatrix} $$
$$Mat_{e}(v) = \begin{pmatrix}
-1 \\
2 \\
1
\end{pmatrix}$$
$$Mat_{e}(w) = \begin{pmatrix}
1 \\
1 \\
1
\end{pmatrix}$$
On demande de calculer $d(w, P)$

On peut choisir de résoudre le système en notant $(x, y, z)$ les coordonnés de $n$ dans la base $e$

On a : 
$$\begin{cases}
\left< u, n \right> = 0 \\
\left< v, n \right> = 0
\end{cases}$$
Comme $e$ est une base orthonormée :
$$\begin{cases}
x-y+2z = 0 \\
-x+2y+ z= 0\end{cases}$$
On fait un pivot et on obtiens que :
$$n \in Vect(-5e_{1}-3e_{2}+e_{3})$$
On choisit $n$ tel que :
$$Mat_{e}(n) = \begin{pmatrix}
-5 \\
-3 \\
1
\end{pmatrix}$$
Alors, d'après une formule du cours,
$$d(w, P) = \frac{\left| \left< w, n \right> \right|}{\left|\left| n \right|\right| } = \frac{7}{\sqrt{ 35 }} = \frac{\sqrt{ 35 }}{5}$$

# Exercice 10
Soit $e$ la BON en question
$$Mat_{e}(v) = \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}$$

Soit $p_{F}$ la projection orthogonale d'un vecteur sur $F$ (la droite de l’énoncé) 
On cherche une base de $F$ :
$$\begin{pmatrix}
1&1&1 \\
2&-1&3
\end{pmatrix} \sim \begin{pmatrix}
1&1&1 \\
0&-3&1
\end{pmatrix}  \sim \begin{pmatrix}
1&0& \frac{4}{3} \\
0&1&-\frac{1}{3}
\end{pmatrix}$$
$$ \begin{pmatrix}
x \\
y \\
z
\end{pmatrix} \in Vect\begin{pmatrix}
-\frac{4}{3} \\
\frac{1}{3} \\
1
\end{pmatrix} = Vect\begin{pmatrix}
-4 \\
1 \\
3
\end{pmatrix}$$
On note $d = -4e_{1}+e_{2}+3e_{3}$
Alors, 
$$p_{F}(v) = \left< v, \frac{d}{\left|\left| d \right|\right| } \right> \frac{d}{\left|\left| d \right|\right| }$$
Alors, comme :
$$\left< v, d \right> = 7$$
$$\left|\left| d \right|\right| = \sqrt{ 26 }$$
Donc, 
$$p_{F}(v) = \frac{7}{26} d$$

Alors, 
$$d(v, F) = \left|\left| v - p_{F}(v) \right|\right| =\left|\left| v-\frac{7}{26}d \right|\right|$$
Ainsi, 
$$d(v, F) = \sqrt{ \left( 1+ \frac{14}{13} \right)^{2} + \left( 2 -\frac{7}{26} \right)^{2} + \left( 3-\frac{21}{26} \right)^{2} }$$


# Exercice 12
On note : $A = Mat_{e}(f)$
$$A^{2} = \frac{1}{9} \begin{pmatrix}
9&0&0 \\
0&9&0 \\
0&0&9
\end{pmatrix} = I_{3}$$
$$f \circ f = Id_{E}$$
$f$ est une symétrie

# Exercice 13
$s$ la symétrie de $H$ par rapport à $H^{\perp}$
On cherche $Mat_{B}(s)$
Il suffit de trouver $s(b_{1})$, $s(b_{2})$ et $s(b_{3})$
On a directement un vecteur normal a $H$ : $n(a, b, c)$
$$p_{H^{\perp}}(b_{1}) = \left< b_{1}, \frac{n}{\left|\left| n \right|\right| } \right> \frac{n}{\left|\left| n \right|\right| } = \frac{n}{\left|\left| n \right|\right| ^{2}} \left< b_{1}, n \right>$$
Comme 
$$\left< b_{1}, n \right> = a $$
et 
$$\left|\left| n \right|\right|^{2} = a^{2} + b^{2} + c^{2}$$

$$p_{H^{\perp}}(b_{1}) = \frac{a}{a^{2} + b^{2} + c^{2}}n(a, b, c) $$
$$p_{H^{\perp}}(b_{2}) = \frac{b}{a^{2} + b^{2} + c^{2}}n(a, b, c) $$
$$p_{H^{\perp}}(b_{3}) = \frac{c}{a^{2} + b^{2} + c^{2}}n(a, b, c) $$

Comme : 
$$p_{H} = Id - p_{H^{\perp}}$$
$$\begin{cases}
p_{H}(b_{1}) = b_{1}-\frac{a}{a^{2}+b^{2}+c^{2}}n(a, b, c) \\
p_{H}(b_{2}) = b_{2}-\frac{b}{a^{2}+b^{2}+c^{2}}n(a, b, c) \\
p_{H}(b_{3}) = b_{3}-\frac{c}{a^{2}+b^{2}+c^{2}}n(a, b, c)
\end{cases}$$
___
Alors,
$$s_{H} = p_{H} - p_{H^{\perp}} $$
Donc, 
$$\begin{cases}
s_{H}(b_{1}) = b_{1}(1, 0, 0) - 2 \frac{a}{a^{2}+b^{2}+c^{2}}n(a, b, c)\\
s_{H}(b_{2}) = b_{2}(0, 1, 0) -2 \frac{b}{a^{2}+b^{2}+c^{2}}n(a, b, c)  \\
s_{H}(b_{3}) = b_{3}(0, 0, 1) - 2 \frac{c}{a^{2}+b^{2}+c^{2}}n(a, b, c)
\end{cases}$$
___
___
Plus rapidement : 
$$s_{H} = Id_{E} - 2p_{H^{\perp}}$$
___

Ainsi, 
$$Mat_{B}(s_{H}) = \begin{pmatrix}
1-2 \frac{a^{2}}{a^{2} + b^{2} + c^{2}}&-2 \frac{ab}{a^{2} + b^{2} + c^{2}}&-2 \frac{ac}{a^{2} + b^{2} + c^{2}} \\
-2 \frac{ba}{a^{2} + b^{2} + c^{2}}&1-2 \frac{b^{2}}{a^{2} + b^{2} + c^{2}}&-2 \frac{bc}{a^{2} + b^{2} + c^{2}} \\
-2 \frac{ca}{a^{2} + b^{2} + c^{2}}&-2 \frac{cb}{a^{2} + b^{2} + c^{2}}&1-2 \frac{c^{2}}{a^{2} + b^{2} + c^{2}}
\end{pmatrix} $$
ie 
$$Mat_{B}(s_{H}) = -\frac{1}{a^{2}+b^{2}+c^{2}}\begin{pmatrix}
2a^{2} -(a^{2}+b^{2}+c^{2})
\end{pmatrix}$$