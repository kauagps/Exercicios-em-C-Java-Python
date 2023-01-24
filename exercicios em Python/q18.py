import os
print("\Este programa calcula o novo salario bruto de um funcionario!")
sal = float(input("\nDigite o valor de seu salario: "))
if sal <= 2000:
    salB = int(((sal * 0.13) + sal) - (sal * 0.08))
    salL = int((sal * 0.13) + sal)
    
elif (sal > 2000) & (sal < 4000):
    salB = int(((sal * 0.11) + sal) - (sal * 0.08))
    salL = int((sal * 0.11) + sal)
    
else:
    salB = int(((sal * 0.07) + sal) - (sal * 0.08))
    salL = int((sal * 0.07) + sal)

print("\nO salario liquido reajustado e igual a ",salL,", e o bruto reajustado e com desconto do FGTS e igual a ",salB,".")
print("\nObrigado por utilizar nosso sistema!")
os.system("pause")
