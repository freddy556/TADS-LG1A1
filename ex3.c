/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Vari�veis globais*/

/*Corpo do prgrama*/

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, num, temp, resposta;
	printf("\nInsira um n�mero: ");
	scanf("%d", &num);
	for(i = num; i > 1; i--){
		resposta = resposta + i;	
	}
	printf("\nO resultado da soma dos %d n�meros � %d", num, resposta);
}
