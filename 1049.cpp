#include<iostream>
#include<stdio.h>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  int N;
  cin>>N;
  vector<double> num;
  for(int i=0;i<N;i++){
    double n;
    cin>>n;
    num.push_back(n);
  }

  double result=0;
  for(int i=0;i<N;i++){
      result+=num[i]*(i+1)*(N-i);
  }
  printf("%.2f\n",result);
}
