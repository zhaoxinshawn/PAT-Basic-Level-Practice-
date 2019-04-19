#include <stdio.h>
int main(){
  int N,num[100001]={0};
  scanf("%d",&N);
  int max=0;
  int index,n;
  for(int i=0;i<N;i++){
    scanf("%d %d",&index,&n);
    num[index]+=n;
    if(num[index]>num[max]){
      max=index;
    }
  }
  
  printf("%d %d",max,num[max]);
  return 0;
}
