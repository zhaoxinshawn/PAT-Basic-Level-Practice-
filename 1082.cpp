#include <iostream>
#include <string>
using namespace std;
int main(){
    int N,i,len;
    int fist=20000,last=-1;
    string fi,li;
    cin>>N;
    for(i=0;i<N;i++){
        string ID;
        int x;
        int y;
        cin>>ID>>x>>y;
        len=x*x+y*y;
        if(len<fist){
            fist=len;
            fi=ID;
        }
        if(len>last){
            last=len;
            li=ID;
        }
    }
    cout<<fi<<" "<<li<<endl;


    return 0;
}
