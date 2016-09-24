#include <stdio.h>

int main()
{
int A[8]={5, 9, 1,4,3,2,6,8,7};
int i, j, men;
double tem=0;
// metodo de seleccion
	for (i=0; i<8-1; i++)
	{
		men=i;
        for (j=i+1; j<8; j++)
            if (A[j] < A[men])
                men = j;
                tem = A[i];
                A[i] = A[men];
                A[men] = tem;


	}
// imprimimos el vector
    for(i=0;i<8;i++)
    {
			printf("%d"", ",A[i]);
    }
}




