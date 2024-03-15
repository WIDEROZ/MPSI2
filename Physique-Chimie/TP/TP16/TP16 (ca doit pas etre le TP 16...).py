"""
import numpy as np
import matplotlib.pyplot as plt

def F(t, v):
    return (-0.384*v[int(5*t)]**2)/80 + 9.81

def Euler(F, t, v):
    tab = v
    Vn = tab[0]
    for i in range(len(t)-1):
        Vn = Vn + (0.2)* F(t[i], tab)
        tab.append(Vn)
    return tab

t = np.linspace(0, 5, 101)
v = Euler(F, t, [0])
print(v)


plt.scatter(t, v)
plt.show()


"""

for i in range(10000): 
    u = (2**(i+1)+3**(i+1))/(2**i+3**i)



print(u)
print(3/8)







