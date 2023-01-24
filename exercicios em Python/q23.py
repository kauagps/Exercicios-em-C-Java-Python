import os
num1 = 0
num2 = 1
print("\n\nEste programa imprime a serie de fibonacci.")
n = int(input("\nDigite a quantidade de valores a qual deseja que repita-se: "))
i = 1
while i <= n:
        aux = num1 + num2
        num1 = num2
        num2 = aux
        if i == n:
                print(num1,".")
        else:
                print(num2,",")
        i = i + 1
        
print("\n\nObigado por utilizar nosso sistema!")
os.system("pause")
