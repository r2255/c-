#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int a,b,c,d,e,f,k;
    m:printf("Dort basamakli sayi giriniz:\n"); scanf("%d",&sayi);
    if(sayi>999 && sayi<10000){
        d=sayi%10;
        c=(sayi%100-d);
        b=(sayi%1000-d-c);
        a=(sayi%10000-d-c-b);
        e=a/100 + b/100;
        f=c+d;

        k=e+f;
        printf("-------------------------------------\n");
        if(k*k==sayi){printf("girdiginiz sayi yarim kare sayidir");}
        else printf("girdiginiz sayi yarim kare sayi degildir!!!");
    }
    else {printf("Girdiginiz deger yanlis!!!lutfen 4 basamakli bir sayi giriniz!!!\n");
    goto m;}

    return 0;
}
