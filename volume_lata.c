/**Libs**/
#include <stdio.h>
#include <locale.h>
/*A biblioteca locale.h serve para que possamos exibir alguns caracteres especiais espec�ficos de alguma linguagem, como os acentos em portugu�s**/

/**Variaveis**/
int raio;
int altura;
float volume;

/**Corpo do programa**/

int main (){
	inicio:
	setlocale(LC_ALL, "portuguese");
	/*setlocale indica uma linguagem para que seus caracteres sejam exibidos*/
	/*setlocale(LC_ALL, "lingua que quer usar");*/	
	printf("\n\nInsira o valor do raio da lata ");
	scanf("%d", &raio);
	printf("\nInsira o valor da altura da lata ");
	scanf("%d", &altura);
	volume = 3.14159 * (raio*raio) * altura;
	printf("\n\nO volume da lata � de %.3f cent�metros c�bicos", volume);
	printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
	getch ();
	/*getch (); faz com que a aplica��o aguarde que o usu�rio pressione alguma tecla para continuar*/
	goto inicio;
}

