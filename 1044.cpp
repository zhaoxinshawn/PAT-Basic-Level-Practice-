#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>
using namespace std;
int main(){
  string strg[13]={"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug","sep","oct", "nov", "dec"};
  string strj[13]={" ","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy","lok","mer", "jou"};

  int n;
  int num=0;
  string str;
  cin>>n;
  getchar();
  for(int i=0;i<n;i++){
    getline(cin,str);
    if(str[0]>='a'&&str[0]<='z' ){
        string s1="",s2="";
        num=0;
       if(str.length()<=4){
        for(int i=0;i<13;i++){
            if(str==strg[i]){
                cout<<i<<endl;
                break;
            }else if(str==strj[i]){
                cout<<i*13<<endl;
                break;
            }
        }
       }else{
           s1=s1+str[0]+str[1]+str[2];
           s2=s2+str[4]+str[5]+str[6];
           for(int i=0;i<13;i++){
                if(s2==strg[i]){
                    num+=i;
                }
                if(s1==strj[i]){
                    num+=i*13;
                }
           }
           cout<<num<<endl;
       }
    }else{
        stringstream ss;
        ss<<str;
        ss>>num;
        if(num>13){
            if(num%13!=0){
              cout<<strj[num/13]<<" "<<strg[num%13]<<endl;
            }
            else{
              cout<<strj[num/13]<<endl;
            }
        }else{
            cout<<strg[num]<<endl;
        }


    }

  }

  return 0;
}
