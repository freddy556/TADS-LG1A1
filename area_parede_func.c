/*Codifique o programa em linguagem C com uma função que receba o valor de altura e
largura de uma parede e calcule e mostre o valor da área.
	Autor: Lucas Mendes
	Data:28/09/2020*/
/*LIBS*/	
#include <stdio.h>
#include <locale.h>

/*Corpo do programa*/

/*Variáveis globais*/

/*Função principal*/

int main(){
	setlocale(LC_ALL, "");
	int base, altura, area;
	printf("\nInsira o valor da largura da parede em metros: ");
	scanf("%d", &base);
	printf("\nInsira o valor da altura da parede em metros: ");
	scanf("%d", &altura);
	area = func_parede(base, altura);
	printf("\nO valor da área da parede é de %d metros quadrados", area);
	
}

int func_parede(int base, int altura){
	int area;
	area=base*altura;
	return area;
}
