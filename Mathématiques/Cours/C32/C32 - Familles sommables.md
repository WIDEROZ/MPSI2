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
___
Pour $\alpha > 2$, 
$$m+n \geq 2\sqrt{ m }\sqrt{ n }$$
Alors, 
$$(m+n)^{\alpha} \geq 2^{\alpha}m^{\frac{\alpha}{2}}n^{\frac{\alpha}{2}} $$
Donc, 
$$\sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{(m+n)^{\alpha}} \leq \sum_{(m,n) \in (N^{*})^{2}} \frac{1}{n^{\frac{\alpha}{2}}m^{\frac{\alpha}{2}}}$$
Donc par le théorème de Fubini positif
$$\sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{(m+n)^{\alpha}} \leq  \left( \sum_{m \in \mathbb{N}^{*}}\frac{1}{m^{\frac{\alpha}{2}}} \right)\left( \sum_{n \in \mathbb{N}^{*}} \frac{1}{n^{\frac{\alpha}{2}}} \right) = \left( \sum_{n \in \mathbb{N}^{*}} \frac{1}{n^{\alpha}} \right)$$
Comme $\alpha > 2$, 
$$\sum_{n \in \mathbb{N}^{*}} \frac{1}{n^{\alpha}} \text{ CV}$$
Ainsi, 
$$S_{\alpha} < + \infty$$

___
Pour $\alpha \in ]1, 2]$, (cas qui règle toudincoup)
$$\sum_{(m, n) \in (\mathbb{N}^{*})^{2}} \frac{1}{(m+n)^{\alpha}}$$
On pose : $I_{j} = \{ (m, n) \in (\mathbb{N}^{*})^{2} \left| j = m+n \right.\}$
PHOTO

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
De même pour les trois autres

#### Propriété
$$\forall u \in \mathbb{C}^{I}, \forall \varphi \in S(I), (u \circ\varphi \in l^{1}(I) \Leftrightarrow u \in l^{1}(I))$$
$$\forall u \in l^{1}(I), \forall \varphi \in S(I), \sum u \circ \varphi = \sum u$$

($u \circ \varphi = (u_{\varphi(i)})_{i \in I}$)

#### Propriété
Soit $u \in \mathbb{C}^{I}$ et $v \in (\mathbb{R}_{+})^{I}$ telles que 
$$\begin{cases}
v \text{ est sommable} \\
\forall i \in I, \left| u_{i}\right| \leq v_{i}
\end{cases}$$
Alors, $u \in l^{1}(I)$

Démonstration immédiate

#### Propriété
$$\forall u, v \in l^{1}(I), \forall \lambda, \mu \in \mathbb{C}, \lambda u + \mu v \in l^{1}(I) $$
$$\forall u, v \in l^{1}(I), \forall \lambda, \mu \in \mathbb{C},\sum(\lambda u + \mu v) = \lambda \sum + \mu \sum v$$
ie 
$$l^{1}(I) \underset{sev}{\subset} \mathbb{C}^{I}$$
$$\sum : \begin{cases}
l^{1}(I) \to \mathbb{C} \\
u \mapsto \sum u
\end{cases} \in $$
est une forme linéaire sur $l^{1}(I)$

#### Propriété
$$\forall u \in l^{1}(I), \forall \varepsilon>0, \exists F \in \mathcal{F}(I), \left| \sum_{i \in F} u_{i}- \sum_{i \in I} u_{i}\right|\leq \varepsilon$$
On reformule cela en mieux $\downarrow$ (mais faut quand même le savoir)

#### Théorème préconisé par Mouton
$$\begin{array}{c}\forall u \in l^{1}(I), \forall \varepsilon > 0\exists F \in \mathcal{F}(I), \forall G \in \mathcal{F}(I), \\  G \supset F \Rightarrow \left| \underset{i \in G}{\sum} u_{i} - \underset {i \in I}{\sum} u_{i}\right| \leq \varepsilon \end{array}$$

#### Théorème : Sommation par paquets
Si $I = \bigsqcup_{j \in J} I_{j}$ et $u \in l^{1}(I)$
alors, pour tout $j \in J$, 
$$(u_{i})_{i \in I_{j}} \in l^{1}(I_{j}) \text{ et } \left( \sum_{i \in I_{j}} u_{i} \right)_{j \in J} \in l^{1}(J)$$
et 
$$\sum_{i \in I} u_{i} = \sum_{j \in J}\sum_{i \in I_{j}} u_{i}$$

#### Théorème de Fubini
Si $I = J \times K$ et $u \in l^{1}(I)$
Alors, 
$$\begin{cases}
\forall j \in J, (u_{j, k})_{k \in K} \in l^{1}(K) \\
\forall k \in K, (u_{j, k})_{j \in J} \in l^{1}(J) \\
\left( \underset{k \in K}{\sum} u_{j, k} \right)_{j \in J} \in l^{1}(J) \\
\left( \underset{j \in J}{\sum} u_{j, k} \right)_{k \in K} \in l^{1}(K) \\
\boxed{\sum_{(j, k) \in I} u_{j, k} = \sum_{j \in J}\sum_{k \in K} u_{j, k} = \sum_{k \in K}\sum_{j \in J} u_{j, k} }
\end{cases}$$

#### Cas particulier de Fubini
Si 
$$\begin{cases}
 (a_{j})_{j \in J} \in l^{1}(J) \\
(b_{k})_{k \in K} \in l^{1}(K)
\end{cases}$$
Alors, 
$$(a_{j}b_{k})_{(j, k) \in I} \in l^{1}(J \times K)$$
et 
$$\sum_{(j, k) \in I}a_{j}b_{k} = \left( \sum_{j \in J}a_{j} \right)\left( \sum_{k \in K} b_{k} \right)$$

#### Propriété : Généralisation
$$\sum \frac{1}{(n_{1} + \dots + n_{d})^{\alpha}} < + \infty \Leftrightarrow \alpha > d$$

Démonstration : en exo

#### Théorème
Soit $u \in (R_{+})^{I}$ sommable
Alors, 
$$\mathrm{supp}(u) = \{ i \in I | u_{i} > 0 \}$$
est dénombrable ou fini. 

Démonstration : 
Pour $n \in \mathbb{N}^{*}$, on note : $F_{n} = \left\{  i \in I | u_{i} \geq \frac{1}{n}   \right\}$
On a :
$$\left| F_{n}\right| \times \frac{1}{n} = \sum_{i \in F_{n}} \frac{1}{n} \leq \sum_{i \in F_{n}} u_{i} \leq \sum_{i \in I} u_{i} < + \infty$$
car $F_{n} \subset I$
Or, $\frac{1}{n} \neq 0$ donc, $\left| F_{n}\right| < + \infty$
Ainsi, 
$$supp(u) = \bigcup_{n \in \mathbb{N}^{*}}F_{n} $$
est une réunion dénombrable d'ensemble finis, donc est dénombrable. 

#### Rappel 
Une réunion dénombrable d'ensemble finis est au plus dénombrable (ie dénombrable ou finie)

#### Application
#### Théorème
Une fonction croissante sur un intervalle, n'as qu'un nombre au plus dénombrable de points de discontinuité

Démonstration : en exo

#### Exercice
Calculer : 
$$\sum_{(p, q) \in \mathbb{N} \times \mathbb{N}^{*}} \frac{1}{(p+q^{2})(p+q^{2} + 1)}  $$
On note : 
$$I_{j} = \{ (p, q) \in \mathbb{N} \times \mathbb{N}^{*} | j = p+q^{2} \}$$

$$\sum_{(p, q) \in \mathbb{N} \times \mathbb{N}^{*}} \frac{1}{(p+q^{2})(p+q^{2} + 1)}$$
Télescopique.


#### Exercice
Calculer : 
$$S = \sum_{n = 0}^{+\infty} \sum_{k = n}^{+ \infty} \frac{1}{k!}$$
___
On a alors :
$$S = \sum_{k = 0}^{+\infty} \sum_{n = 0}^{k} \frac{1}{k!} = \sum_{k = 0}^{+\infty} \frac{1}{k!} \sum_{n =0}^{k}1 = \sum_{k = 0}^{+\infty} \frac{k+1}{k!}= \sum_{k = 0}^{+ \infty} \frac{k}{k!} + \sum_{k = 0}^{+ \infty} \frac{1}{k!}  $$
$$S = 2\sum_{k = 0}^{+ \infty} \frac{1}{k!}=2e$$

#### Exercice
$$S = \sum_{n=0}^{+\infty} \sum_{k = n+1}^{+ \infty} \frac{1}{k^{\alpha}}$$
___
$1^{er}$ méthode (la mienne ^^) : 
$$S = \sum_{k = 1}^{+ \infty} \frac{1}{k^{\alpha}} + \sum_{n =1}^{ + \infty} \sum_{k = n+1}^{+ \infty} \frac{1}{k^{\alpha}} = \sum_{n = 1}^{+ \infty}\left( \sum_{k = n}^{+ \infty} \left( \frac{1}{k^{\alpha}} \right)- \frac{1}{n^{\alpha}} \right) + \sum_{k = 1}^{+ \infty} \frac{1}{k^{\alpha}}$$
Alors, 
$$S =  \sum_{k = 1}^{+ \infty} \frac{1}{k^{\alpha}} - \sum_{k = 1}^{+ \infty} \frac{1}{k^{\alpha}} + \sum_{n = 1}^{+ \infty} \sum_{k = n}^{+ \infty} \frac{1}{k^{\alpha}} = \sum_{n = 1}^{+ \infty} \sum_{k = n}^{+ \infty} \frac{1}{k^{\alpha}}$$
$$S = \sum_{k = 1}^{+ \infty} \sum_{n = 1}^{k} \frac{1}{k^{\alpha}} = \sum_{n = 1}^{+ \infty} \frac{1}{n^{\alpha-1}} $$


___
$2^{eme}$ méthode : 
$$\sum_{k = n+1}^{+ \infty} \frac{1}{k^{\alpha}}\underset{n \to + \infty}{\sim} \frac{1}{(\alpha-1)n^{\alpha-1}}$$

D'après  le théorème de comparaisons des SATP équivalents, 
$$S_{\alpha} < + \infty \Leftrightarrow \alpha-1 > 1 \Leftrightarrow \alpha > 2$$

#### Remarque
La définition générale de famille sommable pour les familles à valeurs dans un espace vectoriel normé $E$ est :
<p align="center">u est sommable ssi </p>
$$
\exists S \in E, \forall \varepsilon > 0, \exists F_{\varepsilon} \in \mathcal{F}(I), \forall F \in \mathcal{F}(I),
$$
$$F_{\varepsilon}\subset F \Rightarrow \left|\left| \sum_{i \in F}u_{i} - S \right|\right| \leq \varepsilon$$
et alors on pose : 
$$\sum_{i \in I}u_{i} = S$$
Cette définition est équivalente à celle du cours, pour $E$ avec $\left|\left| \cdot \right|\right| = \left| \cdot\right|$ (admis azi apparement ct chaud à démontrer)

#### Propriété
La somme est linéaire, positive, croissante et vérifie toujours l'inégalité triangulaire ie :
$$\forall u \in l^{1}(I), (\forall u \in I, u_{i} \in \mathbb{R}_{+})\Rightarrow \sum_{i \in I}u_{i} \geq 0$$
$$\forall u, v \in \mathcal{C}^{1}(I), \left.\begin{array}{r}
u, v \text{ à valeur dans }\mathbb{R}\\
\forall i \in I, u_{i} \leq v_{i}
\end{array}\right\} \Rightarrow \sum_{i \in I} u_{i} \leq \sum_{i \in I} v_{i}$$
$$\forall u \in l^{1}(I), \left| \sum_{i \in I} u_{i}\right| \leq \sum_{i \in I}\left| u_{i}\right|$$

Démonstration du $3$ : 
Soit $u \in l^{1}(I)$
Soit $\varepsilon >0$, 
Soit $F \in \mathcal{F}(I)$ tel que :
$$\left|\sum_{i \in F} u_{i} - \sum_{i \in I} u_{i}\right| \leq \varepsilon$$
Par la seconde inégalité triangulaire : 
$$\left| \left| \sum_{i \in F}u_{i} \right|- \left| \sum_{i \in I}u_{i}\right| \right| \leq \left| \sum_{i \in F}u_{i} - \sum_{i \in I} u_{i}\right| \leq \varepsilon$$
$$\left| \sum_{i \in <i}u_{i}\right| \leq \left| \sum_{i \in F} u_{i}\right| + \varepsilon \leq \sum_{i \in F} \left| u_{i} + \varepsilon\right| \leq \sum_{i \in I} \left| u_{i}\right| + \varepsilon$$
Par l'inégalité triangulaire pour les sommes finies

Ainsi, 
$$\forall \varepsilon > 0, \left|\sum_{i \in I} u_{i} \right| \leq \sum_{i \in I} \left| u_{i}\right| + \varepsilon$$
ie
$$\left| \sum_{i \in I} u_{i}\right| - \sum_{i \in I}\left| u_{i}\right|$$
minore $\mathbb{R}_{+}^{*}$
or 
$$\inf(\mathbb{R}_{+}^{*}) = 0$$
Donc, 
$$\left| \sum_{i \in I} u_{i}\right| - \sum_{i \in I}\left| u_{i}\right| \leq 0$$
Ainsi, 
$$\boxed{\left| \sum_{i \in I} u_{i}\right| \leq \sum_{i \in I}\left| u_{i}\right|}$$

#### Exercices
Soient $\sum a_{n}$ et $\sum b_{n}$ deux SATP CV
On pose pour $n \in \mathbb{N}$,
$$c_{n} = \sum_{k = 0}^{n}a_{n-k}b_{k}$$
Montrer que $\sum a_{n}$ CV et exprimer sa somme en fonction de celles de $\sum a_{n}$ et $\sum b_{n}$, 
Soit $I \subset [\![0, n]\!]$
$$\left(  \sum_{n= 0}^{+ \infty} a_{n}\right)\left( \sum_{n = 0}^{+ \infty} b_{n} \right) = \sum_{(n, p) \in \mathbb{N}^{2}}a_{n}b_{p}$$
Alors, par sommation par paquets, 
$$\sum_{n \in \mathbb{N}} \sum_{\underset{\text{ tq p+q = n}}{(p, q) \in \mathbb{N}^{2}}} a_{p} b_{q} = \sum_{n \in \mathbb{N}} \sum_{\underset{\text{ tq p+q = n}}{(p, q) \in \mathbb{N}^{2}}} a_{n-q} b_{q} = \sum_{n \in \mathbb{N}} \sum_{{q \in \mathbb{N}}} a_{n-q} b_{q} = \sum_{n \in \mathbb{N}}c_{n}$$
Donc, 
$$\sum_{n \geq 0} c_{n} \text{ CV}$$
car c'est un produit de deux séries CV.

#### Exercice
Montrer que pour tout $x \in [0, 1[$, 
$$\sum_{n = 1}^{+ \infty} \frac{x^{n}}{1-x^{n}} = \sum_{n = 1}^{+ \infty} d(n) x^{n}$$
où $d(n)$ est le nombre de diviseurs positifs de $n$

Pour $n \in \mathbb{N}^{*}$, 
$$\frac{x^{n}}{1-x^{n}} = \frac{1}{1-x^{n}}-1=\sum_{k = 1}^{+ \infty} (x^{n})^{k}$$
Alors, 
$$\sum_{n = 1}^{+ \infty} \frac{x^{n}}{1-x^{n}} = \sum_{n = 1}^{+\infty} \sum_{k = 1}^{+ \infty} x^{nk} = \sum_{(n, k) \in (\mathbb{N}^{*})^{2}} x^{nk}$$
Alors, Par le théorème de sommation par paquets positifs, 
$$\sum_{(n, k) \in (\mathbb{N}^{*})^{2}} x^{nk} = \sum_{q = 1}^{+ \infty} x^{q}\left( \sum_{\underset{\text{tq } nk = q}{(n, k) \in \mathbb{N}^{*}}} 1 \right) $$
On cherche : 
Pour $q \in \mathbb{N}^{*}$
$$\left| \{ (n, k) \in \mathbb{N}^{*} | nk = q \}\right|=\left| \{ n \in \mathbb{N}^{*} | \exists k \in \mathbb{N}^{*}, nk=q \}\right|$$
C'est l'ensemble des diviseurs de $q$
Ainsi, 
$$\sum_{n = 1}^{+ \infty} \frac{x^{n}}{1-x^{n}} = \sum_{n = 1}^{+ \infty} d(n) x^{n}$$

#### Exercice
Soit $\sigma \in S(\mathbb{N})$, 
Montrer que : 
$$\sum \frac{\sigma(n)}{n^{2}} \text{ DV}$$

$$\sum_{n = 1}^{+ \infty} \frac{\sigma(n)}{n^{2}} = \sum_{n \in \mathbb{N}^{*}} \frac{\sigma(n)}{n^{2}}$$

Soit $n \in \mathbb{N}^{*}$,
$$\sum_{k = 1}^{2n} \frac{\sigma(k)}{k^{2}}- \sum_{k = 1}^{n} \frac{\sigma(k)}{k^{2}}= \sum_{k = n+1}^{2n} \frac{\sigma(k)}{k^{2}} \geq \frac{1}{4n^{2}} \sum_{k = n+1}^{2n} \sigma(k) $$
$$\geq \frac{1}{4n^{2}} \sum_{k = 1}^{n}k = \frac{1}{4n^{2}} \frac{n(n+1)}{2} = \frac{1}{8} \frac{n+1}{n}\geq \frac{1}{8}$$
Par l'absurde si la série CV, on aurait un $S \in \mathbb{R}$ tel que : $S_{n} \underset{n \to +\infty}{\longrightarrow}S$
On aurait aussi : $S_{2n}\underset{n \to +\infty}{\longrightarrow} S$
Alors, 
$$S_{2n} - S_{n} \underset{n \to +\infty}{\longrightarrow} 0$$
Or 
$$S_{2n} - S_{n} \geq \frac{1}{8}$$
En passant à la limte : 
$$0 \geq \frac{1}{8}$$
CONTRADICTION 
$$ \text{La série CV}$$

#### Exercice
Montrer pour $p \in \mathbb{N}$, 
$$\sum_{\underset{n \neq p}{n =1}}^{+ \infty} \frac{1}{n^{2}-p^{2}} = \frac{3}{4p^{2}}$$
Que peut on dire sur la sommabilité de la famille 
$$\left( \frac{1}{n^{2}-p^{2}} \right)_{\underset{\text{ tq } n \neq p}{(n, p) \in (\mathbb{N}^{*})^{2}}}$$
Soit $p \in \mathbb{N}$,
Pour $n \in \mathbb{N}$, tel que $n \neq p$
On fait une DES par rapport à $n$ :
$$\frac{1}{n^{2} - p^{2}} = \frac{1}{2p}\left( \frac{1}{n-p} - \frac{1}{n+p} \right)$$
$$\sum_{\underset{n \neq p}{n =1}}^{+ \infty} \frac{1}{n^{2}-p^{2}} =\frac{1}{2p}\left( \sum_{\underset{n \neq p}{n =1}}^{+ \infty} \frac{1}{n-p} -\frac{1}{n+p} \right) $$
On étudie : 
$$\sum_{\underset{n \neq p}{n =1}}^{+ \infty} \frac{1}{n^{2}-p^{2}}$$
$$= \frac{1}{2p}\left( \sum_{n = 1}^{p-1} \left( \frac{1}{n-p} -\frac{1}{n+p} \right)+ \sum_{n = p+1}^{\infty}\left(  \frac{1}{n-p} - \frac{1}{n+p}  \right)\right)$$
$$= \frac{1}{2p}\left( \sum_{k = p}^{n-p} \frac{1}{k} - \sum_{k = p+1}^{2p-1} \frac{1}{k} - \sum_{k = 2p+1}^{n+p} \frac{1}{k} \right)$$
$$= \frac{1}{2p}\left( \sum_{k = p}^{n-p} \frac{1}{k} - \sum_{k = p+1}^{2p-1} \frac{1}{k} - \sum_{k = 2p+1} ^{n+p} \frac{1}{k} \right)$$
$$= \frac{1}{2p} \left( \frac{1}{p} + \sum_{k = 2p} ^{n-p} \frac{1}{k} - \sum_{ k = 2p+1}^{n+1} \frac{1}{k} \right)$$
$$= \frac{1}{2p}\left( \frac{1}{p} + \frac{1}{2p} - \sum_{k = n-p+1}^{n+p} \frac{1}{k} \right)$$
Or 
$$0 \leq \sum_{k = n-p+1}^{n+p} \frac{1}{k} \leq \frac{(n+p)-(n-p)}{n-p+1} = \frac{2p}{n-p+1} \underset{n \to +\infty}{\longrightarrow} 0$$
Ainsi, 
$$S_{n} \underset{n \to +\infty}{\longrightarrow}  \frac{1}{2p} \times \frac{3}{2p} = \frac{3}{4p^{2}}$$
Donc, 
$$\forall p \in \mathbb{N}^{*}, \sum_{\underset{n \neq p}{n = 1}} \frac{1}{n^{2}-p^{2}} = \frac{3}{4p^{2}}$$


##### Exercice
$$\sum_{n = 0}^{+ \infty} (n+1) 3^{-n}$$

$$\sum_{n = 0}^{+ \infty} n3^{-n} + \sum_{n = 0}^{+ \infty} 3^{-n}$$