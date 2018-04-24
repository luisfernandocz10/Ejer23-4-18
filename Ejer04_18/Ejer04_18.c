#include <stdio.h>
#include <stdlib.h>
#include "Funciones04_18.h"
int main (void)
{
	/* El arreglo tiene que estar en ete formato para compilar */
	int arreglo [][COLUMNA] = {{1, 2, 3},{1 , 0, 1 },{ 1, 2, 0 },{ 1,1,1}};
	int arreglo1 [][COLUMNA_K] = {{1, 1},{2 , 0},{ 3, 1}};
	int arreglo2 [][COLUMNA_P]= {{ 0, 0},{ 0, 0 },{ 0, 0},{0,0}};
	int filas=4;
	
	/*signo_arreglos( arreglo , filas );*/
	imprimir_arreglo(arreglo,filas);
	imprimir_arreglo1(arreglo1,3);
	
	producto_vectorial_matriz( arreglo2, arreglo, arreglo1, 4 ,2);
	imprimir_arreglo2( arreglo2, 4 );
	
	printf("%d\n", signo_arreglos(arreglo, filas) );
	printf("%d\n", determinante_3x3( arreglo ,filas) );
	printf("%d\n", max_elem_matriz( arreglo, filas) );
	printf("%d\n", min_elem_matriz( arreglo, filas) );
	printf("%d\n", col_suma_matriz( arreglo, filas) );
	
	
	printf("\n%d\n",traza_matriz(arreglo,filas));
	


 
	
	return EXIT_FAILURE;
}	
