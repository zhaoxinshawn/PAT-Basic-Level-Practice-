#include <stdio.h>
int main(){
  int T,K;
  int n1,b,t,n2;
  scanf("%d %d",&T,&K);
  for(int i=0;i<K;i++){
    scanf("%d %d %d %d",&n1,&b,&t,&n2);
      if(T<=0){
        printf("Game Over.\n");
        break;
      }
      if(t>T){
        printf("Not enough tokens.  Total = %d.\n",T);
        continue;
      }
    
      if((n1>n2&&!b)||(n1<n2&&b)){
        T=T+t;
        printf("Win %d!  Total = %d.\n",t,T);
      }else{
        T=T-t;
        printf("Lose %d.  Total = %d.\n",t,T);
      }
      
      if(T<=0){
        printf("Game Over.\n");
        break;
      }
  }
  return 0;
}
