#include <stdio.h>
#include <stdlib.h>

int potencia(int b,int e);


int main() {

  int b,e;
  int resultado;

  printf("\nDigite a BASE: ");
  scanf("%d",&b);

  printf("\nDigite o EXPOENTE: ");
  scanf("%d",&e);


  resultado = potencia(b,e);

  printf("potencial = %d\n",resultado);

return 0;
}

int potencia(int b, int e)
{

  if(e == 0)
  {

    return 1;
  }
  else
  {

    return b * potencia(b,e-1);;

  }
}
