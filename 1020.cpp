#include <iostream>
#include <algorithm>
using namespace std;
class moon{
public:
    double kc;
    double zj;
    double avg;
};
bool cmp(moon m1,moon m2){
    return m1.avg>m2.avg;
}
int main(){
  int N;
  double D;
  cin>>N>>D;
  moon m[1001];
  for(int i=0;i<N;i++){
    cin>>m[i].kc;
  }
  for(int i=0;i<N;i++){
    cin>>m[i].zj;
    m[i].avg=(double)m[i].zj/m[i].kc;
  }

  sort(m,m+N,cmp);

  double result=0;
  int i=0;
  do{
    if(m[i].kc<=D){
        D-=m[i].kc;
        result+=m[i].zj;
    }else{
        result+=m[i].avg*D;
        D=0;
    }
    i++;
  }while(D>0);
  printf("%.2lf\n",result);
  return 0;
}

