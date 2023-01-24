import os

print("\n\nEste programa determina o volume de n cubos, e determina o valor soma total.")
n = int(input("\n\nDigite quantos cubos voce deseja calcular o volume: "))
i = 1
soma = 0
volume = 0
while i <= n:
        print("\n\n\n\nDigite o valor da aresta do ",i," cubo: ")
        aresta = float(input(""))
        volume = int(aresta * aresta * aresta)
        soma = int(soma + volume)
        print("\nO valor volume do ",i," cubo e de: ",volume,".")
        i = i + 1

print("\n\n\n\nO valor total dos ",n," cubos e de: ",soma,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
