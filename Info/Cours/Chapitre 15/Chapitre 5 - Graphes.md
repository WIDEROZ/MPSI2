# Algorithme de Dijkstra
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
$$\begin{pmatrix}
\infty & 5 & 6 & \infty & 15 & 12 & \infty & \infty \\
5 & \infty & \infty & 10 & \infty & \infty & 
\end{pmatrix}$$