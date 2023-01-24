import os

print ("\n\nEste programa determina o faturamento total de uma empresa!")

n = int(input("\n\nDigite a quantidade de itens comercializados: "))
fatItem = 0
fatTotal = 0

for i in range(n):
    quantItem = float(input("\n\nDigite a quantidade vendida do item: "))
    preco = float(input("\n\nDigite o preço unitário do item (R$): "))
    fatItem = quantItem * preco
    print ("\n\nFaturamento do item (R$):", fatItem, "!")
    fatTotal = fatTotal + fatItem

print ("\n\nFaturamento total da empresa (R$):", fatTotal, "!")
print ("\n\nObrigado por utilizar nosso sistema!")
os.system ("Pause")
