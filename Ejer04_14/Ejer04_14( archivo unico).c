/* Encuentra el elemento un elemento especificio del arreglo cuando este este ordenado.
y ningun elemento se repita dentrodel arreglo 
*/
#include <stdio.h>
#include <stdlib.h>
/* CONSTANTES SIMBOLICAS */
#define MSJ_USU_CANT_ELEM_ARREGLO "Cantidad de elemnentos arreglo:"
#define MSJ_USU_ELEM_BUSCAR "Ingrese el elemeto a buscar: "
#define MSJ_USU_UBICA_ELEM "El valor buscado se encuentra en la posicion del arreglo: "
#define MSJ_ERR_PREFIJO "ERROR"
#define MSJ_ERR_VALOR_INACEPTABLE "El valor ingresado no es aceptable"
/* PROTOTIPOS */
void imprimir_arreglo ( int a[], size_t tamanio );
void ordenam_burbuja ( int a[], size_t tamanio );
int busqueda_binaria( const int b[], int busqueda, size_t bajo, size_t alto );
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