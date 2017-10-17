#include "mochila.h"
 

int maiorValor(int a, int b) { return (a > b)? a : b; }
 

void mochila(int pMochila, int pElemento[], int valElemento[], int n)
{
   int i, w;

   int **matriz = (int**) malloc((n+1) * sizeof(int*));

   for(i = 0; i <= n; i++)
   {
      matriz[i] = (int *) malloc((pMochila + 1) * sizeof(int));
   }

   for (i = 0; i <= n; i++)
   {
		//printf("\n ");
       for (w = 0; w <= pMochila; w++)
       {
           if (i==0 || w==0)
           {
				    matriz[i][w] = 0;
           }
           else if (pElemento[i-1] <= w)
           {
				    matriz[i][w] = maiorValor(valElemento[i-1] + matriz[i-1][w-pElemento[i-1]],  matriz[i-1][w]);           	
           }     
           else
           {
           		matriz[i][w] = matriz[i-1][w];
           } 
	   		//printf("%d " ,  matriz[i][w]);
       }
   }

   i--;
   w--;

   printf("Valor Total : %d \n",matriz[n][pMochila]);
   printf("Elementos escolhidos : ");
	
   while(matriz[i][w])
   {
		if(matriz[i][w] == matriz[i-1][w])
		{
			i--;
		}	
		else
		{
			printf(" [%d] ", i);
			i--;
			w = w - pElemento[i];
			//printf(" %d ", pElemento[i]);
		}	
   } 
}