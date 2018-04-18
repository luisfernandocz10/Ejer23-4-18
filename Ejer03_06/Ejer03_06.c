/* Programa de verificacion para las  funciones implementadas
en el calculo de los paramentros caractristicos de un  cilindro 
*/ 
#include <stdio.h>
#include <stdlib.h>

#include "Funciones03_06.h"

/* Inicia la ejecucion del programa */
int main(void)

{
    float radio,altura;
    
    if( ( (scanf("%f",&radio)) != 1 ) || ( radio < 0 ) )
    {
        fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;
    }
    
    limpiar_buffer();
    
    if( ( (scanf("%f",&altura)) != 1 ) || ( altura < 0 ) )
    {
        fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;
    }
       
    limpiar_buffer();

    printf("%s %.3f\n", MSJ_DIAMETRO, cilindro_diametro(radio));
    printf("%s %.3f\n", MSJ_CIRCUNFERENCIA, cilindro_circunferencia(radio));
    printf("%s %.3f\n", MSJ_BASE, cilindro_base(radio));
    printf("%s %.3f\n", MSJ_VOLUMEN, cilindro_volumen(radio,altura));
    	

    return EXIT_FAILURE;
}
