#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vize;
    int final;
    float aortalama;

    printf("vize notu:");
    scanf("%d",&vize);
    printf("final notu");
    scanf("%d",&final);
    aortalama = (vize*0.4) + (final*0.6);
    printf("---------------------------------\n");

   printf("agirlikli ortalama=%.2f" , aortalama);
   if(aortalama>=65)
        printf("\n gecti");
    else
        printf("\n kaldi");

return 0;






}
