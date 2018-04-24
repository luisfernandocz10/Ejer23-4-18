/* Encuentra el elemento un elemento especificio del arreglo cuando este este ordenado.
y ningun elemento se repita dentrodel arreglo 
*/
#include <stdio.h>
#include <stdlib.h>
#include "Funciones04_14.h"
/* COMIENZA LA EJECUCION DEL PROGRAMA */
int main ( void )
{
	int arreglo [] = { 19, 45, 11, 22, 84, 8 , 15, 6 , 7,5, 54 , 98, 46, 4, 1, 65, 71 };
	int n = sizeof( arreglo ) / sizeof( int ); /* cantidad de elentos del arreglo */
	int buscar;
	printf("%s %d\n", MSJ_USU_CANT_ELEM_ARREGLO, n );
	
	imprimir_arreglo( arreglo, n );
	
	ordenam_burbuja( arreglo, n);
	
	imprimir_arreglo( arreglo, n );
	
	printf("%s ", MSJ_USU_ELEM_BUSCAR);
	if ( ( scanf("%d", &buscar) ) != 1 )
	{
		fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;	
	}
	printf("%s %d\n", MSJ_USU_UBICA_ELEM, busqueda_binaria( arreglo, buscar, 0, n) );

	return 0;
}
