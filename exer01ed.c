#include <stdio.h>
#include <stdlib.h>

void hora(int*	total_minutos,int* minutos,int* horas)
{
	  *horas = *total_minutos/60;
    *minutos = *total_minutos - (*horas * 60);

}
void main()
{
        int total_minutos;
        int minutos;
        int horas;
				printf("\nDigite o total de minutos: ");
        scanf("%d",&total_minutos);
				hora(&total_minutos,&minutos,&horas);
				printf("\n %d : %d \n",horas,minutos);
}
