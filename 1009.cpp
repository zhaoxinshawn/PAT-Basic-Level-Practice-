// #include<stdio.h>
// int main(){
//     int num = 0;    //单词的个数
//     char ans[80][80];
//     while(scanf("%s", ans[num]) != EOF){    //一直输入直到文件末尾
//         num++;      //单词的个数加 1 
//     }
//     for(int i = num - 1; i >= 0; i--){      //倒着输出单词
//         printf("%s", ans[i]);
//         if(i > 0) printf(" "); 
//     }
//     return 0;
// } 
#include<iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    char c[10];
    while(scanf("%s",c)){
        s.push(c);
        
    }
    while(!s.empty()){
        cout<<s.top();
        s.pop();
        if(!s.empty()){
            cout<<" ";
        }else{
            cout<<endl;
        }
    }
    return 0;
}
