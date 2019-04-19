#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main(){
  int N,i,j;
  string str;
  cin>>str>>N;
  for(i=0;i<N-1;i++){
    string s="";
    for(j=0;j<str.size();j++){
        s+=str[j];
        int num=1;
        while(str[j]==str[j+1]){
            num++;
            j++;
        }
        s+=num+'0';

    }
    str=s;
  }
  cout<<str<<endl;

  return 0;
}
