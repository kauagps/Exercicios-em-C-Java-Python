import os


print("\n\nEste programa determina o volume de n esferas, e determina o valor soma total.")
n = int(input("\n\nDigite quantos esferas voce deseja calcular o volume: "))
i = 1
soma = 0
volume = 0
while i <= n:
        print("\n\n\n\nDigite o valor do raio da ",i," esfera: ")
        raio = float(input(""))
        volume = int((12.56 * (raio * raio * raio)) / 3)
        soma = int(soma + volume)
        print("\nO valor volume do ",i," esfera e de: ",volume,".")
        i = i + 1
        
print("\n\n\n\nO valor total das ",n," esferas e de: ",soma,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
