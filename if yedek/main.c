#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1;
    int sayi2;
    int sayi3;
    int yedek;
    printf("sayilari giriniz (3 adet)\n"); scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
    printf("girilenlerin sirali hali: ");
    if(sayi1>sayi2)
    {
        yedek=sayi1;
        sayi1=sayi2;
        sayi2=yedek;
    }
    if(sayi2>sayi3)
    {
        yedek=sayi2;
        sayi2=sayi3;
        sayi3=yedek;
    }
    if(sayi1>sayi2)
    {
        yedek=sayi1;
        sayi1=sayi2;
        sayi2=yedek;
    }
    printf("%d,%d,%d\n",sayi1,sayi2,sayi3);
    system ("pause");
    return 0;
}
