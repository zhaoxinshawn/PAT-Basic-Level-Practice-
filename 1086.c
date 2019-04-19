#include <stdio.h>
int main(){
  int a,b;
  int c=0;
  scanf("%d%d",&a,&b);
  c=a*b;
  int num=0;
  while(c){
    num*=10;
    num=num+c%10;
    c/=10;
  }
  printf("%d",num);
  return 0;
}
