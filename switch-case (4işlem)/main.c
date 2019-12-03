#include <stdio.h>
#include <stdlib.h>

int main()
{
  int secim;
  float sayi1,sayi2;
  float sonuc;

  printf("toplama yapmak icin 1 e basiniz\n");
  printf("cikarma yapmak icin 2 e basiniz\n");
  printf("carpma  yapmak icin 3 e basiniz\n");
  printf("bolme   yapmak icin 4 e basiniz\n\n");

  k: tekrar2:  printf("\nsecim yapiniz: ");   scanf("%d",&secim);
  if(secim!=1 && secim!=2 && secim!=3 && secim!=4){printf("tekrar secim yapiniz:"); goto k;}
  else goto m;

   m: printf("2 sayi giriniz:\n");   scanf("%f%f",&sayi1,&sayi2);
   switch(secim)
{
    case 1:
    {
      sonuc=sayi1+sayi2; printf("sonuc: %.3f ",sonuc);break;
    }
    case 2:
    {
      sonuc=sayi1-sayi2; printf("sonuc: %.3f ",sonuc);break;
    }
    case 3:
    {
      sonuc=sayi1*sayi2; printf("sonuc: %.3f ",sonuc);break;
    }
    case 4:
    {
      sonuc=sayi1/sayi2; printf("sonuc: %.3f ",sonuc);break;
    }
    default:{ printf("yanlis giris yaptiniz");break;}
}
    goto tekrar2;
    return 0;
}
