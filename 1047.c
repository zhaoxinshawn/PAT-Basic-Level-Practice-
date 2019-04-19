#include <stdio.h>
int main(){
  int N;
  scanf("%d",&N);
  int number[1001]={0},max=0;
  for(int i=0;i<N;i++){
    int n=0,g;
    char num[7];
    scanf("%s %d",num,&g);
    for(int j=0;num[j]!='-';j++){
      n=n*10+(num[j]-'0');
    }
    number[n]+=g;
    if(number[n]>number[max]){
      max=n;
    }
  }
  printf("%d %d",max,number[max]);
  return 0;
}
