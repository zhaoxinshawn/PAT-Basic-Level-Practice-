#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    int pairNum=0,preNum=2;//素数对的个数；上一个素数
   int isPrime; 
    //2是最小的素数，故从3开始判断，而偶数必然不为素数，故i每次+2
    for(int i=3;i<=n;i=i+2){        
        isPrime = 1; 
        //判断i是否为素数，Math.sqrt(i)求平方根
        for(int j=2;j<sqrt(i)+1;j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            //如果i是素数，判断它与上一个素数之差是否为2
            if((i-preNum)==2)
                pairNum++;
            //如果i是素数，将其作为新的“上一个素数”
            preNum = i;
        }           
    }
    printf("%d",pairNum);
    return 0;
}
