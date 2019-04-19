#include <iostream>
#include <string>
#include <istream>
using namespace std;
int main(){
    int N;
    cin>>N;
    getchar();
    for(int i=0;i<N;i++){
        string str="";
        int numflag=0,charflag=0,point=0;
        //cin>>str;
        getline(cin,str);
        if(str.size()<6){
            cout<<"Your password is tai duan le."<<endl;
            continue;
        }
        for(int j=0;j<str.size();j++){

            if(str[j]=='.'){
                point++;
            }
            if(str[j]>='0'&&str[j]<='9'){
                numflag++;
            }
            if((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')){
                charflag++;
            }

        }
        if(numflag==0){
            cout<<"Your password needs shu zi."<<endl;
            continue;
        }
        if(charflag==0){
            cout<<"Your password needs zi mu."<<endl;
            continue;
        }
        if(str.size()!=numflag+charflag+point){
            cout<<"Your password is tai luan le."<<endl;
            continue;
        }
        cout<<"Your password is wan mei."<<endl;



    }


    return 0;
}
