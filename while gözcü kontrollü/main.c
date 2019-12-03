#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int max;
    int min;

    printf("sayi giriniz ve solandirmak icin negatif sayi giriniz: \n");
    scanf("%d",&sayi);
    max=sayi;
    min=sayi;

    while(sayi>0)
    {
        if(sayi>max)
            max=sayi;
        if(sayi<min)
            min=sayi;
            printf("sayi giriniz ve solandirmak icin negatif sayi giriniz: \n");
            scanf("%d",&sayi);
    }
    printf("\n\n\n");
    printf("girilenlerin en buyugu %d\n",max);
    printf("girilenlerin en kucugu %d",min);
    return 0;
}
