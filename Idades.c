/*libs*/
#include <stdio.h>
#include <locale.h>

/*Vari�veis*/

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
	printf("\nSua idade em anos � %d\nEm meses � %d\nEm semanas � %d", ano, meses, semanas);
	printf("\nPressione qualquer tecla para fazer uma nova consulta");
	getch();
	goto inicio;	
}
