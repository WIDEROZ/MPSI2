# 1.
Tri a bulle.ml Photo 14/11
# 2.
A chaque itération de la boucle, ne nombre d'itération de la boucle intérieure est majoré par n. Le nombre d'itérations de la boucle principale intérieure est inférieur à n.
Donc le nombre total d'itérations de la boucle principale est inférieur ou égal a n² : la complexité de l'algorithme est en $\Theta(n^2)$ .
# 3.
L'algorithme contient des boucles for exclusivement, donc l'algorithme se termine
# 4.
On considère la propriété P(i) à la fin de la $i^{eme}$ itération (et / ou au début de la i + $1^{eme}$ ) de la boucle principale, les i dernier éléments du tableau sont triés et supérieur ou égaux aux n-i premiers.
- Initialisation :
	Au début de la première itération, l"ensemble des O derniers éléments est l'ensemble vide : P(0) est initialement vérifié. 
- Hérédité : 
	Soit $0\leq i\leq n-2$ supposons que P(i) est initialement vérifié et montrons que P(i+1) est vérifié. 
- Conclusion
	A la fin de la première itération le $n^{eme}$ élément par ordre de taille est en position n-1, le n-$1^{eme}$ en position n-2, ..., le n-i+$1^{eme}$ en n-$i^{eme}$ position.

Montrons que a la fin de la $i+1^{eme}$, le $n-i^{eme}$ terme est en $n-i+1^{eme}$ position
On considère la propriété $P_{2}(i+1,j)$ :
Au cours de la $i+1^{eme}$ itération de la boucle principale, a la fin de la $j^e$ itération de la boucle intérieure, (Début de la $i+1^{eme}$),
On a P(i) est le plus grand élément parmi les j+1 premiers de la liste est en position j. 
- Initialisation : 
	$P_{2}(i+1, 0)$ est vérifié trivialement : le plus grand des j premiers éléments est en position 0.
- Hérédité :
	Supposons que $P_{2}(i+1,j)$ est vérifié.
	A la $j+i^e$ itération : si T\[j\] < T\[j+1\], alors T\[j+1\] est le nombre le plus grand des j+2 premiers éléments et resta à sa place. Si T\[j\] > T\[j+1\], alors T\[j\] est le plus grand des i+2 premiers éléments et prend la $j+1^e$ position.
	Donc $P_{2}(i+1, j+1)$ est vérifié tant que $j+2+i\leq n$, c'est a dire que $j\leq n-i-2$ 
- Conclusion :
	Donc $P_{2}(i+1,j)$ est un invariant de boucle : en particulier à la fin de la $i+1^e$ itération de la boucle intérieure, le plus grand des (n-i) premiers éléments est en position n-i-1.
	Donc P(i+1) est vérifié : P est un invariant de boucle. En particulier, à la fin de la $n-1^e$ itération de la boucle principale, les n-1 derniers éléments sont triés est supérieurs au premiers. 
