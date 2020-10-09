/*Libs*/
#include <stdio.h>
#include <stdlib.h>
/*#include <conio.h>*/
#include <locale.h>
#include <string.h>
#define MASCARA '*' /*Definindo a mascara para a senha no formato de asterísco. Ex: 123 ficaria *** */



/*Variaveis*/
char senha[4] = "1310"; /*Declaração do vetor contendo a senha proposta pelo exercicio. Esse vetor servirá de base de comparação para dizer se a senha digitada é correta ou não*/
char pass [4]; /*Declaração do vetor que irá guardar os caracteres da senha com 4 posições (0, 1, 2, 3), e que será comparado com o vetor com a senha original para permitir o acesso*/
 

/*Corpo do programa*/

int main(){
	int i; /*Declaração de variável local que servirá de contador para o preenchimento do vetor no laço de repetição*/
	char op;
	inicio:
	setlocale(LC_ALL, "portuguese");
	printf("\nDigite a senha: ");
	for (i=0; i<4; i++){ /*Laço de repetição para preenchimento do vetor que armazena a senha*/
		pass[i] = getch(); /*Para cada posição i do vetor o programa aguarda o usuário entrar com um caracter*/
		putchar(MASCARA); /*Inserindo a máscara que foi setada anteriormente como *, caso não houvesse o #define MASCARA '*' no inicio, bastaria usar putchar('caracter desejado')*/		
	}
	

	if(strcmp(pass, senha) == 0){ /*Parametro strcmp serve para comparar duas strings, ao compará-las, caso o resultado seja zero significa que ambas são iguais, nos dando o resultado de "Senha correta", caso o resultado da comparação seja diferente de zero, então a senha está incorreta*/
		printf("\nSeja bem vindo!\n");
		flag: /*marcador para fazer com que haja a possibilidade de retorno ao menu mesmo depois de acessar uma opção*/
		printf("\n=================================");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  a = saldo  ============");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  b = depósito  =========");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  c = pagamentos  =======");
		printf("\n=================================");
		printf("\n=================================");
		printf("\n========  d = Transferências  ===");
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
				printf("\n**************  Operação: Saldo  ******************");
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
				printf("\n**************  Operação: Depósito  ***************");
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
				printf("\n**************  Operação: Pagamentos  *************");
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
				printf("\n**************  Operação: Transferências  *********");
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
				printf("\n************  Encerrando a Aplicação!  ************");
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
				printf("\nOpção inválida!");
				getch();					
		}

		
	}
	else{
		printf("\nSenha inválida! Tente novamente!");
		goto inicio;
	}
	return (0);
}
