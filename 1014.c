#include <stdio.h>
#include <string.h>
int main(){
  char s1[61];
  char s2[61];
  char s3[61];
  char s4[61];
  scanf("%s",s1);
  scanf("%s",s2);
  scanf("%s",s3);
  scanf("%s",s4);
  
  
  int c1,c2;
  int flag=1,i;
  for(i=0;i<strlen(s1)&&i<strlen(s2);i++){
    
    if(s1[i]==s2[i]&&(s2[i]>='A'&&s2[i]<='G')&&flag){
      c1=i;
      flag=0;
      continue;
    }
    if(s1[i]==s2[i]&&((s2[i]>='0'&&s2[i]<='9')||(s2[i]>='A'&&s2[i]<='N'))&&flag==0){
      c2=i;
      break;
    }
  }
  if(s2[c2]>='A'&&s2[c2]<='N'){
    c2=s2[c2]-'A'+10;
  }else if(s2[c2]>='0'&&s2[c2]<='9'){
    c2=s2[c2]-'0';
  }
  int denx;
  for(int j=0;j<strlen(s3)&&j<strlen(s4);j++){
    if(s3[j]==s4[j]){
      if((s3[j]>='A'&&s3[j]<='Z')||(s3[j]>='a'&&s3[j]<='z')){
        denx=j;
        break;
      }
    }
  }
  c1=s1[c1]-'A';
  char *p[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
  printf("%s %02d:%02d\n",p[c1],c2,denx);
  return 0;
}

















