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
###### Lemme 1
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
###### Lemme 2
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
Flemme c long

___
$$ \sum_{x \in \mathbb{R}_{+}^{*}} u_{x} = \sum_{x \in \mathbb{N}^{*}}\frac{1}{x^{\alpha}} + \sum _{x \in \mathbb{R}_{+}^{*} \setminus \mathbb{N}^{*}}0 =\sum_{n = 1}^{+ \infty}\frac{1}{x^{\alpha}}$$
Qui est finie ssi $\alpha > 1$

#### Exemple
$$ u = (x)_{x \in [0,1] \cap \mathbb{Q}} $$
$$ \sum_{x \in [0, 1] \cap \mathbb{Q}} x  \geq \sum_{x \in \left\{  \frac{1}{n} ; n \in \mathbb{N}^{*}  \right\}}x = \sum_{n = 1}^{+ \infty} \frac{1}{n} = + \infty$$

par le lemme 1. 

#### Exemple
$$ u = \left( \frac{1}{x^{2}} \right)_{x \in \mathbb{Q} \cap [1, + \infty[} $$
$$ \sum_{x \in \mathbb{Q} \cap [1, +\infty[} \frac{1}{x^{2}} \geq \sum_{x \in \left\{  \frac{n+1}{n} ; n \in \mathbb{N}^{*}  \right\}} \frac{1}{x^{2}} = \sum_{n \in \mathbb{N}^{*}} \left( \frac{n}{n+1} \right)^{2} = + \infty$$
car c'est une SATP qui DVG
Donc, 
$$ \sum_{x \in \mathbb{Q} \cap [1, + \infty[}  \frac{1}{x^{2}} = + \infty$$

#### Exemple
 Soit $u = (u_{i})_{i \in I} \in (\overline{\mathbb{R}}_{+})^{I}$ tq 
 $$\forall i \in I, u_{i} = \lambda$$
$$\sum_{i \in I}u_{i} = \left| I\right|\lambda$$

## 3. Familles de réels positifs
Ici $u \in (\mathbb{R}_{+})^{I}$, 
#### Définition
$u$ est sommable ssi $\sum_{i \in I} u_{i} < + \infty$

#### Propriété
Soit $u, v \in (\mathbb{R}_{+})^{I}$, et $\lambda \in \mathbb{R}_{+}$
alors, 
$$ \sum_{i \in I} \lambda u_{i} = \lambda \sum_{i \in I} u_{i} $$
$$ \sum_{i \in I} (u_{i}+v_{i}) = \sum_{i \in I} u_{i} + \sum_{i \in I}v_{i} $$

Démonstration : en exo

#### Corollaire
Si $u, v \in (\mathbb{R}_{+})^{I}$ sont sommables et $\lambda \in \mathbb{R}_{+}$, alors
- $\lambda u$ est sommable
- $u+v$ est sommable

Démonstration : en exo

#### Théorème de sommation par paquets
Si $I = \bigsqcup_{j \in J} I_{j}$ ($I, J$ des ensembles quelconques)
et $u \in (\mathbb{R}_{+})^{I}$
On a :
$$\sum_{i \in I} u_{i} = \sum_{j \in J}\left( \sum_{i \in I_{j}} u_{i} \right)$$

#### Corollaire : Théorème de Fubini positif
Si $I = J \times K$ et $u \in (\mathbb{R}_{+})^{I}$, 
$$ \sum_{(j,k)\in J \times K}u_{j, k} = \sum_{j \in J} \left( \sum_{k \in K} u_{j, k} \right) = \sum_{k \in K}\left( \sum_{j\in J}u_{j, k} \right)$$

$$v=\sqrt{ w }$$

Démonstration : 
On pose pour $j \in J$, $I_{j} = \{ (j, k) ; k \in K \}$ et on applique le théorème de sommation par paquets puisque
$$I = J \times K = \bigsqcup_{j \in J}I_{j}$$

$$ \sum_{(j, k) \in J \times K} u_{j, k} = \sum_{j \in J} \sum_{i \in I_{j}} u_{i}  = \sum_{j \in J} \sum_{k \in K}u_{j, k} $$
De même dans l'autre sens

#### Exemple
Soit $\alpha \in \mathbb{R}_{+}$, 
$$ \sum_{(m,n) \in (\mathbb{N}^{*})^{2}} \frac{1}{(m+n)^{\alpha}} $$
___
Démonstration :
Soit $z \in \mathbb{N_{+}^{*}} \setminus \{0\}$, 

https://www.youtube.com/watch?v=jTuTEcwvkP4&ab_channel=blackpenredpen

$\square$ ez
___
###### Lemme 3
Soit $u, v \in (\overline{\mathbb{R}}_{+})^{I}$,
tel que 
$$\forall i \in I, u_{i} \leq v_{i}$$
Alors, 
$$\sum_{i \in I} u_{i} \leq \sum_{i \in I} v_{i}$$
Démonstration : 
Soit $F \in \mathcal{F}(I)$,
$$\sum_{i \in F} u_{i} \leq \sum_{i \in F} v_{i} \leq \sum_{i \in I}v_{i}$$


Ainsi, 
$$\sum_{i \in I} v_{i} \text{ majore } \left\{  \sum_{i \in F} u_{i} ; F \in \mathcal{F}(I)\right\}$$
Donc sa borne supérieure : 
$$ \sum_{i \in I} v_{i} \geq \sum_{i \in I} u_{i} $$
___
On a vu que 
$$ \sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{m+n} = + \infty $$
Or pour $\alpha \leq 1$ : 
$$ \forall (m, n)  \in (\mathbb{N}^{*})^{2}, \frac{1}{m+n} \leq \frac{1}{(m+n)^{\alpha}}$$
Donc, 
$$ \forall \alpha \leq 1, \sum \frac{1}{(m+n)^{\alpha}} = + \infty $$

## 4. Familles sommables de complexes
#### Définition
$u \in \mathbb{C}^{I}$ est sommable ssu $\left| u\right|$ est sommable ie : 
$$\sum_{i \in I} \left| u_{i}\right| < + \infty$$

#### Notation
$$l^{1}(I) = \left\{  u \in \mathbb{C}^{I} \left| \sum_{i \in I} \left|u _{i}\right|  < + \infty\right\} \right.$$
est l'ensemble des familles indexés par $I$ qui sont sommables. 

#### Remarque
$$l^{1}(\mathbb{N}) = \left\{  a \in \mathbb{C}^{\mathbb{N}} \left| \sum_{n \in \mathbb{N}} \left| a_{n} \right|\right. < +\infty \right\} =\left\{  a \in \mathbb{C}^{\mathbb{N}} \left| \sum_{n \in \mathbb{N}} \left| a_{n} \right|\right. \text{ CVA} \right\} $$

(le $1$ représente le poids sur lequel on va sommer)
$$l^{2}(I) = \left\{  u \in \mathbb{C}^{I} \left| \sum_{i \in I}\left| u_{i}\right|^{2} < + \infty  \right.  \right\}$$

#### Proposition
Toute sous famille d'une famille sommable est sommable. 
Soir $(u_{i})_{i \in I} \in l^{1}(I)$ et $J \subset I$, 
Alors $(u_{i})_{i \in J} \in l^{1}(J)$

Démonstration : 
On a vu précédemment  que :
$$\sum_{i \in I} \left| u_{i}\right| \leq \sum_{j \in J} \left| u_{j}\right|$$

#### Définition / Propriété
Soit $u \in l^{1}(I)$, 
Alors, 
$$(\mathrm{Re}(u))_{+} = ((\mathrm{Re}(u))_{+})_{ i\in I}, (\mathrm{Re}(u))_{-}, (\mathrm{Im}(u))_{+}, (\mathrm{Im}(u))_{-}$$
sont des familles sommables de nombres positifs
On définit alors la somme de $u$ comme : 
$$\sum_{i \in I} u_{i} = \left( \sum_{i \in I}(\mathrm{Re}(u_{i}))_{+}- \sum_{i \in I} (\mathrm{Re}(u_{i}))_{-} \right)$$
$$+i\left( \sum_{i \in I}(\mathrm{Im}(u_{i}))_{+}- \sum_{i \in I} (\mathrm{Im}(u_{i}))_{-} \right)$$

Démonstration : 
Pour $i \in I$, 
$$0 \leq (\mathrm{Re}(u_{i}))_{+} \leq \left| \mathrm{Re}(u_{i})\right| \leq \left| u_{i}\right|$$
Donc, 
$$\sum_{i \in I} \mathrm{Re}(u_{i})_{+} \leq \sum_{i \in I} \left| u_{i}\right|< + \infty$$
car $u \in l^{1}(\mathbb{C})$
Donc, 
$$(\mathrm{Re}(u_{i})_{+})_{i \in I}$$