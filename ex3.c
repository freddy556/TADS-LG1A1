/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Variáveis globais*/

/*Corpo do prgrama*/

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, num, temp, resposta;
	printf("\nInsira um número: ");
	scanf("%d", &num);
	for(i = num; i > 1; i--){
		resposta = resposta + i;	
	}
	printf("\nO resultado da soma dos %d números é %d", num, resposta);
}
