#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  int preenche(int tamanho,int *vetor)
  {
    for(int i = 0; i <= tamanho;i++)
    {
      vetor[i] = i;
    }
  }

void  main()
{
  int *vetor;
  int tamanho;
  printf("\nTamanho do vetor:");
  scanf("%d",&tamanho);
  vetor = ( int *) malloc (tamanho * sizeof ( int ));



  preenche(tamanho, vetor);

  for ( int i = 0 ; i <tamanho; i ++)
    printf ( " % d , " , vetor [i]);

    free (vetor);
}
