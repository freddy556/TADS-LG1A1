/*Codifique o programa em linguagem C com uma fun��o que receba como par�metro o raio de
uma esfera, calcule e mostre no programa principal qual o seu volume: v=4/3*R�

	Autor: Lucas Mendes
	data:26/09/2020*/

/*libs*/

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

/*Vari�veis globais*/
int raio;
float res;
/*corpo do programa*/

/*fun��o principal*/

int main (){
	setlocale(LC_ALL, "");
	printf("\nInsira o valor do raio para calcular o volume da esfera ");
	scanf("%d", &raio);
	int res = esfera(raio);
	printf("\nO volume da esfera � de %d", res);
	
	return 0;
}


/*fun��o para calculo do volume*/
int esfera (int raio){
	res = (4 * pow(raio, 3))/3;
	return res;
}
