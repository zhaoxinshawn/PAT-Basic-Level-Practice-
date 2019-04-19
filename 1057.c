#include <stdio.h>
int main(){
  char str[100001];
  int num=0,num0=0,num1=0;
  gets(str);
  for(int i=0;i<strlen(str);i++){
    if(str[i]>='A'&&str[i]<='Z'){
      num+=str[i]-'A'+1;
    }
    if(str[i]>='a'&&str[i]<='z'){
      num+=str[i]-'a'+1;
    }
  }
  while(num){
    if(num%2==0){
      num0++;
    }else{
      num1++;
    }
    num=num/2;
  }
  printf("%d %d",num0,num1);
  return 0;
}
