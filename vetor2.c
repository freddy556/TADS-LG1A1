/*Programa para ler 10 n�meros inteiros, armazenar seu quadrado em um vetor e exibi-los na tela
  Autor: Lucas Mendes
  Data: 22/09/2020	*/
/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Vari�veis globais*/

/*Corpo do prgrama*/
int main(){
	setlocale(LC_ALL, "portuguese");
	/*Variaveis locais*/
	int i, j, num, res, vet[10];
	for(i=0; i<10; i++){
		fflush(stdin);
		printf("\nInsira um n�mero: ");
		scanf("%d", &num);
		res = pow (num, 2);
		vet[i]=res;
	}
	for(j=0; j<10; j++){
		printf("\nNa posi��o %d do vetor foi armazenado o valor %d", j, vet[j]);
	}
}
