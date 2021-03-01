#include <stdio.h>
#include  <stdlib.h>


typedef  struct {
 char nome [ 50 ];
 char estilo [ 50 ];
 int integrantes;
 int posicao;
} bandas;

void  preenche (bandas * banda, int n) {
  for ( int i = 0 ; i <n; i ++) {
    printf (" Digite o nome da banda [%d] \n " , i);
    while (getchar()!= '\n');
    printf ("digite o estilo da banda [%d] \n" , i);
    scanf ("%49[^\n]s" , banda [i].estilo);
    while (getchar()!='\n');
    printf ("digite o número de integrantes da banda [%d] \n" , i);
    scanf ("%d",&banda[i].integrantes);
    while (getchar()!='\n');
    printf ("digite o número da posição da banda [%d] no seu ranking \n",i);
    scanf ("%d" , &banda[i].posicao);
    while (getchar()!='\n');
  }
}

void  pede (bandas * banda, int m) {
int n;

printf ("digite a posicao de uma banda e veja as informações desta banda\n" );
scanf ("%d", &n);

printf (" O nome da banda [%d] = %s:\n",n,banda[n].nome);
printf (" O estilo da banda [%d] = %s\n",n,banda[n].estilo);
printf (" O numero de integrantes da banda [ % d ] =%d\n",n,banda[n].integrantes);
printf (" A posicao da banda [%d] sem classificacao =%d\n",n,banda[n].posicao);

}


int  main () {

  bandas banda [ 5 ];
  preenche (& banda [ 0 ], 5 );

for ( int i = 0 ; i < 5 ; i ++) {
printf ("\n=====================================================\n" );
printf (" o nome da banda [%d] = % s :\n",i,banda[i].nome);
printf (" o estilo da banda [%d]=%s\n " , i, banda[i].estilo );
printf (" o numero de integrantes da banda [%d] =%d \n" ,i,banda[i].integrantes );
printf (" a posicao da banda [%d] sem classificação = %d\n" , i,banda[i].posicao );

}

   pede (& banda [0],5);

  return  0 ;
}
