/*Programa em linguagem C uma fun��o que leia um n�mero n�o determinado de
valores positivos e retorne a m�dia aritm�tica desses valores
	Autor: Lucas Mendes
	Data:28/09/2020*/
/*LIBS*/	
#include <stdio.h>
#include <locale.h>

/*Corpo do programa*/

/*Vari�veis globais*/

/*Fun��o principal*/
int main (){
	setlocale(LC_ALL, "");
	float r;
	
	r = calc_media();
	printf("\nA m�dia dos valores digitados foi de: %.2f", r);
	getch();

}

/*Fun��o p/ calculo da m�dia*/

int calc_media(){
	float soma=0, media, num=1, i=0;
	while(num>0){
		printf("\nDigite um valor maior que zero: ");
		scanf("%f", &num);
		soma+=num;
		i++;
	}
	media=soma/(i-1);
	return media;
}	
