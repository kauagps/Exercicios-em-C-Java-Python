import os
print("\nEste programa calcula o faturamento mensal de um mercado!")
n = int(input("\nDigite o numero de mercadorias diferentes que voce possui: "))
i = 1
fat = 0
while i <= n:
        print("\nDigite o numero de unidades vendidas da ",i," mercadoria: ")
        num = int(input(""))
        print("\nDigite o preco da ",i," mercadoria: ")
        p = int(input(""))
        fat = (num * p) + fat
        i = i + 1

print("\nO faturamento mensal e de ",fat,".")
print("\nObriagado por utilizar nosso sistema!")
os.system("pause")
