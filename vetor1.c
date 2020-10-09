/*Programa para ler 10 números inteiros, armazená-los em um vetor e exibi-los na tela
  Autor: Lucas Mendes
  Data: 22/09/2020	*/
/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Variáveis globais*/

/*Corpo do prgrama*/

int main (){
	setlocale(LC_ALL, "portuguese");
	/*Variáveis locais*/
	int i, j, num, vet[10];
	for(i=0; i<10; i++){
		fflush(stdin);
		printf("\nInsira um número: ");
		scanf("%d", &num);
		vet[i]=num;
	}
	for(j=0; j<10; j++){
		printf("\nNa posição %d o número digitado foi %d", j, vet[j]);
	}
	
}
