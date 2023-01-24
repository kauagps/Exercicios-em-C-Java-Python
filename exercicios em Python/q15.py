import os
print("\nEste programa determina a media bimestral de uma turma!")
n = int(input("\nDigite a quantidade de alunos pertencentes a turma: "))
i = 1
soma = 0
while i <= n:
    nota = int(input("\nDigite a nota do aluno: "))
    soma = soma + nota
    i = i + 1
    
media = int (soma / n)
print("\n\nA media da turma e de ",media,".")
print("\nObrigado por utilizar nosso sistema!")
os.system ("pause")
        
