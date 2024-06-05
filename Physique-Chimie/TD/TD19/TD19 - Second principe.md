# Exercice 5
#### 1.
La température finale du lac est : $T_{th} = T_{cai}$

#### 2.
$\Delta U_{caillou} = Q_{caillou} = -Q_{lac} = C(T_{th}-T_0)$

#### 3.
$$
\Delta S_{c} = S_{crée} + S_{ech} = S_{créé} + \frac{Q_{c}}{T_{lac}}
$$
$$\Delta S_{c} = C\ln\left( \frac{T_{0}}{T_{lac}} \right) = S_{créé} + \frac{C(T_{th}-T_{0})}{T_{lac}}$$
$$S_{créé} = C\left( \ln\left( \frac{T_{0}}{T_{th}} \right)+ \frac{T_{0}}{T_{th}}-1 \right) $$
#### 4.
$$\Delta S_{lac} = S_{créé} + S_{ech} = S_{créé} + \frac{Q_{lac}}{T_{th}}$$
$$\Delta S_{lac} = 0 = S_{créé}+ \frac{-C(T_{th}-T_{0})}{T_{th}}$$
Ainsi, 
$$S_{créé} = 0 $$
# Exercice 6
#### 2.
$$
\Delta S = \Delta S_{c} + \Delta S_{eau} = S_{créé} + S_{ech}$$
Comme $Q= 0$, $S_{ech} = 0$
Alors, 
$$\Delta S = \Delta S_{c} + \Delta S_{eau} = S_{créé} = (m_{c}c_{c} + m_{e}c_{e})\ln\left( \frac{T_{f}}{T_{i}} \right)$$

$$\Delta U = \Delta U_{e} + \Delta U_{c} = Q_{e} + RI^{2}\Delta t + Q_{c}$$


$$\Delta U_{e} = m_{e}c_{e}(T_{f} - T_{i}) = Q_{e}$$
$$\Delta U_{c} = m_{c}c_{c}(T_{f}-T_{i}) = RI^{2}\Delta t + Q_{c}$$
$$\Delta U = (m_{e}c_{e} + m_{c}c_{c})(T_{f}-T_{i}) = Q_{e} + RI^{2}\Delta t + Q_{c}$$
Comme $Q = Q_{e} + Q_{c} = 0$
$$(m_{e}c_{e} + m_{c}c_{c})(T_{f}-T_{i}) = RI^{2}\Delta t$$
$$T_{f} = \frac{RI^{2}\Delta t}{m_{e}c_{e}+m_{c}c_{c}}+T_{i}$$
Alors, 
$$\Delta S = S_{créé} = (m_{e}c_{e}+m_{c}c_{c})\ln\left( \frac{RI^{2}\Delta t}{T_{i}(m_{e}c_{e}+m_{c}c_{c})} +1\right)$$
# Exercice 7
#### 1.
$$0 = P_{0}S + Mg - P_{1}S$$
$$P_{1} = P_{0} + \frac{Mg}{S}$$
$$P_{1}V_{1} = nRT_{1}$$



Alors, 
$$\Delta U = W = - \int_{V_{0}}^{V_{1}} P_{0} + \frac{Mg}{S}\, dV$$
$$= \left( P_{0}+\frac{Mg}{S} \right)(V_{0}-V_{1}) = \frac{P_{0}V_{0}}{RT_{0}}C_{v_{m}}(T_{1}-T_{0}) $$
$$\Leftrightarrow \frac{\frac{P_{0}V_{0}}{RT_{0}}C_{v_{m}}(T_{0}-T_{1})}{\left( P_{0}+\frac{Mg}{S} \right)} +V_{0} = V_{1} $$

#### 2.
$$
0 = P_{2}S - P_{0}S
$$

$$P_{0}=P_{2}$$
___
$$T_{2} = \frac{P_{2}V_{2}}{nR} = \frac{P_{2}V_{2}}{P_{0}V_{0}}T_{0} = \frac{V_{2}}{V_{0}}T_{0}$$

$$\Delta U = W$$
Car la transformation est adiabatique
$$C_{v} \Delta T = \Delta U = -\int_{V_{1}}^{V_{2}} P_{ext} \, dV = - P_{0}\int _{V_{1}}^{V_{2}} dV = P_{0}(V_{1}-V_{2}) $$
$$nC_{vm}(T_{2}-T_{1}) = P_{0}(V_{1}-V_{2})$$
$$\frac{5}{2}(P_{0}V_{2}-P_{1}V_{1})=P_{0}(V_{1}-V_{2})$$
Alors, 
$$V_{2} = \frac{2}{3}V_{1}+\frac{5}{3}\frac{P_{1}}{P_{0}}V_{1}$$
$$V_{2} = V_{1}\left( \frac{2}{3}+\frac{5}{3} \left( 1+\frac{Mg}{SP_{0}} \right) \right)$$

$$V_{1} = \frac{V_{0}}{T_{0}\left( 1 + \frac{Mg}{SP_{0}} \right)}T_{1} = \frac{V_{0}}{1+\frac{Mg}{SP_{0}}}\left( 1+\frac{2}{7} \frac{Mg}{P_{0}S} \right)$$
$$V_{1} = V_{0} \times \left( 1 -\frac{5}{7} \frac{Mg}{P_{0}S} \right)$$

$$V_{2} = V_{0} \times\left( 1-\frac{5}{7} \frac{Mg}{P_{0}S} \right)\left( \frac{2}{3}+ \frac{5}{3}\left( 1+\frac{Mg}{SP_{0}} \right) \right)$$

$$= \left( 1+ \frac{5}{3} \frac{Mg}{P_{0}S} + \frac{50}{21} \frac{Mg}{P_{0}S}  \right)$$

$-\frac{5}{7}-\frac{5}{3} = \frac{-15-35}{21}=\frac{50}{21}=$

#### 3.
$P_{3} = P_{1}$

$$\Delta S =0$$
$$P_{3}V_{3}^{\gamma}=P_{0}V_{0}^{\gamma}$$
Alors, 
$$P_{3}^{1-\gamma}T_{3}^{\gamma} = P_{0}^{1-\gamma}T_{0}^{\gamma}$$
Alors, 
$$T_{3} = \left(  \frac{P_{0}^{}}{P_{3}} \right)^{\frac{\gamma-1}{\gamma}}T_{0}$$

#### 5.
$$\Delta S_{l} = S_{créé} = nC_{Vm}\ln\left( \frac{T_{2}}{T_{0}} \right) = \frac{5}{2}nR\ln\left( \frac{T_{2}}{T_{0}} \right) $$
$$\Delta S = \frac{5}{2} \frac{P_{0}V_{0}}{T_{0}}\ln\left( \frac{T_{2}}{T_{0}} \right)$$
$$\Delta S = \frac{nR}{\gamma-1}\ln\left( \frac{P_{2}V_{2}^{\gamma}}{P_{0}V_{0}^{\gamma}} \right)$$

# Exercice 8
#### 1.
$$
P_{3}V_{3} = anRT_{0} = aP_{0}V_{0}
$$
Comme la transformation est adiabatique réversible (car lente) : 
$$P_{3}V_{3}^{\gamma} = P_{0}V_{0}^{\gamma}$$
$$\Leftrightarrow P_{3f}^{1-\gamma}T_{3}^{\gamma} = P_{0}^{1-\gamma}T_{0}^{\gamma}$$
Alors, comme $T_{3} = a T_{0}$
$$P_{3}^{1-\gamma} = P_{0}^{1-\gamma}\left( \frac{T_{0}}{T_{0}a} \right)^{\gamma}$$
Alors, 
$$P_{3_{f}} = P_{0}\left( a \right)^{\frac{\gamma}{\gamma-1}}$$
#### 2.
$$P_{3f}V_{3f}^{\gamma}= P_{0}V_{0}^{\gamma} $$
$$V_{3_{f}}^{\gamma} = a^{\frac{\gamma}{1-\gamma}}V_{0}^{\gamma}\Leftrightarrow V_{3_{f}} = a^{\frac{1}{1-\gamma}}V_{0}$$
#### 3.

$$V_{1_{f}} + V_{2_{f}} + V_{3_{f}} = 3V_{0}$$
Comme $P_{1_{f}} = P_{2_{f}}$ et les parois entre $1$ et $2$ sont diathermanes, $T_{1_{f}} = T_{2_{f}}$
Ainsi, comme on est dans un système fermé : 
$$V_{1_{f}} = V_{2_{f}}$$
Alors, 
$$2V_{1_{f}} = 3V_{0} - V_{3_{f}} = 3V_{0} - a^{\frac{1}{1-\gamma}}V_{0}$$
Alors, 
$$\boxed{V_{1_{f}} = V_{2_{f}} = \frac{3-a^{\frac{1}{1-\gamma}}}{2}V_{0}}$$

#### 4.
$$T_{1_{f}} =  \frac{P_{f}V_{1f}}{P_{0}V_{0}}T_{0} = a^{\frac{\gamma}{\gamma-1}} \frac{3-a^{\frac{1}{1-\gamma}}}{2}T_{0}$$
$$$$


$$P_{3_{f}} = P_{0}\left( a \right)^{\frac{\gamma}{\gamma-1}}$$







$$
\left< x, y \right> \leq |\left< x, y \right>| \leq \left|\left| x \right|\right| \left|\left| y \right|\right|  
$$

$$\left< x, y \right>  = \frac{1}{2}(\left|\left| x+y \right|\right| ^{2} - \left|\left| x \right|\right|^{2} -\left|\left| y \right|\right| ^{2})$$
Alors, 
$$\left|\left| x+y \right|\right| ^{2} -\left|\left| x \right|\right| ^{2} - \left|\left| y \right|\right| ^{2} \leq 2\left|\left| x \right|\right| \left|\left| y \right|\right| $$

Ainsi,
$$\left|\left| x+y \right|\right| ^{2} \leq (\left|\left| x \right|\right|  + \left|\left| y \right|\right|)^{2}$$
