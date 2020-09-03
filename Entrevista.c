/*	Programa para calcular entradas numéricas e atribuir texto dependendo do valor
	Autor: Lucas Mendes
	Data:20/08/2020																	*/
	
/*Libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>


/*Variáveis*/

int n;


/*corpo do programa*/

int main (){
	system ("Color 17");
	inicio:
	for (n=1; n<=100; n++){
		if (n%3==0 && n%5==0){
			printf("\n%d  'cabeleleila leila'", n);
		}	
		else {
			if (n%5==0){
				printf("\n%d 'leila'", n);
			}
			else{
				if (n%3==0){
					printf("\n%d 'cabeleleila'", n);
				}
				else {
					printf("\n%d", n);
				}
			}
		}
	}
	printf("\nPressione qualquer tecla para rodar novamente");
	getch();
	goto inicio;
}	
