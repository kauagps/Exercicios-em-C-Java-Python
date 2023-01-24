import os

aresta = float(input("\nEste programa calcula o volume de um reservatorio cubico, com somente 60 porcento preenchido.\nDigite o valor da aresta do resavatorio: "))
volumereserva = int((aresta * aresta * aresta) * 0.60)
print("\nO volume de combustivel e de ",volumereserva,".\nObrigado por uttilizar nosso sistema!")
os.system("pause")
