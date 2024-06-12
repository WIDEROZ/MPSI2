# Introduction
Pour une série : $\sum_{n \geq 0} a_{n}$
L'ordre des termes est crucial.
Par exemple on peut montrer que, 

#### Théorème
Pour une série $\sum a_{n}$ CV mais non ACV (on dit qu'elle est semi CV noté SCV) quitte à changer l'ordre des termes, on peut obtenir n'importe quoi : 
- Une série DV avec une suite des SP sans limite.
- Une série DV de somme $- \infty$ ou $+ \infty$
- Pour $S$ arbitraire, une série CV de somme $S$

EXCAL 1

On a :
$\sum a_{n}^{+} = + \infty$ et $\lim_{ n \to \infty }a_{n}^{+} = 0$
$\sum a_{n}^{-} = - \infty$ et $\lim_{ n \to \infty }a_{n}^{-} = 0$

Cas $S >0$, 
On pioche dans l'ordre les termes positifs jusqu'à dépasser $S$ puis on pioche dans les termes négatifs jusqu'à arriver en dessous de $S$, puis on remonte, etc...

#### Question
Quelles sont les séries CV telles que l'ordre des termes ne change ni la $CV$, ni la somme? (On dit que $\sum a_{n}$ est commutativement convergente noté : $CCV$)

#### Théorème
$$\sum a_{n}  \text{ CCV} \Leftrightarrow \sum a_{n} \text{ ACV} $$

#### Question 
Peut on définir la somme d'une famille non ordonnée de termes
Soit $(a_{i})_{i \in I}$ (avec $I$ partiellement infini voire très infini (non dénombrable))
Dans quel cas peut on parler de l'existence de $\sum_{i \in I} a_{i}$

# I. Familles de nombres positifs
## 1. $\overline{\mathbb{R}}_{+}$
On note : $\mathbb{R}_{+} \cup \{ + \infty \}$ muni de la relation d'ordre obtenu en rajoutant à $\mathbb{R}_{+}$ un plus grand élément $+ \infty$ ie en étendant l'ordre de $\mathbb{R}_{+}$ en posant : 
$$\forall x \in \overline{\mathbb{R}}_{+}, x \leq + \infty$$

#### Proposition
$$\boxed{\overline{\mathbb{R}}_{+} = [0, + \infty]}$$

Démonstration : 
Immédiate sur : $[0, + \infty] = \{ x \in \overline {\mathbb{R}}_{+} | 0 \leq x \leq + \infty \}$

Comme conséquence la propriété de la borne supérieure dans $\mathbb{R}$ : 
#### Proposition
1. Toute partie $A$ non vide de $\overline{\mathbb{R}}_{+}$ admet une borne supérieur
2. De plus $\sup_{\overline{\mathbb{R}}_{+}}(A) = + \infty$
   ssi $\begin{cases} + \infty \in A \\ ou \\ A \subset \overline{\mathbb{R}}_{+} \text{ est non majoré dans }\mathbb{R}_{+}\end{cases}$
3. $\sup_{[0, +\infty]}(\varnothing) = 0$

#### Conventions de calcul dans $\overline{\mathbb{R}}_{+}$
On étend l'addition et la multiplication de $\mathbb{R}_{+}$ à $\overline{\mathbb{R}}_{+}$ par :
1. $\forall x \in \overline{\mathbb{R}}_{+},x + (+\infty) = + \infty$
2. $\forall x \in ]0, + \infty], x \times ( + \infty)= + \infty$
3. $0 \times (+ \infty) = 0$
4. L'addition et la multiplication restent commutatives et associatives

## 2. Sommes d'éléments de $\overline{\mathbb{R}}_{+}$
#### Cadre
Soit $u = (u_{i})_{i \in I} \in (\overline{\mathbb{R}}_{+})^{I}$ ou $I$ est un ensemble quelconque

#### Notation
$\mathcal{F}(I)$ est l'ensemble des parties finies de $I$

#### Définition
La somme de $u$ est l'élément de $\overline{\mathbb{R}}_{+}$ suivant :
$$\sum_{i \in I} u_{i} = \sup_{F \in \mathcal{F}(I)} \sum_{i \in F} u_{i} = \sup \left\{  \sum_{i \in F}u_{i} ;  F \in \mathcal{F}(I)  \right\}$$

#### Proposition
$$\exists i \in I, u_{i} = + \infty \Rightarrow \sum_{i \in I} u_{i} = +\infty$$
et la réciproque est vraie lorsque $I$ est fini (auquel cas on retrouve somme usuelle sur $\overline{\mathbb{R}}_{+}$, d'ou une cohérence des notations)

Démonstration : en exo

#### Cas $I = \mathbb{N}$
Soit $\sum a_{n}$ une SATP
Alors, 
1. Si elle CV : $\sum_{n \in \mathbb{N}} a_{n} = \sum_{n = 0}^{\infty} a_{n}$
2. Si elle DV : $\sum_{n \in \mathbb{N}} a_{} = + \infty$

Ce qui est cohérent avec notre convention $\sum_{n = 0}^{+\infty} a_{n} = + \infty$


#### Corollaire
La convergence et la somme d'une SATP :
$\sum a_{n}$ sont invariantes par permutation : 
$$\forall \varphi \in S_{\mathbb{N}}, \sum a_{n} \text{ CV} \Leftrightarrow \sum a_{\varphi(n)} \text{ CV}$$
En cas de convergence :
$$\sum_{n = 0}^{\infty} a_{n} = \sum_{n = 0}^{a_{n}} a_{\varphi(n)}$$
Démonstration :
On a :
$$\sum_{p = 0}^{+ \infty} a_{p} = \lim_{ p \to \infty } S_{n}$$
qui existe et est un réel positif ou $+ \infty$. 

Par ailleurs 
$$\sum_{n \in \mathbb{N}} a_{n} = \sup_{F \in \mathcal{F}(\mathbb{N})}\sum_{n \in F}a_{n} \in \overline{\mathbb{R}}_{+}$$
Soit $p \in \mathbb{N}$, 
$$S_{p} = \sum_{k = 0}^{p} a_{k} = \sum_{k \in[\![0, p]\!]} a_{k}$$

Or $[\![0, n]\!] \in \mathcal{F}(\mathbb{N})$ donc, 
$$S_{p} \leq \sum_{n \in \mathbb{N}}a_{n}$$
Et aussi :
Par passage à la limite quand $p \underset{n \to +\infty}{\longrightarrow} +\infty$:
$$\sum_{n = 0}^{+ \infty}a_{n}\leq \sum_{n \in \mathbb{N}}a_{n}$$

Soit $F \in \mathcal{F}(\mathbb{N})$, 
Alors en posant : $p = \max(F)$ (existe car $F$ est fini)
On a : 
$$\sum_{n \in F}a_{n} \leq \sum_{n =0}^{p} a_{n} = S_{p}$$
Or, $S_{p}$ tend en croissant vers $\sum_{n = 0}^{+ \infty}a_{n}$ donc, 
$$\sum_{n \in F}a_{n} \leq \sum_{n = 0}^{+ \infty} a_{n}$$
Comme, 
$$\sum_{n = 0}^{+ \infty} a_{n} \text{ majore } \left\{  \sum_{n \in F} a_{n}; F \in \mathcal{F}(\mathbb{N})  \right\} $$
$$\sum_{n = 0}^{+\infty} a_{n} \geq \sup \left\{  \sum_{n \in F} a_{n}; F \in \mathcal{F}(\mathbb{N})  \right\}$$
ie
$$\sum_{n = 0}^{+ \infty} a_{n} \geq \sum_{n \in \mathbb{N}} a_{n}$$
Ainsi, 
$$\sum_{n = 0}^{+ \infty} a_{n} = \sum_{n \in \mathbb{N}}a_{n}$$
et 
$$\sum a_{n} \text{ CV} \Leftrightarrow \sum_{n \in \mathbb{N}} a_{n} < + \infty$$

#### Propriété
$$\forall \sigma \in S(I), \sum_{i \in I}u_{\sigma(i)} = \sum_{i \in I}u_{i}$$
Démonstration :
Pour $\sigma \in S(I)$, 
$$ \{ \sigma(F)^{-1} ; F \in \mathcal{F}(I) \} = \mathcal{F}(I)$$

Ainsi, 
$$ \left\{ \sum_{i \in F} u_{\sigma(i)} ; F \in \mathcal{F}(I)\right\} = \left\{  \sum_{j \in\sigma^{-1}(F)} u_{j} ; F \in F(I) \right\}$$
$$=\left\{  \sum_{j \in F'} u_{j} ; F' \in \mathcal{F}(I)  \right\}$$
car $\sigma$ est bijectif

En prenant le bon sup on obtiens
$$\sum_{ i \in I} u_{\sigma(i)} = \sum_{j \in I} u_{j} = \sum_{i \in I}  u_{i}$$

#### Corollaire
Pour une SATP CV $\sum a_{n}$, et $\varphi \in S(\mathbb{N})$, $\sum a_{\varphi(n)} \text{ CV}$
et 
$$ \sum_{n = 0}^{+ \infty} a_{\varphi(n)} = \sum_{n = 0}^{+\infty}a_{n} $$


#### Exercice
Calculer
$$ \sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{m+n}$$
###### Lemme
Pour $(u_{i})_{i \in I} \in (\overline{\mathbb{R}}_{+})^{I}$, et $J \subset I$
$$ \sum_{j \in J} u_{i} \leq \sum_{i \in I} u_{i}$$
Démonstration : 
$$ \mathcal{F}(J) \subset \mathcal{F}(J) $$
Fin. 
___
Comme on somme des nombres positifs, 
$$ \sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{m+n} \geq \sum_{m \in \mathbb{N}^{*}} \frac{1}{m+1} = \sum_{m=2}^{+ \infty} \frac{1}{m} = + \infty$$
Ainsi, 
$$\sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{m+n} = + \infty$$

#### Exemple
$$ u = \left( \frac{\mathbb{1}_{\mathbb{N}^{*}}(x)}{x^{\alpha}} \right)_{x \in \mathbb{R}_{+}^{*}}$$
Avec $\alpha \in \mathbb{R}$.
###### Lemme
Soit $u \in (\overline{\mathbb{R}}_{+})^{I}$ et $J,K \subset I$ tel que $I = J \sqcup K$
Alors, 
$$ \sum_{i \in I}u_{i} = \sum_{i \in J} u_{i} + \sum_{i \in K}u_{i} $$
Démonstration :
Soit $F \in \mathcal{F}(I)$, 
$F = (F \cap J) \sqcup (F \cap K)$
$$ \sum_{i \in F} u_{i} = \sum_{i \in F \cap J}u_{i} + \sum_{ i \in F \cap K} u_{i} \leq \sum_{i \in J}u_{i} + \sum_{i \in K} u_{i}$$
Comme $F$ est fini, $\uparrow$ est finie. Or $\space\space\space\space\space\space\space\space\space\space\space\space\space$ $\uparrow$ est une constante qui majore
$$ \left\{  \sum_{i \in F}u_{i} ; F \in \mathcal{F}(I)  \right\} $$
Donc, par définition de la borne supérieure, 
$$ \sum_{i \in I} u_{i}\leq \sum_{i \in I} u_{i} + \sum_{i \in K}u_{i} $$
scusez moi
zaurez pas un joint?? œœ nanan