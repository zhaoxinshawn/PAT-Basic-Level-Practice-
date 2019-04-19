#include <stdio.h>
int main(){
  int N;
  int q[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
  char m[]={"10X98765432"};
  int num=0,flag=1;
  char str[18];
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%s",str);
    num=0;
    for(int j=0;j<17;j++){
      
      num+=(str[j]-'0')*q[j];
      if(str[j]-'0'>9||str[j]-'0'<0){
        printf("%s\n",str);
        flag=0;
        break;
      }
      if(j==16){
        num=num%11;
        if(str[17]!=m[num]){
          printf("%s\n",str);
          flag=0;
          break;
        }
      }
    }
    
  }
  if(flag){
    printf("All passed\n");
  }
  return 0;
}
