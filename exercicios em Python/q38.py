import os

print("\n\nEste programa recebe uma razao de progressao aritimetica e imprime uma sequecia de 100 numeros, o usuario determina qual o primeiro termo!")
razao = float(input("\nDigite o valor da razao: "))
num = int(input("\nDigite o numero a qual a progressao inicia: "))
i = 1
while i <= 100:
        if i == 1:
                print(num,",")
        
        elif i == 100:
                num = int(num + razao)
                print(num,".")

        else:
                num = int(num + razao)
                print(num,",")

        i = i + 1
        
print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
