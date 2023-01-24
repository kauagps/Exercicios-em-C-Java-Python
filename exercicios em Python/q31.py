import os

print("\nEste programa caucula a area de um quadrado e depos o divide em outros quatro quadrados menores iguais!")
aresta = int(input("\nDigite o valor da aresta do quadrado: "))
areaEP = (aresta * aresta)
p1 = areaEP
aresta2 = aresta / 2
areaEP2 = aresta2 * aresta2
p2 = areaEP2
print("\n\nO valor da area do quadrado maior e de ",areaEP," E o perimetro e de ",p1)
print("\nE o valor da area de cada quadrado menor e de ",areaEP2," e o perimetro de cada um deles e ", p2)
print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
