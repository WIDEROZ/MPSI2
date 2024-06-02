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
Alors, comme la distance est toujousr
$$$$