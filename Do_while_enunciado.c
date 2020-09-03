#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main ()
{
 setlocale(LC_ALL, "portuguese");	
 int cont;
 float base, altura, area;
 system ("cls");
 cont=0; base=0; altura=0; area=0;
 while ( cont < 3 )
 {
 printf ( "\n Base :" ); fflush(stdin); scanf("%f", &base);
 printf ( "\n Altura :" ); fflush(stdin); scanf("%f", &altura);
 if ( base==0 || altura==0 )
 printf ("\nImpossível calcular área do triângulo!");
 else
 {
 area = base*altura/2;
 printf ( "\n Área =%5.2f" , area );
 }
 cont++;
 }
 printf ("\n");
 system ("pause");
}
