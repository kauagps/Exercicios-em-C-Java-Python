import os

print("\nEste programa determina o faturamento total de chamdas internacionais, sabendo que cada minuto equivale 0,30, e que caso o faturamento passe de 500,00, a fatura recebera um desconto de 5 porcentos.")
min = int(input("\nDigite a quantidade de minutos gastos: "))
fat = int(min * 0.30)
if fat > 500:
        desconto = int(fat * 0.05)
        fat = int(fat - desconto)

print("\n\nO valor da fatura do cliente com chamadas internacionais e de: ",fat)
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
