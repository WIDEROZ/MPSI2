import numpy as np
import matplotlib.pyplot as plt
from scipy.integrate import odeint
from math import sin, sqrt, pi

global tmax, g, l, intervalle

g = 9.81
l = 0.2
tmax = 4*pi/sqrt(g/l)
intervalle = (tmax)/100
X0 = [1, 0]


t = np.linspace(0, tmax, 99)


# ---- On créé le vecteur dérivé de X ---- #
def F(X, f):
    tmp = X[0]
    X[0] = X[1]
    X[1] = - (g/l) * sin(tmp)
    return X

# ----- On applique la méthode d'Euler ------ #
def Euler(F, X0, temps):
    X = X0
    tab = []
    for t in temps :
        theta  = X[0]
        dtheta = X[1]
        ddtheta = F(X,t)[1]

        theta1 = theta + intervalle * dtheta
        theta2 = dtheta + intervalle * ddtheta

        tab.append([theta1, theta2])
        X[0] = theta1
        X[1] = theta2

    return tab

eu = Euler(F, X0, t)
od = odeint(F, X0, t)

eu = [te[0] for te in eu]
od = [te[1] for te in od]

plt.plot(t,eu, "r")
plt.plot(t,od, "g")

plt.show()

