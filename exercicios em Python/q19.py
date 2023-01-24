import os
print("\n\nEste programa ler uma quantidade qualquer de numeros reais e, realiza uma media aritimetica simples.")
n = int(input("\nDigite o numero de unidade que ira calcular: "))
i = 1
soma = 0
media = 0
while (i <= n):
    print("\nDigite o ",i," valor")
    num = int(input(" "))
    soma = int (soma + num)
    i = i + 1

media = int (soma / n)
print("\nA soma de todos os valore e de ",soma,", e a media aritimetica e ",media,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
