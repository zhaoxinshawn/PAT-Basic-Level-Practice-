#include <stdio.h>
int main(){
  int num[101]={0} ,N,n;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&n);
    num[n]++;
  }
  scanf("%d",&N);
  for(int i=0;i<N-1;i++){
    scanf("%d",&n);
    printf("%d ",num[n]);
  }
  scanf("%d",&n);
  printf("%d",num[n]);
  return 0;
}
