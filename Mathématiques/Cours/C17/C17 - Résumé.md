# Définition : Relations de comparaison pour les suites
Soit $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$
tq $(v_{n})$ ne s'annule plus APDCR
On définit :
1. 
$$u_{n} = O(v_{n}) \Leftrightarrow \left( \frac{u_{n}}{v_{n}} \right) \text{ est bornée}$$
et on dit que $(u_{n})$ est dominée par $(v_{n})$

2. 
$$u_{n} = o(v_{n}) \Leftrightarrow \frac{u_{n}}{v_{n}} \underset{n \to +\infty}{\longrightarrow} 0$$
($(u_{n})$ est négligeable devant $(v_{n})$ ou $(v_{n})$ est prépondérante par rapport a $(u_{n})$)

3. 
$$u_{n} \sim v_{n} \Leftrightarrow \frac{u_{n}}{v_{n}} \underset{n \to +\infty}{\longrightarrow} 1$$
($(u_{n})$ est équivalente à $v_{n}$ et $u_{n}$ est un équivalent à $v_{n}$)

# Propriété
Si
$$u_{n} \underset{n \to +\infty}{\longrightarrow} l \in \mathbb{K}^{*}$$
alors
$$u_{n} \sim l$$
(Faux lorsque $l = 0$)

# Propriété
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$
tq $u_{n} \sim v_{n}$ et $u_{n} \underset{n \to +\infty}{\longrightarrow} l$ ($v_{n} \neq 0$ APDCR)
On a deux cas :
- Si $v_{n} \underset{n \to +\infty}{\longrightarrow} l$ (avec $l \in \overline{\mathbb{R}}$ ou $l \in \mathbb{C}$)
Alors, 
$$u_{n} \underset{n \to +\infty}{\longrightarrow} l$$
- $u_{n}$ et $v_{n}$ on le même signe a partir d'un certain rang.

# Propriété
Soit $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $v_{n} \neq 0$ APDCR
1. 
$$\left. \begin{array}{r}
\lim v_{n} = 0 \\
u_{n} = O(v_{n})
\end{array} \right\} \Rightarrow \lim u_{n} = 0 $$

2. 
$$\left. \begin{array}{r}
(v_{n}) \text{ est bornée} \\
u_{n} = u(v_{n})
\end{array} \right\} \Rightarrow \lim u_{n} = 0 $$

3. 
$$\left. \begin{array}{r}
(v_{n}) \text{ est bornée} \\
u_{n} = O(v_{n})
\end{array} \right\} \Rightarrow u_{n} \text{ est bornée} $$
