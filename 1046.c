#include <stdio.h>
int main(){
  int N,a1,a2,b1,b2,counta=0,countb=0;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
    if((a1+b1==a2)&&(a1+b1!=b2)){
      countb++;
    }else if((a1+b1!=a2)&&(a1+b1==b2)){
      counta++;
    }else{
      continue;
    }
  }
  printf("%d %d",counta,countb);
  return 0;
}
