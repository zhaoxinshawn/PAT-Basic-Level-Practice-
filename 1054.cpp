#include<iostream>
#include<stdio.h>
#include<sstream>
using namespace std;
int main()
{
  int N,numcount=0;
  double sum=0;
  cin>>N;
  for(int i=0;i<N;i++){
    string s;
    cin>>s;
    bool flag=true;
    for(int j=0;j<s.length();j++){
        if(s[j]=='-'){
          continue;
        }
        if(s[j]=='.'){
            if(s.length()-j>3){
                flag=false;
                break;
            }
            continue;
        }
        if(s[j]<'0'||s[j]>'9'){
            flag=false;
            break;
        }
    }

    if(flag){
       double num;
       stringstream ss;
       ss<<s;
       ss>>num;
       if(num>=-1000&&num<=1000){
          sum+=num;
          numcount++;
       }else{
           cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
       }
    }else{
        cout<<"ERROR: "<<s<<" is not a legal number"<<endl;
    }
  }
  if(numcount==0){
    cout<<"The average of 0 numbers is Undefined"<<endl;
  }else{
    if(numcount==1){
        cout<<"The average of "<<numcount<<" number is ";
        printf("%.2f\n",sum);
    }else{
      cout<<"The average of "<<numcount<<" numbers is ";
      printf("%.2f\n",sum/numcount);
    }
    
  }

  return 0;
}
