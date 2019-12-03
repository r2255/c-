#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int km,gs,ucret;
   char tip;

   printf("araba turleri:\n");
   printf("(a veya A)arazi\n");
   printf("(b veya B)binek\n");
   printf("(c veya C)spor\n");
   printf("-----------------\n");
   printf("arabanin turunu giriniz:"); scanf("%s",&tip);
   printf("gun sayisini giriniz: "); scanf("%d",&gs);
   printf("kac km yol yapildi:"); scanf("%d",&km);
   switch(tip){
     case 'a':
     case 'A':
        ucret=50*gs+km*10;

        printf("fiyat: %d \n",ucret);
        break;
     case 'b':
     case 'B':
        ucret=60*gs+km*15;
        printf("fiyat: %d \n",ucret);
        break;
     case 'c':
     case 'C':
        ucret=100*gs+km*25;
        printf("fiyat: %d \n",ucret);
        break;
     default:
        printf("yanlis deger girdiniz!!!\n");

   }
system("pause");
return 0;
}
