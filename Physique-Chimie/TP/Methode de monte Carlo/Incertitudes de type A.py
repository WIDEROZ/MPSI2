import matplotlib.pyplot as plt
import numpy.random as npRand
import numpy as np
from math import sqrt

def moy(liste):
    assert type(liste) == list, "Le paramètre n'est pas une liste"
    numerateur = 0
    for i in liste:
        numerateur += i
    return numerateur / len(liste)

def ecart(liste):
    assert type(liste) == list, "Le paramètre n'est pas une liste"
    moyene = moy(liste)
    somme = 0
    for i in liste:
        somme +=(abs(i - moyene))**2
    
    return sqrt(somme/len(liste))

def distributionRectangulaire():
    l = []
     
    for i in range(100):
        randomPoint = npRand.uniform(-1, 1)
        l.append(randomPoint)
    return l

def distributionNormale():
    l = []
    
    for i in range(100):
        randomPoint = npRand.normal(-1, 1)
        l.append(randomPoint)
    return l

listeDistRect = distributionRectangulaire()
listeDistNorm = distributionNormale()



## ----- Ecart type de l'échantillon des points rectangulaires ----- ##
ecartTypePointsRectangulaires = ecart(listeDistRect)

## Incertitude type de l'échantillon des points rectangulaires
incertitudeTypePointsRectangulaires = ecartTypePointsRectangulaires/sqrt(len(listeDistRect))



## ----- Ecart type de l'échantillon des points normaux ----- ##
ecartTypePointsNormaux = ecart(listeDistNorm)

## Incertitude type de l'échantillon des points rectangulaires
incertitudeTypePointsNormaux = ecartTypePointsNormaux/sqrt(len(listeDistNorm))

#print(listePointRectangulaires)

print("Distribution réctangulaire ecart type : ", ecartTypePointsRectangulaires)
print("\nDistribution rectangulaire incertitude type A : ", incertitudeTypePointsRectangulaires)

print("\nDistribution normale ecart type : ", ecartTypePointsNormaux)
print("\nDistribution normale incertitude type A : ", incertitudeTypePointsNormaux)


print("\nNumpy distribution : ", np.std(listeDistRect))


plt.hist(distributionRectangulaire(), 100)