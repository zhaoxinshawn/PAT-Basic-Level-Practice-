#include <stdio.h>
int main(){
  char str1[1001];
  char str[1001];
  scanf("%s",str1);
  scanf("%s",str);
  int num=0;
  for(int i=0;i<strlen(str);i++){
    for(int j=0;j<strlen(str1);j++){
      if(str[i]==str1[j]){
        num++;
        str1[j]=" ";
        break;
      }
    }
  }
  if(num==strlen(str)){
    printf("Yes %d",strlen(str1)-num);
  }else{
    printf("No %d",strlen(str)-num);
  }
  return 0;
}
