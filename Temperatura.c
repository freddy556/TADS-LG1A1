/*Libs*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*A biblioteca locale.h serve para que possamos exibir alguns caracteres especiais espec�ficos de alguma linguagem, como os acentos em portugu�s**/


/*Vari�veis*/
float c;
float f;

/*Corpo do programa*/
int main(){
	inicio:
		setlocale(LC_ALL, "portuguese");
		fflush(stdin);
		/*setlocale indica uma linguagem para que seus caracteres sejam exibidos*/
		/*setlocale(LC_ALL, "lingua que quer usar");*/
		printf("\nInsira o valor da temperatura em graus celsius ");
		scanf("%f", &c);
		f = (c * 1.8) + 32;
		printf("\n\nA temperatura em graus farenheit � %.2f", f);
		printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
		getch ();
		/*getch (); faz com que a aplica��o aguarde que o usu�rio pressione alguma tecla para continuar*/
		goto inicio;
}
