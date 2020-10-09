/*Codifique o programa em linguagem C com uma função que receba três números inteiros
como parâmetros, representado horas, minutos e segundos, e os converta em segundos.
Exemplo: 2h:40min:10s correspondem a 9610 segundos.

	Autor: Lucas Mendes
	data:26/09/2020*/

/*libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*Variáveis globais*/
int th, tm, ts, tt, res;
/*corpo do programa*/

/*função principal*/

int main(void){
	printf("\nInsira o valor de horas que deseja converter ");
	scanf("%d", &th);
	printf("\nInsira o valor de minutos que deseja converter ");
	scanf("%d", &tm);
	printf("\nInsira o valor de segundos que deseja converter ");
	scanf("%d", &ts);
	int tt = converte (th, tm, ts);
	printf("\nO tempo de %d horas, %d minutos e %d segundos convertido apenas para segundos resulta em %d segundos", th, tm, ts, tt);
}


/*função de conversão*/
int converte (int th, int tm, int ts){
	tt = (th*3600) + (tm*60) + ts;
	return tt;
}
