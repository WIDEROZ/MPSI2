Soit $N = \overline{a_{n}\dots a_{0}}^B = \overline{b_{m}\dots b_{0}}^B$, 
Si $m > n$, montrons que $\forall i \in [\![n + 1, m]\!]$, $b_{i} = 0$
$$\sum_{k = 0}^na_{k}B^k = \sum_{k = 0}^mb_{k}B^2$$
$$\sum_{k = 0}^na_{k}B^k \leq \sum_{k = 0}^n(B-1)B^k = (B-1)\sum_{k = 0}^nB^k = \frac{B^{n+1}-1}{B-1}(B-1)<B^{n-1}$$
$$\sum_{k = 0}^m b_{k}B^k = \sum_{k = 0}^n b_{k}B^k + \sum_{k = n+1}^n b_{k}B^k $$

Supposons qu'il existe $i_{0} \in [\![n+1, m]\!]$, $b_{i_{0}}>0$
$$\sum_{k = 0}^m b_{k}B^k \geq \sum_{k = n + 1}^m b_{k}B^k \geq b_{i_{0}}B^{i_{0}}\geq B^{n+1}$$
C'est Absurde
Donc pour tout $i \in [\![n+1, m]\!]$, $b_{i} = 0$
___
Soit $N = \overline{a_{n}\dots a_{0}}^B = \overline{b_{m}\dots b_{0}}^B$, 
Montrons que $\forall i \in [\![0, n]\!]$, $a_{i} = b_{i}$
___
Montrons que $a_{0} = b_{0}$, 
$$0\leq a_{0}\leq B-1$$
De plus, 
$$\exists g \in \mathbb{N} \text{ (g = } \overline{a_{n}\dots a_{0}}^B$$
tel que $N = Bg + a_{0}$
___
De même, $0 \leq b_{0} \leq B-1$, 
et $N = B \times \overline{b_{n} \dots b_{1}}^B + b_{0}$
___
Or il existe un unique couple d'entiers $(g, r)$ avec
$0 \leq n \leq B-1$ tels que $N = B \times q +r$
Donc $a_{0} = b_{0}$ et $\overline{a_{n}\dots a_{1}}^B = \overline{b_{n} \dots b_{1}}^B$
De la même façon on prouve pour tout $i \in [\![0, n-1]\!]$, 
$$\overline{a_{n}\dots a_{i}}^B = \overline{b_{n}\dots b_{i}}^B \Rightarrow \left[a_{i} = b_{i} \text{ et } \overline{a_{n}\dots a_{i+1}}^B = \overline{b_{n}\dots b_{i+1}}^B\right] $$
Donc $\forall i \in [\![0, n-1]\!], a_{i} = b_{i}$ 
et $\overline{a_{n}}^B = \overline{b_{n}}^B$ d'où $a_{n} = b_{n}$

