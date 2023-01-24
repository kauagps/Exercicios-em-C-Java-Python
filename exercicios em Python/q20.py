import os
print("\nEste programa ler uma quantidade qualquer de numeros e determina qual e maior e qual e menor!")
n = int(input("\nDigite o numero de valores que ira usar: "))
i = 1
while i <= n:
        print("\nDigite o ",i," valor")
        num = int(input(""))
        if i == 1:
                num1 = num
                num2 = num
        elif num1 < num:
                num1 = num
        elif num2 > num:
                num2 = num
        i = i + 1

print("\nO maior valor e ",num1,",  e o menor e ",num2)
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
