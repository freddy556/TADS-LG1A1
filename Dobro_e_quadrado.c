/**Libs**/
#include <stdio.h>
#include <locale.h>


/**Variaveis**/
int num;
int quad;
int dual;


/**Corpo do programa**/
int main(){
	inicio:
		setlocale(LC_ALL, "portuguese");
		printf("\nInsira um n�mero ");
		scanf("%d", &num);
		dual = num * 2;
		quad = num * num;
		printf("\nO numero %d tem quadrado de valor %d e dobro de valor %d", num, quad, dual);
		printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
		getch ();
		/*getch (); faz com que a aplica��o aguarde que o usu�rio pressione alguma tecla para continuar*/
		goto inicio;
	
	
}
