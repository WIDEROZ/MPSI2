# Introduction
## Zénon
La flèche a une vitesse de $1m.s^{-1}$
et elle atteint la cible en $1 s$
mais aussi en $\frac{1}{2}+\frac{1}{4} + \frac{1}{8}+ \dots$ s
On peut formaliser le fait que $\frac{1}{2} + \frac{1}{4} + \frac{1}{8} + \dots = 1$ 
$$S_{n} = \sum_{k = 1}^{n} \frac{1}{2^{k}} = \frac{\frac{1}{2} - \left( \frac{1}{2} \right)^{n+1}}{1-\frac{1}{2}} \to \boxed{1} \text{ : C'est la somme de la série}$$
On dira que la série
$$\sum_{ n \geq 1} \boxed{\frac{1}{2^{n}}} \text{ : terme général de la série}$$
converge 

## Quick et Flupke
Quick et Flupke jouent aux cubes d'arrête : 
- $1 m$
- $\frac{1}{2} m$
- $\frac{1}{3} m$
- ...
- $\frac{1}{n} m$

Quick : Je peux tous les empiler dans la grande chambre
Flupke : Menteur! Moi je peux tous les peindre avec un nombre fini de pots et même tous les remplir avec le lac d'Annecy. (Ou une petite piscine)

Est ce que ces séries convergent ?
$$\sum_{n \geq 1} \frac{1}{n}$$
(Série harmonique)
$$\sum_{n \geq 1} \frac{1}{n^{2}}$$
$$\sum_{ n\geq 1} \frac{1}{n^{3}}$$

$$\begin{array}{rl}
S_{2^{p}} = \sum_{n \geq 1} \frac{1}{n} &=1 \\
&+\frac{1}{2} \\
&+ \left( \frac{1}{3} + \frac{1}{4} \right)  \\
&+ \left( \frac{1}{5} + \frac{1}{6} + \frac{1}{7} + \frac{1}{8} \right) \\
&+ \dots \\
&+\left( \frac{1}{2^{p-1}+1} + \dots + \frac{1}{2^{p}}\right) \\
&\geq 1+ \frac{1}{2}p \to + \infty
\end{array}$$
Ainsi, par minoration, $(S_{2^{p}})$ diverge

Comme la suite extraite : $(S_{2^{p}})_{p}$ de $(S_{n})_{n}$ est divergente ie n'admet pas de de limite finie et qu'elle est croissante : 
$$\lim_{ n \to \infty }S_{n} = + \infty $$
ie 
$$\sum_{n = 1}^{\infty} \frac{1}{n} = + \infty$$
___
Notons pour $n \in \mathbb{N}$, 
$$T_{n} = \sum_{k = 1}^{n} \frac{1}{k^{2}}$$
On a alors pour $n \geq 1$, 
$$T_{n} = 1+ \sum_{k= 1}^{n} \frac{1}{k^{2}}$$
$$T_{n} \leq 1+ \sum_{k = 2}^{n} \frac{1}{k(k-1)} = 1+ \sum_{k = 2}^{n} \frac{1}{k-1}-\frac{1}{k} = 1+\left( 1-\frac{1}{n} \right)$$
Donc, 
$$1+ \sum_{k = 2}^{n} \frac{1}{k(k-1)} = 2 + \frac{1}{n} \leq 2$$
De plus, $(T_{n}) \uparrow$
Etant croissante et majorée, $(T_{n})$ converge ie 
$$\boxed{\sum_{n \geq 1} \frac{1}{n^{2}} \text{ converge}}$$
et de même, 
$$\boxed{\sum_{n=1}^{+ \infty} \frac{1}{n^{2}} \in [1, 2]}$$
Retenir : 
Soit $\zeta$ la fonction zeta de Riemann : 
$$\boxed{\zeta(2) = \sum_{n = 1}^{+ \infty} \frac{1}{n^{2}} = \frac{\pi^{2}}{6}}$$
$$\zeta(3) \in \mathbb{R}\setminus \mathbb{Q} \text{ et } \forall k \in \mathbb{N}^{*}, \zeta(2k+1) \in \mathbb{R} \setminus \mathbb{Q}$$

$$\forall k \geq 1, 0 \leq \frac{1}{k^{3}} \leq \frac{1}{k^{3}}$$
Donc, 
$$\forall n \in \mathbb{N}, 0 \leq \sum_{k = 1}^{n} \frac{1}{k^{3}} \leq \sum_{k = 1}^{n} \frac{1}{k^{2}}\leq 2$$
Comme, 
$$\sum_{k = 1}^{n} \frac{1}{k^{3}}$$
est croissante et majorée elle converge
$$\boxed{\sum_{n \geq 1 } \frac{1}{n^{3}} \text{ converge}}$$

## Imposture
$$S_{n} = \sum_{k = 1}^{n} \frac{n}{n^{2}+k^{2}}$$
a-t-elle une limite finie ?

- $S_{1} = \frac{1}{2}$
- $S_{2}= \frac{2}{5} + \frac{1}{4}$
- $S_{3} = \frac{3}{10} + \dots$

Ca n'a rien a voir avec une série.

#### Important
Quand on a une quantité dont le nombre de terme et les termes varient, CE N'EST PAS UNE SERIE!!!!
On a deux pistes : 
- La calculer en explicitant en fonction de $n$ (sans le signe $\sum$) 
- Reconnaître une somme de Riemann (Chapitre $29$) 


Ici pour $n \geq 1$, 
$$S_{n} = \frac{1}{n} \sum_{k = 1}^{n} \frac{1}{1+ \left( \frac{k}{n} \right)^{2}}= \frac{1}{n} \sum_{k = 1}^{n}f\left( \frac{k}{n} \right)$$
$$S_{n} \underset{n \to + \infty}{\longrightarrow} \int _{0}^{1} f = \int _{0}^{1} \frac{dx}{1+x^{2}} \, dx = [\arctan(x)]_{0}^{1} = \frac{\pi}{4}$$
$S_{n} \underset{n \to + \infty}{\longrightarrow} \int _{0}^{1} f$ est a prouver (en gros c'est la formule des rectangles)

Méthode de Simpson pour le calcul intégral en informatique

# I. Définitions
Soit $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$, 
#### Définition
Pour $(a_{n})_{n} \in \mathbb{K}^{\mathbb{N}}$, 
La série de terme général $a_{n}$, est notée :
$$\sum a_{n}$$
est la suite des sommes partielles : $(S_{n})_{n \in \mathbb{N}}$ de terme général : 
$$S_{n} = \sum_{k = 0}^{n} a_{k}$$
En conséquence on dit que $\sum a_{n}$ converge ou diverge ssi $(S_{n})_{n}$ converge ou diverge.

SI $\sum a_{n}$ converge, sa somme est : 
$$\sum_{n = 0}^{+ \infty} a_{n} = \lim_{ n \to \infty } S_{n}$$

#### Remarque
Il existe d'autre définitions de la série
mais les définitions : 
- Du T.G. (terme général) de la série
- Des S.P. (somme partielles) de la série
- De la C.V. ou D.V. (convergence ou divergence) de la série
- De la somme éventuelle

Toujours vous exprimer avec ce language universel

On appelle <u>nature</u> de la série le fait qu'elle converge. 

#### Exemple
La série : 
$$\sum \frac{1}{3^{n}}$$
converge.

Quelle est sa somme? 
$$\sum_{n=0}^{+\infty} \frac{1}{3^{n}}= \frac{1}{1-\frac{1}{3}}=\frac{3}{2}$$

#### Exemple
La nature de 
$$\sum (-1)^{n}$$
Pour $n \in \mathbb{N}$, 
$$\sum_{k = 0}^{n} (-1)^{k} = \frac{1-(-1)^{n+1}}{2}$$
$= 1$ si $n$ est pair et $0$ si $n$ est impair. 

La suite
$$\sum_{k = 0}^{n}(-1)^{k} \text{ DV}$$
par exemple car ses suite extraite des rangs pairs et impairs convergent vers des limites différentes. 
Ainisi, 
$$\sum (-1)^{n} \text{ DV}$$

#### Remarque
Pour les suites il se peut que le terme général de la série ne soit défini qu'a partir d'un certain rang $n_{0}$ (APDCR).
On fait partir les sommes partielles / la somme éventuelle à ce rang. 
Pour $n \geq n_{0}$, 
$$S_{n} = \sum_{k = n_{0}}^{n}a_{k}$$
On note la série : 
$$\sum_{n \geq n_{0}} a_{n}$$
et sa somme, si elle existe : 
$$\sum_{n = n_{0}}^{\infty} a_{n}$$

#### Remarque
Si on change un nombre fini de termes de la suite $(a_{n})_{n}$ cela ne change pas la nature de $\sum a_{n}$ mais cela change sa somme. 

#### Exemple
Série de Riemann : 
$$\sum_{n \geq 1} \frac{1}{n^{s}}$$
avec $s \in \mathbb{C}$, 

#### Exercice
Déterminer la nature des séries : 
- $\sum_{n \geq 2} \frac{1}{n^{2}-n}$
- $\sum_{n \geq 1} \ln\left( 1+\frac{1}{n} \right)$
- $\sum_{n \geq 2} \frac{1}{n^{3}+n^{2}-2n}$


Soit $n \in [\![2, + \infty[\![$
$$\sum_{k = 2}^{n} \frac{1}{k} \frac{1}{k-1} = \sum_{k = 2}^{n} \frac{1}{k-1} - \frac{1}{k}= 1-\frac{1}{n} \to 1$$
$$\sum_{n = 2}^{+ \infty} \frac{1}{n^{2}-n} = 1$$
___
Pour $n \geq 1$, 
$$\sum_{k = 1}^{n} \ln\left( 1 + \frac{1}{k} \right) = \sum_{k = 1}^{n} (\ln(k + 1)- \ln(k))=\ln(n+1) \to + \infty$$
Alors, 
$$\sum_{n = 1}^{+\infty} \ln\left( 1+\frac{1}{n} \right) \text{ DV}$$
___
$$S_{n} = \sum_{k = 2}^{n} \frac{1}{k(k-1)(k+2)} = \sum_{k = 2}^{n} \frac{\frac{1}{6}}{k+2} - \sum_{k = 2}^{n} \frac{\frac{1}{2}}{k} + \sum_{k = 2}^{n} \frac{\frac{1}{3}}{k-1}$$
(Décomposition en élément simples)
Donc, 
$$S_{n} = \frac{1}{6}\sum_{k = 4}^{n+2} \frac{1}{k}  - \frac{1}{2}\sum_{k =2}^{n} \frac{1}{k} + \frac{1}{3} \sum_{k = 1}^{n-1} \frac{1}{k}$$
AL morse Ors, 
$$S_{n} = \left( \frac{1}{6} - \frac{1}{2} + \frac{1}{3}\right)\sum_{k = 2}^{n} \frac{1}{k} + \frac{1}{6}\left( -\frac{1}{2}-\frac{1}{3}+\frac{1}{n+1}+\frac{1}{n+2} \right)$$
$$+ \frac{1}{3}\left( 1-\frac{1}{n} \right) \longrightarrow -\frac{5}{36}+\frac{12}{36} = \frac{7}{36}$$

#### Propriété
Soit $\sum a_{n}$ une série a termes complexes. 
Alors, 
$$\sum a_{n} \text{ CV} \Leftrightarrow \begin{cases}
\sum \mathrm{Re}(a_{n}) \text{ CV} \\
\sum \mathrm{Im}(a_{n}) \text{ CV}
\end{cases}$$

#### Exemple
Pour $\lambda \in \mathbb{R}$ et $\alpha > 0$, 
La convergence de 
$$\sum \frac{e^{ i\lambda n }}{n^{\alpha}}$$
équivaut a celles de : 
$$\sum \frac{\cos(\lambda n)}{n^{\alpha}} \text{ et de } \sum \frac{\sin(\lambda n)}{n^{\alpha}}$$

# II. Propriétés
#### Définition
Pour deux séries :
$$\sum a_{n} \text{ et } \sum b_{n}$$
et $\lambda \in \mathbb{K}$ on définit : 
- La série : $\lambda \left( \sum a_{n} \right) = \sum \lambda a_{n}$
- La série : $\sum a_{n} + \sum b_{n} = \sum (a_{n}+b_{n})$

On a alors : 

#### Propriété
L'ensemble des séries a terme dans $\mathbb{K}$ est un $\mathbb{K}$ espace vectoriel

#### Propriété
L'ensemble des séries CV, $E_{CV}$, est un sous espace vectoriel de l'espace des dries et l'application :
$$\text{Somme} : \begin{cases}
E_{CV} \to \mathbb{K} \\
\sum_{a_{n}} \mapsto \sum_{n = 0}^{+ \infty} a_{n}
\end{cases}$$
est une forme linéaire.

#### Exemple
$$\sum_{n\geq 1} \frac{2+ (-1)^{n}n}{n^{2}} \text{ CV}$$
car 
$$\sum_{n \geq 1} \frac{1}{n^{2}} \text{ CV}$$
et 
$$\sum_{n \geq 1} \frac{(-1)^{n-1}}{n} \text{ CV}$$
et 
$$\sum_{n = 1}^{+\infty} \frac{2+(-1)^{n-1}n}{n^{2}} = 2 \sum_{n = 1}^{+\infty} \frac{1}{n^{2}} + \sum_{n = 1}^{+\infty} \frac{(-1)^{n-1}}{n}= \frac{\pi^{2}}{3}+ \ln(2)$$

#### Corollaire
La somme d'une série CV et d'une série DV est DV.

Démonstration : 
Soient 
$$\begin{cases}
\sum a_{n} \text{ CV} \\
\sum b_{n} \text{ DV}
\end{cases}$$
On raisonne par l'absurde : 
Supposons que $\sum a_{n} + \sum b_{n}$ CV
Alors, 
$$\sum b_{n} = \sum (a_{n} + b_{n}) - \sum a_{n}$$
or 
$\sum (a_{n} + b_{n})$ CV et $\sum a_{n}$ CV
Alors, 
$\sum b_{n}$ CV CONTRADICTION

#### Remarque
Attention la somme de deux séries DV peut être de nature quelconque. 

#### Exemple
$$\sum_{n \geq 1} \frac{(-1)^{n-1}+1}{n} \text{ DV}$$
comme c'est une somme de :
$$\sum_{n \geq 1} \frac{(-1)^{n-1}}{n} \text{ CV} \text{ et } \sum_{n \geq 1} \frac{1}{n} \text{ DV}$$

#### Remarque
On remarque que tous les exemples précédents de séries CV ont leur TG qui tend vers $0$. C'est général

#### Propriété
Pour toute série CV $\sum a_{n}$, on a : $a_{n} \to 0$ 

Démonstration : 
Soit $\sum a_{n}$ CV et $S_{\infty} \in \mathbb{K}$ sa somme
Pour $n \in \mathbb{N}^{*}$, 
$$a_{n} = S_{n}-S_{n-1} = S_{\infty} - S_{\infty}\to 0$$

#### Remarque
Cette CN n'est pas suffisante : 
$$\frac{1}{n} \longrightarrow  0 \text{ et } \sum \frac{1}{n} \text{ DV}$$

#### Corollaire
Si $a_{n} \nrightarrow 0$, alors, $\sum a_{n}$ DV
On dit qu'elle diverge grossièrement et on note : 
$$\sum a{n} \text{ DVG}$$

#### Exemple
$$\sum (-1)^{k} \text{ DVG}$$

#### Définition
Soit $\sum a_{n}$ CV
Pour $n \in \mathbb{N}$ on appelle reste de rang $n$ de cette série la quantité : 
$$R_{n} = \sum_{p= 0}^{+\infty}a_{p} - S_{n} = \sum_{p = n+1}^{+ \infty}a_{p}$$
On a évidement : 
$$S_{n} + R_{n} = \sum_{p= 0}^{+\infty}a_{p}$$
et $R_{n} \underset{n \to +\infty}{\longrightarrow} 0$ 

#### Remarque
$R_{n}$ est défini car $\underset{p \geq n+1}{\sum} a_{p}$ CV
car $\sum a_{p}$ CV (les premiers termes n'ont pas d'importance)

#### Remarque
Dire que la série CV car son reste tend vers $0$ n'a pas de sens car le reste est défini que si la série CV

#### Remarque
La manière dont la suite des reste tend vers $0$ définit la vitesse de CV c'est utile de savoir l'estimer pour faire du calcul numérique. (calculer les décimales de $\pi$)

#### Exemple
Avec l'exemple de Zénon, 
$$R_{n}= \sum_{p = n+1}^{+ \infty} \frac{1}{2^{p}} = \frac{1}{2^{n}}$$
Donc, $R_{n} \underset{n \to +\infty}{\longrightarrow} 0$ (très vite / exp vite)

La convergence des séries géométriques est rapide !!
Pour $\sum \frac{1}{n^{2}}$ on peut voir que $R_{n} \sim \frac{1}{n} \underset{n \to +\infty}{\longrightarrow} 0$ lentement
La convergence des séries de Riemann est lente. 

#### Propriété
Soit $a \in \mathbb{C}$, 
La série géométrique de raison $a$ et $\sum a^{n}$ 
On a alors, 
$$\sum a^{n} \text{ CV} \Leftrightarrow |a| < 1$$
et 
$$|a| < 1 \Rightarrow \sum_{n = 0}^{\infty} a^{n} = \frac{1}{1-a}$$

Démonstration : 
- Si $|a| \geq 1$, $a^{n} \nrightarrow 0$ donc, $\sum a^{n}$ DV
- Si $|a| < 1$, en particulier $a \neq 1$, 
  Donc, pour $n \in \mathbb{N}$, 
  $$\sum_{k = 0}^{n}a^{k} = \frac{1-a^{n+1}}{1-a} \underset{n \to +\infty}{\longrightarrow}  \frac{1}{1-a}$$
  Comme $|a| \leq 1$, $a^{n+1} \underset{n \to +\infty}{\longrightarrow} 0$

#### Propriété
Soit $(u_{n}) \in \mathbb{K}^{\mathbb{N}}$
Alors, 
$(u_{n})$ et $\sum (u_{n+1}-u_{n})$
sont de même nature

Démonstration : 
$$S_{n} = \sum_{k = 0}^{n}(u_{k+1}-u_{k}) = u_{n+1}-U_{0}$$
Ainsi, 
$$(S_{n}) \text{ CV} \Leftrightarrow (u_{n}) \text{ CV}$$

#### Exemple
Soit $(u_{n})$ tel que $\forall n \in \mathbb{N}, 0 \leq u_{n+1}-u_{n} \leq 2^{-n}$
Alors, $(u_{n})$ CV

Démonstration : 
Pour $n \in \mathbb{N}^{*}$, 
$$\begin{array}{rl}
S_{n} &= \underset{k = 0}{\overset{n}{\sum}} (u_{k+1}-u_{k}) \\
&\leq \underset{k = 0}{\overset{n}{\sum}}  2^{-k} \\
&\leq \underset{k = 0}{\overset{+ \infty}{\sum}} 2^{-k} \\
&= \frac{1}{1-\frac{1}{2}} \\
&= 2
\end{array}$$
Comme  les différences $u_{n+1}-u_{n}$ sont positives ou nulles, $(S_{n}) \uparrow$ et comme elle est majorée elle $CV$ donc $(u_{n})$ aussi. 

#### Remarque
Ces preuves de CV par comparaison lorsque les termes sont positifs sont générales. 

# III. Séries a termes positifs
#### Définition
Une série a termes positifs est une série $\sum a_{n}$ tel que 
$$\forall n \in \mathbb{N}, a_{n}\geq 0$$

On utilisera ici l'acronyme SATP

#### Propriété
Pour une SATP $\sum a_{n}$, 
1. La suite $(S_{n})$ de ses sommes partielles est croissante
2. 
   - Soit cette suite est majorée et alors $\sum  a_{n}$ CV
   - Soit cette suite n'est pas majorée et alors $\sum a_{n}$ DV
3. Si $\sum a_{n}$ DV $S_{n} \underset{n \to +\infty}{\longrightarrow} + \infty$ 
   Ce qu'on note : 
   $$\sum_{n=0}^{+\infty} a_{n} = + \infty$$


#### Exemple
$$\sum_{n \geq 1} \frac{1}{n}$$
est une SATP définie APDCR

$$\sum_{n \geq 1} \frac{(-1)^{n-1}}{n}$$
n'est pas une SATP


#### Théorème : Convergence d'une SATP par majoration
Soient $\sum a_{n}$, $\sum b_{n}$ deux séries réelles tel que, 
$$\forall n \in \mathbb{N}, \boxed{0 \leq} a_{n} \leq b_{n}$$
Alors, 
$$\boxed{\sum b_{n} \text{ CV} \Rightarrow \sum a_{n} \text{ CV}}$$
Et par contraposition : 
$$\sum a_{n} \text{ DV} \Rightarrow \sum b_{n} \text{ DV}$$

Donc, dans le cas de CV de $\sum b_{n}$, 
On a : 
$$0 \leq \sum_{n = 0}^{+ \infty} a_{n} \leq \sum_{n=0}^{+\infty} b_{n}$$

Démonstration : 
Supposons que $\sum b_{n}$ CV, 
On note pour $n \in \mathbb{N}$, $S_{n} = \sum_{k = 0}^{n} a_{k}$ et $\tilde{S}_{n} = \sum_{k = 0}^{n}b_{k}$

Par la proposition comme $\sum a_{n}$ et $\sum b_{n}$ sont deux $SATP$, 
$(S_{n}) \uparrow$ et $(\tilde{S}_{n}) \uparrow$

Par hypothèse $\sum b_{n}$ CV ie $(\tilde{S}_{n})$ CV
Et comme elle est croissante, pour $n \in \mathbb{N}$,
$$0\leq S_{n}\leq\tilde{S}_{n} \leq \lim_{ p \to \infty }\tilde{S}_{p} = \sum_{p=0}^{+\infty} b_{p} \in \mathbb{R}$$

Ainsi, $(S_{n})$ CV par le théorème de la limite monotone car elle est croissante et majorée. 

De plus par passage à la limite, 
$$0 \leq \lim_{ n \to \infty } S_{n} \leq \sum_{p = 0}^{\infty} b_{p}$$
$$0 \leq \sum_{p=0}^{\infty} a_{p} \leq \sum_{p=0}^{\infty}b_{p}$$


#### Remarque
Il suffit que la majoration, voir la positivité soit vraie APDCR pour avoir les implications, mais attention les inégalités sur les sommes ne seront plus vraies. (a priori)

#### Exemple
Comme
$$\sum_{n \geq 1} \frac{1}{n} \text{ DV}$$
et pour $\alpha \leq 1$, $\forall n \in \mathbb{N}^{*}, 0 \leq \frac{1}{n} \leq \frac{1}{n^{\alpha}}$
alors, 
$$\forall \alpha \leq 1, \sum_{n \geq 1} \frac{1}{n^{\alpha}} \text{ DV}$$

Comme
$$\sum_{n \geq 1} \frac{1}{n^{2}} \text{ CV}$$
et pour $\alpha \geq 2$, 
$$\forall n \in \mathbb{N}^{*}, 0 \leq \frac{1}{n^{\alpha}}\leq \frac{1}{n^{2}}$$
alors, 
$$\forall \alpha \geq 2, \sum_{n \geq 1} \frac{1}{n^{\alpha}} \text{ CV}$$
Par le TH des CV par majoration des SAT positifs. 

On vera plus tard que 
$$\forall \alpha \in ]1, 2[, \sum_{n \geq 1} \frac{1}{n^{\alpha}} \text{ CV}$$

#### Proposition : Nature des séries de Riemann
Pour $\alpha \in \mathbb{R}$, 
$$\sum_{n \geq 1} \frac{1}{n^{\alpha}} \text{ CV}\Leftrightarrow \alpha > 1 $$

Voir plus tard pour la preuve complète (Par comparaison de série intégrale)

#### Théorème: Convergence d'une SATP par équivalents
Soient $\sum a_{n}$ et $\sum b_{n}$ deux SATP tq $a_{n} \underset{n \to + \infty}{\sim} b_{n}$
Alors, 
$$\sum a_{n} \text{ et } \sum b_{n} \text{ sont de même nature}$$

Démonstration : 
Par disjonction de case : 
Soit $\sum a_n$ CV et $\sum b_{n}$ CV c'est fini
Soit $\sum a_{n}$ DV et $\sum a_{n}$ DV c'et fini

Soit une des deux converge et quitte a échanger les roles on peut supposer que $\sum b_{n}$ CV

Comme $\frac{a_{n}}{b_{n}} \underset{n \to +\infty}{\longrightarrow} 1$ par définition de $\sim$,
On a par la définition de la limite :
(avec $\varepsilon = 1$) il existe $N \in \mathbb{N}$ tq
$$\forall n \geq N,  0\leq \frac{a_{n}}{b_{n}} \leq 1+1 = 2$$
puis comme $\forall n \geq N, 0 \leq a_{n} \leq 2b_{n}$
et que $\sum 2b_{n} = 2\sum b_{n}$ CV, 
Par la convergence d'une SATP par majoration, 
$$\sum a_{n} \text{ CV}$$

#### Exemple
Comme pour $n \geq 2$, $\frac{1}{n(n - \sqrt{ n })}\geq 0$ et $\frac{1}{n^{2}}\geq 0$ et $\frac{1}{n(n-\sqrt{ n })} \underset{n \to \infty}{\sim} \frac{1}{n^{2}}$ 
(car $\sqrt{ n } = o(n)$)
et 
$$\sum_{n\geq 1}\frac{1}{n^{2}} \text{ CV}$$
On a : 
$$\sum_{n \geq 2} \frac{1}{n(n-\sqrt{ n })} \text{ CV}$$
Par les théorème de comparaison des SAT positifs.

#### Remarque
La positivité est indispensable.
Par exemple, on a :
$$\frac{(-1)^{n}}{\sqrt{ n }}-\frac{1}{n} \underset{n \to \infty}{\sim} \frac{(-1)^{n}}{\sqrt{ n }}$$
On peut montrer (voir plus tard les séries alternées (critère spécial)) que
$$\sum_{ n \geq 1} \frac{(-1)^{n}}{\sqrt{ n }} \text{ CV}$$
Or
$$\sum_{n \geq 1} \left( -\frac{1}{n} \right) \text{ DV}$$
Donc, 
$$\sum_{n \geq 1}\left( \frac{(-1)^{n}}{\sqrt{ n }}-\frac{1}{n} \right) \text{ DV}$$

#### Remarque
Ici aussi il suffit des la positivité APDCR

#### Remarque : Subtile
Si $\sum b_{n}$ est une SATP et $a_{n} \underset{n \to \infty}{\sim} b_{n}$, alors par définition des équivalents APDCR $b_{n} > 0$
et on a vu que $a_{n}$ et $b_{n}$ on le même signe APDCR
donc on peut appliquer le théorème. 

#### Théorème : Règle d'Alembert
Soit $\sum a_{n}$ une série a termes strictement positifs telle que :
$$\frac{a_{n+1}}{a_{n}} \underset{n \to +\infty}{\longrightarrow} l \in \overline{\mathbb{R}}_{+}$$

Alors,
- Si $l < 1$, alors $\sum a_{n}$ CV
- Si $l = 1$, alors tout peut arriver
- Si $l > 1$, alors $\sum a_{n}$ DVG


Démonstration : 
Supposons que $l <1$,
Excal 1
Par définition de la limite $\frac{a_{n+1}}{a_{n}} \underset{n \to +\infty}{\longrightarrow} l$
Comme on prend $\varepsilon = \frac{1 -l}{2} > 0$ il existe un rang $N \in \mathbb{N}$ tel que 
$$\forall n \geq N, \left| \frac{a_{n+1}}{n} -l \right| \leq \frac{1-l}{2}$$
En particulier pour $n \geq N$, 
$$0 \leq \frac{a_{n+1}}{a_{n}} \leq \frac{l+1}{2}$$
Alors comme $a_{n} > 0$, 
$$0 \leq a_{n+1} \leq \left( \frac{1+l}{2} \right)a_{n}$$

Ainsi, pour $n\geq N$, 
$$\begin{array}{rl}
0 \leq a_{n} & \leq \frac{l+1}{2}a_{n-1} \\
&\leq \left( \frac{l+1}{2} \right)^{2}a_{n-2} \\
& \dots \\
&\leq \left( \frac{l+1}{2} \right)^{N}a_{n-N} \\
& = \left( \left( \frac{l+1}{2}\right)^{-N} a_{N}\right)\left( \frac{l+1}{2} \right)^{n}
\end{array}$$
$$\left( \left( \frac{l+1}{2}\right)^{-N} a_{N}\right) = \text{ cte}$$
Or
$$\left| \left( l-\frac{1}{2} \right)\right| = \frac{l+1}{2} < 1$$
Donc la série géométrique : 
$$\sum \left( \frac{l+1}{2} \right)^{n} \text{ CV}$$
Donc, 
$$\sum \left( \frac{l+1}{2} \right)^{-N}a_{N}\left( \frac{l+1}{2} \right)^{n} \text{ CV}$$
Par les théorèmes de comparaison des séries à termes positifs, 
$$\sum a_{n} \text{ CV}$$

Supposons que $l=1$ : Voir les exemples du cours

Supposons que $l > 1$, 
Comme précédemment par la définition de la limite :
($\varepsilon = 1-l$), 
$$\frac{a_{n+1}}{a_{n}} \geq 1$$
APDCR, 
Donc $(a_{n})$ est croissante APDCR $N$, avec $a_{N} \geq 0$
Alors, $a_{n} \geq a_{N}$
Donc, $a_{n} \underset{n \to +\infty}{\nrightarrow} 0$
Ainsi, 
$$\sum a_{n} \text{ DVG}$$

#### Remarque
Le cas douteux est parfaitement expliqué par les séries de Riemann

$$\sum_{n \geq 1} \frac{1}{n^{\alpha}}$$
car 
$$\frac{n^{\alpha}}{(n+1)^{\alpha}} = \left( \frac{n}{n+1} \right)^{\alpha} \underset{n \to +\infty}{\longrightarrow} 1^{\alpha} = 1$$
et on a vu que certaines CV et d'autres DV.

#### Exercice
Règle de cauchy : 
Soit $\sum a_{n}$ une SATP tq $\sqrt[n]{ a_{n} } \underset{n \to +\infty}{\longrightarrow} l \in \overline{\mathbb{R}}_{+}$
Alors, 
- Si $l < 1$, $\sum a_{n}$ CV
- Si $l=1$ cas douteux
- Si $l > 1$ $\sum a_{n}$ DVG


# IV. Complément au Théorème de CV par équivalent
#### Théorème : Avant première
Soient $\sum a_{n}$ et $\sum b_{n}$ deux SATP équivalents. 
On sait qu'elles sont de même nature
De plus, 

Si elles DV, leurs suites de sommes partielles sont équivalentes : 
$$\sum_{k = 0}^{n} a_{k} \underset{n \to + \infty}{\sim} \sum_{k = 0}^{n}b_{k}$$

Si elles CV, leur suites des restes sont équivalents : 
$$\sum_{p = n+1}^{+ \infty} a_{p} \underset{n \to + \infty}{\sim} \sum_{p = n+1}^{+ \infty}b_{p}$$


#### Exemple
$$\frac{1}{n^{2}} \underset{n \to + \infty}{\sim} \frac{1}{n(n+1)}$$
et ces termes sont positifs donc par le théorème de comparaison des SATP équivalents, 
$$\sum_{n \geq 1} \frac{1}{n^{2}} \text{ et } \sum_{ n \geq 1} \frac{1}{n(n+1)}$$
ont la même nature
Or, 
$$\sum_{n \geq 1} \frac{1}{n^{2}} \text{ CV}$$
Donc, 
$$\sum_{n \geq 1} \frac{1}{n(n+1)} \text{ CV}$$
Donc, par le théorème ci dessus : 
$$\sum_{p=n+1}^{+ \infty} \frac{1}{p^{2}} \underset{n \to + \infty}{\sim} \sum_{p = n+1}^{+ \infty} \frac{1}{p(p+1)}$$
Soit $n \in \mathbb{N}$, 
Pour $N \geq n$, 
$$\sum_{p = n+1} ^{N}\frac{1}{p(p+1)} = \sum_{p = n+1}^{N}\left(  \frac{1}{p} - \frac{1}{p+1} \right) = \frac{1}{n+1}-\frac{1}{N+1}$$
$$\sum_{p = n+1} ^{N}\frac{1}{p(p+1)} \underset{N \to +\infty}{\longrightarrow}  \frac{1}{n+1}$$
Ainsi, 
$$\sum_{p=n+1}^{+ \infty} \frac{1}{p^{2}} \underset{n \to + \infty}{\sim} \frac{1}{n+1}-\frac{1}{n}$$


2. Les séries $\sum_{ n\geq 1} \frac{1}{n}$ et $\sum_{n \geq 1} \ln\left( 1+\frac{1}{n} \right)$ sont des SATP dont les termes sont équivalents, avec $\sum_{n \geq 1} \frac{1}{n}$ DV
   Donc, $\sum_{n \geq 1}\ln\left( 1+\frac{1}{n} \right)$ DV (Déja vu au téléscopage)
   
   et 
   $$\sum_{k = 1}^{n} \frac{1}{k} \underset{n \to + \infty}{\sim} \sum_{k = 1}^{n} \ln\left( 1 + \frac{1}{k} \right) = \sum_{k = 1}^{n}(\ln(k+1)-\ln(k))$$
   $$= \ln(n+1)$$
   (Ne pas)
   Or, 
   $$\ln(n+1) = \ln\left( 1+\frac{1}{n} \right)+\ln(n) = \ln(n)$$
   car $\ln\left( 1+\frac{1}{n} \right)\underset{n \to +\infty}{\longrightarrow} 0$ et $\ln(n) \underset{n \to +\infty}{\longrightarrow} + \infty$
   
   Ainsi, 
   $$\sum_{k =1}^{n} \frac{1}{k} \underset{n \to + \infty}{\sim} \ln(n)$$


# V. Comparaison de série-intégrale
Soit $f : [n_{0}, + \infty[ \to \mathbb{R}$ continue et monotone
La méthode des rectangles fournit pour $n \geq n_{0}$ un encadrement de $\int_{n_{0}}^{n} f$ entre deux sommes finies

Excal 2.

#### Théorème
Pour $f$ DÉCROISSANTE sur $[m, n+1]$,
($m<n$ entiers)
$$\sum_{k = n+1}^{n}f(k) \leq \int _{m}^{n} f \leq \sum_{k = m}^{n-1} f(k)$$
$$\int _{n+1}^{n+1}f \leq \sum_{k = n+1}^{n}f(k) \leq \int _{m}^{n}f $$

Démonstration : 
Soit $k \in [\![m,n]\!]$, 
Par décroissance de $f$, 
$$\forall x \in [k, k+1], f(k) \geq f(x) \geq f(k+1)$$
Comme $f$ est continue sur $[k ,k+1]$ on peut intégrer :
$$\int _{k}^{k+1} f(k) \, dx \geq \int _{k}^{k+1} f(x) \, dx \geq \int _{k}^{k+1} f(k+1) \, dx   $$
alors, 
$$f(k) \geq \int _{k}^{k+1} f(x) \, dx \geq f(k+1) $$

En sommant sur $k \in [\![m, n-1]\!]$, 
On obtiens, 
$$\sum_{k =m}^{n-1}f(k) \geq \int_{m}^{n} f(x) \, dx \geq \sum_{k = m+1}^{n} f(k)$$

Pour la deuxième inégalité à prouver on somme sur $k \in [\![m+1, n]\!]$

#### Remarque
Pour $f$ croissante et continue on obtiendrait les inégalités inverses

#### Savoir-Faire REQUIS
- Retrouver les encadrements avec un dessin
- Les démonter en détail

(INTERDIT : connaitre par cœur la formule)

# VI. Application aux séries de Riemann
Soit $\alpha \in \mathbb{R}$, 
On note $S_{n}$ (resp. $R_{n}$) les sommes partielles (resp restes) de la série : 
$$\sum_{n\geq 1} \frac{1}{n^{\alpha}}$$
et on applique les résultats précédents à la fonction : 
$$f: \begin{cases}
[1, + \infty[ \to \mathbb{R} \\
t \mapsto \frac{1}{t^{\alpha}}
\end{cases}$$

##### Cas $\alpha > 1$
Alors $f$ est décroissante et continue donc on peut appliquer le résultat précédent.
On a, en particulier, pour $n \in \mathbb{N}^{*}$, 
$$0 \leq S_{n} = 1+ \sum_{k = 2}^{ ⚡n} f(k) \leq 1+ \int_{1} ^{n} f(t) \, dt = 1+ \left[ \frac{t^{-\alpha+1}}{-\alpha+1} \right]_{1}^{n}  $$
$$= 1- \frac{1-n^{-\alpha+1}}{\alpha-1} \leq \frac{\alpha}{\alpha-1}$$
Comme $(S_{n})$ est croissante (SATP) et majorée, elle converge ie 
$$\sum_{n \geq 1} \text{ CV}$$
De plus, 
$$\sum_{n = 1}^{+\infty} \frac{1}{n^{\alpha}} \in \left[ 0, \frac{\alpha}{\alpha-1} \right]$$

On peut aussi obtenir un équivalent du reste,
Pour $n \in \mathbb{N}^{*}$ et $q \geq n$
$$\int _{n+1}^{q+1} f(t) \, dt \leq \sum_{n+1}^{q+1} \leq \int_{n}^{q}f(t) \, dt  $$
ie
$$\frac{(n+1)^{1-\alpha}-(q-1)^{1-\alpha}}{\alpha-1} \leq \sum_{k = n+1}^{q} \frac{1}{k^{\alpha}} \leq \frac{n^{1-\alpha }-q^{1-\alpha}}{\alpha-1}$$
et lorsque $q \underset{}{\longrightarrow} + \infty$ on obtient, 
$$\frac{(n+1)^{1-\alpha}}{\alpha-1} \leq R_{n} \leq \frac{n^{1-\alpha}}{\alpha-1}$$

Comme $\frac{n^{1-\alpha}}{\alpha-1} >0$, on a
$$\left( \frac{n+1}{n} \right)^{1-\alpha}\leq \frac{R_{n}}{\left( \frac{n^{1-\alpha}}{\alpha-1} \right)}\leq 1$$
Or 
$\left( \frac{n+1}{n} \right)^{1-\alpha} \underset{n \to +\infty}{\longrightarrow} 1^{1-\alpha} = 1$
Alors, par le théorème des gendarmes : 
$$\frac{R_{n}}{\left( \frac{n^{1-\alpha}}{\alpha-1} \right)} \underset{n \to +\infty}{\longrightarrow}  1$$
ie 
$$R_{n} \underset{n \to + \infty}{\sim} \frac{n^{1-\alpha}}{\alpha-1} = \frac{1}{(\alpha-1)n^{\alpha-1}}$$

Par exemple pour $\alpha = 2$, $R_{n} \underset{n \to +\infty}{\sim} \frac{1}{n}$
la convergence est lente par rapport aux séries géométriques. 

##### Cas $\alpha = 1$
Comme, $f$ est décroissante et continue donc pour $n \in \mathbb{N}^{*}$, 
$$S_{n} = \sum_{k = 1}^{n}f(k) \geq \int _{1}^{n+1}f(t) \, dt = [\ln(t)]_{1}^{n+1}= \ln(n+1) $$
Comme, 
$$\lim_{ n \to \infty } \ln(n+1) = + \infty$$
Par majoration, $S_{n} \to + \infty$ ie, 
$$\sum_{n \geq 1} \frac{1}{n} \text{ DV} \text{ et } \sum_{k = 1}^{+\infty} \frac{1}{n} = + \infty$$

Et pour $n \in \mathbb{N}^{*}$, 
$$\ln(n+1) \leq S_{n} = 1+ \sum_{k = 2}^{n}f(k) \leq 1+ \int _{1}^{n} f(t) \, dt= 1+\ln(n) $$
en divisant pour $n \geq 2$, pour $\ln(n) > 0$, 
$$\frac{\ln(n+1)}{\ln(n)} \leq \frac{S_{n}}{\ln(n)}\leq 1+ \frac{1}{\ln(n)}$$
comme $\ln(n+1) \sim \ln(n)$ (à démontrer)
et $\lim_{ n \to \infty } 1+ \frac{1}{\ln(n)} = 1$
Par le théorème des gendarmes, 
$$S_{n} = \sum_{k = 1}^{n} \frac{1}{k} \sim \ln(n)$$
De plus l'encadrement précédent donne : 
$$0\leq\ln\left( 1+\frac{1}{n} \right) \leq S_{n} -\ln(n) \leq 1$$
Donc, $(S_{n}-\ln(n))_{n}$ est bornée, 
On peut montrer que cette suite est convergente vers : $\gamma \approx 0,577$ qui s'appelle la constante d'Euler. 


##### Cas ou $\alpha \in ]0, 1[$
Ici $f$ est encore décroissante et continue ce que donne pour $n \in \mathbb{N}^{*}$, 
$$S_{n} = \sum_{k=1}^{n} f(k) \geq \int _{1}^{n+1} f(t)\, dt = \frac{(n+1)^{1-\alpha}-1}{1-\alpha}$$

Comme $1-\alpha > 0$, $(n+1)^{1-\alpha} \underset{n \to +\infty}{\longrightarrow} + \infty$
Donc, 
$$\int_{1}^{n+1} f(t) \, dt \underset{n \to +\infty}{\longrightarrow}  + \infty$$
et par minoration, 
$$\boxed{\sum_{n\geq 1} \frac{1}{n^{\alpha}} \text{ DV}}$$

Et comme on a pour $n \in \mathbb{N}^{*}$, 
$$\frac{(n+1)^{1-\alpha}-1}{1-\alpha} \leq S_{n} \leq 1+\frac{n^{1-\alpha}-1}{1-\alpha}$$

puis puisque $\frac{n^{1-\alpha}}{1-\alpha} >0$
$$\left( \frac{n+1}{n} \right)^{1-\alpha} - \frac{1}{n^{1-\alpha}} \leq \frac{S_{n}}{\left( \frac{n^{1-\alpha}}{1-\alpha} \right)} \leq \frac{1-\alpha}{n^{1-\alpha}}+1-\frac{1}{n^{1-\alpha}}$$
Alors, par le théorème des gendarmes, 
$$\boxed{\sum_{k = 1}^{n} \frac{1}{k^{\alpha}}\underset{n \to +\infty}{ \sim} \frac{n^{1-\alpha}}{1-\alpha}}$$

##### Cas $\alpha = 0$
$$\sum_{n \geq 1}1 \text{ DVG}$$
$$\sum_{n = 1}^{+ \infty} 1 = + \infty$$
car
$$\sum_{k =1}^{n}1 = n$$

##### Cas $\alpha < 0$
On a directement : 
$$\sum_{n \geq 1} \frac{1}{n^{\alpha}}$$
et 
$$\sum_{n = 1}^{+\infty} \frac{1}{n^{\alpha}} = + \infty$$
Comme $f$ est continue et croissante, les inégalités sont inversées et pour $n \in \mathbb{N}^{*}$, 
$$1+ \int_{1}^{n} f(t) \, dt \leq 1+ \sum_{k = 2}^{n}f(k) = \sum_{k = 1}^{n}f(k) \leq \int_{1}^{n+1}f(t) \, dt $$
ie
$$1+ \frac{n^{1-\alpha}-1}{1-\alpha} \leq S_{n} \leq \frac{(n+1)^{1-\alpha}-1}{1-\alpha}$$
et comme avant : 
$$\boxed{S_{n} \underset{n \to + \infty}{\sim} \frac{n^{1-\alpha}}{1-\alpha}}$$


#### Exemple
$$\sum_{k = 1}^{n}k \sim \frac{n^{2}}{2}$$
et 
$$\sum_{k = 1}^{n}\sqrt{ k } \underset{n \to \infty}{\sim} \frac{2}{3}{n^{2/3}}$$

# VII. Convergence Absolue
#### Définition
On dit qu'une série $\sum a_{n}$ à term dans $\mathbb{K}$, est absolument convergente (ACV) ou converge absolument (CVA) ssi 
$$\sum |a_{n}| \text{ CV}$$

#### Remarque
On parle d'ACV même quand $\mathbb{K} = \mathbb{C}$, 
alors qu'on prend le module $|a_{n}|$ de $a_{n}$

#### Propriété : CVA des séries géométriques
Pour $a \in \mathbb{C}$, 
$$\sum a^{n} \text{ CVA} \Leftrightarrow \sum a^{n} \text{ CV} \Leftrightarrow |a| < 1$$

Démonstration : 
EZ car : 
$$\sum |a^{n}| = \sum |a|^{n}$$
et $||a|| = |a|$

#### Exemple
$$\sum_{n \geq 1} \frac{(-1)^{n-1}}{n^{\alpha}} \text{ CVA} \Leftrightarrow \alpha > 1$$
On peut montrer que : 
$$\sum_{n \geq 1} \frac{(-1)^{n-1}}{n^{\alpha}} \text{ CV} \Leftrightarrow \alpha >0$$

(Alors on peut montrer que $\text{CV} \nRightarrow \text{CVA}$)

#### Rappel
Soit $x \in \mathbb{R}$, 
$$\begin{cases}
x^{+} = \max(0, x) \\
x^{-} = \max(0, -x) = -\min(0, x)
\end{cases}$$
$$\begin{cases}
x = x^{+}-x^{-} \\
|x| = x^{+} + x^{-} = \max(x, -x)
\end{cases}$$

#### Théorème
Pour $\mathbb{K} \in \{ \mathbb{R}, \mathbb{C} \}$, 
La CVA implique la CV

Démonstration : 
###### Preuve dans le cas de $\mathbb{K} = \mathbb{R}$
Soit $\sum a_{n}$ une séries a termes réels telle que $\sum |a_{n}| \text{ CV}$
Alors, 
$$\forall n \in \mathbb{N}, 0 \leq a_{n}^{+} \leq |a_{n}|$$

Par comparaison des SATP, 
Comme $\sum|a_{n}|$ CV, $\sum a_{n}^{+}$ CV et $\sum a^{-}_{n}$ CV

Par combinaison linéaire, 
$$\boxed{\sum a_{n} = \sum a_{n}^{+} - \sum a_{n}^{-} \text{ CV}}$$

###### Preuve dans le cas de $\mathbb{K} = \mathbb{C}$
Soit $\sum a_{n}$ une série a termes complexes tq $\sum|a_{n}|$ CV
On a :
$$ \forall n \in \mathbb{N}, 0 \leq | \mathrm{Re}(a_{n})|\leq |a_{n}|$$
Comme $\sum|a_{n}|$ CV, alors $\sum |\mathrm{Re}(a_{n})|$ CV

Ainsi 
$$\sum\mathrm{Re}(a_{n}) \text{ CVA}$$
et par le cas réel prouvé précédemment, 
$$\sum\mathrm{Re}(a_{n}) \text{ CV}$$
De même
$$\sum|\mathrm{Im}(a_{n})| \text{ CV}$$
par comparaison de SATP
$$\sum \mathrm{Im}(a_{n}) \text{ CV}$$

Par combinaison linéaire, 
$$\boxed{\sum a_{n} = \sum \mathrm{Re}(a_{n}) + i \sum \mathrm{Im}(a_{n}) \text{ CV}}$$

#### Remarque
La réciproque est fausse
$$\sum_{n\geq 1} \frac{(-1)^{n+1}}{n}$$

#### Théorème de convergence absolue par domination
Soient $\sum a_{n}$ et $\sum b_{n}$ à termes dans $\mathbb{K}$, 
alors, 
$$\begin{rcases}
a_{n} = O(b_{n}) \\
\sum b_{n} \text{ CVA}
\end{rcases} \Rightarrow \sum a_{n} \text{ CVA}$$

Démonstration : 
Supposons que $a_{n} = O(b_{n})$ et $\sum b_{n}$ CVA, 
APDCR
il existe un $M \in \mathbb{R}_{+}$ tel que
$$\left|\frac{a_{n}}{b_{n}}\right| \leq M$$
Donc, APDCR
$$0 \leq |a_{n}| \leq M|b_{n}|$$

Comme $\sum b_{n}$ CVA, $M\sum b_{n}$ CV
par comparaison de SATP, 
$$\sum |a_{n}| \text{ CV}$$
ie 
$$\sum a_{n} \text{ CVA}$$

#### Remarque
Ce théorème recouvre de théorème de comparaison des SATP (par majoration et par équivalent) mais attention il y a toujours une hypothèse de positivité qui est contractée dans l'hypothèse de CVA de $\sum b_{n}$

#### Exemple
Pour $n \geq 1$, 
$$a_{n} = \frac{e^{ in }\ln(n)}{n^{3/2}}$$
On a :
$$\ln(n) \underset{n \to + \infty}{=} O\left( n^{\frac{1}{4}} \right)$$
Par les résultats de comparaison de croissance entre logarithme et puissance, et $e^{ in } = O(1)$
Donc, 
$$a_{n}= O\left( \frac{n^{\frac{1}{4}}}{n^{\frac{3}{2}}} \right)= O\left( \frac{1}{n^{\frac{5}{4}}} \right)$$
Or, 
$$\sum_{n \geq 1} \frac{1}{n^{\frac{5}{4}}} \text{ CV}$$
car $\frac{5}{4} > 1$
Donc, CVA car elle est à termes positifs.
Par le théorème de CV par convergence par domination : 
$$\sum_{n \geq 1} \frac{e^{ in}\ln(n)}{n^{\frac{3}{2}}} \text{ CVA}$$
Donc CV

# VIII. Représentation décimale des réels
On autorise les notations de la séries à démarrer en un entier relatif.

#### Définition
Un dévloppement décimal d'un réel $x$ est une écriture : 
$$x = \varepsilon \sum_{n = n_{0}}^{ + \infty}d_{n} 10^{-n}$$
avec :
$$\begin{cases}
\varepsilon \in \{ -, + \} \\
n_{0} \in \mathbb{Z} \\
\forall n \geq n_{0}, d_{n} \in [\![0, 9]\!]
\end{cases}$$

Le symbole $\varepsilon$ est appelé le signe du développement et les $d_{n}$ sont ses chiffres

#### Remarque
Toutes ces séries sont ACV car 
$$\varepsilon d^{n} 10^{-n} = O(10^{-n})$$
et 
$$\sum\left( \frac{1}{10} \right)^{n} \text{ est ACV}$$

#### Remarque
Un réel peut avoir plusieurs développements décimaux :
- Pour $0$ on peut prendre $\varepsilon = \pm1$ 
- On peut
- $1 = 1 \times 10^{0} + 0 \times 10 ^{-1} + 0 \times 10^{-2} \dots$
  $0.999\dots=0 \times 10^{0} +  \times 10^{ -1}+ 9 \times 10^{-2} + \dots$
  $$\sum_{n = 1}^{+\infty}9 \times 10^{-n} = 9 \frac{\frac{1}{10}}{1-\frac{1}{10}} = 1$$


#### Définition
Le développement décimal : 
$$x = \varepsilon \sum_{n = n_{0}}^{+ \infty}d_{n}10^{-n}$$
est propre dans les 2 cas suivants : 
- Si $x = 0$, $\varepsilon = +$, $n_{0} = 0$, $\forall n \geq 0, d_{n} =0$
- Si $x \neq 0$, $((n_{0} < 0 \text{ et }d_{n_{0}} \neq 0) \text{ ou }n_{0} = 0)$
  et $(d_{n})$ n'est pas stationnaire en $9$

Convention d'écriture des développement décimaux propres : 
- On met le signe devant, puis les premiers chiffres $d_{n}$ (au moins ceux tels que $n \leq 0$) sont placées les uns à la suite des autres de gauche à droite avec une virgule séparant $d_{0}$ et $d_{1}$ et on met "$\dots$" à la suite : 
  $-\pi = -3.141592\dots$
- Si le signe est $+$, on l'omet : $\pi = 3.141592\dots$
- On arrête l'écriture à $d_{n}$ si $n \geq 0$, et $\forall m>n, d_{n} = 0$
  $$$$
- Pour 

Gros ca sert a rien azi j’arrête d'écrire

#### Théorème
Tout réel admet un unique développement décimal propre, pour $x > 0$ les chifres sont donnés par :
$$\begin{cases}
\forall n \in \mathbb{Z},  \\
n_{0} = \min(0, \min\{ n \in \mathbb{Z}, | d_{n} \neq  0\})
\end{cases}$$