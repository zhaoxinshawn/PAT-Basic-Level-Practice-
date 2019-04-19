#include <stdio.h>
int main(){
  int N,N2;
  char c;
  scanf("%d",&N);
  getchar();
  scanf("%c",&c);
  /*if(N%2==1){
    N2=N/2+1;
  }else{
    N2=N/2;
  }*/
  N2=(N+1)/2;
  for(int i=0;i<N2;i++){
    for(int j=0;j<N;j++){
      if(i==0||i==N2-1){
        printf("%c",c);
      }else if(j==0||j==N-1){
        printf("%c",c);
      }else{
        printf(" ");
      }
    }
    printf("\n");
  }
  
  
  return 0;
}
