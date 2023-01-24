import os

print("\n\nEste programa determina se um numero e primo ou nao.")
num = int(input("\nDigite o numero desejado: "))
i = 2
resultado = 0
while i <= (num / 2) :
        if num % i == 0:
                resultado = resultado + 1
                break
        i = i + 1

if resultado == 0:
        print("\n",num," e um numero primo")
else:
        print("\n",num," nao e um numero primo")
        
print("\n\nObrigado por utilizar nosso programa!")
os.system("pause")
