#include <stdio.h>
#include <stdlib.h>

int main()

{
    int vize,final;
    float ort;

    printf("vize notunu giriniz:"); scanf("%d",&vize);
    printf("final notunu giriniz:"); scanf("%d",&final);

    ort=(vize*0.4)+(final*0.6);

    if(ort>=90 && ort<=100)
    {
        printf("not ortalamaniz %.2f ve notunuz AA",ort);
    }
    else if(ort>=80 && ort<90)
    {
        printf("not ortalamaniz %.2f ve notunuz BB",ort);
    }
    else if(ort>=60 && ort<80)
    {
        printf("not ortalamaniz %.2f ve notunuz CC",ort);
    }
    else if(ort>=40 && ort<60)
    {
        printf("not ortalamaniz %.2f ve notunuz DD",ort);
    }
    else if(ort>=0  && ort<=40)
    {
        printf("not ortalamaniz %.2f ve notunuz FF",ort);
    }
    else
    {
        printf("gecerli not giriniz");
    }
    return 0;
}
