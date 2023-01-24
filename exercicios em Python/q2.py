import os

print("\nEste programa calcula a area e o perimetro de um retangulo qualquer!")
base = float(input("\nDigite o valor da base: "))
altura = float(input("\nDigite o valor da altura: "))
area = 0
area = int(base * altura)
perimetro = int(base + base + altura + altura)
print("\nO valor da area do retangulo e de ",area,", e o valor do perimetro e de ",perimetro,".")
print("\nObrigado por utilizar nosso sistema!")
os.system ("pause")
