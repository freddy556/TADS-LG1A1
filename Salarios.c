/*Libs*/
#include <stdio.h>
#include <locale.h>

/*Vari�veis*/
float salb;
float sall;
float ir;
float prev;
float salt;

/*Corpo do programa*/
int main(){
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nInsira o valor do sal�rio bruto R$");
	scanf("%f", &salb);
	prev = salb * 0.085;
	salt = salb - prev;
	ir = salt * 0.275;
	sall = salt - ir;
	printf("\nO sal�rio l�quido � de R$%.2f\nO valor recolhido pela previd�ncia � de R$%.2f\nO valor recolhido pelo imposto de renda � de R$%.2f", sall, prev, ir);
	printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
	getch ();
	/*getch (); faz com que a aplica��o aguarde que o usu�rio pressione alguma tecla para continuar*/
	goto inicio;
}

