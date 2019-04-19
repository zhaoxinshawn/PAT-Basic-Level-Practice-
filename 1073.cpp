#include <iostream>
#include <string>
#include <algorithm>
class timu{
public:
  int fs;
  int xx;
  int zqgs;
  int daan[5]={0};
};

using namespace std;
int main(){
  float cj[1000]={0};
  timu t[100];
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin >>t[i].fs>>t[i].xx>>t[i].zqgs;
    char c;
    for(int j=0;j<t[i].zqgs;j++){
      cin>>c;
      t[i].daan[c-'a']=1;
    }

  }

  int chuwu[100][5]={0},maxnum=0,flag=1;

  for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                getchar();
                getchar();
                int xt;
                char c;
                cin>>xt;
                flag=1;
                int ti[5]={0};
                for(int k=0;k<xt;k++){
                        cin>>c;
                        ti[c-'a']=1;
                        if(t[j].daan[c-'a']==0){
                            flag=0;
                            chuwu[j][c-'a']++;
                            if(chuwu[j][c-'a']>maxnum){
                                maxnum=chuwu[j][c-'a'];
                            }
                        }
                }
                if(flag!=0&&xt==t[j].zqgs){
                    cj[i]+=t[j].fs;
                }else if(flag!=0){
                    cj[i]+=t[j].fs/2.0;
                }
                for(int k=0;k<5;k++){
                    if(t[j].daan[k] &&!ti[k]){
                        maxnum = max(maxnum,++chuwu[j][k]);
                    }
                }
                getchar();
        }
    printf("%.1f\n",cj[i]);

  }
if(maxnum==0){
    printf("Too simple\n");
    return 0;
}
for(int i=0;i<m;i++){
    for(int j=0;j<5;j++){
        if(chuwu[i][j]==maxnum){
            printf("%d %d-%c\n",maxnum,i+1,j+'a');

        }
    }
}



  return 0;
}

