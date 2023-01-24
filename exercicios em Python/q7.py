import os

print("\n\nEste programa determina a fatura de uma conta de telefone pre pago de 6000 minutos, de (R$): 70,00, sabendo que e cobrado (R$): 0,13 por minutos exedentes. ")
minutos = int(input("\nDigite a quantidade de minuto gastos em ligaoes: "))
if minutos > 6000:
    fatura = float((minutos - 6000) * 0.13) + 70.00
    print("\n\nO valor da fatura e de R$: ",fatura,".")

elif minutos < 6000:
    print("\n\nO valor de ligacao em minutos nao utrapassou 6000, portanto a fatura sera somente (R$): 70,00.")

print("\nObrigado por utilizar nosso sistema!")
os.system ("pause")
