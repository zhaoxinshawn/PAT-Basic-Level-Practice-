#include <stdio.h>
int main(){
  int N,M,sum;
  int quan[100],t[100];
  int num;
  scanf("%d %d",&N,&M);
  
  for(int i=0;i<M;i++){
    scanf("%d",&quan[i]);
  }
  for(int i=0;i<M;i++){
    scanf("%d",&t[i]);
  }
   
  for(int i=0;i<N;i++){
    sum=0;
    for(int j=0;j<M;j++){
      scanf("%d",&num);
      if(num==t[j]){
        sum+=quan[j];
      }
    }
    printf("%d\n",sum);
  }
  
  return 0;
}

