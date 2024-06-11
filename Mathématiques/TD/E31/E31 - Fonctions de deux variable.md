# Exercice 1
Soit $A \subset \mathbb{R}^{2}$, 
Si $A = \mathbb{R}^{2}$, on ne peut pas prendre d'élément dans $\mathbb{R} \setminus A$
Sinon,
Soit $X \in \mathbb{R}^{2} \setminus A$ tel que $A \sqcup \{ X \}$ soit un ouvert

Est ce que $A$ est un ouvert?
Soit $X_{0} \in A \sqcup \{ X \}$, 
il existe un $\varepsilon>0$ tel que : 
$$B_{o}(X_{0}, \varepsilon) \subset A \sqcup \{ X \}$$
par la définition des ouverts
On prend 
$A = B_{o}(0, 1) \setminus \{ 0 \}$, et $0 \in A \sqcup \{ 0 \}$
Soit $X \in A$, 
Mq $\forall X \in A, \exists \varepsilon > 0, B_{o}(X, \varepsilon) \subset A$

On pose $\varepsilon = \min(\left|\left| X \right|\right|, 1- \left|\left| X \right|\right|)>0$, 
Soit $Y \in B_{o}(X, \varepsilon)$, 
Mq, $B_{o}(X, \varepsilon) \subset A$, ie $0 < \left|\left| Y-X \right|\right| < 1$, 
$$\left|\left| Y - X \right|\right| <  \varepsilon \leq \left|\left| X \right|\right| $$
et 
$$\left|\left| X \right|\right| = \left|\left| X-Y+Y \right|\right| \leq \left|\left| Y-X \right|\right| + \left|\left| Y \right|\right| < \varepsilon + \left|\left| Y \right|\right| $$ Donc, 
$$\left|\left| Y \right|\right| > \left|\left| X \right|\right| - \varepsilon \geq 0$$
Donc, $Y \neq 0$,
$$\left|\left| Y \right|\right| \leq \left|\left| X \right|\right| + \left|\left| Y-X \right|\right| < \left|\left| X \right|\right| + \varepsilon \leq \left|\left| X \right|\right| +1-\left|\left| X \right|\right| $$
Donc, 
$$Y \in B_{o}(0, 1)$$
Ainsi, 
$$Y \in A$$

# Exercice 2
Soit $X_{0} = (x_{0}, y_{0}) \in A$, 
Mq $\exists \varepsilon >0, B_{o}(X_{0}, \varepsilon) \subset A$
On à deux cas :
- $y < 1$
  On montre par inégalité triangulaire que $B_{o}(y, 1-y) \subset A$

$y >1$, 
On pose : $\varepsilon = \min(y_{0} - \left\lfloor y_{0} \right\rfloor, y_{0} + \left\lceil y_{0} \right\rceil)$
Mq $B_{o}(X, \varepsilon) \subset A$
Ainsi, $A$ est ouvert. 
___
Soit $\varepsilon > 0$, Mq $B_{o}(0, \varepsilon) \nsubseteq B$ : 
On prend $n = \left\lceil \frac{1}{\varepsilon} \right\rceil + 1 \in \mathbb{N}^{*}$,
On a : 
$$0 < \frac{1}{\varepsilon} < n$$
Donc, 
$$\frac{1}{n} < \varepsilon$$
Donc, 
$$\left( 0, \frac{1}{n} \right) \in B_{o}(0, \varepsilon) \setminus B$$
Ainsi, $B_{o}(0, \varepsilon) \nsubseteq B$





# Exercice 7
## 1.
Soit $f \in \mathcal{C}_{\mathbb{R}}^{1}(\mathbb{R}^{2})$,
$$(u, v) \mapsto g(u,v) = f\left( \frac{u+v}{2}, \frac{u-v}{2} \right)$$
On a :
$$\varphi :(u, v) \mapsto \frac{u+v}{2}$$
$$\psi : (u, v) \mapsto \frac{u-v}{2}$$
Sont des fonctions polynômes de deux variables, donc de classe $\mathcal{C}^{1}$ sur $\mathbb{R}^{2}$. 
Ainsi, comme $f \in \mathcal{C}_{\mathbb{R}}^{1}(\mathbb{R}^{2})$,
On a bien $g \in \mathcal{C}_{\mathbb{R}}^{1}(\mathbb{R}^{2})$. 
___
$$\frac{\partial g}{\partial u}(u, v) = \frac{1}{2} \left( \frac{\partial f}{\partial x} (\varphi, \psi) + \frac{\partial f}{\partial y} (\varphi, \psi)  \right)$$
$$\frac{\partial g}{\partial v}(u, v) = \frac{1}{2} \left( \frac{\partial f}{\partial x} (\varphi, \psi) - \frac{\partial f}{\partial y} (\varphi, \psi)  \right)$$

## 2.
#### Analyse
Supposons que : 
$$\boxed{\frac{\partial f}{\partial x}  + \frac{\partial f}{\partial y} = f }$$
On a :
$$\frac{\partial f}{\partial x}  = 2\frac{\partial g}{\partial u} -\frac{\partial f}{\partial y}$$
et 
$$\frac{\partial f}{\partial y} = \frac{\partial f}{\partial x} - 2\frac{\partial g}{\partial v}$$

Donc, 
$$\frac{\partial f}{\partial x} = 2 \frac{\partial g}{\partial u} + 2\frac{\partial g}{\partial v} -\frac{\partial f}{\partial x} $$
Alors, 
$$\boxed{\frac{\partial f}{\partial x}(\varphi, \psi) = \frac{\partial g}{\partial u}(u, v) + \frac{\partial g}{\partial v}(u, v)}$$
Par analogie : 
$$\boxed{\frac{\partial f}{\partial y}(\varphi, \psi) = \frac{\partial g}{\partial u}(u, v) -\frac{\partial g}{\partial v}(u, v)  }$$

Ainsi, en remplaçant dans l'équation de départ :
$$\boxed{\frac{\partial }{\partial u}f\left( \frac{u+v}{2}, \frac{u-v}{2} \right)  = \frac{1}{2}f\left( \frac{u+v}{2}, \frac{u-v}{2} \right)}$$

C'est une EDL 1 à coef constants
$f_{0} = 0$
ou 
$$f_{1}\left( \frac{u+v}{2}, \frac{u-v}{2} \right) = \exp\left( \frac{u}{2} \right) = \exp\left( \frac{1}{2}\left( \frac{u+v}{2} + \frac{u-v}{2} \right)\right)$$
ou

#### Synthèse
$$\frac{\partial f_{1}}{\partial u}(\varphi, \psi) = \frac{1}{2} \exp \left( \frac{u}{2} \right)$$
$$\frac{\partial f_{1}}{\partial v}(\varphi, \psi) = \frac{1}{2} \exp \left( \frac{u}{2} \right)$$
ca marche bien !

### Correction
$$\forall(x, y) \in \mathbb{R}^{2}, \frac{\partial f}{\partial x} (x, y) + \frac{\partial f}{\partial y}(x, y) = f$$
$$\Leftrightarrow \forall (u, v) \in \mathbb{R}^{2}, 2 \frac{\partial g}{\partial u} (u, v) = g(u, v)$$
Car l'application : 
$$(u, v) \mapsto \left( \frac{u+v}{2}, \frac{u-v}{2} \right)$$
est bijective $\det(\uparrow) = -\frac{1}{2}$

#### Analyse
Supposons $g$ solution de 
$$2 \frac{\partial g}{\partial u} (u, v) = g(u, v)$$
Soit $v \in \mathbb{R}$ fixé :
Alors, l'application $z : u \mapsto g(u, v)$
vérifie l'EDL1 $z' = \frac{1}{2}z$
Donc il existe $C(v) \in \mathbb{R}$ tel que :
$$\forall u \in \mathbb{R}, g(u, v) = C(v)e^{ \frac{u}{2} }$$
On a alors, 
$$C(v) = g(0, v)$$
Donc, $C : v\mapsto C(v)$ est de classe $\mathcal{C}^{1}$ sur $\mathbb{R}$
Ainsi, 
$$g : (u, v) \mapsto C(v)e^{ \frac{u}{2} }$$
avec $C \in \mathcal{C}_{\mathbb{R}}^{1}(\mathbb{R})$

#### Synthèse
Un calcul immédiat prouve qu'une telle solution est bien solution

envie de rejoindre papa Johnny

# Exercice 8
$$f : (x, y) \mapsto (x^{2} + y^{2})e^{ x^{2}-y^{2} }$$
$(x, y) \mapsto x^{2}-y^{2}$ est polynomiale de classe $\mathcal{C}^{1}$ sur $\mathbb{R}^{2}$ comme $\exp \in \mathcal{C}^{1}(\mathbb{R})$, la règle de la chaîne affirme que : $(x, y) \mapsto e^{ x^{2}-y^{2} }$ est de classe $\mathcal{C}^{1}$ sur $\mathbb{R}^{2}$
Par produit de fonctions de classe $\mathcal{C}^{1}$ sur $\mathbb{R}^{2}$, $f \in \mathcal{C}_{\mathbb{R}}^{1}(\mathbb{R}^{2})$

On calcule les dérivés partielles : 
$$\frac{\partial f}{\partial x}(x, y) = 2xe^{ x^{2}-y^{2} }+(x^{2}+y^{2})2xe^{ x^{2}-y^{2} }$$
Alors, 
$$\boxed{\frac{\partial f}{\partial x} = 2xe^{ x^{2}-y^{2} }(1+x^{2}+y^{2}) }$$
et 
$$\boxed{\frac{\partial f}{\partial y} = 2ye^{ x^{2}-y^{2} }(1-x^{2}-y^{2}) }$$

#### Analyse
Supposons que $(x, y)$ est un extremum de $f$ (c'est donc un point critique)
On résout le système : 
$$\begin{cases}
2xe^{ x^{2}-y^{2} }(1+x^{2}+y^{2}) = 0 \\
2ye^{ x^{2}-y^{2} }(1-x^{2}-y^{2}) = 0
\end{cases}$$
Alors,  comme $2e^{ x^{2}-y^{2} } \neq 0$
$$\begin{cases}
x(1+x^{2}+y^{2}) = 0 \\
y(1-x^{2}-y^{2}) = 0
\end{cases}$$
Alors, 
On à donc par la première ligne que $x = 0$
Alors, 
$$y(1-y^{2}) = 0$$
Donc, $y \in \{ -1, 0, 1 \}$
Ainsi, 
$$\boxed{(x, y) \in \{ (0, -1), (0, 0), (0, 1) \}}$$

#### Synthèse
Pour $(x, y) \neq (0, 0)$
On a :
$f(x, y)$ qui est un produit de facteurs strictement positifs donc, $f(x, y) > 0$
Or $f(0, 0) = 0$ 
Donc, 
$f$ admet un minimum global strict en $(0, 0)$
