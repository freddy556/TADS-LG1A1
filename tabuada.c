/*Programa que solicite ao usu�rio para que digite um
n�mero inteiro e apresente na tela a tabuada de 1 a 10 para este n�mero atrav�s do uso da estrutura do while
  Autor: Lucas Mendes
  Data: 02/09/2020	
*/
/*Libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Corpo do programa*/

main(){
	setlocale(LC_ALL, "portuguese");
	int cont, num, res;
	cont=0;
	printf("\nInsira um n�mero: ");
	scanf("%d", &num);
	do{ /*Bloco a ser executado*/
		res=num*cont;
		printf("\n%d vezes %d � igual a: %d\n", num, cont, res);
		cont++;
		
	}
	while(cont<=10); /*Condi��o de parada*/
	system("pause");
}
