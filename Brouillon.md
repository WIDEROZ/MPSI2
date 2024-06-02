# Lemme 1
Soit $p \in \mathbb{N}^{*}$, 
Soit $(e_{i})_{i = 1}^{p}$ une famille orthonormée, 
Soit $f \in E \setminus Vect(e_{i})_{i  =1}^{p}$, 
Il existe un unique $e_{p+1} \in  E \setminus Vect(e_{i})_{i  =1}^{p}$ tel que : 
- $Vect(e_{i})_{i = 1}^{p+1} = Vect(e_{1}, \dots, e_{p}, f)$
- $\left< f, e_{p+1} \right> > 0$
- $(e_{i})_{i = 1}^{p+1}$ soit orthonormée

Démonstration : 
###### Analyse
Supposons que les hypothèses du haut soient vérifiés : 
il existe $(\lambda_{i})_{i=  1}^{p} \in \mathbb{R}^{[\![1, p]\!]}$ et $\lambda \in \mathbb{R}$ tels que :
$$e_{p+1} = \sum_{i = 1}^{p} \lambda_{i} e_{i} + \lambda f$$
Alors comme $(e_{i})_{i= 1}^{p+1}$ est orthonormée, 
Soit $j \in [\![1, p]\!]$, 
$$0 = \left< e_{j}, e_{p+1} \right> = \left< e_{j},  \sum_{i = 1}^{p} \lambda_{i} e_{i} + \lambda f \right> = \lambda_{j} + \lambda\left< e_{j}, f \right> $$
Donc, 
$$\lambda_{j} = -\lambda \left< f, e_{j} \right> $$

$$e_{p+1} =\lambda\left(f-  \sum_{i = 1}^{p} \left< f, e_{i} \right> e_{i} \right) = \lambda u$$
Alors,  
$$1 = \left< e_{p+1}, e_{p+1} \right> = \lambda \left< e_{p+1}, f \right> > 0 $$
par hypothèse $\left< e_{p+1}, f \right> > 0$
Alors, $\lambda > 0$, 
Ainsi, 
$$

$$