/*Libs*/
#include <stdio.h>

#include <locale.h>

/*Variáveis*/
float altura;
float peso;
char sex;
char novo;


/*Corpo do programa*/

int main(){
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nInsira a altura em metros ");
	scanf("%f", &altura);
	if(altura > 2.5){ /*Veririfação para evitar alturas superiores a 2,5m*/
		printf("\nAltura inválida!");
	}
	else{
	fflush(stdin);
	printf("\nQual o seu sexo? [M/F]");
	scanf("%c", &sex);
	if(sex == 'm'){
		peso =  altura * 72.7 - 58;
		printf("\nSeu peso ideal é de %.2f kg", peso); 
	}
	else {
		if(sex == 'f'){
			peso = altura * 62.1 - 44.7;
			printf("\nSeu peso ideal é de %.2f kg", peso);
		}
		else {
			printf("\nOpção inválida!");
		}

	}
	}
	printf("\nRealizar nova consulta? [Y/N]");
	fflush(stdin);
	scanf("%c", &novo);
			if(novo == 'y'){
				goto inicio;
			}
			else{
				printf("\nAplicação finalizada!");
				return (0);
			}	
}

