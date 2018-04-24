/* DEFINICION DE FUNCIONES 
total de funciones cinco.
*/
#include "Funciones03_13.h"
/* funcion definida para
P(X=0)=0.2,P(X=1)=0.8,P(x=0)=0 
*/
int func_prob_discreta1 ( void )
{
	int n;
	/* Nos da un valor aleatorio comprendido
	entre (1,10) pertenecientes a los naturales
	*/
	n =( 1 + ( rand() % 10));

	if ( 1 <= n && n <= 8 ) /* tomo el 80%*/
	{
		return 1;
	}
	else	/* tomo el 20% */
	{
		return 0;
	}
}
/* funcion definida para
P(X=3)=0.1,P(X=5)=0.55,P(x=9)=0.35 
*/
int func_prob_discreta2 ( void )
{
	int n;
	
	n =( 1 + ( rand() % 100));
	
	if ( 1 <= n && n <= 55 )
	{
		return 5;
	}
	if ( 55 < n && n <= 65 )
	{
		return 3;
	}
	else
	{
		return 9;
	}
}
/* funcion equiprobable moneda */
int func_prob_moneda ( void )
{
	if ( rand() % 2 )
	{
		return MONEDA_CARA;
	}
	else
	{
		return MONEDA_CECA;
	}
}
/* funcion equiprobable dado */
dado_t func_prob_dado ( void )
{ 
	switch ( 1 + ( rand() % 6 ) )
	{
		case DADO_1:
		return DADO_1;
		break;

		case DADO_2:
		return DADO_2;
		break;

		case DADO_3:
		return DADO_3;
		break;

		case DADO_4:
		return DADO_4;
		break;

		case DADO_5:
		return DADO_5;
		break;

		case DADO_6:
		return DADO_6;
		break;

		default:
		return EXIT_SUCCESS;
	}
}
void imprimir_dado ( size_t x )
{
	switch ( x )
	{
		case DADO_1:
		printf("|   |\n| * |\n|   |\n\n" );
		break;
		
		case DADO_2:
		printf("|  *|\n|   |\n|*  |\n\n" );
		break;
		
		case DADO_3:
		printf("|*  |\n| * |\n|  *|\n\n" );
		break;	
		
		case DADO_4:
		printf("|* *|\n|   |\n|* *|\n\n" );	
		break;

		case DADO_5:
		printf("|* *|\n| * |\n|* *|\n\n" );
		break;

		case DADO_6:
		printf("|* *|\n|* *|\n|* *|\n\n" );
		break;
	}
}