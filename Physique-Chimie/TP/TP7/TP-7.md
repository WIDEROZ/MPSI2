# I. Méthode de dichotomie
## 1.
- Définir les bornes de la recherche dichotomique sur la fonction et le pas sur lequel on recherche f(x) = 0
- Il faut que f soit monotone

- Pour f croissante sur son intervalle(resp. décroissante), on retiens la valeur de f appliqué au milieu de l'intervalle, on continue la recherche sur l'intervalle : \[début; f(milieu de l'intervalle)\] (resp. \[f(milieu de l'intervalle); fin\]) si la valeur du milieu est plus grande (resp. plus petite) que 0. 

- On s’arrête quand on a trouvé 0 au milieu de l'intervalle et on renvoie cette valeur, ou quand on a pas trouvé de racines c'est a dire quand la borne inférieure =  borne supérieure
## 2.
```python
def recherche_racine_dichotomie(f, inf, sup, eps):
	if f(sup) - f(inf) > 0:
		while sup - inf > eps:
			mid = (sup+inf)/2
			if f(mid) > 0 :
				sup = mid
			else:
				inf = mid
	else:
		while sup - inf > eps:
			mid = (sup+inf)/2
			if f(mid) > 0 :
				inf = mid
			else:
				sup = mid
	return mid
```
## 3.
```python
def f(x):
	return (x-3)*(x-10)

print(recherche_racine_dichotomie(f, -5, 5, 0.000001))
```

La console nous retourne : 3.0000001192092896

## 4.
```python
def recherche_racine_dichotomie(f, inf, sup, eps):
	i = 0
	if f(sup) - f(inf) > 0:
		while sup - inf > eps:
			mid = (sup+inf)/2
			if f(mid) > 0 :
				sup = mid
			else:
				inf = mid
			i += 1
	else:
		while sup - inf > eps:
			mid = (sup+inf)/2
			if f(mid) > 0 :
				inf = mid
			else:
				sup = mid
			i += 1
	return i
```
# II. Méthode de Newton
## 1.
- Le principe de la méthode de newton est de trouver une racine approchée de f en faisant tendre : $x_{n+1} = x(n) - \frac{f(x_{n})}{f'(x_{n})}$ vers + $\infty$

## 2.
```python
def recherche_racine_newton(f, x0, df, eps):
	if df(x0) > 0:
		if f(x0) > 0:
			while f(x0) > eps:
				x0 = x0 - (f(x0)/df(x0))
		else:
			while f(x0) < eps:
				x0 = x0 - (f(x0)/df(x0))
	else:
		if f(x0) > 0:
			while f(x0) > eps:
				x0 = x0 - (f(x0)/df(x0))
		else:
			while f(x0) < eps:
				x0 = x0 - (f(x0)/df(x0)) 
	return x0
```
