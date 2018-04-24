#include <stdio.h>
#include <stdlib.h>
#define COLUMNA 3
#define COLUMNA_K 2
#define COLUMNA_P 2
typedef enum signo_matriz { POSITIVA=1 , NO_NEGATIVA, NEGATIVA, NO_POSITIVA, NINGUNA}signo_t;

void imprimir_arreglo (int m[][ COLUMNA ], size_t fila );
void imprimir_arreglo1 (int m[][ COLUMNA_K ], size_t fila );
void imprimir_arreglo2 (int m[][ COLUMNA_K ], size_t fila );
int traza_matriz ( int m[][COLUMNA], size_t fila );
void mod_arreglo_suma( int m[][COLUMNA], size_t fila, int t);
void mod_arreglo_mult( int m[][COLUMNA], size_t fila, int t);
void transpuesta_arreglo ( int m[][COLUMNA], size_t fila );
signo_t signo_arreglos ( int m[ ][ COLUMNA ], size_t fila );
int determinante_2x2 ( int m[ ][ COLUMNA ], size_t fila );
int determinante_3x3 ( int m[ ][ COLUMNA ], size_t fila );
int max_elem_matriz ( int m[ ][ COLUMNA ], size_t fila );
int min_elem_matriz ( int m[ ][ COLUMNA ], size_t fila );
int col_suma_matriz ( int m[ ][ COLUMNA ], size_t fila );
void producto_vectorial_matriz ( int p[ ][ COLUMNA_K ], int m[ ][ COLUMNA ], int k[ ][ COLUMNA_K ], size_t fila, size_t fila_k );
