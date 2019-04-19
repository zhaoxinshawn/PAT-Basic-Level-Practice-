#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;
int main(){
  int n,num,maxnum=-1;
  int a,b;
  cin>>n;
  for (int i=0;i<n;i++){
    //getchar();
    cin>>a>>b;
    num=a*a+b*b;
    if(maxnum<num){
       maxnum=num;
    }
  }
  printf("%.2f\n",sqrt(maxnum));
  return 0;
}
