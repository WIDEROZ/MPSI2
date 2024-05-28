# Exercice 1
## 1. 
$$\sum_{n \geq 1}\ln\left( 1+\frac{1}{n} \right)$$
Pour $n \in \mathbb{N}$, 
comme $\frac{1}{n} \underset{n \to +\infty}{\longrightarrow}0$
$$\ln\left( 1+\frac{1}{n} \right) \underset{n \to + \infty}{\sim} \frac{1}{n}$$
Comme c'est une SATP, 
$$\sum_{n \geq 1} \frac{1}{n} \text{ et } \sum_{n \geq 1}\ln\left( 1+ \frac{1}{n} \right)$$
sont de la même nature. 
or
$$\sum_{n \geq 1} \frac{1}{n} \text{ DV}$$
Ainsi, 
$$\sum_{n \geq 1} \ln\left( 1+\frac{1}{n} \right) \text{ DV}$$

## 2.
$$\sum \frac{2n}{n + 2^{n}}$$
C'est une SATP
On applique la règle de d’Alembert
Pour $n \in \mathbb{N}$, 
$$\frac{\frac{2(n+1)}{(n+1)+2^{n+1}}}{\frac{2n}{n+2^{n}}} = \frac{n+1}{n} \times \frac{n+2^{n}}{(n+1)+2^{n+1}} \sim \frac{n}{n} \times \frac{2^{n}}{2^{n+1}} = \frac{1}{2}$$
$\frac{1}{2} <1$ alors d'après la règle d'Alembert : 
$$\sum \frac{2n}{n+2^{n}} \text{ CV}$$

## 3. 
Pour $n \geq 1$,
$$a_{n} = \frac{1}{\sqrt{ n(n+1) }}$$
$$\sum_{n \geq 1} a_{n} \text{ et } \sum_{n \geq 1} \frac{1}{n} \text{ sont deux SATP équivaelnts}$$
Or, 
$$\sum_{n \geq 1} \frac{1}{n} \text{ DV}$$
Donc, 
$$\sum_{n \geq 1} a_{n}\text{ DV}$$

## 4. 
Pour $n \geq 1$, $a_{n} = \frac{(-1)^{n}}{n^{\alpha}}$ ou $\alpha$ est réel
Pour $\alpha \in \mathbb{R}_{-}$
$$\sum a_{n} \text{ DVG}$$
Pour $\alpha \in \mathbb{R}_{+}$, 


## 8.
$$\sum_{n \geq 1}\frac{1}{\sqrt{ n }}\sin\left( \frac{\pi}{n} \right)$$
$$\sin\left( \frac{\pi}{n} \right) \underset{n \to + \infty}{\sim} \frac{\pi}{n}$$
$$\frac{\pi}{n^{\frac{3}{2}}}= \frac{\pi}{n\sqrt{ n }}\sim \frac{\pi}{\sqrt{ n }} \sin\left( \frac{\pi}{n} \right)$$
$\frac{3}{2} > 1$ alors, par le théorème des équivalences
comme 
$$\sum_{n \geq 1} \frac{\pi}{n^{\frac{3}{2}}} \text{ CV} $$
et que $\frac{1}{n\sqrt{ n }} \sim \frac{1}{\sqrt{ n }}\sin\left( \frac{\pi}{n} \right)$
$$\sum_{n \geq 1} \frac{\pi}{\sqrt{ n }}\sin\left( \frac{\pi}{n} \right) \text{ CV}$$
Donc, 
$$\sum_{n \geq 1} \frac{1}{\sqrt{ n }}\sin\left( \frac{\pi}{n} \right) \text{ CV}$$
## 9.
$$\sum_{n \geq 1}\frac{\sqrt{ n }\sin(n)}{n^{2}}$$
$$\begin{cases}
\left| a_{n}\right| \leq \frac{1}{n^{\frac{3}{2}}} \text{ SATP} \\
a_{n} = O\left( \frac{1}{n^{\frac{3}{2}}} \right)
\end{cases}$$
Comme
$$\sum_{n \geq 1} \frac{1}{n^{\frac{3}{2}}} \text{ CVA} $$
Alors, 
$$\sum a_{n} \text{ CVA}$$
Donc, 
$$\sum a_{n} \text{ CV}$$
## 10.
$$a_{n} = \frac{n^{pn}}{(pn)!}$$
$p \in \mathbb{N}^{*}$ fixé
$\sum a_{n}$ est une SATP 
Alembert : 
$$\frac{a_{n+1}}{a_{n}} = \frac{ \frac{n^{p(n+1)}}{(p(n+1))!}}{ \frac{n^{pn}}{(pn)!}} = \frac{n^{p(n+1)}(np)!}{n^{np}(p(n+1))!}$$
$$ = \left( \left( 1+\frac{1}{n} \right)^{n} \right)^{p} \frac{(n+1)^{p}}{(pn+p)(pn+p-1)\dots(pn+1)}$$
$$=== \left( 1+\frac{1}{n} \right)^{np} \frac{1}{p^{p}} \frac{(n+1)^{p}}{(n+1)\left( n+1-\frac{1}{p} \right)\dots\left( n+\frac{1}{p} \right)}$$
A détailler : 
$$\frac{a_{n+1}}{a_{n}} \underset{n \to +\infty}{\longrightarrow} \frac{e^{p}}{p^{p}}$$

Disjonction de cas pour $p \in \{ 1, 2 \}$ et $p \geq 3$

## 11.
Soit $\alpha \in \mathbb{R}$, 
$$\sum_{n \geq 1} a_{n}$$
avec 
$$\forall n \in \mathbb{N}^{*}, a_{n} = \left( n\sin\left( \frac{1}{n} \right) \right)^{n^{\alpha}}$$

Pour $\alpha = 0$
Alors, 
$$n\sin\left( \frac{1}{n} \right) \underset{n \to +\infty}{\longrightarrow}  1$$
Alors, 
$\sum_{n \geq 1} a_{n}$ DVG pour $\alpha = 0$

Pour $\alpha < 0$
Pour $n \in \mathbb{N}^{*}$
$$a_{n} = e^{ b_{n} } \text{ avec } b_{n} = n^{\alpha}\ln\left( n\sin\left( \frac{1}{n} \right) \right)$$
$b_{n} \underset{n \to +\infty}{\longrightarrow} 0$
$a_{n} \underset{n \to +\infty}{\longrightarrow} 1$ 
$\sum_{n \geq 1} a_{n}$ DVG pour $\alpha < 0$

Pour $\alpha > 1$ :
$$\frac{\sin u}{u} \underset{u \to 0}{=} 1- \frac{u^{2}}{6} + o(u^{2})$$
$$\ln(1-h) \underset{h \to 0}{=}-h +o(h)$$
Alors, 
Comme
$$\frac{u^{2}}{6}-o(u^{2}) \underset{u \to 0}{=} 1-\frac{\sin u}{u} \underset{u \to 0}{\longrightarrow} 0$$
$$\ln\left( \frac{\sin u}{u} \right) = \ln\left( 1-\left( 1-\frac{\sin u}{u} \right) \right)\underset{u \to 0}{=} -\frac{u^{2}}{6} + o(u^{2})$$
Comme $u = \frac{1}{n} \underset{n \to + \infty}{\longrightarrow} 0$
$$\ln\left( n\sin\left( \frac{1}{n} \right) \right) \sim - \frac{1}{6n^{2}}$$
Alors, 
$$b_{n} \sim -\frac{n^{\alpha-2}}{6}$$
Donc, 
$$e^{ b_{n} } \underset{n \to +\infty}{\longrightarrow} \begin{cases}
1 \text{ si } \alpha < 2 \\
e^{ -\frac{1}{6} } \text{ si } \alpha = 2 \\
0 \text{ si } \alpha > 2
\end{cases}$$
$$n^{2}e^{ b_{n} } = (n^{\alpha-2})^{\frac{2}{\alpha-2}}e^{ -\frac{n^{\alpha-2}}{6} } e^{ o\left( n^{\alpha-2} \right) } \leq n^{2}e^{ -\frac{n^{\alpha-2}}{6} }\underset{n \to +\infty}{\longrightarrow} 0$$
......



## 13. 
Soit $\alpha \in \mathbb{R}_{+}^{*}$,
$$a_{n} = \ln\left( 1+ \frac{(-1)^{n}}{n^{\alpha}} \right) $$
$$a_{n} \underset{n \to + \infty}{=} \frac{(-1)^{n}}{n^{\alpha}} - \frac{1}{2n^{\alpha}} + o\left( \frac{1}{n^{2\alpha}} \right)$$

par le critère de Leibniz. 

# Exercice 2
$$\sum_{n \geq 1} \frac{(-1)^{n-1}}{n}$$
$$\lim_{ n \to + \infty } \sum_{k = 1}^{n} \frac{(-1)^{k}}{k} = \ln(2)$$

On a une valeur approchée de $\ln(2)$ à $10^{-3}$ près qui est : 
$$\sum_{k = 0}^{3} \frac{\left\lfloor \lim_{ n \to \infty } \sum_{i = 1}^{n} \frac{(-1)^{i}}{i} 10^{k} \right\rfloor}{10^{k}}$$

$$\left| R_{n}\right|$$