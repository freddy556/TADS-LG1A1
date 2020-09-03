/*Programa que:
1) Solicite ao usuário uma senha de 11 caracteres;
2) Para cada caractere digitado deve aparecer um asterisco na tela;
3) O usuário deve ter 3 chances para acertar a senha correta;
4) A senha correta é iron maiden;
5) Se a senha estiver correta, apresentar a mensagem Acesso Vip! Em caso contrário apresentar BARRADO
NA ENTRADA;
6) Usar loop (while ou do..while).
  Autor: Lucas Mendes
  Data: 02/09/2020	
*/
/*Libs*/
#include <stdio.h>
#include <conio.h>
#include <locale.h>

/*corpo do programa*/

main(){
	char original [11] = "iron maiden"; /*Vetor contendo a senha original*/
	char senha [11]; /*Vetor que carrega os caracteres digitados pelo usuário*/
	int contf, contw;
	
	setlocale(LC_ALL, "portuguese");
	contw=3; /*iniciando o contador do laço while em 3 para que o mesmo possa ser diminuido a cada volta do laço*/
	while(contw>=0){
		inicio:
		fflush(stdin);	
		printf("\nDigite a senha: ");
		for(contf=0; contf<11; contf++){  /*Laço de repetição para carregar o vetor senha com os dados inseridos pelo usuário*/
			senha[contf]=getch(); /*A cada espaço do vetor a aplicação aguarda entrada do teclado para preencher o espaço e continuar a execução*/
			putchar('*'); /*Ao capturar o caracter inserido e o armazenar no vetor, a aplicação imprime um asterisco na tela*/
		}
	if(contw==0){ /*Verificação para encerrar a aplicação com texto personalizado quando chegar na condição de parada contw=0*/
		printf("\nNúmero máximo de tentativas atingido! Encerrando a aplicação...\n");
		return 0;
	}	
	if(strcmp(original, senha)==0){ /*Comparação do vetor contendo a senha original com o vetor senha para permitir ou não o acesso*/
		printf("\nAcesso Vip!\n");
		system("pause");
		return 0;
	}
	else{
		printf("\nBARRADO NA ENTRADA! Tente novamente! %d tentativas restantes\n", contw);
	}
	contw--;
	}
	getch();
	system("pause");
	return 0;
}
