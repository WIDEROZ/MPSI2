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
$$\frac{1}{n^{\frac{3}{2}}}= \frac{1}{n\sqrt{ n }}\sim \frac{1}{\sqrt{ n }} \sin\left( \frac{\pi}{n} \right)$$
$\frac{3}{2} > 1$ alors, par le théorème des équivalences
comme 
$$\sum_{n \geq 1} \frac{1}{n^{\frac{3}{2}}} \text{ CV} $$
et que $\frac{1}{n\sqrt{ n }} \sim \frac{1}{\sqrt{ n }}\sin\left( \frac{\pi}{n} \right)$
$$\sum_{n \geq 1} \frac{1}{\sqrt{ n }}\sin\left( \frac{\pi}{n} \right) \text{ CV}$$
