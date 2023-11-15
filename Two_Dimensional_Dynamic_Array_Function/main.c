#include <stdio.h>
#include <stdlib.h>

int main()
{
  int**ptr;
  int number_lines,number_columns;
  scanf("%d",&number_lines);
  scanf("%d",&number_columns);


 create_two_dimensional_array(&ptr,number_lines,number_columns);


    return 0;
}


  void create_two_dimensional_array(int*** matris,int number_lines, int number_columns){
  int i,j;
  *matris=(int**)malloc(sizeof(int*)* number_lines);
  for(i=0; i<number_lines; i++)
  {
      *(*matris+i)=(int*)malloc(sizeof(int)* snumber_columns);
      for(j=0; j<number_columns;j++)
      {
         *(*(*matris+i)+j)=rand()%100;
         printf("%d ",*(*(*matris+i)+j) );
      }
  printf("\n");
  }





  }
