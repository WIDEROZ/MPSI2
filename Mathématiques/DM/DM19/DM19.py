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
    return randint(1, 5)


def valide(n):
    frequenceApparition = (0, 0, 0)
    while n > 0:

