e'# Algorithme de Dijkstra
$$\begin{array}{|c|c|} \hline
&A&B&C&D&E&F&G&H \\ \hline
&0&\infty&\infty&\infty&\infty&\infty&\infty&\infty  \\ \hline 
A, 0&\setminus & 5&6&\infty&15&12&\infty&\infty \\ \hline
B, 5&\setminus & \setminus & 6&15&15&12&\infty&\infty \\ \hline
C, 6&\setminus&\setminus&\setminus&15&15&11&\infty&\infty \\ \hline
F, 11& \setminus&\setminus&\setminus&15&15&\setminus&\infty &12 \\ \hline
D, 15&\setminus&\setminus&\setminus&\setminus&15&\setminus&25&21 \\ \hline
E, 15&\setminus&\setminus&\setminus&\setminus&\setminus&\setminus&25&21 \\ \hline
H, 21&\setminus&\setminus&\setminus&\setminus&\setminus&\setminus&25 &\setminus \\ \hline
G, 25&\setminus&\setminus&\setminus&\setminus&\setminus&\setminus&\setminus&\setminus
 \\
\hline
\end{array}$$
# Algorithme de Floyd-Warshall
$$W^{(0)} = P=\begin{pmatrix}
\infty & \infty & 11 & \infty & 25 \\
\infty & \infty & \infty & 13&\infty   \\
6&20&\infty & 15&\infty  \\
\infty & 9&\infty & \infty & \infty  \\
\infty & 20 & \infty & 8&\infty
\end{pmatrix}$$
On calcule $W^{(1)}$ : 
$$W^{(1)}=\begin{pmatrix}
\infty & \infty & 11 & \infty & 25 \\
\infty & \infty & \infty & 13&\infty \\
6 & 20 & 17 & 15 & 31 \\
\infty&9&\infty & \infty  & \infty \\
\infty & 20 & \infty & 8 & \infty
\end{pmatrix}$$
On calcule $W^{(2)}$ : 
$$W^{(2)} = \begin{pmatrix}
\infty & \infty & 11 & \infty & 25 \\
\infty & \infty & \infty & 13 & \infty \\
6 & 20 & 17 & 15& 31 \\
\infty & 9 & \infty & 12 & \infty \\
\infty&20 & \infty & 8 & \infty
\end{pmatrix}$$
pour $W_{3, 4}^{(2)} = 15$ car $15 < 20 + 13 = 33$ qui est le poids du chemin de $3$ à $4$ passant par $2$ 
pour $W^{(2)}_{5, 4} = 8$ car $8 < 20+13 = 33$ qui est le poids du chemin de $5$ à $4$ passant par $2$


