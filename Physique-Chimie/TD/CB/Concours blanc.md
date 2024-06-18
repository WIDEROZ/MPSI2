# Etude d'une inégalité
## 1.
Par équivalence: 
$$a \in \mathbb{R}_{+} \Leftrightarrow \mathrm{Re}(a) \geq 0 \text{ et } \mathrm{Im}(a) = 0$$
$$\Leftrightarrow \left| a\right| = \sqrt{ \mathrm{Re}(a)^{2} + \mathrm{Im}(a)^{2} } = \mathrm{Re}(a)$$

## 2.
$$(\left| z\right| +  \left| w\right|)^{2} = \left| z\right|^{2}  + \left| w\right|^{2} + 2 \left| z\right|\left| w\right|$$
$$\left| z\right|\left| w\right| = \sqrt{ (\mathrm{Re}(z)^{2}+\mathrm{Im}(z)^{2})(\mathrm{Re}(w)^{2}+\mathrm{Im}(w)^{2})}$$
$$\sqrt{ \mathrm{Re}(w)^{2}\mathrm{Re}(z)^{2} + \mathrm{Re}(z)^{2} \mathrm{Im}(w)^{2} + \mathrm{Im}(z)^{2}\mathrm{Re}(w)^{2} + \mathrm{Im}(z)^{2}\mathrm{Im}(w)^{2} } $$
$$= \left| z\right|\left| \bar{w}\right|$$
Alors, 
$$\boxed{(\left| z\right| + \left| w\right|)^{2} = \left| z\right|^{2} + \left| w\right|^{2} + 2 \left| z \bar{w}\right|}$$
ensuite :
$$\left| z + w\right|^{2} = (z+w)(\bar{z} + \bar{w}) = z\bar{z} + z\bar{w} + \bar{z}w + w\bar{w}$$
$$= \left| z\right|^{2} + \left| w\right|^{2} + (z\bar{w} + \overline{z\overline{w}}) = \left| z\right|^{2} + \left| w\right|^{2} + 2\mathrm{Re}(z\bar{w})$$
Ainsi, 
$$(\left| z\right| +  \left| w\right|)^{2} - \left| z + w\right|^{2} =2 (\left| z\bar{w}\right| - \mathrm{Re}(z\bar{w}))$$


## 3.
On a :
$$2(\left| z\bar{w}\right|- \mathrm{Re}(z\bar{w})) \geq 0$$
Alors, 
$$(\left| z\right| + \left| w\right|)^{2} \geq \left| z + w\right|^{2}$$
Ainsi, comme $\left| \cdot\right|$ est positive : 
$$\left| z\right| + \left| w\right| \geq \left| z+w\right|$$

Cas d'égalité : 
Supposons que : 
$$2(\left| z\bar{w}\right|- \mathrm{Re}(z\bar{w})) = 0$$
Alors, 
$$\left| z \bar{w}\right| = \mathrm{Re}(z\bar{w}) \Leftrightarrow z \bar{w} \in \mathbb{R}_{+}$$
Alors, 
$$z\bar{w} \in \mathbb{R}_{+} \Leftrightarrow \begin{cases}
(z = 0 \text{ ou } w = 0) \\
ou \\
Arg(z\bar{w}) \equiv0 [2\pi]
\end{cases} \Leftrightarrow \begin{cases}
(z = 0 \text{ ou } w = 0) \\
ou \\
Arg(z) \equiv Arg(w) [2\pi]
\end{cases}$$
Ainsi, $z$ et $w$ sont sur la même droite. (même argument)

# La notion de $(p:q)$ point
## 4.
Supposons $a \neq b$
#### Analyse : 
Supposons que : 
$$\frac{z-a}{b-z} = \frac{p}{q}$$
Comme $q \neq 0$ et que $b-z \neq 0$
$$z = \frac{pb+qa}{q+p}$$

## 5.
Chef un peu de respect svp

## 6.
$$z = \frac{b+a}{2}$$
c'est le milieu du segment $[a, b]$

## 7.
$$\begin{cases}
X = \frac{pb+qa}{q+p} \\
Y = \frac{pc+qa}{q+p}
\end{cases}$$
$$y - x = \frac{p}{p+q}(c-b)$$
Alors, comme $\frac{p}{p+q} \in \mathbb{R}_{+}^{*}$;  
$$\overrightarrow{XY} \text{ et } \overrightarrow{BC} \text{ sont colinéaires}$$
$B \neq C$ ainsi, 
$$(XY) // (BC)$$

## 8.
$$G = \frac{a+b+c}{3}$$

## 9.
$$a' = \frac{pb+qa}{q+p}$$
$$b' = \frac{pc+qb}{q+p}$$
$$c' = \frac{pa+qc}{q+p}$$
Alors, 
$$\frac{a'+b'+c'}{3} = \frac{1}{3(p+q)}(p(a+b+c) + q(a+b+c)) = \frac{a+b+c}{3}$$

## 10. 
$$\frac{1}{p+q}\begin{pmatrix}
q&p&0 \\
0&q&p \\
p&0&q
\end{pmatrix} \begin{pmatrix}
a_{k} \\
b_{k} \\
c_{k}
\end{pmatrix} = \frac{1}{p+q} \begin{pmatrix}

\end{pmatrix} = \begin{pmatrix}
a_{k+1} \\
b_{k+1} \\
c_{k+1}
\end{pmatrix}$$
Flemme c'est du calcul

## 11.
$$\alpha_{k+1} = \frac{1}{p+q} (q(a_{k} + b_{k} + c_{k}) + p(a_{k} + b_{k} + c_{k})) = a_{k} + b_{k} + c_{k}$$
Ainsi 