#include <stdio.h>

int main(void){
	int sal, salB, salL;
	salB = 0;
	salL = 0;
	printf("\n\nEste programa imprime o salario bruto, e liquido de um funcionario!");
	printf("\n\nDigite o valor de seu salario: ");
	scanf("%d", &sal);
	if (sal <= 2000){
		salB = ((sal * 0.13) + sal) - ((sal * 0.8) / 10);
		salL = (sal * 0.13) + sal;
	}
	else if(sal > 2000 & sal < 4000){
		salB = ((sal * 0.11) + sal) - ((sal * 0.8) / 10);
		salL = (sal * 0.11) + sal;
	}	
	else if(sal >= 4000){
		salB = ((sal * 0.07) + sal) - ((sal * 0.8) / 10);
		salL = (sal * 0.07) + sal;
	}
	
	//fiz uma gambiarra pra calcular o fgts, eu multipliquei por 0,80 depois dividi por 10 pra ficar como fosse 0,08. Pois por
	//algum motivo nao da de por 0,08 ;-;
	 
	printf("\nSeu salario liquido reajustado e igual a: %d.", salL);
	printf("\nE o bruto reajustado e com desconto do FGTS e igual a: %d.", salB);
	printf("\n\nObrigado por utilizar nosso sistema!");
	return 0;
}
