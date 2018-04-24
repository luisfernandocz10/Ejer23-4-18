#include <stdio.h>
#include "Funciones03_13.h"
/* comienza la ejecucion del programa */
int main ( void )
{
	int var=0;
	srand ( time ( NULL ) );
	
	imprimir_dado(func_prob_dado());
	
	printf("%d\n", func_prob_discreta1());

	printf("%d\n", func_prob_discreta2());

	var = func_prob_dado();

	printf("%d\n", var);

	return EXIT_FAILURE;
}
