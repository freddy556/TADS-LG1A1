/*Programa para ler 10 n�meros inteiros, armazen�-los em um vetor e exibi-los na tela
  Autor: Lucas Mendes
  Data: 22/09/2020	*/
/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Vari�veis globais*/

/*Corpo do prgrama*/

int main (){
	setlocale(LC_ALL, "portuguese");
	/*Vari�veis locais*/
	int i, j, num, vet[10];
	for(i=0; i<10; i++){
		fflush(stdin);
		printf("\nInsira um n�mero: ");
		scanf("%d", &num);
		vet[i]=num;
	}
	for(j=0; j<10; j++){
		printf("\nNa posi��o %d o n�mero digitado foi %d", j, vet[j]);
	}
	
}
