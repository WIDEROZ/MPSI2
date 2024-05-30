Montrer que
$$\forall n \in \mathbb{N}, \forall x \in \mathbb{R}_{+}, e^{ x }\geq 1+x+\frac{x^{2}}{2}+ \dots+\frac{x^{n}}{n!}$$
Soit $n \in \mathbb{N}$
Soit $x \in \mathbb{R}_{+}$
Alors, pour $f : t \mapsto e^{ t }$
Qui est de classe $\mathcal{C}^{\infty}$, 
$$e^{ x } = \sum_{k = 0}^{n} \frac{x^{k}}{k!}f^{(k)}(0) + \int _{0}^{x} \frac{(x-t)^{n}}{n!} f^{(n+1)}(t) \, dt $$
$$e^{ x } = \sum_{k = 0}^{n} \frac{x^{k}}{k!} + \int_{0}^{x} \frac{(x-t)^{n}}{n!} e^{ t } \, dt$$
et 
$$\int_{0}^{x} \frac{(x-t)^{n}}{n!} e^{ t } \, dt \geq 0$$
___
On applique l'inégalité de Taylor-Lagrange :
Pour $n \in \mathbb{N}$, 
on applique l'inégalité de Taylor-Lagrange à l'ordre $n$ entre $0$ et $x$ car $\exp$ est de classe $\mathcal{C}^{\infty}$
$$\left| R_{n}\right|\leq \frac{\left| x-0\right|^{n+1}}{(n+1)!}\max_{}\left| \exp^{(n+1)}\right|$$