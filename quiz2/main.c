#include <stdio.h>
#include <stdlib.h>

int main()
{

  int sayi1;
  int sayi2;
  int sayi3;
  float ortalama;

  printf("Birinci sayiyi giriniz\n"); scanf("%d",&sayi1);
  printf("Ikinci sayiyi giriniz\n"); scanf("%d",&sayi2);
  printf("Ucuncu sayiyi giriniz\n"); scanf("%d",&sayi3);

  ortalama=(sayi1+sayi2+sayi3)/3.0;

  printf("ortalama= %.1f",ortalama);

   if(sayi1<sayi2 , sayi1<sayi3)
    printf("\n en kucuk sayi= %d\n",sayi1);

   else if(sayi2<sayi1 , sayi2<sayi3)
    printf("\n en kucuk sayi= %d\n",sayi2);

   else if(sayi3<sayi2 , sayi3<sayi2)
    printf("\n en kucuk sayi= %d\n",sayi3);

    system("pause");
    return 0;
}
