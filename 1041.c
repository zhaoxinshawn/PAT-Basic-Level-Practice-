#include <stdio.h>
 struct student{
    char num[14];
    int first;
    int second;
  }student ;
int main(){
  int N,M;
  scanf("%d",&N);
  struct student stu[1000];
  for(int i=0;i<N;i++){
   
    scanf("%s %d %d",stu[i].num,&stu[i].first,&stu[i].second);
   
  }
  
  
  
  scanf("%d",&M);
  int m[1000];
  for(int i=0;i<M;i++){
    scanf("%d",&m[i]);
  }
  
  
  
  
  for(int i=0;i<M;i++){
    for(int j=0;j<N;j++){
      if(m[i]==stu[j].first)
      {
        printf("%s %d\n",stu[j].num,stu[j].second);
        break;
      }
      
    }
    
  }

  return 0;
}
