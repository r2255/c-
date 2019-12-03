#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,x,y,z;

    k:printf("Uc basamakli bir sayi giriniz: ");
     scanf("%d",&a);
    if(a>999) {printf("yanlis deger girdiniz!!!\n");
    goto k;}

    if(a<=999 && a>=100){
        x=a/100;
        y=(a-(x*100))/10;
        z=a%10;
         printf("%d  %d  %d\n\n",x,y,z);



    if(x>=y && x>=z){
        if(y>=z) printf("%d > %d > %d\n",x,y,z);
        if(z>=y) printf("%d > %d > %d\n",x,z,y);
    }

    else if(y>=x && y>=z){
        if(x>=z) printf("%d > %d > %d\n",y,x,z);
        if(z>=x) printf("%d > %d > %d\n",y,z,x);
    }
    else if(z>=y && z>=x){
        if(x>=y) printf("%d > %d > %d\n",z,x,y);
        if(y>=x) printf("%d > %d > %d\n",z,y,x);
    }
    else printf("");}


    return 0;
}
