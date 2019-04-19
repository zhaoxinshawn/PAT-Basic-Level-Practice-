#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  int N,M,i;
  int flag=0,num;
  int countn=0,countw=0;
  string name;
  int w[6];
  cin>>N>>M;
  for(i=0;i<M;i++){
    cin>>w[i];
  }
 
  for(int i=0;i<N;i++){
    flag=0;
    int wp;
    cin>>name>>num;
    
    for(int j=0;j<num;j++){
      cin>>wp;
      if(find(w,w+M,wp)!=w+M){
        if(!flag){
          flag=1;
          cout<<name<<":";
          printf(" %04d",wp);
          countn++;
          countw++;
        }else{
          printf(" %04d",wp);
          countw++;
        }
      }
    }
    if(flag==1)
       cout<<endl;
    
    
  }
  cout<<countn<<" "<<countw<<endl;
  
  return 0;
}
