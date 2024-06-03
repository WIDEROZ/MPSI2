#### Projection
Soit $F \underset{sev}{\subset}E$,
$$
\begin{cases}
\forall x \in E, d(x, p(x)) = d(x, F) \\
\forall x \in E, \forall y \in F, d(x, y) = d(x, F) \Rightarrow y = p_{F}(x)
\end{cases}
$$

Démonstration : 
Soit $x \in E$, 
Soit $y \in F$, 
$$d(x, y) = \left|\left| x-y \right|\right| = \left|\left| x - p_{F}(x) + p_{F}(x) -y \right|\right| $$
Comme $x-p_{F}(x) \in F^{\perp}$ et $p_{F} - y \in F$, 
On applique le théorème de Pythagore : 
$$d(x, y) ^{2} = \left|\left| x-p_{F}(x) \right|\right|^{2} + \left|\left| p_{F}(x) - y \right|\right| ^{2} \geq \left|\left| x - p_{F}(x) \right|\right|^{2} $$
Alors, comme la distance est toujours positive : 
$$d(x, y) \geq d(x, p_{F}(x))$$
Ainsi, par définition de $d(x, F)$
$$d(x, p_{F}(x)) = d(x, F) = \inf_{f \in F}(d(x, f))$$

# Exos
## 1.
$$
\int _{m}^{n} \left\lfloor x \right\rfloor  \, dx = \sum_{k = m}^{n} \frac{k^{2}}{n-m+1} = \sum_{i=0}^{n-m} \frac{(i+m)^{2}}{n-m+1}
$$
$$= \frac{1}{n-m+1}\left( \sum_{i = 0}^{n-m} i^{2} + \sum_{i = 0}^{n-m} 2mi + \sum_{i = 0}^{n-m} m^{2} \right)$$
$$= \frac{1}{n-m+1}\left( \frac{(n-m)(n-m+1)(2(n-m)+1)}{6} + m(n-m)(n-m+1) + m^{2}(n-m+1) \right)$$
Alors, 

$i = k-m$
