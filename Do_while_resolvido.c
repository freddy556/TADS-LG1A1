/*Programa para calcular área de uma figura através do uso da estrutura do while
  Autor: Lucas Mendes
  Data: 02/09/2020	
*/
/*Libs*/
# include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Corpo do programa*/

main (){
	setlocale (LC_ALL, "portuguese");
	system("color 70"); /*Comando para altera a cor do terminal.*/
	/*Variáveis locais*/
	int cont;
	float base, area, altura;
	/*iniciando as variáveis e contador em 0*/
	cont=0;
	base=0;
	altura=0;
	/*area=0;*/
	do {    /*Bloco de comandos a serem executados enquanto a condição do laço não for satisfeita*/
		printf("\nBase: ");
		fflush(stdin);
		scanf("%f", &base);
		printf("\nAltura: ");
		fflush(stdin);
		scanf("%f", &altura);
		if(base==0 || altura==0){
			printf("\nImpossível calcular a área! Tente novamente!\n");
		}
		else{
			area=base*altura/2;
			printf("\nO valor da área é: %.2f\n", area);
		}
		cont++; /*Contador sendo incrementado por iteração do laço, ou seja, a cada volta seu valor aumenta em 1*/
	}
	while(cont<3); /*Condição de parada do laço de repetição*/
	system ("pause");
}
