#ifndef FUNCIONES_H
#define FUNCIONES_H 1
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
#endif