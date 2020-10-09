/*Libs*/
#include <stdio.h>
#include <locale.h>

/*Variáveis*/
float salb;
float sall;
float ir;
float prev;
float salt;

/*Corpo do programa*/
int main(){
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nInsira o valor do salário bruto R$");
	scanf("%f", &salb);
	prev = salb * 0.085;
	salt = salb - prev;
	ir = salt * 0.275;
	sall = salt - ir;
	printf("\nO salário líquido é de R$%.2f\nO valor recolhido pela previdência é de R$%.2f\nO valor recolhido pelo imposto de renda é de R$%.2f", sall, prev, ir);
	printf("\n\nPressione qualquer tecla para realizar uma nova consulta");
	getch ();
	/*getch (); faz com que a aplicação aguarde que o usuário pressione alguma tecla para continuar*/
	goto inicio;
}

