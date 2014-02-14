#include <stdlib.h>    
#include <time.h> 
#include <stdio.h>


int main ()
	
{
	printf ("lansa numeros ");
	printf("lanse el primer numero ");
	int  a,b,c,d;
	/* inicialize  la semilla del  random : */
  srand (time(NULL));

  /*genere un numero entre  0 y 9: */
     a = rand() % 9 + 0;
     b = rand() % 9 + 0;
	 c= rand() % 9 + 0;
	 d= rand() % 9 + 0;



return 0;

}



