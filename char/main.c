#include <stdio.h>
#include <stdlib.h>

int main()
{
  char isim[100];
  char soyad[100];
  int yas;
  float boy;

  printf("isim: "); scanf("%s",&isim);
  printf("soyad: "); scanf("%s",&soyad);
  printf("yas: "); scanf("%d",&yas);
  printf("boy:");  scanf("%f",&boy);

  printf("adiniz %s soyadiniz %s  yasiniz %d   boyunuz %.2f ",isim,soyad,yas,boy);


  return 0;
}
