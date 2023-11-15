#include <stdio.h>
#include <stdlib.h>

int main()
{
  int**ptr;
  int satir_sayisi,sutun_sayisi;
  scanf("%d",&satir_sayisi);
  scanf("%d",&sutun_sayisi);


 iki_boyutlu_matris_olustur(&ptr,satir_sayisi,sutun_sayisi);


    return 0;
}


  void iki_boyutlu_matris_olustur(int*** matris,int satir_sayisi, int sutun_sayisi){
  int i,j;
  *matris=(int**)malloc(sizeof(int*)* satir_sayisi);
  for(i=0; i<satir_sayisi; i++)
  {
      *(*matris+i)=(int*)malloc(sizeof(int)* sutun_sayisi);
      for(j=0; j<sutun_sayisi;j++)
      {
         *(*(*matris+i)+j)=rand()%100;
         printf("%d ",*(*(*matris+i)+j) );
      }
  printf("\n");
  }





  }
