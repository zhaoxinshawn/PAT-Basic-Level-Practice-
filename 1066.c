#include <stdio.h>
int main(){
  int M,N,A,B,x;
  int num;
  scanf("%d %d %d %d %d",&M,&N,&A,&B,&x);
  for(int i=0;i<M;i++){
    
    for(int j=0;j<N-1;j++){
      scanf("%d",&num);
      if(num>=A&&num<=B){
        printf("%03d ",x);
      }else{
        printf("%03d ",num);
      }
    }
    scanf("%d",&num);
    
      if(num>=A&&num<=B){
        printf("%03d\n",x);
      }else{
        printf("%03d\n",num);
      }
  }
  return 0;
}
