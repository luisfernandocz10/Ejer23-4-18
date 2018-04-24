#include "Funciones04_14.h"
void imprimir_arreglo ( int a[], size_t tamanio )
{
	int j;
	for ( j = 0; j < tamanio; j++ )
	{
		printf("%4d", a[ j ] );
	}
	printf("\n");
}/* fin imprimir arreglo */
void ordenam_burbuja ( int a[], size_t tamanio ) /* de menor a mayor */
{
	int pasada;		/* contador de pasadas */
	int j;			/* contador de comparaciones */
	int almacena;	/* unicacion temporal utilizada para
					intercambiar los elementos */

	/* ciclo para contar el numero de pasadas */
	for( pasada = 1; pasada < tamanio; pasada++)
	{
		/* ciclo para controlar el numero de comparaciones por pasada */
		for ( j = 0; j < tamanio - 1; j++ )
		{
			/* intercambia los elementos si no se encuentran en orden */
			if ( a[ j ] > a[ j + 1 ] )
			{
				almacena = a[ j ];
				a[ j ] = a[ j + 1 ];
				a[ j + 1 ] = almacena;
			} /* fin de if */
		}
	}
}/* fin ordenamiento burbuja */
int busqueda_binaria( const int b[], int busqueda, size_t bajo, size_t alto )
{
	int central; /* variable para mantener el elemento central del arreglo */
	/* realiza el ciclo hasta que el subínice bajo es mayor que el subíndice alto */
	while ( bajo <= alto ) 
	{
		/* determina el elemento central del subarreglo en el que se busca */
		central = ( bajo + alto ) / 2;
		/* si claveDeBusqueda coincide con el elemento central, devuelve central */
		if ( busqueda == b[ central ] ) 
		{
			return central; /* retorna la posicion del arreglo donde se encuentra */
		} /* fin de if */
		/* si claveDeBusqueda es menor que el elemento central, establece el nuevo valor de alto */
		else if ( busqueda < b[ central ] ) 
		{
			alto = central - 1; /* busca en la mitad inferior del arreglosearch low end of array */
		} /* fin de else if */
		/* si claveDeBusqueda es mayor que el elemento central, establece el nuevo valor para bajo */
		else 
		{
			bajo = central + 1; /* busca en la mitad superior del arreglo */
		} /* fin de else */

	} /* fin de while */

	return EXIT_FAILURE;;   /* no se encontró claveDeBusqueda */
}