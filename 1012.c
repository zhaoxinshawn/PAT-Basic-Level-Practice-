#include <stdio.h>
int main(){
  int a1=-1,a2=-1,a3=-1,a4=-1,a5=-1;
  int flag=1;
  int sum=0;
  int num=0,n=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&num);
    if(num%5==0&&num%2==0){
      if(a1==-1){
        a1=0;
      }
      a1+=num;
    }
    if(num%5==1){
      if(a2==-1){
        a2=0;
      }
      a2=a2+num*flag;
      flag*=-1;
    }
    if(num%5==2){
      if(a3==-1){
        a3=0;
      }
      a3++;
    }
    if(num%5==3){
      if(a4==-1){
        a4=0;
      }
      a4++;
      sum+=num;
    }
    if(num%5==4){
      if(a5==-1){
        a5=0;
      }
      if(a5<num){
        a5=num;
      }
    }
    
  }
  
 
  if(a1!=-1){
    printf("%d ",a1);
  }else{
    printf("N ");
  }
  if(a2!=-1){
    printf("%d ",a2);
  }else{
    printf("N ");
  }
  if(a3!=-1){
    printf("%d ",a3);
  }else{
    printf("N ");
  }
  if(a4!=-1){
  printf("%.1f ",(float)sum/a4);
  }else{
    printf("N ");
  }
  if(a5!=-1){
  printf("%d",a5);
  }else{
    printf("N");
  }
      
  return 0;
}
