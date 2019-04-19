#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
  int n,num[64]={0},coun=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int x,co=0;
    scanf("%d",&x);

        while(x!=0){
            co+=x%10;
            x=x/10;
        }

    num[co]++;
    if(num[co]==1){
        coun++;
    }
  }
  cout<<coun<<endl;
  int out=0;
  for(int i=0;out<coun;i++){
    if(num[i]!=0&&out==coun-1){
        cout<<i;
        break;
    }
    if(num[i]!=0){
        cout<<i<<" ";
        out++;
    }


  }
  return 0;
}
