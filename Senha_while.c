/*Programa que:
1) Solicite ao usu�rio uma senha de 11 caracteres;
2) Para cada caractere digitado deve aparecer um asterisco na tela;
3) O usu�rio deve ter 3 chances para acertar a senha correta;
4) A senha correta � iron maiden;
5) Se a senha estiver correta, apresentar a mensagem Acesso Vip! Em caso contr�rio apresentar BARRADO
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
	char senha [11]; /*Vetor que carrega os caracteres digitados pelo usu�rio*/
	int contf, contw;
	
	setlocale(LC_ALL, "portuguese");
	contw=3; /*iniciando o contador do la�o while em 3 para que o mesmo possa ser diminuido a cada volta do la�o*/
	while(contw>=0){
		inicio:
		fflush(stdin);	
		printf("\nDigite a senha: ");
		for(contf=0; contf<11; contf++){  /*La�o de repeti��o para carregar o vetor senha com os dados inseridos pelo usu�rio*/
			senha[contf]=getch(); /*A cada espa�o do vetor a aplica��o aguarda entrada do teclado para preencher o espa�o e continuar a execu��o*/
			putchar('*'); /*Ao capturar o caracter inserido e o armazenar no vetor, a aplica��o imprime um asterisco na tela*/
		}
	if(contw==0){ /*Verifica��o para encerrar a aplica��o com texto personalizado quando chegar na condi��o de parada contw=0*/
		printf("\nN�mero m�ximo de tentativas atingido! Encerrando a aplica��o...\n");
		return 0;
	}	
	if(strcmp(original, senha)==0){ /*Compara��o do vetor contendo a senha original com o vetor senha para permitir ou n�o o acesso*/
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
