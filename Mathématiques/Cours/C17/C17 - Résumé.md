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
tq $u_{n} \sim v_{n}$ ($v_{n} \neq 0$ APDCR)
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
u_{n} = o(v_{n})
\end{array} \right\} \Rightarrow \lim u_{n} = 0 $$

3. 
$$\left. \begin{array}{r}
(v_{n}) \text{ est bornée} \\
u_{n} = O(v_{n})
\end{array} \right\} \Rightarrow u_{n} \text{ est bornée} $$


# Théorème de croissances comparées par les suites
Soient $\alpha , \beta, \gamma >0$.
Alors, 
$$\ln^{\beta}(n) = o(n^{\alpha}) \text{ et } n^{\alpha} = o(e^{ \gamma n })$$
et
$$e^{ -\gamma n } = o(n^{-\alpha}) \text{ et } n^{-\alpha} = o((\ln(n))^{-\beta })$$

# Propriété
1. Reflexive
   - $\sim$
   - $O$
2. Symétrie
   - $\sim$
3. Antisymétrique
   - $o$ Mais attention la condition n'est jamais vérifiée
4. Transitivité mixte
   - $\sim$
   - $o$
   - $O$

# Proposition
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $v_{n} \neq 0$ APDCR,
$$u_{n} \sim v_{n} \Leftrightarrow u_{n}-v_{n} = o(v_{n}) \Leftrightarrow u_{n} = v_{n} + o(v_{n})$$

# Propriétés, opérations sur $o$ et $O$
Soient, $(u_{n}), (v_{n}), (w_{n}) \in \mathbb{K}^{\mathbb{N}}$ et $\lambda, \mu \in \mathbb{K}$

1. CL
$$\left. \begin{array}{l}
u_{n} =o(w_{n}) \\
v_{n} = o(w_{n})
\end{array} \right\} \Rightarrow \lambda u_{n} + \mu v_{n} = o(w_{n})$$
$$\left. \begin{array}{l}
u_{n} = O(w_{n}) \\
v_{n} = O(w_{n})
\end{array} \right\} \Rightarrow \lambda u_{n} + \mu v_{n}= O(w_{n})$$

2. Produit
$$u_{n} = o(w_{n}) \Rightarrow u_{n}v_{n} = o(w_{n}v_{n})$$
$$u_{n} = O(w_{n}) \Rightarrow u_{n}v_{n} = O(w_{n}v_{n})$$

3. Inverse
$$\left. \begin{array}{r}
u_{n} = o(v_{n}) \\
u_{n} \neq 0 \text{ APDCR}
\end{array} \right\} \Rightarrow \frac{1}{v_{n}} = o\left( \frac{1}{u_{n}} \right)$$
$$\left. \begin{array}{r}
u_{n} = O(v_{n}) \\
u_{n} \neq 0 \text{ APDCR}
\end{array} \right\} \Rightarrow \frac{1}{v_{n}} = O\left( \frac{1}{u_{n}} \right)$$


# Propriété opération sur les $\sim$
Soient, $(u_{n}), (v_{n}), (w_{n}), (x_{n}) \in \mathbb{K}^{\mathbb{N}}$ et $\lambda, \mu \in \mathbb{K}$
1. Produit
$$\left. \begin{array}{l}
u_{n} \sim v_{n} \\
w_{n} \sim x_{n}
\end{array} \right\} \Rightarrow u_{n}w_{n} \sim v_{n}x_{n}$$
2. Inverse
$$u_{n} \sim v_{n} \Rightarrow \frac{1}{u_{n}} \sim \frac{1}{v_{n}}$$
3. Puissances
Si $\alpha \in \mathbb{Z}$, 
$$u_{n} \sim v_{n} \Rightarrow u_{n}^{\alpha} \sim v_{n}^{\alpha}$$
Si $\alpha \in \mathbb{R}$, 
$$\left. \begin{array}{r}
u_{n} \sim v_{n} \\
v_{n} > 0 \text{ APDCR}
\end{array} \right\} \Rightarrow u_{n}^{\alpha} \sim v_{n}^{\alpha}$$


# Définition : Fonctions
Soit $x \in I$
On suppose qu'il existe un $V \in \mathcal{V}(a)$
tq $g$ ne s'annule pas sur $V \cap I\{a\}$
On peut alors définir les notions suivantes :
$$f(x) \underset{x \to a}{=} O(g(x)) \Leftrightarrow \frac{f}{g} \text{ est bornée au voisinage de a}$$
$$f(x) \underset{x \to a}{=} o (g(x)) \Leftrightarrow \frac{f(x)}{g(x)} \underset{x \to a}{\longrightarrow}0$$
$$f(x) \underset{x \to a}{\sim} g(x) \Leftrightarrow \frac{f(x)}{g(x)} \underset{x \to a}{\longrightarrow} 1$$

Reprendre tout les résultats sur les suites en remplaçant : 
$(u_{n})$ par $f$
$(v_{n})$ par $g$
$n$ par $x$ 
$+ \infty$ par $a$
APDCR par "Au voisinage de"


# Théorème : Comparaison des croissances (log, puissance, exp)
Soient $\alpha, \beta, \gamma \in \mathbb{R}_{+}^{*}$, 
$$\ln^{\beta}(x) \underset{x \to +\infty}{=} o(x^{\alpha}) \text{ et } x^{\alpha} \underset{x \to + \infty}{=}o(e^{ \gamma x })$$
i.e. :
$$e^{ -\gamma x }  \underset{x \to +\infty}{=} o(x^{-\alpha}) \text{ et }x^{-\alpha} \underset{x \to +\infty}{=}o((\ln(x))^{-\beta})$$
et 
$$|\ln(x)|^{\beta} \underset{x \to 0^{+}}{=} o(x^{-\alpha})$$
i.e. :
$$x^{\alpha} \underset{x \to 0^{+}}{=} o(|\ln(x)|^{-\beta})$$
An particulier, 
$$x\ln x \underset{x \to 0^{+}}{\longrightarrow} 0$$


# Propriété : Composition d'équivalences à la source (changement de variable)
Si $f(x) \underset{x \to a}{\sim}$ $g(x)$ et $h(y) \underset{\underset{y \to b}{\neq}}{\longrightarrow}a$
Alors 
$$(f \circ h)(y) \underset{y \to b}{\sim} (g \circ h)(y)$$
et 

Si $u_{n} \underset{\neq}{\longrightarrow}a$
Alors
$$f(u_{n}) \underset{n \to \infty}{\sim} g(u_{n})$$


# Définition développement limité
$f$ admet un development limité à l'ordre $n$ en $a$ ($DL_{n}(a)$)
ssi
$$\exists a_{0}, a_{1}, \dots, a_{n} \in \mathbb{K},$$
$$f(x) \underset{x \to a}{=} a_{0}+a_{1}(x-a) + \dots + a_{n}(x-a)^{n}+o((x-a)^{n})$$


# Propriété
$f$ admet un $DL_{0}(a)$ ssi 
$$\lim_{ x \to a } f(x) = a_{0}$$
ssi $f$ est continue (cas ou $f$ est définie en $a$)
ou
$f$ est prolongeable par continuité en $a$ (cas $f$ n'est pas définie en $a$)

et alors, $f(x) \underset{x \to a}{=} f(a) + o(1)$

# Propriété (Rappel)
On suppose que $f$ est définie en $a$, 
Alors 
$f$ admet un $DL_{1}(a)$
ssi
$f$ est dérivable en $a$
Si c'est le cas, $a_{1} = f'(a)$, 
$$f(x) \underset{x \to a}{=} a_{0}+f'(a)(x-a)+o(x-a)$$

# Propriété : Unicité des du DL
Si $f$ admet un $DL_{n}(a)$ alors les coefs de ce DL sont uniques


# Terminologie
Lorsqu'il existe, on parle du $DL_{n}(a)$ de $f$

En pratique lorsque $a \neq 0$ on effectue le changement de variable "$x = a+h$" 
et on écrit alors le $DL_{n}(a)$ de $f$ sous la forme : 
$$f(a+h) \underset{h \to 0}{=} a_{0}+a_{1}h+\dots + a_{n}h + o(h^{n}) $$


# Propriété : Troncature d'un DL
Si $f$ admet un $DL_{n}(a)$
$$f(a+h) = \sum_{k=0}^{n}a_{k}h^{k} + o(h^{n})$$
alors pour tout $l \in [\![0, n]\!]$, 
$f$ admet le $DL_{l}(a)$ :
$$f(a+h) = \sum_{k =0}^{l}a_{k}k^{k}+o(h^{l})$$


# Propriété
Une fonction polynôme admet des $DL$ à tous les ordres en tout point. 


# Propriété
Si $f$ est paire (resp. impaire) et admet un $DL_{n}(0)$ alors tout les monômes de degré impair (resp. pair) de la partie polynomiale de ce $DL$ sont nuls.  

# Proposition
Si $f$ admet un $DL_{n}(0)$, alors ses parties paries et impaires aussi et leurs $DL$ sont obtenus en séparant les monômes pairs des monômes impairs.


# Définition : Forme normalisé d'un DL
Si $f$ admet un $DL_{n}(a)$ avec une partie polynomiale non nulle, ce $DL$ s'écrit :
$$f(a+h) \underset{h \to 0}{=} h^{p}(b_{0}+b_{1}h +\dots+ b_{n-p}h^{n-p}+o(h^{n-p}))$$
En plus formel : 
$$f(a+h) \underset{h \to 0}{=} h^{p}\left(\sum_{k=0}^{n-p}b_{k}h^{k} + o(h^{n-p})\right)$$
avec $b_{0} \neq 0$


# Propriété
Si $f$ admet un $DL_{n}(a)$ sous forme normalisé avec les notations précédentes alors
$$f(a+h) \underset{h \to 0}{\sim} b_{0}h^{p}$$


# Propriété : Somme de $DL$
Si $f$ et $g$ admettent des $DL_{n}(a)$
$$f(a+h) \underset{h \to 0}{=} \sum_{k=0}^{n}a_{k}h^{k} + o(h^{n})$$
$$g(a+h) \underset{h \to 0}{=} \sum_{k=0}^{n}b_{k}h^{k} + o(h^{n})$$
Alors
$f+g$ aussi : 
$$(f+g)(x) = \sum_{k=0}^{n}(a_{k}+b_{k})h^{k} + o(h^{n})$$


# Propriété : Produit de $DL$
Soient $f$ et $g$ admettant des $DL_{n}(a)$, 
Alors $fg$  admet un $DL_{n}(a)$ de $f$ et $g$ et en négligent les termes d'ordre strictement plus grand que $n$.


# Propriété : Composition
Pour obtenir un $DL_{n}(a)$ de $g \circ f$, il suffit d'effectuer un $DL_{n}(a)$ de $f$ et un $DL_{n}(f(a))$ de $g$


# Quotient d'un $DL$
$a_{0}$ le premier coef du $DL$ de $f$ si $\neq 0$
sinon faire un $\pm 1$ : 
$$\frac{1}{f(x)} = \frac{1}{a_{0}} \times \frac{1}{1-\frac{a_{0}-f(x)}{a_{0}}} = \frac{1}{a_{0}}\times \frac{1}{1-g(x)}$$


# Propriété Primitive d'un DL
Si $f$ admet un $DL_{n}(a)$
$$f(x) = a_{0} + a_{1}(x-a)+\dots+a_{n}(x-a)^{n} + o((x-a)^{n})$$
On suppose que $f$ est continue au voisinage de $a$
Toute primitive $F$ admet un $DL_{n+1}(a)$
$$F(x) \underset{x \to 0}{=} F(a) + a_{0}(x-a)+\frac{a_{1}(x-a)^{2}}{2}+\dots+ \frac{a_{n}(x-a)^{n+1}}{n+1} +o((x-a)^{n+1})$$


# Théorème : Formule de Taylor-Young
Soit $f \in \mathcal{C}^{n}(I)$ (pour $n \in \mathbb{N}$) et $a \in I$. 
Alors $f$ admet un $DL_{n}(a)$
$$f(x) \underset{x \to a}{=} \sum_{k=0}^{n} \frac{f^{(k)}(a)}{k!} (x-a)^{k} + o((x-a)^{n})$$


# Corollaire
Si $f \in \mathcal{C}^{\infty}(I)$ et $a \in I$, $f$ admet des $DL(a)$ à tous les ordres 


# Développements limités à savoir par cœur 
#### $\ln(1+x)$ : 
$$\ln(1+x) \underset{x \to 0}{=} \sum_{k=1}^{n+1}(-1)^{k-1} \frac{x^{k}}{k} + o(x^{n+1})$$

#### $\ln(1-x)$ :
$$\ln(1-x) \underset{x \to 0}{=} - \sum_{k=1}^{n} \frac{x^{k}}{k} + o(x^{n}) $$

#### $\tan(x)$ : 
$$\tan(x) \underset{x \to 0}{=} x + \frac{x^{3}}{3} + \frac{2}{15}x^{5} + o(x^{5})$$

#### $(1+x)^{\alpha}$ : 
$$(1+x)^{\alpha} \underset{x \to 0}{=} \sum_{k=0}^{n} \frac{\alpha(\alpha-1)\dots(\alpha-k+1)}{k!}x^{k} + o(x^{n}) $$
$$(1+x)^{\alpha} \underset{x \to 0}{=} \sum_{k=0}^{n} \frac{\prod_{i=0}^{k-1}(\alpha-i)}{k!}x^{k}+o(x^{n})$$

#### $\frac{1}{1+x}$ : 
$$\frac{1}{1+x} \underset{x \to 0}{=} \sum_{k=0}^{n} (-1)^{k} x^{k} + o(x^{n})$$

#### $\frac{1}{1-x}$ :
$$\frac{1}{1-x} \underset{x \to 0}{=} \sum_{k=0}^{n} h^{k} + o(x^{n})$$

#### $\exp(x)$ : 
$$\exp(x) \underset{x \to 0}{=} \sum_{k = 0}^{n} \frac{x^{k}}{k!} + o(x^{n})$$
$\text{sh}$ la partie impaire du DL
$\text{ch}$ la partie paire du DL

#### $\cos(x)$ : 
$$\cos(x) \underset{x \to0}{=} \sum_{k = 0}^{n} (-1)^{k}\frac{x^{2k}}{(2k)!} + o(x^{2n})$$


#### $\sin(x)$ : 
$$\sin(x) \underset{x \to 0}{=} \sum_{k=0}^{n} (-1)^{k} \frac{x^{2k+1}}{(2k+1)!} + o(x^{2n+1})$$

# Formule de Stirling
$$\forall n \in \mathbb{N}, n! \underset{n \to + \infty}{\sim} \left( \frac{n}{e} \right)^{n} \sqrt{ 2\pi n}$$
