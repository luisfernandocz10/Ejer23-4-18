
/* ENUCIADO Ejer03_14.c
static Pruebe el siguiente código y explique su funcionamiento:
*/
#include <stdio.h>
#include <stdlib.h>

void funcion(void) {
    static int x = 0;
    x++;
    printf("%d\n", x);
}

int main(void)
{
    funcion();
    funcion();
    funcion();
    funcion();
    funcion();

    return EXIT_SUCCESS;
}
/* Dentro de la funcion se encuentra una variable estatica.
Este tipo de varibles retienen su valor incluso cuando salen de
la funcion. Por eso la siguiente vez que se envoca la funcion 
esta concerva su valor que tenia cuando se la envoco previamente
*/