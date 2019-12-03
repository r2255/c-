#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j,sonuc,sayi;

   printf("bir sayi girin:"); scanf("%d",&sayi);
   for(i=1; i<=sayi; i++)
     {
        sonuc=i*sayi;
        printf("%d",sonuc);
     }

return 0;
}

