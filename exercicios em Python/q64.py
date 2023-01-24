import os

print("\nEste programa calcula o volume de uma bola e determina o volume necessario de uma caixa para comportar 10 bolas.")
raio = float(input("\nDigite o valor do raio de uma das bolas: "))
volumeB = int(12.56 * ((raio * raio)* raio) / 3)
vc = int(volumeB * 11)
print("\nO volume necessario da caixa para comportar 10 bolas de volume ",volumeB," e ", vc)
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
