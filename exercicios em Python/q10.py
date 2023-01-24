import os
print("\nEste prgrama realiza uma das operaçoes a seguir.")
print("\nMenu")
print("\n1.Adiçao")
print("\n2.Subtraçao")
print("\n3.Multiplicaçao")
print("\n4.Divisao")
print("\n5.Potenciaçao.")
op = int(input("\nDigite o numero da opçao desejada: "))
if op == 1:
    print("\n\n\t\tAdiçao!")
    num1 = float(input("\nDigite o valor do primeiro numero: "))
    num2 = float(input("\nagora digite o valor do segundo numero: "))
    result = num1 + num2
    print("\nO resultado da soma ",num1," + ",num2," e igual a ",result,".")

elif op == 2:
    print("\n\n\t\tSubtraçao!")
    num1 = float(input("\nDigite o valor do primeiro numero: "))
    num2 = float(input("\nagora digite o valor do segundo numero: "))
    result = num1 - num2
    print("\nO resultado da subtraçao ",num1," - ",num2," e igual a ",result,".")

elif op == 3:
    print("\n\n\t\tMultiplicaçao!")
    num1 = float(input("\nDigite o valor do primeiro numero: "))
    num2 = float(input("\nagora digite o valor do segundo numero: "))
    result = num1 * num2
    print("\nO resultado da multiplicaçao ",num1," * ",num2," e igual a ",result,".")

elif op == 4:
    print("\n\n\t\tDivisao!")
    num1 = float(input("\nDigite o valor do primeiro numero: "))
    num2 = float(input("\nagora digite o valor do segundo numero: "))
    result = num1 / num2
    print("\nO resultado da divisao ",num1," / ",num2," e igual a ",result,".")

elif op == 5:
    print("\n\n\t\tPotenciaçao!")
    num1 = float(input("\nDigite o valor da base: "))
    num2 = float(input("\nagora digite o valor do expoente: "))
    result = num1 ** num2
    print("\nO resultado da potenciaçao ",num1," elevado a ",num2,", e igual a ",result,".")

print("\n\nObrigado por utilizar nosso sistema!")

os.system ("pause")
    
