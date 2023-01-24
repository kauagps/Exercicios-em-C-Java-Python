import os

print("\nEste programa realiza a serie de fibonacci e, determina se um termo usado pelo usuario pertence a serie de fibonacci.")
n = int(input("\nDigite a quantidade de termos que voce deseja que repita se a serie de fibonacci: "))
n2 = int(input("\n\nDigite o numero a qual voce acredita que faz parte da serie de fibonacci: "))
i = 1
num1 = 1
num2 = 0
n2C = 0
while i <= n:
        ass = num1 + num2
        num1 = num2
        num2 = ass
        if i == 1:
                print("\n",num1)
                
        if i == n:
                print(num1)
                
        else:
                print(num1)
                
        if num2 == n2:
                n2C = num2

        i = i + 1
        
if n2C == n2:
        print("\n",n2," pertence a serie de fibonacci!")
        
else:
        print("\n",n2," nao pertence a serie de fibonacci!")
        
print("\n\nObrigado por utilizar nosso sistema!")
os.system("pause")
