#include <stdio.h>
int main(){
  int num[10]={0};
  int index=1,n;
  char str[50];
  scanf("%s",str);
  for(int i=0;i<strlen(str);i++){
    if(str[i]=' '){
      i++;
    }
    n=str[i]-'0';
    num[n]++;
  }
  if(num[0]!=0){
    while(num[index]==0){
      index++;
    }
    printf("%d",index);
    num[index]--;
  }
  
  index=0;
  do{
    if(num[index]!=0){
      printf("%d",index);
      num[index]--;
    }else{
      index++;
    }
  }while(num[9]==0&&index==9);
  
  return 0;
}
