from random import random
from math import exp, sqrt, pi

# função a ser integrada
def normal(x):
    # return exp(- x ** 2 / 2) / sqrt( 2 * pi )
    return x

# checar se Py é menor que f(Px), onde P é o ponto gerado aleatoriamente
check = lambda p : p[1] <= normal(p[0])

# gerar número aleatório entre A e B
def random_range(a,b):
    return a + (b-a) * random()

def monte_carlo(n = 1e3, a = 0, b = 1):
    h = normal(b) # máximo da curva no intervalo analisado
    result = 0

    for _ in range(int(n)):
        p = (random_range(a,b), random_range(0,h))
        result += check(p)
    
    result /= n

    return result


print(monte_carlo(1e6))