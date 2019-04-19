#include <iostream>
#include <string>
using namespace std;
int main(){
  string str;
  string s;
  string out="";
  char ch;
  cin>>str;
  cin>>s;
  for(int i=0;i<str.length();i++){
    ch=str[i];
    if(s.find(ch)==-1){
      if(ch>='a'&&ch<='z'){
        ch=ch-'a'+'A';
      }
      if(out.find(ch)==-1)
         out+=ch;
    }
  }
  cout<<out<<endl;
  return 0;
}
