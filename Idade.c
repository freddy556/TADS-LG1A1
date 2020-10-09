/*libs*/
#include <stdio.h>
#include <locale.h>

/*Variáveis*/

int anasc;
int aatual;
int ano;
int meses;
int semanas;

/*Corpo do programa*/

int main(){
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nInsira o ano de nascimento ");
	scanf("%d", &anasc);
	printf("\nInsira o ano atual ");
	scanf("%d", &aatual);
	ano = aatual - anasc;
	meses = ano * 12;
	semanas = ano * 48;
	printf("\nSua idade em anos é %d\nEm meses é %d\nEm semanas é %d", ano, meses, semanas);
	printf("\nPressione qualquer tecla para fazer uma nova consulta");
	getch();
	goto inicio;	
}
