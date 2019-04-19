#include <stdio.h>
int main(){
  int num[26]={0};
  char string[1001];
  gets(string);
  for(int i=0;i<strlen(string);i++){
    if(string[i]>='A'&&string[i]<='Z'){
      num[string[i]-'A']++;
    }else if(string[i]>='a'&&string[i]<='z'){
      num[string[i]-'a']++;
    }
  }
  int dex=0;
  for(int i=0;i<26;i++){
    
    if(num[i]>num[dex]){
      dex=i;
    }
  }
  printf("%c %d",dex+'a',num[dex]);
   return 0;
}
