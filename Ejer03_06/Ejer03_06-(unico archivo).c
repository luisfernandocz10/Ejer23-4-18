#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define MSJ_ERR_PREFIJO "ERROR"
#define MSJ_ERR_VALOR_INACEPTABLE "El valor ingresado no es aceptable"

float cilindro_diametro (float radio);
float cilindro_circunferencia(float radio);
float cilindro_base(float radio);
float cilindro_volumen(float radio, float altura);

int main(void)

{
    float radio=4.5,altura=3.4;

    printf("%f\n",cilindro_diametro(radio));
    printf("%f\n",cilindro_circunferencia(radio));
    printf("%f\n",cilindro_base(radio));
    printf("%f\n",cilindro_volumen(radio,altura));
    	

    return 0;
}
float cilindro_diametro (float radio)
{
	if ( radio > 0 )
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
	
    if ( radio > 0 )
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
    if ( radio > 0 )
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