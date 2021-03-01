#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>



int main()
{
   /* Variaveis */
   FILE *p,*a;
   int i = 0;
   char arq[100],c;


   /* Le um nome para o arquivo a ser aberto: */
   printf("\n\n Entre com um nome para o arquivo:");
   gets(arq);


   /*Abre os aqruivos para manipulacao*/
   p = fopen(arq,"rt");
   a = fopen("resto.txt","w");


   /* Caso ocorra algum erro na abertura do arquivo,o programa aborta automaticamente */
   if (p == NULL || a == NULL)
     {
        printf("Erro! Impossivel abrir o arquivo!\n");
        exit(1);
     }


  /* Repeticao ate o fim do arquivo */
 while((c = getc (p)) != EOF)
 {
   if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i'||tolower(c) == 'o' || tolower(c) == 'u')
   {
     fprintf(a,"*",c);
   }
   else
   {
      fprintf(a,"%c",c);
   }

 }
 /* Fecha o arquivo */
   fclose(p);
   fclose(a);

   return 0;
}
