import os

print ("\n\nEste programa determina o volume de n cilindros!")

n = int(input("\n\nDigite o total de cilindros: "))
volumeCil = 0
volumeTotal = 0

for i in range(n):
    raio = float(input("\n\nDigite o raio do cilindro (m): "))
    altura = float(input("\n\nDigite a altura do cilindro (m): "))
    volumeCil = ((3.14 * raio) * raio)* altura
    print ("\n\nVolume do", i + 1,"º cilindro é de", volumeCil, "metros cúbicos!")
    volumeTotal = volumeTotal + volumeCil

print ("\n\nO volume total dos", n, "cilindros é de", volumeTotal, "metros cúbicos!")
print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause")
