def f(x):
    return (x-3)*(x-10)

def df(x):
    return 2*x - 13


def recherche_racine_newton(f, x0, df, eps):
    if df(x0) > 0:
        if f(x0) > 0:
            while f(x0) > eps:
                x0 = x0 - (f(x0)/df(x0))
        else:
            while f(x0) < eps:
                x0 = x0 - (f(x0)/df(x0))

    else:
        if f(x0) > 0:
            while f(x0) > eps:
                x0 = x0 - (f(x0)/df(x0))
        else:
            while f(x0) < eps:
                x0 = x0 - (f(x0)/df(x0))

    return x0

print(recherche_racine_newton(f, 10, df, 0.000001))

