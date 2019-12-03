#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int kilo;
    float boy;
    char cinsiyet;
    int vki;

    printf("VUCUT KITLE INDEKSI\n");
    printf("----------------------------------------------\n");
    printf("Kilonuzu giriniz(kg): "); scanf("%d",&kilo); printf("\n");
    printf("----------------------------------------------\n");
    printf("Boyunuzu giriniz(m): "); scanf("%f",&boy); printf("\n");
    printf("----------------------------------------------\n");
    printf("Cinsiyetinizi giriniz(erkek icin e,kadin icin k): "); scanf("%s",&cinsiyet); printf("\n");


    switch(cinsiyet){
    case 'e':
    case 'E':
          vki=kilo/(boy*boy);
          printf("%d\n",vki);
              if(vki<20.7){
                printf("Zayifsiniz.Saglik riski!!!");
              }
              if(vki>=20.7 && vki<26.4){
                printf("Normalsiniz.Risk yoktur.");
              }
              if(vki>=26.4 && vki<31.1){
                printf("Sismanlik sinirinda ya da sismansiniz.Riskli.");
              }
              if(vki>=31.1){
                printf("Obezite.Ciddi derecede riskli.");
              }
              break;
    case 'k':
    case 'K':
          vki=kilo/(boy*boy);
          printf("%d",vki);
              if(vki<19.1){
                printf("Zayifsiniz.Saglik riski!!!");
              }
              if(vki>=19.1 && vki<25.8){
                printf("Normalsiniz.Risk yoktur.");
              }
              if(vki>=25.8 && vki<32.2){
                printf("Sismanlik sinirinda ya da sismansiniz.Riskli.");
              }
              if(vki>=32.2){
                printf("Obezite.Ciddi derecede riskli.");
              }
              break;
     default: printf("yanlis deger girdiniz!!!\n");
    }
    system("pause");
    return 0;
}
