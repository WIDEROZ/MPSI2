from numpy import linspace
from numpy.random import randint
import matplotlib.pyplot as plt

def Xr():
    tmp = randint(1, 3)
    if tmp == 1 :
        return 4
    else :
        return randint(1, 4)

def Xv():
    return randint(1, 5)

def Xb():
    tmp = randint(1, 4)
    tmp2 = randint(1, 3)
    if tmp == 1 :
        if tmp2 == 1 :
            return 1
        else : 
            return 3
    else :
        if tmp2 == 2 :
            return 2
        else :
            return 4


def valide(Xa, n):
    def frequenceApparition(Xa, n):
        frequenceApparition = [0, 0, 0, 0]
        while n > 0:
            frequenceApparition[Xa()-1] += 1
            n -= 1
        return frequenceApparition
    freqApp = frequenceApparition(Xa, n)

    for i in range(len(freqApp)):
        freqApp[i] = freqApp[i]/n

    return freqApp



#print(valide(Xr, 1000000), valide(Xv, 1000000), valide(Xb, 1000000))

Nr = 50
Nv = 12
Nb = 120


def E(Nr, Nv, Nb):
    """ Espérance de X """
    return (3*Nr+(5/2)*Nv+(7/2)*Nb)/(Nr+Nv+Nb)

nbre_de_en_plus = 10000

x = linspace(0, nbre_de_en_plus, nbre_de_en_plus)

plt.plot(x, [E(Nr, Nv, Nb) for i in range(nbre_de_en_plus)], label="E(X)", color = "#000000")
plt.plot(x, [E(Nr+x, Nv, Nb) for x in range(nbre_de_en_plus)], label="E(X), Nr + x", color = "red")
plt.plot(x, [E(Nr, Nv+x, Nb) for x in range(nbre_de_en_plus)], label="E(X), Nv + x", color = "green")
plt.plot(x, [E(Nr, Nv, Nb+x) for x in range(nbre_de_en_plus)], label="E(X), Nb + x", color = "blue")
plt.legend()
plt.show()
