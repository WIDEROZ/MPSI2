def triBulle(l):
    for i in range(len(l)-1, 1, -1):
        for j in range(0, i):
            if l[j] > l[j+1]:
                l[j], l[j+1] = l[j+1], l[j]

    return l


print(triBulle([1, 5, 8, 61, 54, 564, 10, 0, 55]))

def EuclideEtendu(a,b):
    up,vp,u,v = 1,0,0,1
    while b!=0:
        q = a//b
        a,b = b,a%b
        up,u = u,up-q*u
        vp,v = v,vp-q*v
    return a,up,vp

print(EuclideEtendu(468, 3939))

