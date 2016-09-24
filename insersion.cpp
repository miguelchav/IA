#include <stdio.h> //inicializacion de las librerias
int main ()
{ //inicio del programa

	int lista[9]={2,5,4,3,1,6,8,9,7}; //lista a ordenar
	// declaracion de variables
	int i=0, j=0;
	double tem;
               // metodo de insersion
		for (i=1; i<9; i++) 		
		 { 
			tem = lista[i]; // asignamos el primero valor de la lista a tem
			for (j=i; (j>0) &&  (tem<lista[j-1]) ; j--) // el ciclo permitira recorrer todas las posiciones
			lista[j] = lista[j-1]; //cuaando el valor de j sea menor tomara la posicion de j-1
			lista[j] = tmp;	//guardamos el nuermo en tem
		}  
	
             // imprimr la lista
		for(i=0;i<16;i++)
		{ 
			printf("%d"", ",lista[i]); 
		}
}  


