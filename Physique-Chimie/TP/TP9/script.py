from math import pi, cos
from numpy import linspace

def passeBas(ve, vs0, fc, fe):
    l = [vs0]
    if fc < fe:
        for i in range(len(ve)):
            vs0 = (ve[i]-vs0)*((2*pi*fc)/fe) + vs0
            l.append(vs0)
    
    return l


def signalSinusoidal(f, A, phi):
    return  