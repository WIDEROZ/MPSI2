from numpy.random import randint
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
    tmp2 = randint(1, 2)
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
    frequenceApparition = [0, 0, 0, 0]
    while n > 0:
        frequenceApparition[Xa()-1] += 1
        n -= 1
    return frequenceApparition

print(valide(Xr, 10000))

