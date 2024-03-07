Voir dans le fichier [[Info/Cours/Chapitre 11/CH11.ml]] pour les références aux fonctions cités ici
# Exercice 2
## 1. Fonction recherche : 
#### Terminaison
- Cas de base : La fonction recherche est définie pour un sous arbre vide
- Induction : Si la fonction $\text{recherche g v}$ termine et $\text{recherche g v}$ (voir le fichier .ml dans le dossier : ) termine alors la fonction recherche termine

#### Induction
- Cas de base : Si $a$ est vide, alors pour tout élément $x$, $x \in a$. 
- Si $a$ est non vide de la forme : $N(e, g, d)$
  - Si $x=e$ : alors $x \in d$
  - Si $x < e$ : $x \in a \Rightarrow x \in g$
  - Si $x > a$ : $x \in a \Rightarrow x \in d$


## 2. Fonction ajout
- Terminaison : Raisonnement analogue a la recherche
- Correction : 
  - Cas de base : 
    - Si $a$ est vide, l'arbre renvoyé par $ajout(a, x)$ est : $N(x, E, E)$
    - Si $a$ est de la forme $N(e, g, d)$ avec $e=x$, $ajout(a, x)$ renvoie : $a = N(e, g, d)$ qui est un ABR.
  - Induction : 
    SI $a = N(e, g, d)$ avec : 
    $e > x$ : $ajout(g, x)$ renvoie $N(e, ajout(g, x), d)$ 
    - Si $ajout(g, x)$ est un ABR qui contient $x$ et les éléments de $g$ alors $N(e, ajout(g, x), d)$ est un ABR.
    $e<x$ : raisonnement analogue
