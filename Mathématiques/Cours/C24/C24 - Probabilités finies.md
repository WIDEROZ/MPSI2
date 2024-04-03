#### Problème 1
$$\mathcal{P}(\text{"Deux eleves de cette classe soit nées le même jour de l'année"})$$
$$ 1 - \frac{365!}{365^{42}(365-42)!} \approx -0.085 969+1 = 0.914 031$$

Les hypothèses sont : 
- Une année a 365 jours
- Le jour de naissance de chaque élève est tiré avec équiprobabilité
- Les jours de naissance des élèves (différents) sont "indépendants"

(Partie de modélisation $\uparrow$)

Sous ces hypothèses les 42-uplets de jours de naissance de la classe (ordre alphabétique) sont équiprobables. 

Ainsi, $\Omega = [\![1, 365]\!]^{42}$ est muni d'une probabilité uniforme et en conséquence Pour $A \subset \Omega$, 
$$\mathcal{P}(A) = \frac{|A|}{|\Omega|}$$
En posant l’événement (énoncé d'évenement): 
$$A : \text{"Les jours des naissances sont 2 a 2 } \neq \text{"}$$
on a : $A = \mathcal{A}_{42}([\![1, 365]\!])$
Donc, $|A| = \frac{365!}{(365-42)!}$
Donc, 
$$\mathcal{P}(A) =  \frac{365!}{365^{42}(365-42)!} \approx0.085 \space 969$$
