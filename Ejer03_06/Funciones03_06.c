#include "Funciones03_06.h"
/* Definicionesde los Prototipos */
float cilindro_diametro (float radio)
{
	if ( radio >= 0 )
    {
        return 2*radio;    
    }
    else
    {
        fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;
    }
}

float cilindro_circunferencia(float radio)
{
	
    if ( radio >= 0 )
    {
        return 2*PI*radio;    
    }
     else
    {
        fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;
    }
}

float cilindro_base(float radio)
{
    if ( radio >= 0 )
    {
        return PI*radio*radio;   
    }
     else
    {
        fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;
    }

}

float cilindro_volumen(float radio, float altura)
{
	if( radio >=0 && altura >= 0)
    {
        return PI*radio*radio*altura;
    }
     else
    {
        fprintf(stderr, "%s: %s\n", MSJ_ERR_PREFIJO,MSJ_ERR_VALOR_INACEPTABLE);
        return EXIT_FAILURE;
    }
}
void limpiar_buffer( void )
{
    char c;
    int n = 0;
    while ( (c = getchar()) != '\n' && c != EOF )
    {
        n++;
    }

}