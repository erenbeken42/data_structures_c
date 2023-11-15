#include <stdio.h>
#include <stdlib.h>

int main()
{
   int** ptr;
   int i,j,satir_sayisi,sutun_sayisi;
   scanf("%d", &satir_sayisi);
   scanf("%d", &sutun_sayisi);


   ptr= (int**)malloc(sizeof(int*)*satir_sayisi);

   for(i=0; i<satir_sayisi; i++)
   {
       *(ptr+i)=(int*)malloc(sizeof(int)*sutun_sayisi);
       for(j=0; j<sutun_sayisi; j++)
        {
        *(*(ptr+i)+j)= rand()%100;
       printf("%d ", *(*(ptr+i)+j) );
       }

   }


    return 0;
}
