/* Codifique o programa em linguagem C com uma fun��o que receba um n�mero e informe se
o mesmo � positivo ou negativo.


	Autor: Lucas Mendes
	data:26/09/2020*/

/*libs*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/*Vari�veis globais*/

int num, resp;

/*corpo do programa*/

/*fun��o principal*/

int main (){
	setlocale(LC_ALL, "");
	printf("\nInsira um n�mero para verifica��o ");
	scanf("%d", &num);
	int resp = verif (num);
}

int verif (int num){
	if(num>0){
		printf("\nO valor digitado � positivo!");
	}
	else{
		if(num==0){
			printf("\nO valor digitado � neutro!");
		}
		else{
			printf("\nO valor digitado � negativo!");
		}
	}
	return 0;
}
