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

$$R_{n} = \sum_{k = 1}^{\infty} \frac{(-1)^{k}}{k} - \sum_{k = 1}^{n} \frac{(-1)^{k}}{k}$$


$$R_{n-1} = \sum_{k = 1}^{\infty} \frac{(-1)^{k}}{k}  - \sum_{k = 1}^{n+1} \frac{(-1)^{k}}{k}$$
$$\left| R_{n-1} \right| \leq \frac{1}{n}$$
Alors, 
$$\left| \ln(2) - \sum_{k = 1}^{n} \frac{(-1)^{k-1}}{k}\right| \leq \frac{1}{n} - \frac{1}{n+1}$$
$$\left| \ln(2) - \sum_{k = 1}^{n} \frac{(-1)^{k-1}}{k}\right| \leq \frac{1}{n(n+1)}$$


# Exercice 3

$$\frac{\ln(n+1)-\ln(n)}{\sqrt{ \ln(n+1) }+\sqrt{ \ln(n) }} = \frac{\ln\left( 1+\frac{1}{n} \right)}{\sqrt{ \ln(1+n) }+ \sqrt{ \ln(n) }} \sim \frac{\frac{1}{n}}{2\sqrt{ \ln(n) }}$$
Mq : 
$$\sqrt{ \ln(n+1)} + \sqrt{ \ln(n) } \sim 2 \sqrt{\ln(n)}$$
On a : 
$$\frac{\sqrt{ \ln(n+1)} + \sqrt{ \ln(n) }}{2 \sqrt{\ln(n)}} = \frac{1}{2}\left( {\sqrt{ \frac{\ln(n+1)}{\ln(n)} }} +1\right)$$
Alors, 
$$\frac{\ln(n+1)}{\ln(n)} = \frac{\ln(n)}{\ln(n)}+ \frac{\ln\left( 1+ \frac{1}{n} \right)}{\ln(n)}= 1+ \frac{\ln\left( 1+\frac{1}{n} \right)}{\ln(n)} \underset{n \to +\infty}{\longrightarrow} 1$$
Ainsi, 
$$\sqrt{ \ln(n+1)} + \sqrt{ \ln(n) } \sim 2 \sqrt{\ln(n)}$$
Alors, 
$$\frac{\ln(n+1)-\ln(n)}{\sqrt{ \ln(n+1) }+\sqrt{ \ln(n) }} = \frac{\ln\left( 1+\frac{1}{n} \right)}{\sqrt{ \ln(1+n) }+ \sqrt{ \ln(n) }} \sim \frac{\frac{1}{n}}{2\sqrt{ \ln(n) }}$$
Comme : 
$$\sum_{n \geq 2} \frac{1}{n\sqrt{ \ln(n) }}$$
est une SATP
$$\sum_{k = 1}^{n} \sqrt{ \ln(k+1) }-\sqrt{ \ln(k) } = \ln(n+1)$$
$$\sum_{k = 1}^{\infty} \sqrt{ \ln(k+1) }-\sqrt{ \ln(k) } = +\infty$$
Alors, 
$$\sum_{n \geq 1} \sqrt{ \ln(n+1) }-\sqrt{ \ln(n) } \text{ DV}$$

Ainsi, comme ce sont des SATP, et
$$\frac{1}{2n\sqrt{ \ln(n) }} \sim \sqrt{ \ln(n+1) }-\sqrt{ \ln(n) }$$
et 
$$\sum_{n \geq 1} \sqrt{ \ln(k+1) } -\sqrt{ \ln(k)} \text{ DV}$$
On utilise le théorème sur les équivalents : 
$$\boxed{\sum_{n \geq 2} \frac{1}{n\sqrt{ n }} \text{ DV}}$$

# Exercice 4
Soit $n \in \mathbb{N} \setminus \{ 0, 1, 2 \}$, 
On a : 
$$\frac{2}{n ^{2}-4} \sim \frac{2}{n^{2}}$$
Alors, comme
$$2\sum_{n \geq 1} \frac{1}{n^{2}} \text{ CV}$$
se sont des SATP, Par le théorème sur les équivalents : 
$$\sum_{n \geq 3} \frac{2}{n^{2}-4} \text{ CV}$$
___
Comme : 
$$\frac{1}{n(n^{2}-4)} \sim \frac{1}{n^{3}}$$
Alors, 
$$\sum_{n \geq 3} \frac{1}{n^{3}} \text{ CV}$$
Donc, par le th
$$\sum_{n \geq 3} \frac{1}{n(n^{2}-4)} \text{ CV}$$
___
Donc, 
$$\sum_{n \geq 3} \frac{2n-1}{n(n^{2}-4)} \text{ CV}$$
Car $-1$ est un constante. 
___
$$\frac{2n-1}{n(n^{2}-4)} = \frac{\alpha}{n} + \frac{\beta}{n-2} + \frac{\gamma}{n+2}$$
Par multiplication évaluation : 
Multiplication par $n$ et évaluation en $n = 0$ :
$\frac{1}{4}=\alpha$
Multiplication par $n-2$ et évaluation en $n = 2$ :
$\frac{2 \times 2 -1}{2 \times (2 + 2)} = \frac{3}{8} = \beta$
Multiplication par $n+2$ et évaluation en $n = -2$ :
$\frac{2 \times (-2) -1}{-2 \times (-2-2)} = -\frac{5}{8} = \gamma$

Ainsi, 
$$\frac{2n-1}{n(n^{2}-4)} = \frac{1}{4n} + \frac{3}{8(n-2)} -\frac{5}{8(n+2)}$$
___
$$\frac{1}{4}\sum_{k = 3}^{n} \frac{1}{k} + \frac{3}{8}\sum_{k = 3}^{n} \frac{1}{n-2} + \frac{5}{8 su} $$