#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ikiyuz(para)
{   int a;
    a=para/200;
    if(a>0)printf("%d tane 200 tl vardir\n",a);
    else printf("");
}

void yuz(para)
{   int a,b;
    b=(para-a*200)/100;
    if(b>0)printf("%d tane 100 tl vardir\n",b);
    else printf("");
}

void elli(para)
{   int a,b,c;
    a=para/200;
    b=(para-a*200)/100;
    c=((para)-((a*200)+(b*100)))/50;
    if(c>0)printf("%d tane 50 tl vardir\n",c);
    else printf("");
}

void yirmi(para)
{   int a,b,c,d;
    a=para/200;
    b=(para-a*200)/100;
    c=((para)-((a*200)+(b*100)))/50;
    d=((para)-((a*200)+(b*100)+(c*50)))/20;
    if(d>0)printf("%d tane 20 tl vardir\n",d);
    else printf("");
}
void on(para)
{   int a,b,c,d,e;
    a=para/200;
    b=(para-a*200)/100;
    c=((para)-((a*200)+(b*100)))/50;
    d=((para)-((a*200)+(b*100)+(c*50)))/20;
    e=((para)-((a*200)+(b*100)+(c*50)+(d*20)))/10;
    if(e>0)printf("%d tane 10 tl vardir\n",e);
    else printf("");
}
void bes( para)
{   int a,b,c,d,e,f;
    a=para/200;
    b=(para-a*200)/100;
    c=((para)-((a*200)+(b*100)))/50;
    d=((para)-((a*200)+(b*100)+(c*50)))/20;
    e=((para)-((a*200)+(b*100)+(c*50)+(d*20)))/10;
    f=((para)-((a*200)+(b*100)+(c*50)+(d*20)+(e*10)))/5;
    if(f>0)printf("%d tane 5 tl vardir\n",f);
    else printf("");
}
void bir(para)
{  int a,b,c,d,e,f,g;
    a=para/200;
    b=(para-a*200)/100;
    c=((para)-((a*200)+(b*100)))/50;
    d=((para)-((a*200)+(b*100)+(c*50)))/20;
    e=((para)-((a*200)+(b*100)+(c*50)+(d*20)))/10;
    f=((para)-((a*200)+(b*100)+(c*50)+(d*20)+(e*10)))/5;
    g=((para)-((a*200)+(b*100)+(c*50)+(d*20)+(e*10)+(f*5)))/1;
    if(g>0)printf("%d tane 1 tl vardir\n",g);
    else printf("");
}
int main()
{
   int para;
   printf("para miktarini giriniz: \n");
   scanf("%d",&para);
   ikiyuz(para);
   yuz(para);
   elli(para);
   yirmi(para);
   on(para);
   bes(para);
   bir(para);
   return 0;
}

