#include <stdio.h>

    // creamos una funcion llamada mergersort
    int mergersort (int lista[], int left, int mit, int rigth) //
    {
        //  declaracion de variables
        int i,j,k; /*variables de los ciclos*/
        int x= mit -left+1, y = rigth - mit;
        int l[x], r[y];

        for (i = 0; i < x; i++)
            {
             l[i] = lista[left + i];
            }
        for (j = 0; j < y; j++)
            {
              r[j] = lista[mit + 1+ j];
            }
        // asignarle 0 a las variables de los ciclos
        i=0;
        j=0;
        k=left;
        while (i < x && j < y)
        {
            if (l[i] <= r[j])
            {
                lista[k] = l[i];
                i++;
            }
            else{
                lista[k] = r[j];
                j++;
            }
           k++;
        }

        while (i < x){
            lista[k] = l[i];
            i++;
            k++;
        }

        while (j < y){
            lista[k] = r[j];
            j++;
            k++;
        }

        int sort(int lista[], int left, int rigth){
            if (left < rigth){
                int mit =left+(rigth-left)/2;
                sort(lista, left, mit);
                sort(lista, mit+1, rigth);
                merge(lista, left, mit, rigth);
            }
        }

}

int main(){
  int lista[8]={2,4,1,6,3,8,5,7,9};
  int i, n = 10;

  sort(lista, 0, 8);


		for(i=0;i<8;i++)
		{
			printf("%d"", ",lista[i]);
		}
}




