/*Libs*/
#include <stdio.h>
#include <locale.h>
#include <string.h>

/**/


/*Corpo do programa*/

void main(){
	char senha [4] = "1310";
	char senha1 [4];
	printf("\nInsira a senha: ");
	scanf("%c", senha1);
	if(strcmp(senha, senha1)==0){
		printf("\nSenha Inválida!");
	}
}

