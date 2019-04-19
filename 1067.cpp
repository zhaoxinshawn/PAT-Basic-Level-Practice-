#include<iostream>
#include<string.h>
using namespace std;
int main(){
  string right,t;
  int num;
  cin>>right>>num;
  getchar();
  if(num==0){
    return 0;
  }
  for(int i=0;i<num;i++){
    getline(cin,t);
    if(t=="#"){
      return 0;
    }else{
        if(right.compare(t)==0){
          cout<<"Welcome in"<<endl;
          return 0;
        }else{
          cout<<"Wrong password: "<<t<<endl;
        }
    }
  }
  cout<<"Account locked"<<endl;
  
  
  return 0;
}
