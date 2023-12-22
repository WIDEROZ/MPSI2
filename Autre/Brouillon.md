$$ \int_{0}^{2}  \space dx  $$
$$ \int \frac{1}{\sqrt{x²-1}} \space dx = \ln(x + \sqrt{ x²+1 }) + C \space où \space C \in R$$

$$ \int \frac{1}{\sqrt{ x²-1 }} dx = \ln|x+\sqrt{ x²-1 }| $$
$$ \int \frac{1}{x²-1} dx = \frac{1}{2}\ln\left|\frac{x+1}{x-1}\right| $$

# Calculer pour x € R : $$ (E):y'-yth(x) = xch²(x) $$
Trouvons des solutions de l'équation homogène : 
$$ (H):y'-yth(x) = 0 $$
D'après le théorème du cours les solutions de (H) sont de la forme : 
$$ x\mapsto K \frac{1}{ch(x)} \space K \in R $$
Trouvons une solution particulière de (E) :
en utilisant le théorème de la variation de la constante une solution particulière de (E) est de la forme :
$$ \phi:x\mapsto \frac{K(x)}{ch(x)}$$
la dérivée de cette expression est : 
$$ \phi':x\mapsto \frac{K'(x)}{ch(x)}-\frac{K(x)sh(x)}{ch²(x)} $$
Donc :
$$ \phi'-\phi th(x) = \frac{K'(x)}{ch(x)}-\frac{K(x)sh(x)}{ch²(x)} + \frac{K(x)th(x)}{ch(x)} $$
$$ \Leftrightarrow K'(x) = xch³(x) $$
$$ \Leftrightarrow K(x) = \int xch³(x) \, dx $$
On procède par une IPP :
On pose alors : 
$$ u=x \space; du = 1dx \space et \space v= \space; dv=ch³(x)=\frac{1}{2}ch(x)(ch(2x)+1)=ch(x)(sh²(x)+1) $$ Trouver v revient a calculer : 
$$ \int ch(x)sh²(x) \, dx + \int ch(x) \, dx = \frac{1}{3}sh³(x) +sh(x)+C $$
Donc:
$$ v = \frac{1}{3}sh³(x) + sh(x) $$
$$ dv = ch³(x) dx $$

Alors : 
$$ \int xch³(x) \, dx = \left[ \frac{1}{3}sh³(x)x + sh(x)x \right] - \int \frac{1}{3}sh³(x)+sh(x) \, dx $$
$$ \int \frac{1}{6}sh(x)(ch(2x)-1)+sh(x) \, dx = \frac{1}{6}\int sh(x)ch(2x) \, dx + \frac{5}{6}\int sh(x) \, dx $$
$$ = \frac{1}{3}\int sh(x)ch²(x)-sh(x) \, dx + \frac{5}{6}\int sh(x) \, dx $$
$$\int \frac{1}{3}sh³(x)+sh(x) \, dx = \frac{1}{6} ch³(x) - \frac{1}{6} ch(x) $$
Alors : 
$$ \int xch³(x) \, dx = \frac{1}{3}sh³(x)x+sh(x)x - \frac{1}{6}ch³(x)-\frac{1}{6}ch(x) + C $$
Donc une solution particulière de (E) est : 
$$ x \mapsto \frac{1}{3}sh^{2}(x)th(x)x+th(x)x - \frac{1}{6}ch^{2}(x)-\frac{1}{6} $$

Donc la solution générale de (E) est de la forme :
$$ \sigma : x \mapsto \frac{K}{ch(x)} + \frac{1}{3}sh^{2}(x)th(x)x+th(x)x - \frac{1}{6}ch^{2}(x)-\frac{1}{6} $$
# Calculer $$ (E):y'+y=x-e^{ x }+\cos(x) $$
C'est une EDL1 a coefficient constant et a second membre continu. 
### On calcule la solution homogène de (E): $$ (H):y'+y = 0 $$
D'après le théorème de résolution des EDLH1 les solutions de (H) sont de la forme :
$$ S_{h}:x\mapsto Ke^{ -x } $$
### On calcule les SP de (E):
## Pour : $$ (E_{0}):y'+y=x $$
La SP est de la forme :
$$ \phi_{0} :x\mapsto K(x)e^{ -x } $$
Donc sa dérivée est :
$$ \phi_{0}':x\mapsto K'(x)e^{ -x }-K(x)e^{ -x } $$
Comme :
$$ (E_{0}):y'+y=x $$
On a donc :
$$ K'(x) = xe^{ x } $$
Il suffit de trouver une primitive de K : 
$$ \int xe^{ x } \, dx $$
On procede par une IPP:
Soit u, v € C¹(R), 
On pose :
$$ u = x ;du = dx $$
$$ v = e^{ x };dv = e^{ x }dx $$
On a alors :
$$ \int xe^{ x } \, dx = [xe^{ x }] - \int e^{ x } \, dx = e^{ x }(x - 1) C, \space C \in R$$
Donc la SP de (E0) est :
$$ \phi_{0}:x\mapsto x-1 $$

### Pour : $$ (E_{1}):y'+y=-e^{ x } $$
La SP de (E1) est de la forme :
.......
Comme 
$$y'+y=-e^{ x }$$
On a :
$$ K'(x) = 1 ; K(x) = x$$
Donc une SP de (E1) est : 
$$ \phi_{1}:x\mapsto xe^{ -x } $$

### Pour : $$ (E_{2}):y'+y=\cos x $$
La SP de (E2) est de la forme :
.......
Comme :
...
On a :
$$ K'(x) = \cos xe^{ x } $$
Il suffit de trouver une primitive de K' :
$$ \int \cos xe^{ x } \, dx = [] $$


Donc la solution générale de E est : 
$$ \phi(x) = Ke^{ -x } + (x-1) + xe^{ -x } + \int K'(x) \, dx + C $$







$$ \int \frac{1}{1+\cos²(x)} \, dx =\int \frac{1}{1+\frac{1}{1+\tan²(x)}} \, dx  $$
On fait un changement de variable :
$$ x = Arctan(u);dx = \frac{1}{1+u²}du $$
$$ \int \frac{1}{(1+u²)\left( 1+\frac{1}{1+u²} \right)} \, du = \int \frac{1}{2+u²} \, dx = \frac{1}{\sqrt{ 2 }} \int \frac{\frac{1}{\sqrt{ 2 }}}{1+\left(  \frac{u}{\sqrt{ 2 }}  \right)²} \, dx  $$
$$\int \frac{1}{1+\cos²(x)} \, dx = \frac{1}{\sqrt{ 2 }}Arctan\left(  \frac{u}{\sqrt{ 2 }} \right) + C = \frac{1}{\sqrt{ 2 }}Arctan\left( \frac{\tan (x)}{\sqrt{ 2 }} \right) + C, \space C \in R$$ 

$$ \int \frac{1}{t\ln(t)\ln(\ln (t)} \, dt = \int \frac{\frac{1}{t}\ln^{-1}(t)}{\ln(\ln(t))} \, dt = \ln|\ln(\ln(t))| $$
$$ \int \frac{1}{t}\ln^{-1}(t) \, dx = \ln(\ln(t)) + C $$
$$ \int \sin(x)sh(x) \, dx  $$
$$ u = \sin(x);du=\cos(x)dx$$
$$ v = ch(x);dv=sh(x)dx $$
$$  \int \sin(x)sh(x) \, dx  = [\sin xch(x)] - \int ch(x)\cos(x) \, dx  $$
$$ w = \cos(x);dw = -\sin(x)dx $$
$$ z = sh(x);dz=ch(x)dx $$
$$ \int \sin(x)sh(x) \, dx  = [\sin xch(x)] - [sh(x)\cos(x)] - \int sh(x)\sin(x) \, dx  $$





### Autre

$$\int^{\frac{2\pi}{3}}_{\frac{\pi}{2}}  \, dx $$
 
$$\begin{pmatrix}
1&0&0 \\
0&1&0 \\
0&0&1
\end{pmatrix}$$