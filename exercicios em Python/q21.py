import os
print("\nEste programa determina a area e o perimetro de um circulo qualquer!")
raio = float(input("\nDigite o valor do raio do circulo: "))
perimetro = int(raio * 6.28)
area = int((raio * raio) * 3.14)
print("\nA area do circulo e de ",area,", e o perimetro de ",perimetro,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
