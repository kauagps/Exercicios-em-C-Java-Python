import os

print("\nEste programa calcula o valor do volume de um cone reto!")
raio = float(input("\n\nDigite o valor do raio da base: "))
h = float(input("\nDigite o valor da altura: "))
volume = float(((raio * raio) * 3.14) * h) / 3
print("\n\nO volume do cone e de ",volume,".")
print("\nObrigado por utilizar nosso sistema!")
os.system ("pause")
