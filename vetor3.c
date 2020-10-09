/*Dado um vetor de números inteiros, codifique o programa em Linguagem C que:
• exiba o vetor em ordem inversa.
• exiba somente os número pares
• exiba somente os ímpares
• calcule a média aritmética de todos os números
• exiba o maior valor e sua posição no vetor
• exiba o menor valor e sua posição no vetor
• exiba os elementos repetidos
• exiba os elementos não repetidos
• exiba a frequência de cada elemento
  Autor: Lucas Mendes
  Data: 22/09/2020	*/
/*LIBS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Variáveis globais*/
int vet[10], op, num, i;
char resp, resp2;


/*Corpo do prgrama*/

main (){
		system("color 70");
		setlocale(LC_ALL, "portuguese");
		menu:
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  1 = Carregar o vetor  ===================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  2 = Exibir ordem inversa  ===============================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  3 = Exibir Pares ========================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  4 = Exibir ímpares  =====================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  5 = Média Aritmética  ===================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  6 = Maior Valor  ========================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  7 = Menor Valor  ========================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  8 = Elementos repetidos =================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  9 = Elementos não repetidos  ============================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  0 = Frequência dos Elementos  ===========================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n=========================================  S = Sair  ===============================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		printf("\n====================================================================================================================");
		op =  getch();
		switch (op){
			case '1':
				fflush(stdin);
				system ("cls");
				for(i=0; i<10; i++){
					printf("\nInsira um valor para preencher o vetor: ");
					scanf("%d", &num);
					vet[i]=num;
				}
				fflush(stdin);
				printf("\nGostaria de exibir o vetor? [S/N]");
				scanf("%c", &resp);
				if(resp == 'S'){
					for(i=0; i<10; i++){
						printf("\nNa posição %d está o valor %d", i, vet[i]);
					}
					printf("\nPressione qualquer tecla para retornar ao menu");
					getch();
					goto menu;
				}
				else{
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
				}
			break;
			case '2':
				system ("cls");
				printf("\nPressione qualquer tecla para exibir o vetor original e sua versão invertida\n");
				getch();
				printf("\nVetor Original:");
				for(i=0; i<10; i++){
					printf("\nNa posição %d está o valor %d", i, vet[i]);
				}
				printf("\nVetor Invertido:");
				for(i=9; i>=0; i--){
					printf("\nNa posição %d está o valor %d", i, vet[i]);
				}
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
				
			break;
			case '3':
				system ("cls");
				printf("\nPressione qualquer tecla para exibir os valores pares presentes no vetor");
				getch();
				for(i=0; i<10; i++){
					if(vet[i]%2==0){
						printf("\nA posição %d possui número par de valor %d", i, vet[i]);
					}
				}
				printf("\nPara retornar ao menu pressione qualquer tecla");
				getch();
				goto menu;
			break;
			case '4':
				system ("cls");
				printf("\nPressione qualquer tecla para exibir os valores ímpares presentes no vetor");
				getch();
				for(i=0; i<10; i++){
					if(vet[i]%2!=0){
						printf("\nA posição %d possui número ímpar de valor %d", i, vet[i]);
					}
				}
				printf("\nPara retornar ao menu pressione qualquer tecla");
				getch();
				goto menu;
			break;
			case '5':
				system("cls");
				float media, soma;
				printf("\nPressione qualquer tecla para exibir o vetor e a média aritmética de seus valores");
				getch();
				for(i=0; i<10;i++){
					printf("\nNa posição %d está o número de valor %d ", i, vet[i]);
					soma = soma + vet[i];
				}
				media = soma/10;
				printf("\nO valor da média aritmética dos valores do vetor é: %.2f", media);
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
			break;
			case '6':
				system("cls");
				int maior, pos;
				printf("\nPressione qualquer tecla para exibir o vetor e o maior valor guardado");
				getch();
				for(i=0; i<10; i++){
					printf("\nA posição %d possui o número de valor %d", i, vet[i]);
					if(vet[i]>maior){
						maior = vet[i];
						pos = i;
					}	
				}
				printf("\nO maior valor armazenado no vetor está na posição %d e tem valor igual a %d", pos, maior);
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
			break;
			case '7':
				system("cls");
				int menor, pos1;
				printf("\nPressione qualquer tecla para exibir o vetor e o menor valor guardado");
				getch();
				for(i=0; i<10; i++){
					printf("\nA posição %d possui o número de valor %d", i, vet[i]);
					if(vet[i]<menor){
						menor = vet[i];
						pos1 = i;
					}	
				}
				printf("\nO menor valor armazenado no vetor está na posição %d e tem valor igual a %d", pos1, menor);
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
			break;
			case '8':
				system("cls");
				int j, aux;
				printf("\nPressione qualquer tecla para exibir os valores que se repetem no vetor, caso existam");
				getch();
				for(i=0; i<10; i++){
					for(j=0; j<10; j++){
						if(j!=i){ /*Verificação para impedir que a mesma posição seja considerada como valores diferentes*/
							if(vet[i]==vet[j]){
								aux = j; /*Variável auxiliar para guardar a posição em que há a repetição de valores*/
								printf("\nA posição %d possui o número %d que se repete na posição %d", i, vet[i], aux);
							}
						}
					}
				}
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
			break;
			case '9':
				system("cls");
				int i, k, n=0, vet2[10], rep;
				printf("\nPressione qualquer tecla para exibir os valores que não se repetem no vetor, caso existam");
				getch();
				printf("\nVetor Original:");
				for(i=0; i<10; i++){ /*Vetor para exibir o vetor original e servir de referência ao comparar com o novo vetor gerado*/
					printf("\nA posição %d possui o valor %d\n", i, vet[i]);
				}
				for(i=0; i<10; i++){
					rep = 0; /*Variável para dizer se o número é repetido ou não. 0 seria para indicar false e 1 true*/
					for(k=i+1; k<=10; k++){
						if(vet[i]==vet[k]){ /*Caso a verificação seja positiva a variável rep recebe o valor de 1, que seria equivalente ao true*/
							rep = 1;
						}
					}
					if(rep<1){ /*Verificando se o indicador é verdadeiro ou falso para a condição dos números serem repetidos, caso seja menor que 1 o valor da posição i do vetor original é adicionado a um novo vetor*/
						vet2[n]=vet[i]; /*vet2 recebe o valor de vet*/
						n++; /*variável de indice para o vet2, sendo incrementada a cada novo elemento adicionado*/
					}
				}
				printf("\nVetor sem elementos repetidos:");
				for(i=0; i<n; i++){ /*Laço para imprimir o novo vetor sem os valores repetidos*/
					printf("\nA posição %d possui o número %d", i, vet2[i]);
				}
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
			break;
			case '0':
				system("cls");
				int aux3, aux4, l, rept, vet3[10], freq=0;
				printf("\nPressione qualquer tecla para exibir a frequência com que os itens aparecem no vetor");
				getch();
				printf("\nVetor Oriinal:");
				for(i=0; i<10; i++){
					printf("\nA posição %d possui o número %d", i, vet[i]);
				}
				printf("\nNúmeros do vetor que NÃO se repetem: ");
				for(i=0; i<10; i++){
					rept=0;
					for(l=0; l<10; l++){
						if(l!=i){
							if(vet[i]==vet[l]){
								rept++;
							}
						}
					}
					if(rept==0){
					printf("\n%d", vet[i]);
					}
				}
				printf("\nNúmeros do vetor que se repetem UMA vez: ");
				for(i=0; i<10; i++){
					rept=0;
					for(l=0; l<10; l++){
						if(l!=i){
							if(vet[i]==vet[l]){
								rept++;
								if(rept==1){
									aux3=i;
									aux4=l;
								}
							}
						}
					}
				}
				if(rept==1){
					printf("\n%d", vet[i]);
					vet[aux3]=0;
					vet3[i]=0;
					vet3[aux4]=0;
				}
				for(i=0; i<10; i++){
					for(l=0; l<10; l++){
						if(i!=l){
							if(vet3[l]==vet3[i]){
								vet3[i]=0;
							}
						}
					}
				}
				printf("\nNúmeros do vetor que se repetem MAIS DE UMA vez: ");
				for(i=0; i<10; i++){
					if(vet[i]!=0){
						printf("\n%d", vet3[i]);
					}
				}
				printf("\nPressione qualquer tecla para retornar ao menu");
				getch();
				goto menu;
			break;
			case 's':
				fflush(stdin);
				system("cls");
				printf("\nDeseja encerrar a aplicação? [S/N]");
				scanf("%c", &resp2);
				if(resp2!='S'){
					goto menu;
				}
				else{
					return 0;
				}
			break;
			default:
				system("cls");
				printf("\nOpção inválida!");
				getch();
				goto menu;					
		}
	
}
