import math

n = input("number : ")


def fun(x):
    return x * x - float(n)


def deriv(x):
    return 2 * x


def sqrt(x):
    r = fun(x) / deriv(x)
    while abs(r) >= 0.00001:
        r = fun(x) / deriv(x)

        x = x - r

    print("its square root : " + str(math.floor(x)))


x0 = 1
sqrt(x0)