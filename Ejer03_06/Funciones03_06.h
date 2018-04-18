#ifndef DEFINICINES_H
#define DEFINICINES_H 1

#include <stdio.h>
#include <stdlib.h>
/* Constantes simbolicas */
#define PI 3.14
#define MSJ_ERR_PREFIJO "ERROR"
#define MSJ_ERR_VALOR_INACEPTABLE "El valor ingresado no es aceptable"
#define MSJ_DIAMETRO "El diametro es:"
#define MSJ_CIRCUNFERENCIA "La circunferencia es:"
#define MSJ_BASE "La base es:"
#define MSJ_VOLUMEN "El volumen es:"


/* Prototipos */
float cilindro_diametro (float radio);
float cilindro_circunferencia(float radio);
float cilindro_base(float radio);
float cilindro_volumen(float radio, float altura);
void limpiar_buffer( void );

#endif