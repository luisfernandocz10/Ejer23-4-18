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
/* COMIENZA LA EJECUCION DEL PROGRAMA */
int main ( void )
{
	srand ( time ( NULL ) );
	imprimir_dado(func_prob_dado());
	/*int i,a=0,b=0,c=0,d=0,e=0,f=0,var;

	for (i = 1; i <= 2000 ; i++ )
	{
		var = func_prob_dado();
		printf( "%10d", var );
		if ( i % 5 == 0 )
		{
			printf("\n");
		}
		switch ( var )
		{
			case 1:
			++a;
			break;
			
			case 2:
			++b;
			break;

			case 3:
			++c;
			break;
			
			case 4:
			++d;
			break;

			case 5:
			++e;
			break;
			
			case 6:
			++f;
			break;
		}
	}
	printf("\n%d %4d%4d%4d%4d %4d\n",a,b,c,d,e,f );*/
	return 0;
}
/* DEFINICION DE FUNCIONES */
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