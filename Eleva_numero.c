/*libs*/
#include <stdio.h>
#include <math.h>
/**math.h é necessária pra usar o comando pow e realizar a potenciação**/

/*variaveis*/
int x;
int y;
int res;

/*Corpo do programa*/
int main(){
	inicio:
	printf("\nInsira o valor da base ");
	scanf("%d", &x);
	printf("\n\nInsira o valor do expoente ");
	scanf("%d", &y);
	res = pow(x,y);
	/*Ao utilizar o pow, deve-se usar os valores entre parenteses e separados por virgula segundo o modelo (base, expoente)*/
	printf("\n\nAo elevarmos %d a %d temos %d como resultado", x, y, res);
	printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
	getch ();
	/*getch (); faz com que a aplicação aguarde que o usuário pressione alguma tecla para continuar*/
	goto inicio;
}
