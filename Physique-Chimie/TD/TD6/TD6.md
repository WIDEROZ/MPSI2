# Exercice 1
## Faire un schema RLC
## 1.
$$ Q = \frac{1}{R_{tot}}\sqrt{ \frac{L}{C} } $$
Avec $R_{tot}$ la résistance totale du circuit : $R_{tot} = R + r_{L}$ 
$$Q = \frac{1}{R+r_{L}}\sqrt{ \frac{L}{C} }$$
On exprime R : 
$$R + r_{L} = \frac{1}{Q}\sqrt{ \frac{L}{C} }$$
$$R = \frac{1}{Q}\sqrt{ \frac{L}{C} }-r_{L}$$
- $Q = 0.5$ : Régime critique
  AN : 
  $$ R = 2\times \sqrt{\frac{400.10^{-3}}{100.10^{-9}}}-40 $$
  $$ R = 2 \times 2 \times 10^3 - 40 = 4000 - 40 $$
  $$ R = 3940 \space \ohm = 3.96 \space k\ohm$$

- $Q = 0.1$ : Régime apériodique
  AN :
  $$R = 10 \times 2.10^3 -40 = 20000-40$$
  $$ R = 19960 \space \ohm > 10k \space \ohm $$
  On ne peut pas obtenir $Q = 0.1$ avec notre système

- $Q = 10$ : Régime pseudo-périodique
  AN : 
  $$R = \frac{1}{10} \times 2.10^3 - 40$$
  $$ R = 160 \space \ohm $$

## 2.
Loi des mailles : 
$$e(t) = u_{L} + u_{r_{L}} + u_{C} + u_{R} = \frac{Ldi}{dt}+(R+r_{L})i+\frac{q}{C}$$
et $i = \frac{dq}{dt}$ donc $\frac{di}{dt} = \frac{d^2q}{dt^2}$
$$ \frac{d^2q}{dt^2} + \frac{R+r_{L}}{L} \frac{dq}{dt} + \frac{1}{LC}q = \frac{e(t)}{L}$$
On pose :
$$\left\{ \begin{array}{l}
\omega_{0} = \frac{1}{\sqrt{ LC }} \\
Q = \frac{1}{R + r_{L}}\sqrt{ \frac{L}{C} }
\end{array} \right.$$
$$\frac{d^2q}{dt^2} + \frac{\omega_{0}}{Q} \frac{dq}{dt} + \omega_{0}^2q = \frac{e(t)}{L}$$
## 3.
$q(t) = q_{part} + q_{H}(t)$ et $q_{part} = \frac{e}{C} = \frac{e}{\omega_{0}^2L}$

## 4.
Equation caractéristique
$$(C) : r^2 + \frac{\omega_{0}}{Q}r + \omega_{0}^2 = 0$$
$$ \Delta = \frac{\omega_{0}^2}{Q^2} - 4\omega_{0}^2 = 4\omega_{0}^2\left( \frac{1}{4Q^2} - 1\right) $$
- $Q = 0.5 \Leftrightarrow \Delta = 0$
  Racine double $r = -\omega_{0}$
  La solution s'écrit :
  $$q(t) = (At+B)e^{ -\omega_{0}t } - \frac{e}{C} \space avec  \space A,\space B \in \mathbb{R}$$
  Conditions initiales :
  $$ \left\{ \begin{array}{l} q(0^-) = 0 \\ \frac{dq}{dt}(0^+) = 0 \end{array} \right. $$
  Car a basse fréquence C est déchargé
  
  Par continuité de la charge et de i qui traverse la bobine : 
  $$\left\{ \begin{array}{l} q(0^+) = 0 \\ \frac{dq}{dt}(0^+) = 0 \end{array} \right.$$
  $$ \Rightarrow B + eC = 0 \Rightarrow B = -eC $$
  $$ \frac{dq}{dt} = e^{ -\omega_{0}t }(A-\omega_{0}B-\omega_{0}At) $$
  $$ \frac{dq}{dt}(0^+)= A-\omega_{0}B = 0 $$
  $$ \Leftrightarrow A = -\omega_{0}eC $$
  $$q(t) = -Ce(\omega_{0}t+1)e^{ -\omega_{0}t } + Ce$$
  - $Q = 0.1$ $\Delta > 0$
    2 racines réelles :
    - $r \space \pm=-\frac{\omega_{0}}{2Q} \pm \omega_{0}\sqrt{ \frac{1}{4Q^2}-1 }$
      $r \space \pm = -\frac{1}{2\tau} \pm \omega_{0}\sqrt{ \frac{1}{4Q^2} -1 }$ 
    $$q_{H}(t) = Ae^{ r_{+}t } + Be^{ r_{-}t } =e^{ -t/2\tau }(Ae^{ \sqrt{ \Delta }t } + Be^{ -\sqrt{ \Delta }t }) = e^{ -t/2\tau }(A'ch(\sqrt{ \Delta }t) +B' sh(\sqrt{ \Delta  }t)) $$

- $Q = 10$ $\Delta < 0$
  Racines complexes conjuguées. 
  $$ r \space \pm = -\frac{1}{2\tau}\pm j \Omega $$
  $$ \Omega = \omega_{0}\sqrt{ 1-\frac{1}{4Q^2} } $$
  $$ q_{H}(t)= e^{ -t/2\tau }(A\cos(\Omega t)+B\sin(\Omega t)) $$






## 5.
