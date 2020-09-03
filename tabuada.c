/*Programa que solicite ao usuário para que digite um
número inteiro e apresente na tela a tabuada de 1 a 10 para este número através do uso da estrutura do while
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
	printf("\nInsira um número: ");
	scanf("%d", &num);
	do{ /*Bloco a ser executado*/
		res=num*cont;
		printf("\n%d vezes %d é igual a: %d\n", num, cont, res);
		cont++;
		
	}
	while(cont<=10); /*Condição de parada*/
	system("pause");
}
