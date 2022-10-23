#include <stdio.h>
#include <stdlib.h>
#include <math.h>
     int sum=0,basamak=0,rem;
     void arms(int *pnt){
     while(*pnt>0){
        basamak++;
        *pnt /=10;
     }
     printf("Basamak sayisi=%d\n",basamak);

     while(*pnt>0){
        rem= *pnt%10;
        sum+= pow(rem,basamak);
     }
     if(sum==*pnt){printf("Girdigin sayi armstrong sayidir..\n");
     }
     else{printf("Girdigin sayi armstrong sayi degildir...\n");}
     }




int main()
{
    int N;
    int *pnt=&N;
    printf("Bir sayi gir=");
    scanf("%d",&N);
    arms(&N);


    return 0;
}
