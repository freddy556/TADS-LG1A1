/* Codifique o programa em linguagem C com uma função que receba um número e informe se
o mesmo é positivo ou negativo.


	Autor: Lucas Mendes
	data:26/09/2020*/

/*libs*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/*Variáveis globais*/

int num, resp;

/*corpo do programa*/

/*função principal*/

int main (){
	setlocale(LC_ALL, "");
	printf("\nInsira um número para verificação ");
	scanf("%d", &num);
	int resp = verif (num);
}

int verif (int num){
	if(num>0){
		printf("\nO valor digitado é positivo!");
	}
	else{
		if(num==0){
			printf("\nO valor digitado é neutro!");
		}
		else{
			printf("\nO valor digitado é negativo!");
		}
	}
	return 0;
}
