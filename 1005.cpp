#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    int n,temp,a[110],HashTable[110]={0};            
    scanf("%d",&n);
    for(int i=0;i<n;i++){     //此for循环目的在于找出所有输入数据所覆盖的数据用b数组保存 
        scanf("%d",&a[i]);
        temp=a[i];
        while(temp!=1){
            if(temp%2==1)   temp=(temp*3+1)/2;   //如果是奇数则依次保存下来它覆盖的数        
            else temp/=2;
            if(temp<=100)   
            HashTable[temp]=1;      
        }
    }
    sort(a,a+n,cmp);
    bool one=false;
    for(int i=0;i<n;i++){       //找出在a数组中有但b数组中没有的数，即关键数 保存在c数组中   
        if(HashTable[a[i]]==0){
            if(one) putchar(' ');
            printf("%d",a[i]);
            one=true;
        }
    }
    return 0;
}
