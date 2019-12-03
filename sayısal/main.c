#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{srand(time(NULL));
    int rgs;
    int sayac;

   
    for(sayac=1; sayac<=6; sayac++)
    {
        rgs=1+rand()%2;
        printf("%d.sayi=%d\n",sayac,rgs);
    }
system("pause");
return 0;
}

