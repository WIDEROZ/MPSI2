# Mathématiques
Soit $\sum a_{n}$ SATP et $\sum b_{n}$ tq
$$0 \leq a_{n} \leq b_{n}$$
$$\sum b_{n} \text{ CV} \Rightarrow \sum a_{n} \text{ CV}$$
Supp $\sum b_{n}$ CV, 
Alors, par déf
$\left( \sum_{k = 0}^{n} b_{k} \right)_{n}$ CV, 
Comme $b_{n}\geq 0$ et que $\sum b_{n}$ est croissante (car SATP)
$$0 \leq \sum_{k=0}^{n} a_{k} \leq \sum_{k = 0}^{n} b_{n} \leq \sum_{k = 0}^{\infty} b_{k}$$
ainsi,
comme $\sum_{k = 0}^{n}a_{k}$ est une satp, $\left( \sum_{k = 0}^{n}a_{k} \right)_{n}$ est croissante et majorée donc elle CV.

Si 
$$\begin{cases}
a_{n} = O(b_{n}) \\
\sum b_{n} \text{ CVA}
\end{cases} \Rightarrow \sum a_{n} \text{ CV}$$

Il existe un $M \in \mathbb{R}$ tel que : 
$$|\frac{a_{n}}{b_{n}}|\leq M \Rightarrow 0 \leq |a_{n}| \leq M|b_{n}|$$
$$\sum a_{n} \text{ CVA}$$
Alors, $\sum a_{n}$ CV
___
Soit $\alpha > 1$, 
$$f : \begin{cases}
[1, + \infty[ \to \mathbb{R} \\
x \mapsto \frac{1}{x^{\alpha}}
\end{cases}$$
$$\int _{m+1}^{n+1} f(x)\, dx \leq \sum_{k = m+1}^{n}f(k) \leq \int_{m}^{n}f(x) \, dx \leq \sum_{k = m}^{n-1} f(k)$$

Mq
$$\sum_{n \geq 1} \frac{1}{n^{\alpha}} \text{ CV}$$

$$\sum_{k = 2}^{n} \frac{1}{n^{\alpha}} \leq \int_{1}^{n} \frac{1}{x^{\alpha}}  \, dx $$
Alors, 
$$\sum_{k = 1}^{n} \frac{1}{n^{\alpha}} \leq \left[ \frac{1}{1-\alpha}  \frac{1}{x^{\alpha-1}} \right]_{1}^{n}+1 \Leftrightarrow \sum_{k=  1}^{n} \frac{1}{n^{\alpha}}\leq \frac{1}{1-\alpha} \left( \frac{1}{n^{\alpha-1}}-\alpha \right)$$
or
$$\frac{1}{1-\alpha}\left( \frac{1}{n^{\alpha-1}}-\alpha \right)\underset{n \to +\infty}{\longrightarrow} \frac{\alpha}{\alpha-1}$$
Ainsi, 
$$0\leq \sum_{k = 1}^{\infty} \frac{1}{n^{\alpha}} \leq \frac{\alpha}{\alpha-1}$$
Donc par le théorème de comparaison des SATP, 
$$\sum \frac{1}{n^{\alpha}} \text{ CV}$$
Soit $n \in \mathbb{N}$, 
Soit $m \in [\![1, n]\!]$, 
$$\frac{1}{1-\alpha} \left( \frac{1}{(n+1)^{\alpha-1}}-\frac{1}{(m+1)^{\alpha-1}} \right) \leq \sum_{k = m+1}^{n} \frac{1}{k^{\alpha}} \leq \int_{m}^{n} \frac{1}{x^{\alpha}} \, dx$$
Or, 
$$\int _{m}^{n} \frac{1}{x^{\alpha}} \, dx = \frac{1}{1-\alpha}\left( \frac{1}{n^{\alpha-1}}-\frac{1}{m^{\alpha-1}} \right)$$
En faisant tendre $n$ vers $+ \infty$ : 
$$ \frac{1}{(\alpha-1)(m+1)^{\alpha-1}} \leq R_{n} \leq \frac{1}{(\alpha-1)m^{\alpha-1}}$$
Alors, 
$$\frac{1}{1+\frac{1}{m^{\alpha-1}}} \leq \frac{R_{n}}{\left( \frac{m^{1-\alpha}}{\alpha-1} \right)} \leq 1$$
Ainsi, en faisant tendre $m$ vers $+ \infty$, 
$$1 \leq \frac{R_{n}}{\left( \frac{1}{(1-\alpha)m^{1-\alpha}} \right)} \leq 1$$
Ainsi, 
$$R_{n} \sim \frac{m^{1-\alpha}}{\alpha-1}$$
___
###### Cas $\mathbb{K} = \mathbb{R}$
Supposons que $\sum a_{n}$ CVA, 
Comme :
Pour $n \in \mathbb{N}$, 
$|a_{n}| = a_{n}^{+}+a_{n}^{-}$ 
$a_{n}^{+} = \max(0, a_{n})$
$a_{n}^{-} = -\min(0, a_{n})$
et
$$0 \leq a_{n}^{+} \leq |a_{n}|$$
$$0 \leq a_{n}^{-} \leq |a_{n}|$$
Comme, $|a_{n}|$ CV, par le théorème de comparaison des SATP, 
$$\sum a_{n}^{-} \text{ CV} \text{ et } \sum a_{n}^{+} \text{ CV}$$
Ainsi, 
Comme, 
$$\sum a_{n} = \sum a_{n}^{+} - \sum a_{n}^{-}$$
Ainsi, 
$$\sum a_{n} \text{ CV}$$

###### Cas $\mathbb{K} = \mathbb{C}$
$$\forall n \in \mathbb{N}, 0 \leq |\mathrm{Re}(a_{n})| \leq |a_{n}|$$
$$\forall n \in \mathbb{N}, 0 \leq |\mathrm{Im}(a_{n})| \leq |a_{n}|$$

D'après le théorème de comparaison de SATP et par le théorème réel (démontré précédemment)
$$\forall n\in \mathbb{N}, \sum \mathrm{Re}(a_{n}) \text{ CV et }\sum\mathrm{Im}(a_{n})\text{ CV}$$
Ainsi, 
$$\sum a_{n} = \sum \mathrm{Re}(a_{n}) + i\sum \mathrm{Im}(a_{n}) \text{ CV}$$
___
Soit $(\alpha_{n})_{n} \in \mathbb{R}^{\mathbb{N}}$ décroissante et de limite nulle alors :
$$\sum (-1)^{n}\alpha_{n} \text{ CV}$$
Soit $p \in \mathbb{N},$ 
On note : 
$$S_{2p} = \sum_{k = }$$