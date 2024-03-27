Soit $\mathbb{K} \in \{\mathbb{R}, \mathbb{C}\}$
# I. Deux lemmes clés
#### Lemme A
Soit $E$ un $\mathbb{K}$-ev quelconque
Soient $(x_{i})_{i \in K}$ une famille génératrice de $E$ et
$(x_{i})_{i \in I}$ une sous famille libre ($I \subset K$)

Alors, 
Soit $(x_{i})_{i \in I}$ est une base
Soit il existe $i_{0} \in K \backslash I$ tel que $(x_{i})_{i \in I \cup \{i_{0}\}}$ est libre

Démonstration : 
Si $(x_{i})_{i \in I}$ est génératrice, 
Alors c'est une base puisqu'elle est libre par hypothèse

Sinon, $Vect(x_{i})_{i \in I} \neq E$, 
Montrons par l'absurde qu'il existe un $i_{0} \in K$ tel que $x_{i_{0}} \notin Vect(x_{i})_{i \in I}$, 
Dans le cas contraire on aurait $\forall j \in K, x_{j} \in Vect(x_{i})_{i \in I}$
et pour $x \in E$ quelconque, $x$ s'écrit comme combinaison linéaire des $(x_{j})_{j \in K}$ (famille génératrice par hypothèse) et chaque $x_{j},$ avec $j \in K$ étant CL des $(x_{i})_{i \in I}$, $x$ serait CL des $(x_{i})_{i \in I}$ 
(une CL de CL des $(x_{i})_{i \in I}$ est encore une CL)
Ainsi on aurait $x \in Vect(x_{i})_{i \in I}$ et finalement $E = Vect(x_{i})_{i \in I}$ 
CONTRADICTION


Ainsi il existe $i_{0} \in K$ tq $x_{i_{0}} \not\in Vect(x_{i})_{i \in I}$, a fortiori $i_{0} \not\in I$ ie $i_{0} \in K \backslash I$  

Posons $J = I \cup \{i_{0}\}$ et montrons que $(x_{i})_{i \in J}$ est libre

Soit $(\lambda_{i})_{i \in J} \in \mathbb{K}^{(J)}$ tq
$$\sum_{i \in J} \lambda_{i}x_{i} = 0$$
Alors, 
$$\lambda_{i_{0}}x_{i_{0}} + \sum_{i \in I}\lambda_{i}x_{i} = 0$$

1. Montrons par l'absurde que $\lambda_{i_{0}} = 0$ 
   Sinon on aurait
   $$x_{i_{0}} = \sum_{i \in I}\left( -\frac{\lambda_{i}}{\lambda_{i_{0}}} \right)x_{i} \in Vect(x_{i})_{i \in I}$$
   CONTRADICTION

2. Déduisons en que les autres coefs sont nuls :
   On a : $\sum_{i \in I}\lambda_{i}x_{i} = 0$ et comme $(x_{i})_{i \in I}$ est libre, $\forall i \in I, \lambda_{i} = 0$

$$\square$$


#### Rappel
$()$ est libre
$Vect(()) = \{0\}$


#### Lemme B
Soit $E$ un $\mathbb{K}$-ev qui admet une famille génératrice à $n \in \mathbb{N}$ éléments. 
Alors toute famille de $E$ ayant $n+1$ éléments est liée. 

Démonstration :
Par récurrence sur $n$, 

Pour $n \in \mathbb{N}$, on pose : 
$A_{n}$ : "Dans un ev $E$ engendré par $n$ vecteurs, toute famille de $n+1$ vecteurs est lié"

###### Initialisation
Soit $E$ engendré par zéro vecteurs alors $E = Vect(()) = \{0\}$ et la seule famille à un vecteur est : $(0)$ et elle est liée car l'un de ses vecteurs est nul.

Ainsi $A_{0}$ est vérifiée


###### Hérédité
Soit $n \in \mathbb{N}$ tq $A_{n}$, 
Soit $E$ un ev muni d'une famille génératrice à $n+1$ vecteurs : $(y_{i})_{i =1}^{n+1}$ 
Soit $(x_{i})_{i = 1}^{n+2} \in E^{n+2}$ 


Comme $(y_{i})_{i = 1}^{n+1}$ engendre $E$, il existe des coefficients $\lambda_{i, k} \in \mathbb{K}$
ou $i \in [\![1, n+2]\!]$ et $k \in [\![1, n+1]\!]$ tq
$$\forall i \in [\![1, n+2]\!], x_{i} = \sum_{k=1}^{n+1}\lambda_{i,k}y_{k}$$

On fait une disjonction de cas : 

Cas 1 : $\forall i \in [\![1, n+2]\!], \lambda_{i, n+1} = 0$
On applique l'hypothèse de recurrence $A_{n}$ à $F = Vect(y_{k})_{k = 1}^{n}$, engendré par $n$ vecteurs et la famille $(x_{i})_{i = 1}^{n+1}$ de vecteurs de $F$, donc $(x_{i})_{i = 1}^{n+1}$ est liée (dans $F$ donc dans $E$) et a fortiori $(x_{i})_{i = 1}^{n+2}$ est liée.

Cas 2 : $\exists i_{0} \in [\![1, n+2]\!], \lambda_{i_{0}, n+1} \neq 0$
Pour alléger les notations, quitte a renuméroter les $x_{i}$ on suppose que $i_{0} = n+2$,
On pose pour $i \in [\![1, n+1]\!]$, 
$$\tilde{x}_{i} = x_{i} - \frac{\lambda_{i, n+1}}{\lambda_{n+2, n+1}} x_{n+2} = \sum_{k =1}^{n+1} \left( \lambda_{i, k}- \frac{\lambda_{i, n+1}}{\lambda _{n+2, n+1}}\lambda_{n+2, k} \right)y_{k}$$
$$= \sum_{k = 1}^{n}\left( \lambda_{i, k}- \frac{\lambda_{i, n+1}}{\lambda _{n+2, n+1}}\lambda_{n+2, k} \right)y_{k}$$

Ainsi en notant encore $F = Vect(y_{k})_{k = 1}^{n}$ on a : $\forall i \in [\![1, n+1]\!], \tilde{x_{i}} \in F$
Par hypothèse de récurrence, $A_{n}$
$(\tilde{x}_{i})_{i =1}^{n+1}$ est liée ie il existe des $\mu_{i}$ ($i \in [\![1, n+1]\!]$) non tous nuls tels que, 
$$\sum_{i = 1}^{n+1}\mu_{i}\tilde{x_{i}} = 0$$
On a alors : 
$$\sum_{i = 1}^{n+1}\mu_{i}x_{i} + \star \space x _{n+2}=0$$
$\star$ inutile

ie une CL de famille $(x_{i})_{i = 1}^{n+2}$ qui est nulle mais à coef non tous nuls
Ainsi $(x_{i})_{i = 1}^{n+2}$ est liée

Dans les deux cas, $(x_{i})_{i = 1}^{n+2}$ est liée
Ainsi $A_{n+1}$ est vérifiée

Par le principe de récurrence, $\forall n \in \mathbb{N}, A_{n}$

# II. Espaces de dimension finie
#### Définition
Un $\mathbb{K}$-ev $E$ est dit de dimension finie ssi il possède une famille génératrice finie. 

#### Exemple
$\mathbb{K}^{n}$, $\mathcal{M}_{n, p}(\mathbb{K}), \mathbb{K}_{n}[X]$
Espace de solution d'EDLH de système linéaire homogènes
Contre-exemples : $\mathbb{K}[X], \mathbb{K}(X), \mathcal{C}^{k}(I)$

#### Théorème
#### Nom : "Version forte du théorème de la base incomplete" ou "Théorème de la base intermédiaire"

Soient $E$ un ev engendré par $(x_{i})_{i =1}^{n}$
et $I \subset [\![1, n]\!]$ tq $(x_{i})_{i \in I}$ soit libre. 
Alors il existe $J$ un ensemble tq $I \subset J \subset [\![1, n]\!]$ et $(x_{i})_{i \in J}$ soit une base. 

Démonstration algorithmique : 
$J \leftarrow I$
Tant que $J \neq [\![1, n]\!]$ et $(x_{i})_{i \in J}$ n'est pas une base : 
- $i_{0} \leftarrow$ indice obtenu par le lemme $A$ tq $(x_{i})_{i \in J \sqcup \{i_{0}\}}$ soit libre
- $J \leftarrow J \sqcup \{i_{0}\}$
Renvoyer $J$

A la fin : 
- Soit on s'est arrêté parce que $(x_{i})_{i \in J}$ est une base
- Soit on s'est arrêté par ce que $J = [\![1, n]\!]$ et alors $(x_{i})_{i \in J}$ est aussi une base car elle est libre et génératrice

Le fait que $J$ est libre à chaque étape est un un invariant de boucle ("correction" de l'algo) le fait que l'algo se termine est prouvé par le variant de boucle : $n - |J|$ qui forme une suite d'entier naturels strictement décroissante qui est donc forcément finie. 

#### Corollaire 1 : Théorème de la base extraite
En dimension finie, on peut extraire une base de toute famille génératrice. 

Démonstration : 
Soit $E$ un $\mathbb{K}$-ev de dimension finie ie
il existe une famille génératrice finie : $(x_{i})_{i = 1}^{n}$ engendrant $E$

Soit $(y_{k})_{k \in K}$ un famille génératrice quelconque
($K$ peut être infini)

Chaque $x_{i}$ ($i \in [\![1, n]\!]$) est CL de dimension finie de $y_{k}$, donc on peut extraire une famille :
$y_{k_{1}}, \dots, y_{k_{p}}$ ($k_{1},\dots,k_{p} \in K$ telle que tout $x_{i}$ ($i \in [\![1, n]\!]$) soit dans $Vect(y_{k_{1}}, \dots, y_{k_{p}})$ ce qui ..., puisque $E = Vect(x_{i})_{i = 1}^{n}$ que $(y_{k_{j}}, \dots, y_{k_{p}})$ engendre $E$.
On applique le $T.B.I.$ intermédiaire a la famille génératrice : $(y_{k_{j}})_{j = 1}^{p}$ et sa sous famille libre $()$ ce qui fournit une base $(y_{k_{j}})_{j \in J}$ qui est une sous famille de $(y_{k})_{k \in K}$


#### Corollaire 2 : Théorème de la base incomplète
En dimension finie, on peut compléter toute famille libre en une base

Démonstration : 
Soit $E$ de dimension finie et $(x_{i})_{i \in I}$ une famille libre de $E$. 
Quitte a changer les notations on suppose que $I = [\![1, p]\!]$ ie la famille libre est : $(x_{1}, \dots, x_{p})$. Comme $E$ est de dimension finie, il existe une famille génératrice finie qu'on note : $(x_{p+1}, \dots, x_{n})$
A fortiori : $(x_{1}, \dots, x_{n})$ engendre $E$
En appliquant de $T.B.$intermédiaire à $(x_{i})_{i = 1}^{n}$ et la sous famille libre $(x_{1}, \dots, x_{p})$ on obtient une base sont les premiers vecteurs sont : $x_{1}, x_{2}, \dots, x_{p}$

#### Corollaire 3 : Théorème de l'existence des bases
Tout espace vectoriel de dimension finie possède des bases

Démonstration : 
Par le corollaire 1 appliqué a la famille génératrice $(x)_{x \in E}$ ou par le corollaire 1 appliqué à $()$


#### Exemples ($\mathbb{R}^{3}$ est de dimension infinie par sa base canonique)
1. 
Soient $u_{1} = (1, 1, 1), u_{2} = (1, 2, 3) \in \mathbb{R}^{3}$, 
Comme se sont deux vecteurs non colinéaires $(u_{1}, u_{2})$ est libre
Elle n'est pas génératrice (on "sait" que $Vect(u_{1}, u_{2})$ est un plan de $\mathbb{R}^{2}$, donc pas de $\mathbb{R}^{3}$)
Le $T.B.I.$ assure qu'on peut compléter $(u_{1}, u_{2})$ en une base de $\mathbb{R}^{3}$
-> On peut mettre la structure euclidienne usuelle sur $\mathbb{R}^{3}$ et prendre le vecteur normal au plan obtenu par le produit vectoriel
$$u_{1} \wedge u_{2} = u_{3} = (1, -2, 1)$$
-> Autrement, pour compléter $(u_{1}, u_{2})$ en une base, on sait qu'on peut "piocher" les nouveaux vecteurs dans une famille génératrice de son choix par exemple la base canonique $(e_{1}, e_{2}, e_{3})$


Est-ce que $(u_{1}, u_{2}, e_{1})$ est une base de $\mathbb{R}^{3}$ ? 
On verra plus tard des moyens efficace pour determiner cela

Par exemple : 
$$\det(u_{1}, u_{2}, e_{1}) = \det \begin{array}{|ccc|}
1&1&1 \\
1&2&0 \\
1&3&0
\end{array} = 1 \neq 0$$

2. 
Compléter $((2, 1, 0), (3, 2,  0))$ en une base de $\mathbb{R}^{3}$
Par exemple le vecteur : $(0, 0, 1)$ de la base canonique convient. 

3. 
Peut on extraire de $((1, 0, 0), (0, 1, 0), (1, 2, 3), (4, 5, 6))$ une base de $\mathbb{R}^{3}$ ?
On voit facilement que la base est génératrice
Un calcul des arguments de dimension (a venir) assure qu'elle est liée.
$((1, 0, 0), (0, 1, 0), (1, 2, 3))$ est une base. 
<u>Remarque</u> : le dernier est combinaison linéaire des autres : 
$$(4, 5, 6) = 2(1, 2, 3) + 2(1, 0, 0) + (0, 1, 0)$$
Donc il est inutile. 


# III. Dimension
## 1. Définition
#### Théorème de la dimension
Dans un ev de dimension finie toutes les bases ont le même cardinal, qu'on appelle dimension de $E$ et qu'on note $\dim E$ ou $\dim(E)$. 

Démonstration :
Conséquence immédiate du lemme $B$ : 
Soient $e = (e_{i})_{i = 1}^{n}$ et $f = (f_{j})_{j =1}^{p}$ deux bases de $E$
Si on avait $p>n$ comme $e$ est génératrice, $(f_{j})_{j=1}^{n+1}$ serait lié a fortiori $f$ serait liée, ce qui contredit le fait que $f$ est une base, donc $p\leq n$. 
Par symétrie des rôles $n\leq p$ donc $n = p$


#### Remarque
Cette définition est correcte car il existe des bases en dimension finie

#### Théorème
En dimension $n$ :
- Toute famille libre possède au plus $n$ vecteurs
- Toute famille génératrice possède au moins $n$ vecteurs


Démonstration : 
Soit $E$ un ev de dimension finie $n$ (tq $\dim E = n$)
alors 
une famille de $n+1$ vecteur est liée (par le lemme B) donc a fortiori une famille ayant strictement plus que $n$ vecteurs est liée (sur famille d'une famille liée) donc tout famille libre possède au plus $n$ vecteurs


Soit $f$ une famille ayant strictement moins que $n$ vecteurs.
Si $f$ était génératrice en prenant une base $e$ de $E$ ($n$ éléments) et en appliquant le Lemme $B$, $e$ serait lié. 
CONTRADICTION

Ainsi $f$ n'est pas génératrice. 

Ainsi tout famille génératrice possède au moins $n$ vecteurs. 


#### Théorème
En dimension $n$
une famille de $n$ vecteurs est une base
ssi elle est libre
ssi elle est génératrice

Démonstration : 
Soit $E$ tq $\dim E = n$
et $e$ une famille de $E$ à $n$ vecteurs


Si $e$ est une base elle est libre : Montrons la réciproque : Supposons que $e$ soit libre, 
Si elle n'était pas génératrice on la complèterait en une base (par le TBI) de cardinal strictement plus grand que $n$. 
CONTRADICTION

Donc, $e$ est génératrice et donc, c'est une base de $E$.


Si $e$ est une base, elle est génératrice
Montrons la réciproque. Supposons que $e$ soit génératrice. Si elle était liée on pourrait en extraire une base (Théorème de la base extraire) de cardinal strictement inférieur à $n$, CONTRADICTION, 
Donc $e$ est libre et c'est donc une base de $E$ 


## 2. Exemples
A l'aide des bases canoniques,       
$\dim(\mathbb{K}^{n}) = n$
$\dim(\mathbb{K}_{n}[X]) = n+1$
$\dim(\mathcal{M}_{n, p}(\mathbb{K})) = np$


L'espace vectoriel des solutions : 
- D'une $EDLH1$ à coefs constants est de $\dim 1$
- D'une $EDLH2$ à coefs constants est de $\dim 2$

Avec la notation d'une récurrence homogène linéaire à coefficients constants : 
$$E_{a, b} = \{u \in \mathbb{K}^{\mathbb{N}} | \forall n \in \mathbb{N}, u_{n+2} = au_{n+1} + b u_{n} \}$$

$\dim(E_{a, b}) = 2$

#### Rappel
Une base facile est : $(u, v)$ 


#### Théorème
Soit $E_{1}, \dots, E_{p}$ des ev de $\dim$ finies alors, 
$$\dim\left( \prod_{i=1}^{p} E_{i} \right) = \sum_{i=1}^{p} \dim(E_{i})$$

Démonstration : 
En exhibant une base

Voyons le cas ou $p = 2$ : $E, F$ de dimension finie
$E$ admet une base : $(e_{i})_{i =1}^{n}$
$F$ admet une base : $(e_{j})_{j = 1}^{p}$

Soit $(x, y) \in E \times F$
$$x = \sum_{i = 1}^{n}x_{i}e_{i}$$
$$y = \sum_{j = 1}^{p} y_{i}e_{i}$$
$x_{i}, y_{j} \in \mathbb{K}$
$$(x, y) = (x, 0_{F}) + (0_{E}, y) = \sum_{i = 1}^{n} x_{i}(e_{i}, 0)+ \sum_{j = 1}^{p}y_{j}(0, e_{j})$$
Donc, 
$b = (\tilde{e}_{1}, \dots, \tilde{e}_{n}, \tilde{f}_{1}, \dots, \tilde{f}_{p})$ est génératrice
On peut mq $b$ est libre

Cas général : 
Notons $E = \prod_{j=1}^{p}E_{j}$
On note : $n_{j} = \dim E_{j}$ pour tout $j \in [\![1, p]\!]$, 
et on prend pour chaque $j \in [\![1, p]\!]$, une base : 
$(e_{i_{j}}^{j})_{i_{j} = 1}^{n_{j}}$ base de $E_{j}$
Notons alors : $\tilde{e}_{i_{j}}^{j} = (0_{E_{1}}, \dots, 0_{E_{j-1}}, e_{i_{j}}^{j}, 0_{E_{j+1}}, \dots, 0_{E_{p}}) \in E$
(au $j^{\text{eme}}$ indice)


On pose : $b = (\tilde{e}_{1}^{1}, \tilde{e}_{2}^{1}, \dots, \tilde{e}_{n_{1}}^{1}, \tilde{e}_{1}^{2}, \dots, \tilde{e}_{n_{2}}^{2}, \dots, \tilde{e}_{1}^{p}, \dots, \tilde{e}_{n_{p}}^{p})$

On montre que $b$ est une base de $E$ 
Soit $(x_{1}, \dots, x_{p}) \in E$,
Pour tout $j \in [\![1, p]\!]$, $x_{j} \in E_{j}$ s'écrit : 
$$x_{j} = \sum_{i_{j} = 1}^{n_{j}} \lambda_{i_{j}}^{j}e_{i_{j}}^{j}$$
avec $(\lambda_{i_{j}}^{j})_{i_{j} = 1}^{n_{j}} \in \mathbb{K}^{n_{j}}$
Donc 
$$x = \sum_{j=1}^{p}(0, \dots, 0, x_{j}, 0, \dots, 0) = \sum_{j = 1}^{p}\sum_{i_{j} = 1}^{n_{j}}\lambda_{i_{j}}^{j}\tilde{e}_{i_{j}}^{j}$$
Donc, $b$ engendre $t$.

Soit pour tout $j \in [\![1, p]\!]$, 
une famille de scalaires $(\lambda_{i_{j}}^{j})_{i_{j} = 1}^{n_{j}} \in \mathbb{K}^{n_{j}}$, 
telles que : 
$$\sum_{j = 1}^{p}\sum_{i_{j}=1}^{n_{j}}\lambda_{i_{j}}^{j}\tilde{e}_{i_{j}}^{j}=0$$
ie
$$\left( \sum_{i_{j}}^{n_{j}}\lambda^{1}_{i_{1}}e^{1}_{i_{j}},\dots, \sum_{i_{j} = 1}^{n_{j}} \lambda_{i_{j}}^{j}e_{i_{j}}^{j}, \dots, \sum_{i_{p}}^{n_{p}}\lambda_{i_{p}}^{p}e_{i_{p}}^{p} \right) = (0_{E_{1}}, \dots, 0_{E_{j}}, \dots , 0_{E_{p}})$$

Pour $j \in [\![1, p]\!]$ fixe on a : 
$$\sum_{i_{j}=1}^{n_{j}}\lambda_{i_{j}}^{j}e_{i_{j}}^{j} = 0$$
et comme : 
$(e_{i_{j}}^{j})^{n_{j}}_{j=1}$ est une base de $E_{1}$
elle est libre donc, 
$$\forall i_{j} \in [\![1, n_{j}]\!], \lambda_{i_{j}}^{j} = 0$$
Alors, 
$$\forall j \in [\![1, p]\!], \forall i_{j} \in [\![1, n_{j}]\!], \lambda_{i_{j}}^{j} = 0$$
Ainsi, $b$ est libre
et finalement $b$ est une base de $E$ donc, $E$ est de dimension finie
(famille génératrice finie) et $\dim E$ est le nombre de vecteurs de $b$
ie
$$\sum_{j = 1}^{p} n_{j}$$

# IV. Rang d'une famille finie de vecteurs
Soit $E$ un $\mathbb{K}$-ev quelconque

#### Définition
Soit $p \in \mathbb{N}^{*}$, 
Soient $x_{1}, \dots, x_{p} \in E$, 
Alors $Vect(x_{i})_{i = 1}^{p}$ est de dimension finie (engendré par $(x_{i})_{i = 1}^{p}$)
On appelle rang de $x$ cette dimension : 
$rg(x) = \dim(Vect(x))$


#### Proposition
Pour $p = \dim E$, 
Pour $x_{1}, \dots, x_{p} \in E$, 
$rg(x_{1}, \dots, x_{p}) \leq p$

avec égalité ssi
$(x_{1}, .., x_{p})$ est libre

#### Exemple
$rg((1, 2, 3), (4,5,6),(7,8,9)) = rg(u)$

$(1, 2, 3) = 2(4, 5, 6) - (7, 8, 9)$
Alors
$Vect(u) = Vect((1, 2,3), (4, 5,6))$
or $(1, 2, 3)$ et $(4, 5, 6)$ sont non colinéaires donc ce sev est plan

Ainsi $rg(u) = 2$


### Calcul pratique du rang
#### Lemme
1. Échanger deux vecteurs d'une famille ne change pas le sev engendré, à fortiori cela ne change pas le rang
2. Multiplier un vecteur d'une famille par un scalaire non nul ne change pas de sev engendré donc à fortiori, cela ne change pas le rang. 
3. Ajouter à un vecteur d'une famille une $CL$ des autres ne change pas le sev engendré donc cela ne change pas pas le rang. 

Démonstration : 
Par des doubles inclusions

Pour le 3. : 
Soit : $(x_{1}, \dots, x_{p}) \in E^{p}$, $j \in [\![1, p]\!]$
et
$$\tilde{x}_{j} = x_j + \sum_{i \neq j}\lambda_{i}x_{i}$$
avec $\lambda_{i} \in \mathbb{K}$, 
Alors, 
$$x_{1}, \dots, x_{j-1}, x_{j+1}, \dots, x_{p} \in Vect(x_{1}, \dots, x_{p})$$
et
$$\tilde{x}_{j} \in Vect(x_{1}, \dots, x_{p})$$
Donc, 
$$Vect(x_{1}, \dots, \tilde{x}_{j}, \dots, x_{p}) \subset Vect(x_{1}, \dots, x_{p})$$

<u>Réciproquement</u> : 
$$x_{1}, \dots, x_{j-1}, x_{j+1}, \dots, x_{p} \in Vect(x_{1}, \dots, \tilde{x}_{j}, x_{p})$$
et
$$x_{j} = \tilde{x}_{j} - \sum_{i \neq j} \lambda_{i}x_{i} \in Vect(x, \dots, \tilde{x}_{j}, \dots, x_{p})$$
Ainsi, 
$$Vect(x_{1}, \dots, x_{p}) \subset Vect(x_{1}, \dots, \tilde{x}_{j}, \dots, x_{p})$$


En pratique on effectue un pivot sur les colones :
#### Exemple
$Vect(u_{1}, u_{2}, u_{3})=$ 
$$Vect\left(\begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
4 \\
5 \\
6
\end{pmatrix}, \begin{pmatrix}
7 \\
8 \\
9
\end{pmatrix}\right) =Vect\left(  \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
0 \\
-3 \\
-6
\end{pmatrix}, \begin{pmatrix}
0 \\
-6 \\
-12
\end{pmatrix} \right)$$
($u_{2} \leftarrow u_{2}-4u_{1}$ et $u_{3} \leftarrow u_{3} - 7u_{1}$)

$$ = Vect \left( \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
0 \\
-3 \\
-6
\end{pmatrix} \right)$$
car $\begin{pmatrix} 0 \\ -3 \\ -6\end{pmatrix}$ est colinéaire avec : $\begin{pmatrix} 0 \\ -6 \\ -12\end{pmatrix}$

Donc, 
$$rg\left( \begin{pmatrix} 1 \\
2 \\
3 \end{pmatrix}, \begin{pmatrix}
4 \\
5 \\
6
\end{pmatrix}, \begin{pmatrix}
7 \\
8 \\
9
\end{pmatrix} \right)=2$$


C'est un peu lourd comme notations, on allège
$$\begin{pmatrix}
1&4&7 \\
2&5&8 \\
3&6&9
\end{pmatrix} \underset{c}{\sim} \begin{pmatrix}
1&0&0 \\
2&-3&-6 \\
3&-6&-12
\end{pmatrix} \underset{c}{\sim} \begin{pmatrix}
1&0&0 \\
2&-3&0 \\
3&-6&0
\end{pmatrix} $$
Première equivalence par colones : 
$C_{2} \leftarrow C_{2}-4C_{1}$
$C_{3} \leftarrow C_{3}-7C_{1}$

Deuxième équivalence par colones : 
$C_{3} \leftarrow C_{3} - 2C_{2}$


Cette matrice est échelonnée par colonnes donc le rang de la famille est de nombre de ses colonnes non nulles : $2$

Mais on a plus : cette méthode donne une base du sev :
$$\left( \begin{pmatrix}
1 \\
2 \\
3
\end{pmatrix}, \begin{pmatrix}
0 \\
1 \\
2
\end{pmatrix} \right)$$
Sinon ... donc un espace vectoriel autre que $\mathbb{K}^{n}$, on peut choisir une base et effectuer les calculs sur les coordonées des vecteurs dans cette base. (en colonnes).

# V. Sous espaces et dimension
Soit $E$ un $\mathbb{K}$-ev de dimension finie $n$

#### Propriété
Soit $F \underset{\text{sev}}{\subset} E$
Alors $F$ est de dimension finie $p$
$p \leq n$
avec égalité ssi $E = F$

Démonstration : 
Par le lemme A appliqué à la famille génératrice $(x)_{x \in F}$
et à la sous famille libre $()$
on obtiens que : 
$$\begin{cases}
\text{soit } F = \{0\} \\
\text{soit il existe } x_{1} \in F \text{ tq } (x_{1}) \text{ soit libre}
\end{cases}$$

On recommence le processus tant que la famille construite est libre. 
Il y a un nombre fini d'étapes ($\leq n$)
car toute famille de $F$ avec $n+1$ vecteurs est en particulier une famille de $E$ avec $\dim E +1$ vecteurs donc est liée.
Lorsque cela s’arrête on a une base de $F$ qui a un nombre fini de vecteurs, qui de plus est inférieur ou égal à $n$. 

Soit $(e_{1}, \dots, e_{p})$ une base de $F$, 
Par le $TBI$ on peut compléter une base $(e_{1}, \dots, e_{p}, e_{p+1}, e_{n})$ de $E$
donc, $p\leq n$ et si $p = n$, on a rajouté aucun vecteur ie $E = Vect(e_{1}, \dots, e_{p}) = F$

<u>Réciproquement</u> : 
Si $F = E$ alors $\dim F = \dim E$ ie $p =n$


Conséquence des sev de $\mathbb{R}^{2}$ et $\mathbb{R}^{3}$ (déjà vue à la main)

#### Théorème
Tout $F \underset{\text{sev}}{\subset} E$ admet des supplémentaires et si $G$ est un de ses supplémentaires, $E = F \oplus G$

Démonstration :
Soit $F \underset{\text{sev}}{\subset} E$, 
Par la propriété précédente il est de dimension finie, donc admet une base $(e_{1}, \dots, e_{p})$.

on complète par le TBI cette base en une base de $E$ : $(e_{1}, \dots, e_{p}, e_{p+1}, \dots, e_{n})$
et on pose : 
$$G = Vect(e_{p+1}, \dots, e_{n})$$
Par un résultat du chapitre précédent on a $F \oplus G = E$

#### En toute généralité (Rappel)
- Un supplément de $E$ est $\{0\}$ (c'est le seul)
- Un supplément de $\{0\}$ est $E$ (c'est le seul)

Si $\{0\} \subsetneq F \subsetneq E$ de dimension finie
alors il y a une infinité de supplémentaires
Excalibur 1


#### Propriété
Toute décomposition en somme directe :
$E = F \oplus G$, il existe une base adaptée. 
Et :
$$\dim F + \dim G =n$$
ie $$\dim G = n - \dim F$$

Démonstration : 
Comme $E$ est de dimension finie, $F$ et $G$ aussi. On prend une base de $F$ et une base de $G$ et cela forme une base de $F \oplus G =E$ (en les concaténant) qui est adapté a cette décomposition de $E$ (voir le chapitre précédent)
Par les cardinaux des bases $\dim F + \dim G = n$


#### Remarque
Plus généralement en appliquant ce résultat à $E' = F \oplus G$ par deux sev de $E$ en somme directe on a : 


#### Propriété
Si
$$\begin{cases}
F \underset{\text{sev}}{\subset} E\\
G \underset{\text{sev}}{\subset} E
\end{cases}$$
Sont en somme directe 
alors
$$\dim (F \oplus G) = \dim F + \dim G$$

#### Corollaire 
Pour $F \underset{\text{sev}}{\subset} E$, tous les supplémentaires de $F$ ont la même dimension ($n - \dim F$)

#### Exemple
Dans $\mathbb{R}^{3}$ les supplémentaires d'un plan sont les droites vectorielles non inclues dans ce plan :
Excalibur 2

#### Propriété : Caractérisation 1
Soient $F, G \underset{\text{sev}}{\subset} E$,
Alors $F$ et $G$ sont supplémentaires ssi : 
$$\begin{cases}
F \cap G = \{0\} \\
\dim F + \dim G = n
\end{cases}$$

Démonstration : 
"$\Rightarrow$" : Supposons $F \oplus G = E$, 
Par définition des sommes directes de 2 sev, $F \cap G = \{0\}$
De plus on a vu a l'instant que $\dim F + \dim G = n$

"$\Leftarrow$" : Supposons que
$$\begin{cases}
F \cap G = \{0\} \\
\dim F + \dim G = n
\end{cases}$$
Alors par définition des sommes directes de 2 sev, comme $F \cap G = \{0\}$, $F + G = F \oplus G$
Puis $\dim (F \oplus G) = \dim F + \dim G= n$
Comme $F \oplus G$ est un sev de $E$ de dimension $n$
$$F \oplus G = E$$

#### Exemple
$\mathcal{M}_{n}(\mathbb{K}) = \mathcal{S}_{n}(\mathbb{K}) +\mathcal{A}_{n}(\mathbb{K})$
$\dim(\mathcal{M}_{n}(\mathbb{K}))=n^{2}$

Question : Dimension de $\mathcal{S}_{n}(\mathbb{K})$ et $\mathcal{A}_{n}(\mathbb{K})$?

On essaye avec $n = 2$ : 
$$S = \begin{pmatrix}
a&b \\
b&d
\end{pmatrix} = a\begin{pmatrix}
1&0 \\
0&0
\end{pmatrix} + d \begin{pmatrix}
0&0 \\
0&1
\end{pmatrix} + b\begin{pmatrix}
0&1 \\
1&0
\end{pmatrix}$$
et $S = 0 \Rightarrow a=b=d=0$
Donc, 
$$\left(\begin{pmatrix}
1&0 \\
0&0
\end{pmatrix}, \begin{pmatrix}
0&1 \\
1&0
\end{pmatrix}, \begin{pmatrix}
0&0 \\
0&1
\end{pmatrix}\right)$$
est une base de $\mathcal{S}_{2}$
Donc, 
$\dim(\mathcal{S}_{2}(\mathbb{K})) = 3$
et $\dim (\mathcal{A}_{n}(\mathbb{K})) = 4 - 3 = 1$

Remarque : 
$\mathcal{A}_{2}(\mathbb{K})=Vect\begin{pmatrix}0&1 \\-1&0\end{pmatrix}$


Alors,
$\dim(\mathcal{S}_{n}(\mathbb{K})) = \frac{{n^{2}+n}}{2}$
$\dim(\mathcal{A}_{n}(\mathbb{K})) = \dim \mathcal{M}_{n}(\mathbb{K}) - \dim \mathcal{S}_{n}(\mathbb{K}) = \frac{n^{2}-n}{2}$

Ainsi $\dim(\mathcal{A}_{n}(\mathbb{K})) + \dim \mathcal{S}_{n}(\mathbb{K}) = n^{2}$


$$\mathbb{K}_{n}[X] = Vect(1, X^{2}) \oplus Vect(X, X^{3})$$


#### Théorème : Formule de Grassmann
Soit $E$ un ev quelconque, 
Pour $F, G \underset{\text{sev}}{\subset} E$ qui sont de dimension finie, 
Alors,
$$F + G \text{ est de dimension finie}$$
$$\dim(F+G) = \dim F + \dim G - \dim(F \cap G)$$


Démonstration : 
Soit $F, G \underset{\text{sev}}{\subset} E$ qu'on suppose de dimension finie, 
1. 
Soit $(x_{i})_{i = 1}^{p}$ une base de $F$
Soit $(y_{j})_{j =1}^{q}$ une base de $G$
Alors $F+G = Vect((x_{i})_{i = 1}^{p}, (y_{j})_{j =1}^{q})$
Comme $F+G$ admet une famille génératrice finie, c'est un sev de $E$ de dimension finie.

2. 
On note $p = \dim F$, $q = \dim G$, $r = \dim(F\cap G)$
Soit $(e_{p-r+1}, \dots, e_{p})$ une base de $F\cap G$
On la complète d'une par en une base de $F$ :
$$(e_{1}, \dots, e_{p-r}, e_{p-r+1}, \dots, e_{p})$$
D'autre part en une base de $G$ :
$$(e_{p-r+1}, \dots, e_{p}, e_{p+1}, \dots, e_{q+(p-r)})$$
On obtiens une famille : 
$$e = (e_{1}, \dots, e_{q+p-r})$$

Ces vecteurs sont élément de $F+G$ 
Par ailleurs tout vecteur $x \in F +G$
s'écrit $x = x_{F} + x_{G}$ ou $x_{F} \in F$ et $x_{G} \in G$
et 
$x_{F}$ est CL de $(e_{1}, \dots, e_{p})$
$x_{G}$ est CL de $(e_{p-r+1}, \dots, e_{q+p-r})$
Donc, 
$x$ est CL de $e$, 
Ainsi, $F+G = Vect(e)$

Montrons que $e$ est libre
Soit $(\lambda_{i})_{i = 1}^{q+p-r} \in \mathbb{K}^{q+p-r}$ tq 
$$\sum_{i =1}^{q+p-r} \lambda_{i}e_{i} = 0$$
On a :
$$\sum_{i=1}^{p-r}\lambda_{i}e_{i} + \sum_{i = p-r+1}^{p}\lambda_{i}e_{i} + \sum_{i = p+1}^{q+p-r}\lambda_{i}e_{i} = 0$$
On pose : 
$$y = \sum_{i=1}^{p-r}\lambda_{i}e_{i} + \sum_{i = p-r+1}^{p}\lambda_{i}e_{i}$$
Et 
$$y_{1} = \sum_{i=1}^{p-r}\lambda_{i}e_{i} \text{ puis } y_{2} =  \sum_{i = p-r+1}^{p}\lambda_{i}e_{i}$$
Alors,
D'une part : $y = Vect(e_{i})_{i = 1}^{p} = F$, 
D'autre part :
$$y = - \sum_{i = p+1}^{q+p-r}\lambda_{i}e_{i} \in Vect(e_{i})_{i = p+1}^{q+p-r} \subset G$$
Donc, $y \in F \cap G$
Or puisque $(e_{1}, \dots, e_{p})$ est une base de $F$, 
$$F = Vect(e_{1}, \dots, e_{p+r}) \oplus Vect(e_{p-r+1}, \dots, e_{p})$$
$y$ s'écrit $y = y_{1}+y_{2}$
Avec $y_{1} \in F$, et $y_{2} \in F \cap G$
de manière unique
Or $y \in F \cap G$ donc, $y = 0 + y$ ($0 \in F$ et $y \in F \cap G$)
Par unicité de l'écriture : $y_{1} = 0$
ie 
$$\sum_{i = 1}^{p-r} \lambda_{i}e_{i} = 0$$
et comme $(e_{1}, \dots, e_{p-r})$ est libre (sous famille d'une base de $F$) alors $\forall i \in [\![1, p-r]\!], \lambda_{i} = 0$

On a alors : 
$$\sum_{i = p-r+1}^{q+p-r} \lambda_{i}e_{i} = 0$$
Or $(e_{p-r+1}, \dots, e_{p+q-r})$ est libre (base de $G$) donc,
$$\forall i \in [\![p-r+1, q+p-r]\!], \lambda_{i} = 0$$
Finalement tous les $\lambda_{i}$ sont nuls
Ainsi $e$ est libre et finalement $e$ est une base de $F+G$
Donc, 
$$\dim(F+G) = q+p-r = \dim F + \dim G - \dim F \cap G$$

#### Remarque
Il n'y a pas de formule de Grassmann pour $n\geq 3$, 

#### Corollaire : Caractérisation 2
Soient $E$ un ev de $\dim$ $n$
et $F, G \underset{\text{sev}}{\subset} E$, 
Alors, 
$$E = F \oplus G \Leftrightarrow \begin{cases}
F+G=E \\
\dim F + \dim G = n
\end{cases}$$
Démonstration : 
"$\Rightarrow$" : Déja vue
"$\Leftarrow$" : Supposons que $F+G = E$ et $\dim F + \dim G = n$
Alors $\dim (F \cap G) = \dim F + \dim G - \dim (F+G) = n-n = 0$
Donc, $F \cap G = \{0\}$
et par la caractérisation 1, comme :
$$\begin{cases}
F \cap G = \{0\} \\
\dim F + \dim G = n
\end{cases}$$
Alors, 
$$E  = F \oplus G$$


#### Propriété
Soit $R$ quelconque et $F_{1}, \dots, F_{p} \underset{\text{sev}}{\subset} E$ de dimension finies
qu'on suppose en somme directe alors en concaténant des bases de $F_{i}$ ($i \in [\![1, p]\!]$)
on obtiens une base adaptée à la somme directe : 
$$F_{1} \oplus F_{2} \oplus \dots \oplus F_{p}$$


#### Corollaire
Avec les notations précédentes, 
$$\dim\left(\overset{p}{\underset{i = 1}{\oplus}} F_{i}\right) = \sum_{i=1}^{p} \dim F_{i}$$

#### Théorème
Pour $F_{1}, \dots, F_{p}$ des sev de dimension finie de $E$ un ev quelconque, ,
$$\dim\left( \sum_{i = 1}^{p} F_{i} \right) \leq \sum_{i=1}^{p}\dim F_{i}$$
Avec égalité si la somme est directe.
