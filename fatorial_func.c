/*Codifique o programa em linguagem C com uma função que receba um valor inteiro e
positivo, calcule e mostre o seu fatorial
	Autor: Lucas Mendes
	Data:28/09/2020*/
/*LIBS*/	
#include <stdio.h>
#include <locale.h>

/*Corpo do programa*/

/*Variáveis globais*/

/*Função principal*/
int main(){
	int num, res;
	setlocale(LC_ALL, "");
	tryagain:
	printf("\nDigite um valor para saber o seu fatorial: ");
	scanf("%d", &num);
	if(num<1){
		printf("\nO valor digitado é inválido!");
		goto tryagain;
	}
	else{
		res = func_fat(num);
		printf("\nO fatorial de %d é %d", num, res);
	}
}


int func_fat (int num){
	int i, fat;
	for(fat=1; num>1; num=num-1){
		fat=fat*num;
	}
	return fat;
}
