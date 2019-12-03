#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
 int i,j,z,sayi;
 printf("pozitif bir sayi giriniz:"); scanf("%d",&sayi);

 if (sayi<=0)
 {
     printf("pozitif bir sayi giriniz:");
     scanf("%d",&sayi);
 }
 for(i=1; i<=sayi; i++)
 {
     for(j=1; j<=i; j++)
     {
        printf("*");
     }
     for(z=1; z<=sayi-i; z++)
     {
         printf(" ");
     }
     for(z=1; z<=sayi-i; z++)
     {
         printf(" ");
     }
     for(j=1; j<=i; j++)
     {
         printf("*");
     }
     printf("\n");
 }
 for(i=1; i<=sayi; i++)
 {
     for(j=1; j<=(sayi+1)-i; j++)
     {
        printf("*");
     }
     for(z=1; z<=i-1; z++)
     {
         printf(" ");
     }
     for(z=1; z<=i-1; z++)
     {
         printf(" ");
     }
     for(j=1; j<=(sayi+1)-i; j++)
     {
         printf("*");
     }
     printf("\n");
 }
  return 0;
}
