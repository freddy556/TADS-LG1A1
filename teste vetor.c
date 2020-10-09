/*Libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Variaveis*/


/*Corpo do programa*/

int main (){
	setlocale(LC_ALL, "portuguese");
	int n [10];
	int i;
	int soma;
	for (i=0; i<=9; i++){
		printf("\n Insira um valor inteiro para preencher o vetor");
		scanf("%d", &n[i]);
	}
		printf("\nOs valores do vetor são:\n");
		for (i=0; i<=9; i++){
			printf("n[%d] = %d \n", i, n[i]);
	}
	for (i=0; i<=9; i++){
		soma = soma + n[i];
	}
	for (i=0; i<=3; i++){
		printf("\n n[%d] = %d", i, soma);
	}
	/*printf("\nA soma dos valores do vetor é igual a: %d", soma);*/
		
}

/*int function (n[i], i){
	int n [10];
	
}*/
