#include <stdlib.h>    
#include <time.h> 
#include <stdio.h>
#include <iostream>

using namespace std;
int lanzarnumero();

int main ()
	
{
	
	cout<<("lanza numeros ")<<endl;
	cout<<("lanse el primer numero ")<<endl;
	int  a,b,c,d;
	/* inicialize  la semilla del  random : */
  srand (time(NULL));

  /*genere un numero entre  0 y 9: */
     a = lanzarnumero();
     b = lanzarnumero();
	 c = lanzarnumero();
	 d = lanzarnumero();
    

	 
	
	 if(a==b==c==d)
	 {
		 cout<<"usted a ganado :)";
	 }
	 else 
	 {
		 cout<<"usted a perdido :(";

	 }


	getchar();
	return 0;

}

int lanzarnumero()  
{	
	int numero; 
	numero=rand() % 9 + 0;
	cout<<" el  numero es: "<<numero<<endl;
	return numero;
}




