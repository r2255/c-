#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void toplama()
{
 int a,b;
 float c;
 printf("sayilari giriniz:\n");
 scanf("%d%d",&a,&b);
 c=a+b;
 printf("SONUC %.2f",c);
}
void cikarma()
{
 int a,b;
 float c;
 printf("sayilari giriniz:\n");
 scanf("%d%d",&a,&b);
 c=a-b;
 printf("SONUC %.2f",c);
}
void carpma()
{
 int a,b;
 float c;
 printf("sayilari giriniz:\n");
 scanf("%d%d",&a,&b);
 c=a*b;
 printf("SONUC %.2f",c);
}
void bolme()
{
 int a,b;
 float c;
 printf("sayilari giriniz:\n");
 scanf("%d%d",&a,&b);
 c=a/b;
 printf("SONUC %.2f",c);
}


int main()
{
    int secim;
    printf("HESAP MAKINASI\n");
    printf("----------------------\n");
    printf("toplama icin 1\ncikarma icin 2\ncarpma  icin 3\nbolme   icin 4\n");
    printf("----------------------\n");
    k:printf("Islem yapmak icin secim yapiniz:\n");
    scanf("%d",&secim);

    switch(secim){
        case 1: toplama(); break;
        case 2: cikarma(); break;
        case 3: carpma(); break;
        case 4: bolme(); break;
        default: {printf("yanlis deger girdiniz!!!tekrar secim yapiniz!!! \n"); goto k;}
}
    return 0;
}
