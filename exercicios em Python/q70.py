import os

soma = 0
result = 0
print("\nEste programa determina o faturamento mensal de um conta de energia.")
n = int(input("\nQuantas aparelhos com gasto de energia voce possui em sua casa: "))
i = 1
while i <= n:
        print("\n\t\t",i," Aparelho!")
        el = float(input("\nQuantas unidade do eletronico voce possui: "))
        w = float(input("\nDigite a quantidade de W o aparelho gasta: "))
        hs = float(input("\nDigite a quantidade de horas voce gasta com o aparelho ligado: "))
        result = int((el * w * hs * 30) / 1000)
        soma = int(result + soma)
        i = i + 1

print("\nA fatura do mes de energia equivale a: ",soma)
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
