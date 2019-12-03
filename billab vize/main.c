#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main(){
 int para;

 printf("para miktarini giriniz: ");
 scanf("%d",&para);
     para_ayristir(para);

  return 0;
}


 void para_ayristir(para){
 int a,b,c,d,e,f,g,h,k,l,m,n,p;
 a=para/200;
 if(a>0){printf("%d adet 200 tl vardir\n",a);}
 else printf("");

 b=(para)-(a*200);
 c=b/100;
 if(c>0){printf("%d adet 100 tl vardir\n",c);}
 else printf("");

 d=(para)-((a*200)+(c*100));
 e=d/50;
 if(e>0){printf("%d adet 50 tl vardir\n",e);}
 else printf("");

 f=(para)-((a*200)+(c*100)+(e*50));
 g=f/20;
 if(g>0){printf("%d adet 20 tl vardir\n",g);}
 else printf("");

 h=(para)-((a*200)+(c*100)+(e*50)+(g*20));
 k=h/10;
 if(k>0){printf("%d adet 10 tl vardir\n",k);}
 else printf("");

 l=(para)-((a*200)+(c*100)+(e*50)+(g*20)+(k*10));
 m=l/5;
 if(m>0){printf("%d adet 5 tl vardir\n",m);}
 else printf("");

 n=(para)-((a*200)+(c*100)+(e*50)+(g*20)+(k*10)+(m*5));
 p=n/1;
 if(p>0){printf("%d adet 1 tl vardir\n",p);}
 else printf("");
}





