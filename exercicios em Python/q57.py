import os

num1 = 1
soma = 1
print("\nEste progrma determina o produtório (multiplicação) dos números inteiros no intervalo de 1 até n")
n = int(input("\nDigite o valor de n: "))
i = 1
while i <= n:
        print(" ",num1)
        soma = soma * num1
        num1 = num1 + 1
        i = i + 1

print(" = ",soma,"")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
