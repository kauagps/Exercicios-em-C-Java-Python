import os
h = 0
print("\n\nEste programa gerar o numero H, levando em conta que o usuario decide a quantidade valores.")
n = int (input("\n\nDigite a quantidade de valores para chegar no numero H: "))
while (n > 0):
        h =int (h + 1 / n)
        n = n - 1
        
print("\n\nO valor de H e: ", h)
print("\n\nObrigado por utilizar nosso programa!")
os.system("pause")
