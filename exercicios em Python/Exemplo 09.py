import os

print ("\n\nEste programa determina o volume de n esferas!")

n = int(input("\n\nDigite a quantidade de esferas: "))
i = 1
volEsfera = 0
volTotal = 0

while (i <= n):
    raio = float(input("\n\nDigite o raio da esfera: "))
    volEsfera = ((((4 * 3.14) * raio) * raio) * raio) / 3
    print ("\n\nO volume da esfera é", volEsfera, "metros cúbicos!")
    volTotal = volTotal + volEsfera
    i = i + 1

print ("\n\nO volume total das", n, "esferas é", volTotal, "metros cúbicos!")
print ("\n\nObrigado por utilizar nosso programa!")
os.system ("Pause")

