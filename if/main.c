#include <stdio.h>
#include <stdlib.h>

int main()
{

  int sayi1;
  int sayi2;
  int sayi3;
  float ortalama;

  printf("birinci sayiyi giriniz\n"); scanf("%d",&sayi1);
  printf("ikinci sayiyi giriniz\n"); scanf("%d",&sayi2);
  printf("ucuncu sayiyi giriniz\n"); scanf("%d",&sayi3);

  ortalama=(sayi1+sayi2+sayi3)/3.0;

  printf("\n ortalama= %.1f",ortalama);

   if(sayi1<sayi2 && sayi1<sayi3)
    printf("\n en kucuk sayi= %d",sayi1);

   if(sayi2<sayi1 && sayi2<sayi3)
    printf("\n en kucuk sayi= %d",sayi2);

   if(sayi3<sayi2 && sayi3<sayi2)
    printf("\n en kucuk sayi= %d",sayi3);


    return 0;
}
