import os

print("\n\nEste programa determina se 4 numero formam um quadrado ou retangulo.")
num1 = float(input("\nDigite o valor da primeira aresta: "))
num2 = float(input("\nDigite o valor da segunda aresta: "))
num3 = float(input("\nDigite o valor da terceira aresta: "))
num4 = float(input("\nDigite o valor da quarta aresta: "))
if ((num1 == num2) & (num3 == num4) & (num1 == num3)):
        print("\nOs quatros valores formam um quadrado!")

else:
        print("\nOs valores digitados nao formam um quadrado!")
        
if (((num1 == num2) & (num3 == num4) & (num1 != num3)) | ((num1 == num3) & (num2 == num4) & (num1 != num2)) | ((num1 == num4) & (num2 == num3) & (num1 != num2))):
        print("\nOs valores digitados formam um retangulo!")

else:
        print("\nOs valores digitados nao formam um retangulo!")

print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
