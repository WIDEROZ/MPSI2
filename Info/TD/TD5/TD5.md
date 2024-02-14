## Exercice 3
### III.
#### 1. Par induction sur $n_{1}$ : 
- Si $n_{1} = Z$ : $+(Z, S(n_{2})) = S(n_{2}) = S(+(Z, n_{2}))$

- Soit $n_{1}$ tel que pour tout entier de Peano $n_{2}$, 
$$+(n_{1}, S(n_{2})) = S(+(n_{1}, n_{2}))$$
On a : 
$$+(S(n_{1}), S(n_{2})) = S(+(n_{1}, S(n_{2}))) = S(S(+(n_{1}, n_{2}))) $$
$$= S(+(S(n_{1}), n_{2}))$$

#### 2. Par induction sur $n_{1}$
 - Si $n_{1} = Z$ : 
   $$+(Z, +(n_{2}, n_{3})) = +(n_{2}, n_{3}) = +(+(Z, n_{2}), n_{3})$$

- Soit $n_{1}$ tel que $+(n_{1}, +(n_{2}, n_{3})) = +(+(n_{1}, n_{2}), n_{3})$
  $$+(S(n_{1}), +(n_{2}, n_{3})) = S(+(n_{1}, +(n_{2}, n_{3}))) = S(+(+(n_{1}, n_{2}), n_{3}))$$
  $$= +(S(+(n_{1}, n_{2})), n_{3}) = +(+(S(n_{1}), n_{2}), n_{3})$$

#### 3. 
L'ensemble des couples entrer de Peano est définie de la façon suivante :
- $(Z, Z)$ est un entier couple de Peano
- Si $(n_{1}, n_{2})$ est un entier couple de Peano alors $(S(n_{1}), n_{2})$ et $(n_{1}, S(n_{2}))$ son des couples d'entiers de Peano
- Si $(n_{1}, n_{2}) = (Z, Z)$ : $+(n_{1}, n_{2}) = +(Z, Z) = +(n_{2}, n_{1})$
- Soit un couple $(n_{1}, n_{2})$ tel que $+(n_{1}, n_{2}) = +(n_{2}, n_{1})$ 
  $$+(S(n_{1}), n_{2}) = S(+(n_{1}, n_{2})) = S(+(n_{1}, n_{2})) = +(n_{2}, S(n_{1}))$$
  Ainsi, 
  $$+(n_{1}, S(n_{2})) = S(+(n_{1}, n_{2})) = S(+(n_{2}, n_{1})) = +(S(n_{2}), n_{1})$$


# Exercice 5
#### 1.
Soit $\mathcal{R}$ une relation d'ordre : 
- Reflexive
- Antisymétrique
- Transitive

Mq $\mathcal{R}^{-1}$ est une relation d'ordre : 
###### Réflexivité
Soit $x \in E$, 
On a :
$(x, x) \in \mathcal{R}$, donc $(x, x) \in \mathcal{R}^{-1}$

###### Antisymétrie
Si $x \mathcal{R}^{-1} y$ et $y \mathcal{R}^{-1} x$ alors
$y \mathcal{R} x$ et $x \mathcal{R} y$, Donc $x=y$

###### Transitivité
Si $x \mathcal{R}^{-1} y$ et $y \mathcal{R}^{-1} z$, 
Alors,
$y \mathcal{R} x$ et $z \mathcal{R} y$
Donc, $z \mathcal{R} x$
Ainsi, $x \mathcal{R}^{-1} z$

#### 2. 
Non, Contre exemple : $(\mathbb{N}, \leq)$

w