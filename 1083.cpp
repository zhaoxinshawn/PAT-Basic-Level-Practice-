#include <stdio.h>
#include <math.h>
int main(){
  int N,ab,i;
  scanf("%d",&N);
  int num[10001];
  int cha[10000]={0};
  int max=0;
  for(i=1;i<=N;i++){
    scanf("%d",&num[i]);
    ab=abs(i-num[i]);
    cha[ab]++;
    if(max<ab){
        max=ab;
    }

  }
  for(int i=max;i>=0;i--){
    if(cha[i]>1){
      printf("%d %d\n",i,cha[i]);
    }
  }

  return 0;
}
