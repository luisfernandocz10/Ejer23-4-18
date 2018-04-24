#ifndef FUNCIONES_H
#define FUNCIONES_H 1
/* BIBLIOTECAS */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* VARIABLES TIPO ENUMERATIVO */
enum moneda { MONEDA_CARA, MONEDA_CECA };
typedef enum dado { DADO_1 = 1, DADO_2, DADO_3, DADO_4, DADO_5, DADO_6 }dado_t;
/* PROTOTIPOS FUNCIONES */
int func_prob_discreta1 ( void );
int func_prob_discreta2 ( void );
dado_t func_prob_dado ( void );
void imprimir_dado ( size_t x );
#endif