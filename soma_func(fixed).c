/*Codifique o programa em linguagem C com uma fun��o que receba um n�mero inteiro e positivo
N como par�metro e retorne a soma dos n�meros inteiros existentes entre 1 e N(inclusive).
	Autor: Lucas Mendes
	data:26/09/2020*/

/*libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Vari�veis globais*/
int num, res;
/*Corpo do programa*/

int main(void){
	setlocale(LC_ALL, "");
	
	printf("\nInsira um valor inteiro para realizar a soma: ");
	scanf("%d", &num);
	
	int res = soma(num);
	
	printf("\nO valor da soma dos valores de 1 at� %d � de: %d", num, res);
	
}

int soma (int num){ /* o parametro estava salvo como res */
	int i;
	if(num>0){
		for(i=num; i>0; i--){
			res=res+i;    /* aqui ele contava o i = num e o res = num por causa do parametro */
		}
	}
	else{
		printf("\nValor inv�lido! Digite um valor inteiro e positivo maior que zero!");
	}
	return res;
}


