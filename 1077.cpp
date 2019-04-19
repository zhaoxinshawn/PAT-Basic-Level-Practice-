#include <stdio.h>
int main(){
  int N,M;
  scanf("%d %d",&N,&M);
  for(int i=0;i<N;i++){
    
    int max=-1,min=M+1,g2,g1=0,num;
    scanf("%d",&g2);
    int count=-2;
    
    for(int j=0;j<N-1;j++){
      scanf("%d",&num);
      if(num>=0&&num<=M){
        count++;
        if(num>max){          max=num;        }
        if(num<min){          min=num;        }
        g1+=num;
      }
      
    }
    g1=g1-max-min;
    g1=g1/(count);
    int r=(g1+g2+1)/2;
    printf("%d\n",r);
    
    
  }
  return 0;
}
/*#include<iostream>
using namespace std;
int main()
{
    int n,m,g1,g2,x;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>g1;
        int cnt=-2,maxn=-1,minm=m+1,sum=0;
        for(int i=0;i<n-1;i++)
        {
            cin>>x;
            if(x>=0&&x<=m)
            {
                if(x<minm) minm=x;
                if(x>maxn) maxn=x;
                sum+=x;
                cnt++;
            }

        }
 cout<<int((((sum-maxn-minm)*1.0/cnt)+g1)/2+0.5)<<endl;
    }
    return 0;
}
*/
