/*  Programa para calcular a soma recursiva de valores digitados pelo usuário
	Autor: Lucas Mendes	
	Data: 24/08/2020
	Atualizado em 26/08/2020
*/

/*Libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>



/*Corpo do programa*/

int main (){
	fflush(stdin);	
	setlocale(LC_ALL, "portuguese");
	/*Variaveis*/
	int n;
	while(scanf("%d", &n)==1){ 
		if (n==0){  
			printf("\nValor inválido!\n");  
		}
		else{
			Soma(n); 
		}
	}
	return (0);
}

int Soma (int n){ /*Inicio da funçao recursiva para calcular a soma dos valores de entrada*/
	/*Variaveis*/
	int total;
	int soma;
	soma = 0;
	/*Inicio do calculo*/
	while(n>0){    
		soma=soma+n%10; 
		n=n/10; 
		total=soma;
	}
	if (total/10==0){
		printf("\nO valor de g(n) é %d\n", total);
	}
	else{
		Soma(total);
	}	
	}

