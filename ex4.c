/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*Variáveis globais*/

/*Corpo do prgrama*/

int main(){
	setlocale(LC_ALL, "portuguese");
	int i, total, dobro, grao=1;
	for(i=0; i<=16; i++){
		total = total + dobro;
		dobro = pow (2,i);
	}
	printf("\nO pagamento foi de %d grãos", total);
}
