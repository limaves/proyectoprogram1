#include <stdlib.h>    
#include <time.h> 
#include <stdio.h>
#include <iostream>

using namespace std;
int lanzarnumero();
int obtenerlosnumerosiguales(int numeros[]);
int main ()
	
{
	char continua='s';

	while(continua!='n')
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
    
	 int numero [4] = {a, b, c, d};

	 int numerosiguales=obtenerlosnumerosiguales(numero);

	 cout<<"numerosiguales"<<numerosiguales<<endl;

	 if(numerosiguales==4)
		 cout<<"usted a ganado";
	 if(numerosiguales==3)
		 cout<<"usted a ganado medio punto";
	 if(numerosiguales==2)
		 cout<<"seguis jugando no gana nada";
	 if(numerosiguales==0)
		 cout<<"as perdido el juego";
	 
	cout<<"desea continuar jugando s/n";
	 cin>>continua;


	}

	 return 0;

}
int obtenerlosnumerosiguales(int numeros[])
{
	int conteodeiguales=0;

	for (int a = 0; a <4; a++ )
	{
		int valor=numeros[a];

	    int conteodeigualesinternos=0;

		for(int b = 0; b <4; b++ )
		{
         if(a==b)break; 
         int valor2=numeros[b];
		 if( valor==valor2)conteodeigualesinternos++; 

		}
		if(conteodeigualesinternos>0)conteodeiguales=conteodeigualesinternos+1;

	}
	return conteodeiguales;

}
int lanzarnumero()  
{	
	int numero; 
	numero=rand() % 9 + 0;
	cout<<" el  numero es: "<<numero<<endl;
	return numero;


}




