#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    printf("1-7 arasinda bir sayi giriniz:\n");
    k: scanf("%d",&sayi);
    switch (sayi)
    {
       case 1: {printf("Pazartesi\n"); break;}
       case 2: printf("Sali\n"); break;
       case 3: printf("Carsamba\n"); break;
       case 4: printf("Persembe\n"); break;
       case 5: printf("Cuma\n"); break;
       case 6: printf("Cumartesi\n"); break;
       case 7: printf("Pazar\n"); break;
       default: printf("Hatali Giris\n"); break;
    }
    goto k;
    return 0;
}
