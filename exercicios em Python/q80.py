import os

num = 1
sI = 0
sP = 0
qntI = 0
qntP = 0
mP = 0
mI = 0
print("\nEste programa determina a quantidade de numeros pares, a quantidade de numeros impares, a soma de todos os pares, a soma de todos os impares, a media de todos os pares e a media de todos os impares no intervalo de 0 ate um inteiro positivo n digitado pelo usuario")
n = int(input("\nDigite o valor de n: "))
i = 1
while i <= n:
        print(num)
        if (num % 2 == 0):
                sP = int(sP + num)
                qntP = int(qntP + 1)

        else:
                sI = int(sI + num)
                qntI = int(qntI + 1)

        num = num + 1
        i = i + 1

mI = int(sI / n)
mP = int(sP / n)
print("\nA quantidade de numeros pares e de ",qntP,", a quantidade de impares de ",qntI,". A soma de todos os pares resulta em ",sP,", e a dos impares ",sI,". E por fim a media dos impares e ",mI,", e a dos pares ",mP,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
