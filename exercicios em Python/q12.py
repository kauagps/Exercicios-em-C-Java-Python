import os

print("\n\nEste programa determina se um pais e sul americano ou nao, com base no DDI digitado.")
DDI = int(input("\n\nDigite o DDI desejado: "))
if ((DDI == 54) | (DDI == 591) | (DDI == 55) | (DDI == 56) | (DDI == 57) | (DDI == 593) | (DDI == 44) | (DDI == 594) | (DDI == 592) | (DDI == 595) | (DDI == 51) | (DDI == 597) | (DDI == 58) | (DDI == 598)):
        print("\n\nO DDI digitado e de um pais sul americano!")

else:
        print("\n\nO DDI digitado nao pertence a um pais sul americano!")

print("\n\nObrigado por utilizar nosso programa!")
os.system("pause")
