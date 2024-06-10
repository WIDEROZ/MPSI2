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

$f = 0$
