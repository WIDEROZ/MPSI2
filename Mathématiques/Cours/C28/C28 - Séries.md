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
$$\sum a_{n} \text{ et } \sum b_{n} \text{ sont de}$$
