import os

print("\n\nEste programa determina se a media e a soma de n numero e impar ou par.")
n = int(input("\nDigite a quantidade de numeros a qual deseja digitar: "))
soma = 0
i = 1
while i <= n:
        print("\n\nDigite o ",i," numero: ")
        num = int(input(""))
        soma = int(soma + num)
        i = i + 1
        
media = int(soma / n)
if soma % 2 == 0:
        print("\nA soma total e ",soma,", um numero par, e a media e")
else:
        print("\nA soma total e ",soma,", um numero impar, e a media e")

if media % 2 == 0:
        print(media," um numero Par.")
else: 
        print(media," um numero Impar.")

print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
