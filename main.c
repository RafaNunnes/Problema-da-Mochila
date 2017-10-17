#include "mochila.h"

int main(int argc, char** argv)
{
	if (argc < 1) exit(EXIT_FAILURE);

	int nElementos, pesoMaximo, i ;

	scanf("%d", &nElementos);
	scanf("%d", &pesoMaximo);

	int * pesoElemento = (int*) malloc(sizeof(int)*nElementos);
	int * valorElemento = (int*) malloc(sizeof(int)*nElementos);

	for(i = 0; i < nElementos; i++)
	{
		scanf("%d", &pesoElemento[i]);
		scanf("%d", &valorElemento[i]);
	}
		
	mochila(pesoMaximo, pesoElemento, valorElemento, nElementos);

	return 0;
}
