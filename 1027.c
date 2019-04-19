#include <stdio.h>
int sum(int n)
{
    return 2*n*n-1;
}
int main(){
  int N,remain=0,i;
  char c;
  scanf("%d %c",&N,&c);
  for(i=1;;i++){
    if(N>=sum(i)&&N<sum(i+1)){
     remain=N-sum(i);
     break;
    }
  }
  for(int j=0;j<i;j++){
    if(j!=0){
       for(int k=0;k<j;k++){
        printf(" ");
       }
    }
    for(int k=0;k<2*i-1-2*j;k++){
        printf("%c",c);
    }
    printf("\n");
  }
  for(int j=0;j<i-1;j++){
    if(j!=i-1){
       for(int k=0;k<i-2-j;k++){
        printf(" ");
       }
    }
    for(int k=0;k<2*(j+2)-1;k++){
        printf("%c",c);
    }
    printf("\n");
  }
  printf("%d",remain);



  return 0;
}
