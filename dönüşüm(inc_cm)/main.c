#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inc;
    float cm;

    printf("uzunluk giriniz(inc): "); scanf("%d",&inc);

    cm = inc * (2.54) ;
    printf("cm cinsinden deger: %.3f",cm);


    getchar();

    return 0;
}
