#include <stdio.h>
#include <stdlib.h>

int main()
{
   int** ptr;
   int i,j,number_lines,number_columns;
   scanf("%d", &number_lines);
   scanf("%d", &number_columns);


   ptr= (int**)malloc(sizeof(int*)*number_lines);

   for(i=0; i<number_lines; i++)
   {
       *(ptr+i)=(int*)malloc(sizeof(int)*number_columns);
       for(j=0; j<number_columns; j++)
        {
        *(*(ptr+i)+j)= rand()%100;
       printf("%d ", *(*(ptr+i)+j) );
       }

   }


    return 0;
}
