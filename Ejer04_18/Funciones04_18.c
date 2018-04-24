#include "Funciones04_18.h"

void imprimir_arreglo (int m[][ COLUMNA ], size_t fila )
{
	int i,j;

	for( i = 0; i < fila; ++i )
	{
		for(j=0 ;j < COLUMNA; ++j )
		{
			printf("%d\t", m[ i ][ j ] );
		}
		printf("\n");
	}
	printf("\n");
}
void imprimir_arreglo1 (int m[][ COLUMNA_K ], size_t fila )
{
	int i,j;

	for( i = 0; i < fila; ++i )
	{
		for(j=0 ;j < COLUMNA_K; ++j )
		{
			printf("%d\t", m[ i ][ j ] );
		}
		printf("\n");
	}
	printf("\n");
}
void imprimir_arreglo2 (int m[][ COLUMNA_P ], size_t fila)
{
	int i,j;

	for( i = 0; i < fila; ++i )
	{
		for(j=0 ;j < COLUMNA_P; ++j )
		{
			printf("%d\t", m[ i ][ j ] );
		}
		printf("\n");
	}
	printf("\n");
}
int traza_matriz ( int m[][COLUMNA], size_t fila )
{
	
	int	i;
	int suma=0;
	if ( fila == COLUMNA )
	{
		for( i=0;i < fila ;++i)
		{
			suma +=m[i][i];
		}
	}
	else
	{
		return EXIT_FAILURE;
	}
	return suma ;
}
void mod_arreglo_suma( int m[][COLUMNA], size_t fila, int t)
{
	int i, j;

	for( i=0; i < fila; ++i )
	{
		for( j = 0 ; j < COLUMNA; ++j )
		{
			m[ i ][ j ] += t;
		}
	}
}
void mod_arreglo_mult( int m[][COLUMNA], size_t fila, int t)
{
	int i,j;

	for( i = 0; i < fila; ++i )
	{
		for( j = 0; j < COLUMNA; ++j )
		{
			m[i][j] *= t;
		}
	}
}
void transpuesta_arreglo ( int m[][COLUMNA], size_t fila )
{
	int matriz_aux[][ COLUMNA ] = { 0 };
	int i, j;

	for( i = 0; i < fila; ++i )
	{
		for( j = 0; j < COLUMNA; ++j )
		{
			matriz_aux[ j ][ i ] = m[ i ][ j ];
		}
	}
	for( i = 0; i < fila; ++i )
	{
		for( j = 0; j < COLUMNA; ++j )
		{
			m[ i ][ j ] = matriz_aux[ i ][ j ];
		}
	}
}
signo_t signo_arreglos ( int m[ ][ COLUMNA ], size_t fila )
{
	int i,j;
	int neg=0,posit=0,no_neg=0,no_posit=0;

	for( i = 0; i < fila; ++i )
	{
		for( j = 0; j < COLUMNA; ++j )
		{
			if ( m[ i ][ j ] > 0 )
			{
				++posit;
			}
			if (m[ i ][ j ] > 0 || m[ i ][ j ] == 0 )
			{
				++no_neg;
			}
			if (m[ i ][ j ] < 0)
			{
				++neg;
			}
			if (m[ i ][ j ] < 0 || m[ i ][ j ] == 0) 
			{
				++no_posit;
			}
		}
	}
	if( posit == fila * COLUMNA )
	{
		return POSITIVA;
	}
	if( no_neg == fila * COLUMNA )
	{
		return NO_NEGATIVA;
	}
	if( neg == fila * COLUMNA )
	{
		return NEGATIVA;
	}
	if( no_posit == fila * COLUMNA )
	{
		return NO_POSITIVA;
	}
	else 
	{

		return NINGUNA;
	}
}
int determinante_2x2 ( int m[ ][ COLUMNA ], size_t fila )
{
	
	if ( fila == COLUMNA && fila == 2 && COLUMNA == 2 )
	{
		return ( m[ 0 ][ 0 ] * m[ 1 ][ 1 ] - m[ 0 ][ 1 ] * m[ 1 ][ 0 ]);
	}
	else
	{
		return EXIT_FAILURE;
	}
}
int determinante_3x3 ( int m[ ][ COLUMNA ], size_t fila )
{
	int var1,var2,var3;
	if ( fila == COLUMNA && fila == 3 && COLUMNA == 3 )
	{
		var1 = m[ 0 ][ 0 ] * ( m[ 1 ][ 1 ] * m[ 2 ][ 2 ] - m[ 1 ][ 2 ] * m[ 2 ][ 1 ] );
		var2 = - m[ 0 ][ 1 ] * ( m[ 1 ][ 0 ] * m[ 2 ][ 2 ] - m[ 1 ][ 2 ] * m[ 2 ][ 0 ] );
		var3 = m[ 0 ][ 2 ] * ( m[ 1 ][ 0 ] * m[ 2 ][ 1 ] - m[ 1 ][ 1 ] * m[ 2 ][ 0 ] );
		return ( var1 + var2 + var3 );
	}
	else
	{
		return EXIT_FAILURE;
	}
}
void producto_vectorial_matriz ( int p[ ][ COLUMNA_K ], int m[ ][ COLUMNA ], int k[ ][ COLUMNA_K ], size_t fila, size_t fila_k )
{
	int i, j, t, suma = 0;
	/* i para las filas de la matriz p */
	for( i = 0; i < fila; i++ )
	{
		/* j para las filas de la matriz p */ 
		for(j=0 ,suma=0;j < COLUMNA; j++ )
		{
			suma = 0;
			for(t=0 ;t < COLUMNA; t++ )
			{
				suma += m[ i ][ t ]*k[ t ][ j ];
				p[ i ][ j ] = suma;
			}
		}
	
	}
	
}
/* nos dice el elemento maximo de toda la matrz */
int max_elem_matriz ( int m[ ][ COLUMNA ], size_t fila )
{
	int i, j, max = m[ 0 ][ 0 ];

	for( i = 0; i < fila; ++i)
	{
		for( j = 0 ; j < COLUMNA; ++j )
		{
			if ( max <= m[ i ][ j ] )
			{
				max = m[ i ][ j ];
			}
		}
	}
	return max;
}
int min_elem_matriz ( int m[ ][ COLUMNA ], size_t fila )
{
	int i, j, min = m[ 0 ][ 0 ];

	for( i = 0; i < fila; ++i)
	{
		for( j = 0 ; j < COLUMNA; ++j )
		{
			if ( min >= m[ i ][ j ] )
			{
				min = m[ i ][ j ];
			}
		}
	}
	return min;
}
/* retorne el máximo de la suma, en valores absolutos, de los elementos de cada columna */
int col_suma_matriz ( int m[ ][ COLUMNA ], size_t fila)
{
	int i, j, suma = 0, max = 0;
	/* suma de los elementos de la primer columna */
	for( i = 0; i < 1; ++i)
	{
		for( j = 0 ; j < fila; ++j )
		{
			max += m[ j ][ i ]; 
		}
	}
	/* verifica que sea positivo */
	if( max < 0 )
	{
		max = - max;
	}
	/* suma los elementos de todas las columnas */
	for( i = 0; i < COLUMNA; ++i)
	{
		for( j = 0, suma = 0; j < fila; ++j )
		{
			suma += m[ j ][ i ]; 
		}
		if( suma < 0 )
		{
		suma = - suma;
		}
		if ( max <= suma )
		{
			max = suma;
		}
	}
	return max;
}