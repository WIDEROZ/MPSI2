import numpy as np
m = [
     [1, 2, 3],
     [4, 5, 6]
     ]

s = [[5], [8]]

def rechercheNonNulColone(m, c):
    for l in range(len(m)):
        if m[l][c] != 0:
            return l
    return None

def echangeLigne(m, l1, l2):
    for c in range(len(m[0])):
        m[l1][c], m[l2][c] = m[l2][c], m[l1][c]
    return m

def operationSurLignes(m, l1):
    for l in range(l1, len(m)):
        for c in range(len(m[0])): # Parcous de colones



def pivot(m, a):
    c0 = 0
    l0 = 0

    for c in range(c0, len(m[0])):
        for l in range(l0, len(m)): ## Parcours colone
            if l == l0 and m[l][c] == 0: ## Si le premier elt est nul
                indexNonNulColone = rechercheNonNulColone(m, c) ## Recherche d'un elt non nul dans la colone
                if indexNonNulColone != None: ## Si il y en a un
                    m = echangeLigne(m, indexNonNulColone, l0) ## échange de la première ligne et de la ligne de l'elt non nul dans la colone