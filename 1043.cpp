#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  cin>>str;
  int i;
  int count[6]={0};
  for(i=0;str[i]!='\0';i++ ){
    switch(str[i]){
    case 'P':count[0]++;break;
    case 'A':count[1]++;break;
    case 'T':count[2]++;break;
    case 'e':count[3]++;break;
    case 's':count[4]++;break;
    case 't':count[5]++;break;
    }
  }
  
  do{
    if(count[0]!=0){
        printf("P");
        count[0]--;
    }
    if(count[1]!=0){
        printf("A");
        count[1]--;
    }
    if(count[2]!=0){
        printf("T");
        count[2]--;
    }
    if(count[3]!=0){
        printf("e");
        count[3]--;
    }
    if(count[4]!=0){
        printf("s");
        count[4]--;
    }
    if(count[5]!=0){
        printf("t");
        count[5]--;
    }
  }while(count[0]!=0||count[1]!=0||count[2]!=0||count[3]!=0||count[4]!=0||count[5]!=0);

  return 0;
}
