/*Libs*/
#include <stdio.h>
#include <stdlib.h>
/*#include <conio.h>*/
#include <locale.h>
#include <string.h>
#define MASCARA '*' /*Definindo a mascara para a senha no formato de aster�sco. Ex: 123 ficaria *** */



/*Variaveis*/
char senha[4] = "1310"; /*Declara��o do vetor contendo a senha proposta pelo exercicio. Esse vetor servir� de base de compara��o para dizer se a senha digitada � correta ou n�o*/
char pass [4]; /*Declara��o do vetor que ir� guardar os caracteres da senha com 4 posi��es (0, 1, 2, 3), e que ser� comparado com o vetor com a senha original para permitir o acesso*/
 

/*Corpo do programa*/

int main(){
	int i; /*Declara��o de vari�vel local que servir� de contador para o preenchimento do vetor no la�o de repeti��o*/
	char op;
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nDigite a senha: ");
	for (i=0; i<4; i++){ /*La�o de repeti��o para preenchimento do vetor que armazena a senha*/
		pass[i] = getch(); /*Para cada posi��o i do vetor o programa aguarda o usu�rio entrar com um caracter*/
		putchar(MASCARA); /*Inserindo a m�scara que foi setada anteriormente como *, caso n�o houvesse o #define MASCARA '*' no inicio, bastaria usar putchar('caracter desejado')*/		
	}
	

	if(strcmp(pass, senha) == 0){ /*Parametro strcmp serve para comparar duas strings, ao compar�-las, caso o resultado seja zero significa que ambas s�o iguais, nos dando o resultado de "Senha correta", caso o resultado da compara��o seja diferente de zero, ent�o a senha est� incorreta*/
		printf("\nSeja bem vindo!\n");
		flag: /*marcador para fazer com que haja a possibilidade de retorno ao menu mesmo depois de acessar uma op��o*/
		printf("\n=================================");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  a = saldo  ============");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  b = dep�sito  =========");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  c = pagamentos  =======");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  d = Transfer�ncias  ===");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  e = Sair  =============");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n=================================");
		op =  getch();
		switch (op){
			case 'a':
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**************  Opera��o: Saldo  ******************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**Para retornar ao menu, pressione qualquer tecla**");
				getch();
				goto flag;
				break;
			case 'b':
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**************  Opera��o: Dep�sito  ***************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**Para retornar ao menu, pressione qualquer tecla**");
				getch();
				goto flag;
				break;
			case 'c':
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**************  Opera��o: Pagamentos  *************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**Para retornar ao menu, pressione qualquer tecla**");
				getch();
				goto flag;
				break;
			case 'd':
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**************  Opera��o: Transfer�ncias  *********");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n**Para retornar ao menu, pressione qualquer tecla**");
				getch();
				goto flag;
				break;
			case 'e':
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n************  Encerrando a Aplica��o!  ************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				printf("\n***************************************************");
				exit(0);
				break;
			default:
				printf("\nOp��o inv�lida!");
				getch();					
		}

		
	}
	else{
		printf("\nSenha inv�lida! Tente novamente!");
		goto inicio;
	}
	return (0);
}
