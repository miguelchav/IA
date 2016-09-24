#include <stdio.h> 
int main ()
{//parentesis de inicio del programa

    int vector [8]={1,8,7,2,5,6,3,4,9}; //declaracion del vector 
    int i=0, j=0, k=0, tem=0; // Declaracion de variables
    										
   
    	for(i=0;i<16;i++)     //ciclo principal           
    	{
    		for(j=i+1;j<8;j++)//ciclo interno del 0 - 8
    		{     // cambio de valor en las variables 
    			if (vector[i]>vector[j]) 
    			{
    			tem=vector[i];	
    			vector[i]=vector[j];
    			vector[j]=temporal;		
			}
			}
		}	

	//vector ya ordenado
		for(i=0;i<16;i++)
		{
			printf("%d"", ",vector[i]);
		}
}// parentecis de cierre de programa

