/*Programa em linguagem C uma função que leia um número não determinado de
valores positivos e retorne a média aritmética desses valores
	Autor: Lucas Mendes
	Data:28/09/2020*/
/*LIBS*/	
#include <stdio.h>
#include <locale.h>

/*Corpo do programa*/

/*Variáveis globais*/

/*Função principal*/
int main (){
	setlocale(LC_ALL, "");
	float r;
	
	r = calc_media();
	printf("\nA média dos valores digitados foi de: %.2f", r);
	getch();

}

/*Função p/ calculo da média*/

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
