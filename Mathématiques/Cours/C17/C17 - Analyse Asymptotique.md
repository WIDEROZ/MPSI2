# Introduction
## But 
Rendre rigoureux et facile a manipuler des intuitions ou résultats naturels

## Exemples
### 1. Equivalents
On a vu que $\frac{\sin x}{x} \underset{x \to \infty}{\longrightarrow} 1$ et $\frac{\ln(1+x)}{x} \underset{x \to 0}{\longrightarrow} 1$
On a envie de noter 
$\sin(x) \underset{x \to 0}{\sim} x$ et $\ln(1+x) \underset{x \to 0}{\sim}x$
et de remplacer $\sin x$ par $x$ quand $x$ est petit
$$\frac{\sin^{2}(x)}{\ln(1+x)} \sim \frac{x^{2}}{x} = x \underset{x \to 0}{\longrightarrow} 0$$
Attention :
$$\sin x-x \nsim x-x =0$$
$$\sin x - (x-x^{3}) \nsim x^{3}$$
Les DL nous montrerons que 
$$\sin x - (x-x^{3}) \sim \frac{5x^{3}}{6}$$

### 2. Négligeabilité
$$\frac{x^{2}}{x}\underset{x \to 0}{\longrightarrow} 0$$
On note
$$x^{2} \underset{x \to 0}{=} o(x)$$
Et on néglige $x^{2}$ devant $x$ quand $x \to 0$

#### Exemple
$$\frac{x+x^{2}}{(\ln(1+x))^{2}} \underset{x \to 0^{+}}{\sim} \frac{x}{x^{2}} = \frac{1}{x} \underset{x \to 0^{+}}{\longrightarrow} + \infty$$

Donc
$$\frac{x+x^{2}}{(\ln(1+x))^{2}} \underset{x \to 0^{+}}{\sim} + \infty$$


### 3. Domination
$$f(x) = \frac{x + x^{2}\left( 1+\cos ^{2}x + \sin\left( \frac{1}{3x} \right) \right)}{(\ln(1+x))^{2}}$$

$$\left|\frac{x^{2}\left( 1+\cos ^{2}x+ \sin\left( \frac{1}{3x} \right) \right)}{x^{2}}\right|\leq cte $$

On note : 
$$x^{2}\left( 1+\cos ^{2}x+ \sin\left( \frac{1}{3x} \right) \right) \underset{x \to 0^{+}}{=} O(x^{2})$$


Or $x^{2} = o(x)$
Donc
$$x^{2}\left( 1+\cos^{2} x + \sin\left( \frac{1}{3x} \right) \right) = o(x)$$

Donc 
$$\frac{x + x^{2}\left( 1+\cos^{2} x + \sin\left( \frac{1}{3x} \right) \right)}{(\ln(1+x^{2}))^{2}} \sim \frac{x}{x^{2}} =\frac{1}{x} \underset{x \to 0^{+}}{\longrightarrow} + \infty $$
Donc
$$\frac{x+x^{2}\left( 1+\cos ^2{x} + \sin\left( \frac{1}{3x} \right) \right)}{(\ln(1+x))^{2}}\underset{x \to 0^{+}}{\longrightarrow}+\infty$$


Soit $\mathbb{K} \in {\mathbb{R}, \mathbb{C}}$
# I. Relations de Comparaisons pour les suites
#### Définition
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

#### Remarque
Pour les limites non nulles et non infinies les équivalences ont peut d’intérêt. 

#### Propriété
Si
$$u_{n} \underset{n \to +\infty}{\longrightarrow} l \in \mathbb{K}^{*}$$
alors
$$u_{n} \sim l$$
(Faux lorsque $l = 0$)

Démonstration : 
Si $u_{n} \underset{n \to +\infty}{\longrightarrow} l$ alors $\frac{u_{n}}{l} \underset{n \to +\infty}{\longrightarrow} 1$ ie $u_{n} \sim l$

Lorsque $l=0$, on ne peut pas dire que $u_{n} \sim 0$ a cause de la définition à cause de la définition. 


#### Propriété
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$
tq $u_{n} \sim v_{n}$ et $u_{n} \underset{n \to +\infty}{\longrightarrow} l$ ($v_{n} \neq 0$ APDCR)
On a deux cas :
- Si $v_{n} \underset{n \to +\infty}{\longrightarrow} l$ (avec $l \in \overline{\mathbb{R}}$ ou $l \in \mathbb{C}$)
Alors, 
$$u_{n} \underset{n \to +\infty}{\longrightarrow} l$$
- $u_{n}$ et $v_{n}$ on le même signe a partir d'un certain rang.


Démonstration : 
1. 
Supposons que $v_{n} \underset{n \to +\infty}{\longrightarrow} l$
Alors 
$$v_{n} = v_{n} \times \frac{u_{n}}{v_{n}} \underset{n \to +\infty}{\longrightarrow} l \times 1 =l$$

2. 
Comme $\frac{u_{n}}{v_{n}} \longrightarrow 1$ APDCR
$$\frac{u_{n}}{v_{n}}\geq \frac{1}{2}$$
(en prenant "$\epsilon = \frac{1}{2}$" dans la définition de $\lim \frac{u_{n}}{v_{n}}=1$)
Donc APDCR $\frac{u_{n}}{v_{n}}>0$
ie APDCR $u_{n}$ et $v_{n}$ on le même signe

#### Remarque 
En particulier si $u_{n} \sim v_{n}$ et $v_{n}>0$ APDCR
alors $u_{n} >0$

#### Propriété
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


En particulier : 
Pour $\alpha > 0$, 
$$u_{n} = O\left( \frac{1}{n^{\alpha}} \right) \Rightarrow u_{n} \longrightarrow 0$$
et
$$u_{n} = O(1) \Leftrightarrow (u_{n}) \text{ bornée}$$
et
$$u_{n} = o(1) \Leftrightarrow u_{n} \longrightarrow 0$$


#### Exemples
$n = o(n^{2})$
$1000n = O(n)$ et $n = O(1000n)$
(MP2I : $1000n = \Theta(n)$)
$\sin n = O(1)$
$\sin \frac{1}{n} \sim \frac{1}{n}$
$\ln\left( 1 + \frac{1}{n} \right) \sim \frac{1}{n}$
$\frac{1}{n} = O\left(  \frac{1}{n+3} \right)$
$n^{2}$ n'est pas négligeable devant $n$ quand $n \to + \infty$
$(-1)^{n} \sim (-1)^{n} + \frac{1}{n}$
$\frac{n^{2}+3n+1}{n^{3}+1} \sim \frac{n^{2}}{n^{3}} =  \frac{1}{n}$

#### Théorème de croissances comparées par les suites
Soient $\alpha , \beta, \gamma >0$.
Alors, 
$$\ln^{\beta}(n) = o(n^{\alpha}) \text{ et } n^{\alpha} = o(e^{ \gamma n })$$
et
$$e^{ -\gamma n } = o(n^{-\alpha}) \text{ et } n^{-\alpha} = o((\ln(n))^{-\beta })$$

Démonstration : conséquence du résultat par les fonctions

#### Remarque
On utilise pas le théorème pour dire que $\frac{1}{n} = o(e^{ n })$

#### Remarque
En général la croissance exponentielle provient d'une suite géométrique de raison $>1$, par exemple la suite $(2^{n})$
Ainsi : 
$n = o(2^{n})$

#### Propriété
1. Reflexive 
Soit $(u_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $u_{n} \neq 0$ APDCR
Alors, 
$u_{n} \sim u_{n}$
$u_{n} = O(u_{n})$
$(u_{n})$ n'est pas négligeable devant $(u_{n})$

2. Symétrie
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $u_{n} \neq 0$ et $v_{n} \neq 0$ APDCR
$$u_{n} \sim v_{n}\Rightarrow v_{n}\sim u_{n}$$
$u_{n} = o(v_{n}) \Rightarrow (v_{n})$ n'est pas négligeable
$u_{n} = O(v_{n}) \nRightarrow v_{n}=O(u_{n})$

3. Antisymétrique
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $u_{n} \neq 0$ et $v_{n} \neq 0$ APDCR
$$\left. \begin{array}{l}
u_{n} \sim v_{n} \\
v_{n} \sim u_{n}
\end{array} \right\} \nRightarrow u_{n} = v_{n}$$

$$\left. \begin{array}{l}
u_{n} =o(v_{n}) \\
v_{n} = o(u_{n})
\end{array} \right\} \Rightarrow u_{n} = v_{n}$$
(Attention la condition de $o$ n'est jamais vraie)

$$\left. \begin{array}{l}
u_{n} =O(v_{n}) \\
v_{n} = O(u_{n})
\end{array} \right\} \nRightarrow u_{n} = v_{n}$$

4. Transitivité mixte :
Soient, $(u_{n}), (v_{n}), (w_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $v_{n} \neq 0$ et $w_{n} \neq 0$ APDCR
$$\left. \begin{array}{l}
u_{n} \sim v_{n} \\
v_{n} \sim w_{n}
\end{array} \right\} \Rightarrow u_{n} \sim w_{n}$$

$$\left. \begin{array}{l}
u_{n} = o(v_{n}) \\
v_{n} = o(w_{n})
\end{array} \right\} \Rightarrow u_{n} = o(w_{n})$$

$$\left. \begin{array}{l}
u_{n} = O(v_{n}) \\
v_{n} = O(w_{n})
\end{array} \right\} \Rightarrow u_{n} = O(w_{n})$$
(écrire $\frac{u_{n}}{w_{n}} = \frac{u_{n}}{v_{n}} \times \frac{v_{n}}{w_{n}}$)

Si on a une chaîne : $u_{1, n} \mathcal{R}_{1}u_{2, n}\mathcal{R}_{2}u_{3, n} \dots \mathcal{R}_{k}u_{k+1,n}$
Avec les $\mathcal{R}_{i}$ qui sont $\sim$, $o$ ou $O$ alors, 
$u_{1,n}=O(u_{k+1, n})$
Si tous les $\mathcal{R}_{i}$ sont $\sim$ Alors $u_{1, n} \sim u_{k+1, n}$
Si il existe un $\mathcal{R}_{i}$ qui est $o$, alors $u_{1, n}=o(u_{k+1, n})$

5. Remarque
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $v_{n} \neq 0$ APDCR

$$u_{n} \sim v_{n} \Rightarrow u_{n} = O(v_{n})$$
$$u_{n} = o(v_{n}) \Rightarrow u_{n} = O(v_{n})$$

#### Proposition
Soient $(u_{n}), (v_{n}) \in \mathbb{K}^{\mathbb{N}}$ tq $v_{n} \neq 0$ APDCR,
$$u_{n} \sim v_{n} \Leftrightarrow u_{n}-v_{n} = o(v_{n}) \Leftrightarrow u_{n} = v_{n} + o(v_{n})$$
(Cela pourrait être la définition de l'équivalence)

#### Exemple
Comme $\sin$ est dérivable en $0$, 
$$\sin(x) = \sin(0)+\sin'(0)x+o(x) =x+o(x)$$
Par composition de limites :
$$\sin\left( \frac{1}{n} \right) = \frac{1}{n} + o\left( \frac{1}{n} \right) \sim \frac{1}{n}$$

#### Remarque
Si $u_{n} \sim v_{n}$ alors $v_{n} \neq 0$ APDCR, 
Par définition de $\sim$ et comme $u_{n}$ et $v_{n}$ sont de même signe 


### Opérations sur $o$ et $O$
#### Propriété
Soient, $(u_{n}), (v_{n}), (w_{n}) \in \mathbb{K}^{\mathbb{N}}$ et $\lambda, \mu \in \mathbb{K}$

1. CL
$$\left. \begin{array}{l}
u_{n} =o(w_{n}) \\
v_{n} = o(w_{n})
\end{array} \right\} \Rightarrow \lambda u_{n} + \mu v_{n} = o(w_{n})$$
$$\left. \begin{array}{l}
u_{n} = O(v_{n}) \\
v_{n} = O(u_{n})
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


### Opération sur les $\sim$
#### Propriété
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

Les preuves sont triviales. 

#### Remarque
Ce qui sera fait autre que les propositions précédentes sera soit trivial soit faux. 

Pas de somme !
Contre-exemple : 
$$n^{2}+\sqrt{n } \sim n^{2} +n$$
$$-n^{2} \sim -n^{2}$$
Donc
$$n^{2}+\sqrt{ n }-n^{2} = \sqrt{ n } \nsim n = n^{2}+n-n^{2}$$

Pas de composition au but : 
$n \sim n+1$ mais $e^{ n } \nsim e^{ n+1 } = e \cdot e^{ n }$

Conclusion : Ces équivalences sont pratiques et dangereux!

#### Exemple
$$\frac{{1+n+(-1)^{n}n^{2}}}{(-1)^{n}\left( n^{3}+\pi n^{2}+\sin\left( \frac{1}{n} \right) \right)} \sim \frac{(-1)^{n}n^{2}}{(-1)^{n}n^{3}} = \frac{1}{n}$$
car $1=o(n^{2})$ et $n^{2} = O((-1)^{n}n^{2})$
Donc $1 = o((-1)^{n}n^{2})$
De même
$n = o(n^{2})$ Donc $n = o((-1)^{n}n^{2})$
Donc,
$$1+n+(-1)^{n}n^{2}\sim (-1)^{n}n^{2}$$

Et d'autre part, 
$\pi n^{2} = O(n^{2})$ et $n^{2} = o(n^{3})$ Donc $\pi n^{2} = o(n^{{3}})$
$\sin\left( \frac{1}{n} \right) = O(1)$ et $1=o(n^{3})$ Donc $\sin\left( \frac{1}{n} \right)=o(n^{3})$
Donc $n^{3}+\pi n^{2} +\sin\left( \frac{1}{n} \right) \sim n^{3}$
Par produit d'équivalences
$$(-1)^{n}\left( n^{3}+\pi n^{2}+\sin\left( \frac{1}{n} \right) \right) \sim (-1)^{n}n^{3}$$
et enfin par quotient d'équivalences, 
$$u_{n} \sim \frac{(-1)^{n}n^{2}}{(-1)^{n}n^{3}}$$

# II. Cas des fonctions
Soit $I$ un intervalle non trivial,
Soit $a \in \overline{\mathbb{R}}$ qui est soit un élément de $I$ soit une borne de $I$, 
Soit $f, g$ définies sur $I$ ou $I\backslash\{a\}$

#### Définition
Soit $x \in I$
On suppose qu'il existe un $V \in \mathcal{V}(a)$
tq $g$ ne s'annule pas sur $V \cap I\{a\}$
On peut alors définir les notions suivantes :
$$f(x) \underset{x \to a}{=} O(g(x)) \Leftrightarrow \frac{f}{g} \text{est bornée au voisinage de a}$$
$$f(x) \underset{x \to a}{=} o (g(x)) \Leftrightarrow \frac{f(x)}{g(x)} \underset{x \to a}{\longrightarrow}0$$
$$f(x) \underset{x \to a}{\sim} g(x) \Leftrightarrow \frac{f(x)}{g(x)} \underset{x \to a}{\longrightarrow} 1$$

Reprendre tout les résultats sur les suites en remplaçant : 
$(u_{n})$ par $f$
$(v_{n})$ par $g$
$n$ par $x$ 
$+ \infty$ par $a$
APDCR par "Au voisinage de"


#### Théorème : Comparaison des croissances (log, puissance, exp)
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


Démonstration : Tout est conséquence du lemme suivant
Par exemple :
$$\frac{y^{\beta}}{(e^{ y })^{\alpha}}=y^{\beta}e^{ -\alpha y } \underset{x \to \infty}{\longrightarrow} 0$$

or $\ln x \underset{x \to \infty}{\longrightarrow} + \infty$
Donc par composition de limites, 
$$\frac{\ln(x)^{\beta}}{x^{\alpha}}\underset{x \to \infty}{\longrightarrow} 0$$
Donc, 
$$\ln(x)^{\beta} \underset{x \to \infty}{=} o(x^{\alpha})$$
etc...

#### Lemme
Soient $\alpha, \gamma \in \mathbb{R}_{+}^{*}$, 
$$x^{\alpha}e^{ -\gamma x } \underset{x \to + \infty}{\longrightarrow} 0$$

Démonstration : 
On étudie $f:x \mapsto xe^{ -\frac{\gamma}{2}x }$,
Elle est clairement dérivable sur $\mathbb{R}_{+}^{*}$ et pour $x >0$, 
$$f'(x) = \left( \alpha x^{\alpha-1}-\frac{\gamma}{2}x^{\alpha} \right)e^{ -\frac{\gamma}{2}x}$$
$$f'(x) = \left( \alpha-\frac{\gamma x}{2} \right)x^{\alpha-1}e^{ -\frac{\gamma}{2}x }$$

On a alors le tableau de variation : Exal 1 

Comme $f\geq 0$ et admet un maximum global en $\frac{2\alpha}{\gamma}$, $f$ est bornée
Comme
$$e^{-\frac{\gamma}{2}x} \underset{x \to \infty}{\longrightarrow} 0$$
$\left( \frac{\gamma}{2} \right)>0$

Par produit d'une fonction bornée par une fonction qui tend vers $0$,
$$x^{\alpha}e^{ -\gamma x } \underset{x \to \infty}{\longrightarrow} 0$$


#### Propriété : Composition d'équivalences à la source
Si $f(x) \underset{x \to a}{\sim}$ $g(x)$ et $\ln(y) \underset{\underset{y \to b}{\neq}}{\longrightarrow}a$
Alors 
$$(f \circ h)(y) \underset{y \to b}{\sim} (g \circ h)(y)$$
et 

Si $u_{n} \underset{\neq}{\longrightarrow}a$
Alors
$$f(u_{n}) \underset{n \to \infty}{\sim} g(u_{n})$$

#### Exemple
$\frac{1}{n} \underset{\neq}{\longrightarrow} 0$ et $\sin x \underset{x \to 0}{\sim} x$
Donc,
$$\sin\left( \frac{1}{n} \right) \underset{n \to \infty}{\sim} \frac{1}{n}$$


# Application pour les DL ($o$, $O$)
Lorsque $x \mapsto a \in \mathbb{K}$, 

Si $k>l\geq 0$, 
$$(x-a)^{k}\underset{x \to a}{=}o((x-k)^{l})$$
Donc a fortiori : 
$$o((x-a)^{k}) + o((x-a)^{l}) = o((x-a)^{l})$$
$$o((x-a)^{k}) \times o((x-a)^{l}) = o((x-a)^{k+l})$$

Mieux : 
SI $k, l \in \mathbb{N}$, 
$$ (x-a)^{k} o((x-a)^{l}) = o((x-a)^{k+l})$$
$$f o(g) = o(fg)$$

Même mieux : 
Si $k, l \in \mathbb{N}$, 
$$O((x-a)^{k})o((x-a)^{l}) = o((x-a)^{k+l})$$

Et aussi : 
Si $k\geq l\geq 0$,
$$(x-a)^{k} = O((x-a)^{l})$$
Donc, 
$$O((x-a)^{k}) + O((x-a)^{l}) = O((x-a)^{l})$$

Et si $k, l \in \mathbb{N}$, 
$$O((x-a)^{k})\times O((x-a)^{l}) = O((x-a)^{k+l})$$
En particulier : 
$$(x-a)^{k}O((x-a)^{l}) = O((x-a)^{k+l})$$

Si $k>l\geq 0$, 
$$O((x-a)^{k})\underset{x \to a}{=}o((x-a)^{l})$$


# III. DL
Soit $I$ un intervalle non trivial,
$a \in I$
$f$ définie sur $I$ ou $I\backslash\{a\}$, a valeur dans $\mathbb{K}$

#### Définition 
$f$ admet un development limité à l'ordre $n$ en $a$ ($DL_{n}(a)$)
ssi
$$\exists a_{0}, a_{1}, \dots, a_{n} \in \mathbb{K},$$
$$f(x) \underset{x \to a}{=} a_{0}+a_{1}(x-a) + \dots + a_{n}(x-a)^{n}+o((x-a)^{n})$$

#### Exemple
$$\sin x = x-\frac{x^{3}}{6} + o(x^{3})$$
est un $DL_{3}(0)$ de $\sin$

#### Propriété
$f$ admet un $DL_{0}(a)$ ssi 
$$\lim_{ x \to a } f(x) = a_{0}$$
ssi $f$ est continue (cas ou $f$ est définie en $a$)
ou
$f$ est prolongeable par continuité en $a$ (cas $f$ est définie en $a$)

et alors, $f(x) \underset{x \to a}{=} f(a) + o(1)$

###### A partir de maintenant on supposera que $f$ est soit continue en $a$ soit prolongeable par continuité en $a$ alors on prolonge $f$ si bien que dans les $DL$, on aura : 
$$a_{0} = f(a)$$

#### Exemple
$$\frac{\sin x}{x} \underset{x \to 0}{=} 1- \frac{x^{2}}{6} + o(x^{2})$$
Avec :
$f:x\mapsto \frac{\sin x}{x}$ prolongeable par continuité en posant $f(0) =1$

#### Propriété (Rappel)
On suppose que $f$ est définie en $a$, 
Alors 
$f$ admet un $DL_{1}(a)$
ssi
$f$ est dérivable en $a$
Si c'est le cas, $a_{1} = f'(a)$, 
$$f(x) \underset{x \to a}{=} a_{0}+f'(a)(x-a)+o(x-a)$$


#### Remarque
La propriété n'est pas généralisable pour des $DL_{n}(a)$ (si $f$ admet un $DL_{n}(a) \nRightarrow f$ est $n$ fois dérivable en $a$)
(LE MIRACLE S’ARRÊTE ICI MDRDRRDRDRRRDRDRRDRRRR)


#### Propriété : Unicité des du DL
Si $f$ admet un $DL_{n}(a)$ alors les coefs de ce DL sont uniques

Démonstration : 
Supposons que $f$ s'écrive : 
$$f(x) \underset{x \to a}{=} \sum_{k= 0}^{n} a_{k}(x-a)^{k} + o((x-a)^{n})$$
et :
$$f(x) \underset{x \to a}{=} \sum_{k =0}^{n}b_{k}(x-a)^{k}+o((x-a)^{n})$$

Par différence : 
$$\sum_{k=0}^{n} (a_{k}-b_{k})(x-a)^{k} \underset{x \to a}{=} o((x-a)^{n})$$

On raisonne par l'absurde : 
Montrons que : 
$$\forall k\in[\![0, n]\!], a_{k}=b_{k}$$
par l'absurde
Si ce n'est pas le cas prenons : 
$$l = min\{k \in [\![0, n]\!]| a_{k}\neq b_{k}\}$$

On a alors : 
$$\sum_{k=0}^{n}(a_{k}-b_{k})(x-a)^{k} = (a_{l}-b_{l})(x-a)^{l} \sum_{k=0}^{n}(a_{k}-b_{k})(x-a)^{k}$$
$$= (a_{l}-b_{l})(x-a)^{l} + +o(x-a)^{l}$$
or 
$$\sum_{k=0}^{n}(a_{k}-b_{k})(x-a)^{k}=o((x-a)^{n})$$
Donc, 
$$(a_{l}-b_{l})(x-a)^{l} = o((x-a)^{n})$$
or
$$\frac{(a_{l}-b_{l})(x-a)^{l}}{(x-a)^{n}} = (a_{l}-b_{l})(x-a)^{l-n} \underset{x \to a}{\nrightarrow} 0$$
CONTRADICTION


#### Terminologie
Lorsqu'il existe, on parle du $DL_{n}(a)$ de $f$

En pratique lorsque $a \neq 0$ on effectue le changement de variable "$x = a+h$" 
et on écrit alors le $DL_{n}(a)$ de $f$ sous la forme : 
$$f(a+h) \underset{h \to 0}{=} a_{0}+a_{1}h+\dots + a_{n}h + o(h^{n}) $$

#### Propriété : Troncature d'un DL
Si $f$ admet un $DL_{n}(a)$
$$f(a+h) = \sum_{k=0}^{n}a_{k}h^{k} + o(h^{n})$$
alors pour tout $l \in [\![0, n]\!]$, 
$f$ admet le $DL_{l}(a)$ :
$$f(a+h) = \sum_{k =0}^{l}a_{k}k^{k}+o(h^{l})$$

Démonstration : 
$$\sum_{k=?}^{n}a_{k}h^{k} + o(h^{n}) = o(h^{l})$$

#### Propriété
Une fonction polynôme admet des $DL$ à tous les ordres en tout point. 
Plus précisément : 
si $P \in \mathbb{K}[X]\backslash\{0\}$ et $a \in \mathbb{R}$,
$$f: \begin{cases}
\mathbb{R} \to \mathbb{K} \\
x \mapsto P(x)
\end{cases}$$
en notant 
$$P = \sum_{n=0}^{\infty}b_{n}X^{n}$$
Et en appliquant la formule de Taylor polynomiale (FTP) à P,
on obtiens : 
$$P = \sum_{k=0}^{d} \frac{P^{(k)}(a)}{k!}(x-a)^{k}$$
et 
$$f(a+h)=\sum_{k=0}^{d} \frac{P^{(k)}(a)}{k!}h^{k}$$
Donc pour $n \in \mathbb{N}$ : 
SI $n\geq d$,
$$f(a+h) \underset{h \to 0}{=} \sum_{k=0}^{d} \frac{P^{(k)}(a)}{k!}h^{k}+o(h^{n})$$
Si $n<d$, 
$$f(a+h) \underset{h \to 0}{=} \sum_{k=0}^{n} \frac{P^{(k)}(a)}{k!}+o(h^{n})$$
Par troncature.

ie
$$f(a+h) \underset{h \to 0}{=} \sum_{k=0}^{min(d, n)} \frac{P^{(k)}(a)}{k!}k^{k}+ o(h^{n})$$

#### Propriété
Si $f$ est paire (resp. impaire) et admet un $DL_{n}(0)$ alors tout les monômes de degré impair (resp. pair) de la partie polynomiale de ce $DL$ sont nuls.  

#### Exemple
Pour tout $p \in \mathbb{N}$, 
$$ch(x) \underset{x \to 0}{=} 1 + \frac{x^{2}}{2} + \dots + \frac{x^{2p}}{(2p)!} + o(x^{2p+1})$$

##### Remarque : 
$$ch(x) \underset{x \to 0}{=} 1 + \frac{x^{2}}{2} + \dots + \frac{x^{2p}}{(2p)!} + O(x^{2p+2})$$

#### Proposition
Si $f$ admet un $DL_{n}(0)$, alors ses parties paries et impaires aussi et leurs $DL$ sont obtenus en séparant les monômes pairs des monômes impairs : 
$$e^{ x } \underset{x \to 0}{=} 1 + x+\frac{x^{2}}{2} + \frac{x^{3}}{6} + \dots + \frac{x^{n}}{n!}+o(x^{n})$$
Sa partie paire est $ch$ et on retrouve ainsi le DL précédent. 
Sa partie impaire est $sh$.
Donc, 
$$sh(x) \underset{x \to 0}{=} x + \frac{x^{3}}{6} + \dots + \frac{x^{2p+1}}{(2p+1)!} + o(x^{2p+2})$$


#### Exemples d'application
Position du graphe d'une fonction par rapport a sa tangente
On sait que : 
$$\sin x \underset{x \to 0}{\sim} x$$
ie ($\sin x \underset{x \to 0}{=} x + o(x)$) ($DL_{1}(0)$)

Cela donne l'équation de la tangente, mais pas la position du graphe par rapport a cette tangente. 

#### Remarque
$\sin'' = - \sin$ s'annule en $0$ mais cela ne prouve pas qu'on a un point d'inflexion. 

QUESTION : Est-ce qu'un $DL_{2}(0)$ de $\sin$ nous dit qqchose?
$$\sin(x) \underset{x \to 0}{=} x + o(x^{2})$$
ne nous donne toujours pas d'info. 
Mais le $DL_{3}(0)$
$$\sin(x) \underset{x \to 0}{=} x - \frac{x^{3}}{6} + o(x^{3})$$
Fournit l'info souhaitée : 
$$\sin x-x \underset{x \to 0}{=} -\frac{x^{3}}{6} + o(x^{3})$$
Donc, 
$$\sin x - x \underset{x \to 0}{\sim} - \frac{x^{3}}{6}$$

Alors, on sait que $\sin x-x$ et $-\frac{x^{3}}{6}$ sont de même signe pour $x$ au voisinage de $0$
ie : 
$\sin x > x$ quand $x \to 0^{-}$
$\sin x < x$ quand $x\to 0^{+}$

Ainsi $\mathcal{G}_{\sin}$ traverse sa tangent e, (0, 0) et (0, 0) est un point d'inflexion de $\mathcal{G}$

<u>Méthode</u> :
On pousse les $Dl_{n}(a)$ jusqu'à avoir un terme d’ordre 2 $\geq 2$ non nul. 

Supposons qu'on ait obtenu : 
$$f(a+h) \underset{h \to 0}{=} a_{0}+a_{1}h + a_{n}h^{n} + o(h^{n})$$
avec $a_{n} \neq 0$
Alors suivant le signe de $a_{n}$ et la parité de $n$ on aura différents comportements : 
Excalibur 2

#### Exemple
Si $f:x\mapsto x^{2}$
$f''(0) = 0$
Mais ce n'est pas un point d'inflexion



#### Exemple
Pour $h \neq 1$
$$\frac{1}{1-h} = 1+ h + \dots + h^{n} + \frac{h^{n+1}}{1-h}$$
Donc, 
#### Important
$$\frac{1}{1-h} \underset{h \to 0}{=} 1+h+\dots+h^{n}+o(h^{n})$$

En remplaçant $h$ par $-h$ 

#### Important
$$\frac{1}{1+h} = 1-h + h^{2} + \dots + (-1)^{n}h^{n} + o(h^{n})$$

#### Définition : Forme normalisé d'un DL
Si $f$ admet un $DL_{n}(a)$ avec une partie polynomiale non nulle, ce $DL$ s'écrit :
$$f(a+h) \underset{h \to 0}{=} h^{p}(b_{0}+b_{1}h +\dots+ b_{n-p}h^{n-p}+o(h^{n-p}))$$
avec $b_{0} \neq 0$


#### Exemple
$$\sin x \underset{x \to 0}{=} x - \frac{x^{3}}{6} + \frac{x^{5}}{120} = o(x^{6}) = x\left( 1-\frac{x^{2}}{6}+\frac{x^{4}}{120}+ o(x^{5}) \right)$$


#### Propriété
Si $f$ admet un $DL_{n(a)}$ sous forme normalisé avec les notations précédentes alors
$$f(a+h) \underset{h \to 0}{\sim} b_{0}h^{p}$$

Démonstration :
$$b_{1}h+\dots+b_{n-p}h^{n-p}+o(h^{n-p}) = O(h) = o(b_{0})$$
Donc, 
$$b_{0} + b_{1}h+\dots \sim b_{0}$$


## 2. Opérations sur les $DL$
#### Propriété
Si $f$ et $g$ admettent des $DL_{n}(a)$
$$f(a+h) \underset{h \to 0}{=} \sum_{k=0}^{n}a_{k}h^{k} + o(h^{n})$$
$$g(a+h) \underset{h \to 0}{=} \sum_{k=0}^{n}b_{k}h^{k} + o(h^{n})$$
Alors
$f+g$ aussi : 
$$(f+g)(x) = \sum_{k=0}^{n}(a_{k}+b_{k})h^{k} + o(h^{n})$$

Démonstration : 
$$o(h^{n}) + o(h^{n}) = o(h^{n})$$

#### Exemple
$DL_{4}(0)$ de $\sin + \exp$
On a
$\sin x \underset{x \to 0}{=} x-\frac{x^{3}}{6} + o(x^{4})$
et
$\exp x \underset{x \to 0}{=} 1 + x + \frac{x^{2}}{2}+\frac{x^{3}}{6}+\frac{x^{4}}{24}+o(x^{4})$
Donc : 
$$\sin x + \exp x =\underset{x \to 0}{=} 1 + 2x+\frac{x^{2}}{2}+\frac{x^{4}}{24}+o(x^{4})$$


#### Propriété
Soient $f$ et $g$ admettant des $DL_{n}(a)$, 
Alors $fg$  admet un $DL_{n}(a)$ de $f$ et $g$ et en négligent les termes d'ordre strictement plus grand que $n$.


Démonstration : 
C'est une conséquence des inégalités suivantes : 
$o(h^{n}) o(h^{n}) = o(h^{2n}) = o(h^{n})$
Pour $k\geq0$, $h^{k}o(h^{n}) = o(h^{n+k}) = o(h^{n})$
Pour $k>n$, $h^{k} = o(h^{n})$

#### Exemple
$DL_{2}(0)$ de $f:x\mapsto \frac{e^{ x }}{1+x}$
$$\begin{array}{l}
f(x) \underset{x \to 0}{=}
\left( 1+x+\frac{x^{2}}{2} + o(x^{2}) \right)\times(1-x+x^{2}+o(x^{2})) \\
\space\space\space\space\space\space\space \underset{x \to 0}{=} 1-x+x^{2} \\
\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space + x-x^{2} \\
\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space\space + \frac{x^{2}}{2} + o(x^{2}) \\
\space\space\space\space\space\space\space \underset{x \to 0}{=} 1 \space\space\space\space\space\space\space\space + \frac{x^{2}}{2} + o(x^{2})
\end{array}$$
Présentation obligatoire

En pratique, utilisation des formules normalisés
On veut un $DL_{n}(a)$ de $fg$
Si on sait que : 
$$\begin{cases}
f(a+h) \underset{h \to 0}{\sim} b_{0}h^{p} \text{ avec } b_{0} \neq 0 \\
g(a+h) \underset{h \to0 }{\sim} c_{0}h^{1} \text{ avec } c_{0} \neq 0
\end{cases}$$

Alors, 
- Si $p+q > n$ alors le $DL_{n}(a)$ de $f+g$ est : 
    $$(f+g)(a+h) = o(h^{n})$$

- Si $p+q\leq n$ alors il suffit de faire un $DL_{n-q}(a)$ de $f$ et un $DL_{n-p}(a)$ de $g$ 

On a ainsi,
$$f(a+h) = h^{p}(b_{0}+b_{1}h+ \dots + b_{n-p}h^{n-p}+o(h^{n-p}))$$
$$g(a+h) = h^{p}(c_{0}+c_{1}h+ \dots + c_{n-p}h^{n-p}+o(h^{n-p}))$$
Donc, 
$$(fg)(a + h) = h^{p+q}(d_{0}+d_{1}h+ \dots + d_{n-(p+q)}h^{n-(p+q)}+o(h^{n-(p+q)}))$$



#### Exemple
$DL_{5}(0)$ de $x\mapsto \sin^{2}(x)sh(x)$

Or $\sin ^{2}(x) \underset{x \to 0}{\sim} x^{2}$ ($p=2$)
et $sh(x) \underset{x \to 0}{\sim} x$ ($q=1$)
Donc, suffit d'un $DL_{4}(0)$ de $\sin ^{2}$ et d'un $DL_{3}(0)$ de $sh$

Pour avoir un $DL_{4}(0)$ de $\sin ^{2} = \sin \times \sin$
Donc il suffit d'un $DL_{3}(0)$ de $\sin$. 
Au voisinage de $0$ 
$$\sin x = x -\frac{x^{3}}{6} + o(x^{3}) = x\left( 1- \frac{x^{2}}{6} + o(x^{2}) \right)$$
Donc, 
$$\sin ^{2} x = x^{2}\left( 1-\frac{x^{2}}{6} + o(x^{2}) \right)^{2} = x^{2}\left( 1- \frac{x^{2}}{6}-\frac{x^{2}}{6} + o(x^{2}) \right)$$
$$\sin ^{2} x = x^{2}\left( 1- \frac{x^{2}}{3} + o(x^{2}) \right)$$
C'est un $DL_{4}(0)$ sous forme normalisée

Puis : 
$$sh(x) = x + \frac{x^{3}}{6} + o(x^{3}) = x\left( 1+ \frac{x^{2}}{6} + o(x^{2}) \right)$$
Enfin : 
$$\sin ^{2}(x)sh(x) = x^{3}\left( 1- \frac{x^{2}}{3} + o(x^{2}) \right)\left( 1+ \frac{x^{2}}{6} + o(x^{2}) \right)$$
$$= x^{3}\left( 1+ \frac{x^{2}}{6} - \frac{x^{2}}{3} + o(x^{2}) \right) = x^{3}\left( 1-\frac{x^{2}}{6} + o(x^{2}) \right)$$

Ainsi 
$$\sin ^{2}sh(x) = x^{3} -\frac{x^{5}}{6} + o(x^{5})$$

#### Exercices 
$DL_{5}(0)$ de $\tan(x^{2})\cos(x)$
en admettant que*
$$\tan(h) \underset{h \to 0}{=} h+O(h^{3})$$


#### Propriété : Composition
Pour obtient un $DL_{n}(a)$ de $g \circ f$, il suffit d'effectuer un $DL_{n}(a)$ de $f$ et un $DL_{n}(f(a))$ de $g$

Cela en remplacant dans le $DL_{n}(f(a))$ de $g$ la variable par le $DL_{n}(a)$ de $f$ 


#### Exemple
$DL_{4}(0)$ de $f:x\mapsto e^{ \cos() }$
On fait un $DL_{4}(0)$ de $\cos x$
et un $DL_{4}(1)$ de $\exp$
$$e^{ 1+h } = e^{  }e^{ h } \underset{h \to 0}{=} e\left( 1+h+\frac{h^{2}}{2} + \frac{h^{3}}{6} + \frac{h^{4}}{24} + o(h^{4}) \right)$$
et remplacer $h$ par $1-\frac{x^{2}}{2}+\frac{x^{4}}{24}+o(x^{4})$
en négligent ce qui est négligeable


































$$\underset{x \to a}{=}$$
$$\underset{x \to \infty}{\longrightarrow}$$