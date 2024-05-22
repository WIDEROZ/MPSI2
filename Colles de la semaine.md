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
$$\forall n \in \mathbb{N}, S_{n} = \sum_{k = 0}^{n} (-1)^{n}\alpha_{n}$$
$$S_{2p+2} - S_{2p} = \sum_{k = 0}^{2p+2} (-1)^{k}\alpha^{k} - \sum_{k=0}^{2p}(-1)^{k}\alpha^{k} = -\alpha^{2p+1} + \alpha^{2p+2} \leq 0$$
$$S_{2p+3} - S_{2p+1} = -\alpha^{2p+3} + \alpha^{2p+2}\geq 0$$
Ainsi, 
$$(S_{2p})_{p} \downarrow \text{ et }(S_{2p+1})_{p} \uparrow$$
Comme
$$S_{2p+1}-S_{2p} = - \alpha^{2p+1} \underset{p \to +\infty}{\longrightarrow}  0$$
Alors, $(S_{2p})$ et $(S_{2p+1})$ sont adjacentes. 
elles convergent donc vers la même limite par le théorème des suites adjacentes et donc, 
par le théorème sur les suites de extraites de rangs paires et impairs comme elles ont la même limite : $(S_{n})$ Converge
$$\sum(-1)^{n}\alpha_{n} \text{ CV}$$

Comme $\sum(-1)^{n}\alpha_{n} \text{ CV}$ le reste est bien défini, on a alors : 
$R_{n} + S_{n} = l$
Comme : 
$$S_{2p+1} \leq l \leq S_{2p}$$
Alors : 
$$ -\alpha_{2p+1}= S_{2p+1}-S_{2p} \leq l - S_{2p} = R_{2p+1}\leq 0$$
___
#### Théorème de Heine
Toute fonction continue sur $[a, b]$ est uniformément continue. 

Démo : 
Soit $f$ une fonction continue sur $I = [a, b]$, 
$$\forall x \in I, \forall \varepsilon \in \mathbb{R}_{+}^{*}, \exists \alpha \in \mathbb{R}_{+}^{*}, \forall y \in I, |y-x| \leq \alpha \Rightarrow |f(y)-f(x)| \leq \varepsilon$$
Supposons par l'absurde qu'elle n'est pas uniformément continue : 
$$\exists \varepsilon \in \mathbb{R}_{+}^{*}, \forall \alpha \in \mathbb{R}_{+}^{*}, \exists x, y \in I, |y - x| \leq \alpha \text{ et } |f(y)-f(x)|> \varepsilon$$
Soit $n \in \mathbb{N}$, 
Soit $(x_{n})_{n}, (y_{n})_{n} \in \mathbb{R}^{I}$, 
en prenant $\alpha = \frac{1}{n+1}$, 
$$\begin{cases}
|y_{n}- x_{n}| \leq \frac{1}{n+1} \\
|f(y_n)- f(x_{n})| > \varepsilon
\end{cases}$$
Comme $(x_{n})$ est bornée on utilise le théorème de B-W, et on note cette suite : $(x_{\phi(n)})_{n}$ de limite $l \in [a, b]$, 
Comme $(y_{\varphi(n)})_{n}$ est bornée, par B-W, Il existe une suite : $(y_{(\varphi \circ \psi)(n)})$ CV de limite $l' \in [a, b]$. 
$$\begin{cases}
x_{(\varphi \circ \psi)(n)} \underset{n \to +\infty}{\longrightarrow}  l \\
y_{(\varphi \circ \psi)(n)} \underset{n \to +\infty}{\longrightarrow} l'
\end{cases}$$
Alors, 
$$\begin{array}{rl}
|y_{\varphi(n)}-l| \leq |y_{\varphi(n)} - x_{\varphi}|
\end{array}$$