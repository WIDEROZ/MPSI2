# Exercice 2
## 1.
$$x_{l} = \frac{m_{l}}{m_{l} + m_{v}}$$
$$V = V_{l} + V_{g} \Leftrightarrow (m_{l} + m_{v})v = m_{l}v_{l} + m_{v}v_{v} \Leftrightarrow v = x_{l}v_{l} + x_{v}v_{v}$$
Alors, 
$$v = (1-x_{v})v_{l} + x_{v}v_{v}$$
Alors, 
$$v = v_{l} + x_{v}(v_{v}-v_{l})$$
Alors, 
$$x_{v} = \frac{v - v_{l}}{v_{v} - v_{l}}$$
Alors, 
Comme $v = \frac{V}{m}$ 
On a : 
$$x_{l} = \frac{\frac{100}{180} -0.592}{0.0007-0.592} = 0.061\,634\,440 = 6.2 \%$$

# Exercice 3
Transformation monobare
$$\Delta H = \Delta H_{glace} + \Delta H_{glace + eau} + \Delta H_{eau}$$
$$\Delta H_{glace} = C_{glace} \Delta T = mc_{g}(273-250) $$
$$\Delta H_{glace+eau} = mL_{f} $$
$$\Delta H_{eau} = C_{eau}\Delta T = mc_{e}(300-273) $$

$$\Delta S = mc_{g}\ln\left( \frac{273}{250} \right)+ \frac{mL_{f}}{273} + mc_{e}\ln\left( \frac{300}{273} \right) $$

# Exercice 4
## 1.
On a que la température finale : $T_{f} > T_{fus}$ température de fusion
Comme la transformation est adiabatique et isobare : 
$$\Delta H = Q = 0$$
Alors, 
$$
\Delta H = \Delta H_{g} + \Delta H_{trans} + \Delta H_{e}
$$

$$\Delta H_{g} = m_{g}c_{g}(T_{fus} - T_{2})$$
$$\Delta H_{trans} = m_{g}L_{f}$$
$$\Delta H_{e} = m_{g}c_{e}(T_{f} - T_{fus}) + m_{e}c_{e}(T_{f}-T_{1})$$
Alors, 

## 2.
$$
\Delta H = \Delta H_{g} + \Delta H_{trans} + \Delta H_{e}
$$

$$\Delta H_{e} = m_{e}c_{e}(T_{sol} - T_{1})$$
$$\Delta H_{trans} = -m_{g}L_{f}$$
$$\Delta H_{g} = m_{e}c_{g}(T_{f} - T_{sol}) + m_{g}c_{g}(T_{f}-T_{2})$$
Il faut que $T_{f} < T_{sol}$
$$0 = m_{e}c_{e}(T_{sol}-T_{1})-m_{g}L_{g} + m_{e}c_{g}(T_{f} - T_{sol}) + m_{g}c_{g}(T_{f}-T_{2})$$

# Exercice 5
## 1.
Comme le récipient est isotherme : 
Pour que l'eau ne soit uniquement que de la vapeur, il faut que $P_{eau} < P_{sat}$, alors, 
On calcule la pression partielle d'eau :
$$P_{eau} = \frac{n_{eau}}{n_{tot}}P$$
Comme :
$n_{tot} = 9.0 \times 10^{-3} \text{ mol}$
$T_{0} = 293 \text{ K}$
$R = 8.314$
$V_{0} = 10 \times 10^{-3} \text{ m}^{3}$
Alors, 
$$P = \frac{n_{tot}RT_{0}}{V_{0}} = 2192 \text{ Pa}$$
Et puis comme
$n_{eau} = 0.05 \text{ mol}$
$$P_{eau} = \frac{0.005}{0.009} \times 2192 = 1217 \text{ Pa} = 1.217 \times 10^{3} \text{ Pa}$$
$P_{eau} < P_{sat}$
Donc, l'eau est uniquement sous forme de vapeur. 

Comme le système ne contient que de l'eau et de l'air : 
(pas par ce que la pression est extensive mais par ce que la pression partielle est extensive)
$$P = P_{eau} + P'_{0}$$
Alors, 
$$P_{0}' = P - P_{eau} = 975 \text{ Pa}$$

## 2.
$$W = - \int _{V_{0}}^{V_{2}} P_{ext} \, dV $$
Comme la transformation est quasi statique, $P_{ext} = P$ 
Comme l'eau et l'air sont des gaz parfaits, a températures constantes et que le système est isotherme. 
La compression de l'air pendant toute la transformation est :
$$W_{air} = - \int_{V_{0}}^{V_{2}} \frac{n_{air}RT_{0}}{V} \, dV = n_{air}RT_{0} \ln\left( \frac{V_{0}}{V_{2}} \right)$$
$$W_{air} = 22.4 \text{ J}$$

La compression de l'eau durant $P_{eau} < P_{sat}$, 
Le volume à la pression saturante est : 
$$V_{sat} = \frac{n_{eau}RT_{0}}{P_{sat}} = 5.22 \text{ L}$$
Alors, 
$0 \to r$ : état initial vers point de rosé
$$W_{0 \to r} = -\int _{V_{0}}^{V_{sat}} \frac{n_{eau}RT_{0}}{V} \, dV = n_{eau}RT_{0}\ln\left( \frac{V_{0}}{V_{sat}} \right)$$
$$W_{0 \to r} = 7.92 \text{ J}$$

Ensuite
$r \to 2$ : point de rosé vers état final :
Comme $P_{sat}$ est cte alors
$$W_{r \to 2} = - \int _{V_{sat}}^{V_{2}} P_{sat} \, dV = P_{sat}(V_{sat}-V_{2})$$

Enfin, 
$$W = $$

# Exercice 6
$$x_{v} = \frac{m_{v}}{m_{v} + m_{l}} = \frac{v - v_{v}}{v_{l} - v_{v}}$$
Alors, 
$$m_{v} = m \frac{v-v_{v}}{v_{l}-v_{v}}$$

## 2.
$$\Delta H = \Delta h_{l}m_{l} + \Delta h_{v}m_{v}$$

# Exercice 7
## 1.
Comme la transformation est adiabatique car le détendeur est calorifugé et que le système ne reçoit que les forces de pression extérieures :
$$\Delta H = W_{a} + Q = 0$$
## 2.
$$x = x_{l} = \frac{m_{l}}{m}$$

$$\Delta H = \Delta H_{AA'} + \Delta H_{A'B}$$
$$\Delta H = mc(T_{2}-T_{1}) + m_{l}L_{vap} = mc(T_{2}-T_{1}) + mxL_{vap}$$
Alors, 
$$0 = c(T_{2}-T_{1}) + xL_{vap}$$
$$\frac{c}{L_{vap}}(T_{2}-T_{1}) +1= x$$
