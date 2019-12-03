#include<stdio.h>

#include<stdlib.h>

main(){
       int x, k[30],i=0;
       printf("Bir sayi giriniz: ");
       scanf("%d",&x);

       while(x >= 1){
               i++;
               k[i] = x%2;
               x = x / 2;
       }

       printf("ikilik tabana cevrilmis hali: ");
       for(i=i;i>0;i--)
        printf("%d",k[i]);

return 0;
}
