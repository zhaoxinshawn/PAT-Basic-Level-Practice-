#include<stdio.h> 

int main()
{   
    int c1,c2;
    scanf("%d%d",&c1,&c2);
    const int tick = 100;
    int s;
    if((c2-c1)%100<50){
        s = (c2-c1)/tick;
    }
    else s = (c2-c1)/tick+1;
    int hh,mm,ss;
    hh = s / 3600;
    mm = s % 3600 / 60;
    ss = s % 60;
    printf("%02d:%02d:%02d\n",hh,mm,ss); 

    return 0;
 }
