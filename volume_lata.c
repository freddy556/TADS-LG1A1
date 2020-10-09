/**Libs**/
#include <stdio.h>
#include <locale.h>
/*A biblioteca locale.h serve para que possamos exibir alguns caracteres especiais específicos de alguma linguagem, como os acentos em português**/

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
	printf("\n\nO volume da lata é de %.3f centímetros cúbicos", volume);
	printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
	getch ();
	/*getch (); faz com que a aplicação aguarde que o usuário pressione alguma tecla para continuar*/
	goto inicio;
}

