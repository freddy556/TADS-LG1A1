/*libs*/
#include <stdio.h>
#include <locale.h>

/*Variáveis*/
float salb;
float salup;
float saldown;
float reajuste;

/*corpo do programa*/

int main (){
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nInsira o salário do funcionário R$");
	scanf("%f", &salb);
	reajuste = (salb * 0.25);
	salup = salb + reajuste;
	saldown = salb - reajuste;
	printf("\nO salário de R$%.2f será de R$%.2f em caso de reajuste positivo e de R$%.2f em caso de reajuste negativo", salb, salup, saldown);
	printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
	getch();
	goto inicio;
}
