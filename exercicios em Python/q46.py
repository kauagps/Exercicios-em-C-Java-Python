import os

salarioTotal = 5000
print("\nEste programa determina o valor total do salario de um vendedor no final do mes, sabendo que ele ja tem um salario fixo de 5000.")
n = int(input("\nDigite o numero de vendas feitas no mes: "))
i = 1
while i <= n:
        print("\nDigite o valor da ",i," venda: ")
        venda = float(input(""))
        if venda <= 1000:
                desconto = int(venda * 0.05)
                venda = int(venda - desconto)
                
        elif (venda > 1000) & (venda <= 2000):
                desconto = int(venda * 0.07)
                venda = int(venda + desconto)

        elif venda > 2000:
                desconto = int(venda * 0.11)
                venda = int(venda + desconto)

        salarioTotal = salarioTotal + venda
        i = i + 1
        
print("\nO salario total do funcionario e igual a: ", salarioTotal)	
print("\nObrigado por utilizar noso programa!")
os.system("pause")
