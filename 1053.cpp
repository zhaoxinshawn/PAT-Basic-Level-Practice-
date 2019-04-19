#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int N,D,kn=0,kz=0;
   double e;
   cin>>N>>e>>D;
   for(int i=0;i<N;i++){
    int n,K;
    double E;
    cin>>K;
    n=0;
    for(int j=0;j<K;j++){
        cin>>E;
        if(E<e){
            n++;
        }
    }
    if(K>D&&n>K/2){
            kz++;
    }else if(n>K/2){
        kn++;
    }


   }
   double a=(double)kn/N*100;
   double b=(double)kz/N*100;
   printf("%.1f%%",a);
   printf(" %.1f%%\n",b);
    return 0;
}
