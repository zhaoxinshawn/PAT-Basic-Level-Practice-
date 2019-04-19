#include <stdio.h>
void bijiao(char x,char y,int count[],int A[],int B[]){
  
  if((x=='C'&&y=='J')||(x=='J'&&y=='B')||(x=='B'&&y=='C')){
    count[0]++;
    if(x=='C'){
      A[0]++;
    }else if(x=='J'){
      A[1]++;
    }else{
      A[2]++;
    }
    
  }else if(x==y){
    count[1]++;
    
  }else {//if((y=='C'&&x=='J')||(y=='J'&&x=='B')||(y=='B'&&x=='C')) {
    count[2]++;
    if(y=='C'){
        B[0]++;
    }else if(y=='J'){
        B[1]++;
    }else{
        B[2]++;
    }
    
  }
  
}
int main(){
  int count[3]={0},A[3]={0},B[3]={0};
  int N;
  char x,y;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    getchar();
    scanf("%c %c",&x,&y);
    bijiao(x,y,count,A,B);
    
  }
  
  
  printf("%d %d %d\n",count[0],count[1],count[2]);
  printf("%d %d %d\n",count[2],count[1],count[0]);
  
  if(A[2]>=A[1]&&A[2]>=A[0]){
    printf("B ");
  }else if(A[0]>=A[1]&&A[0]>=A[2]){
    printf("C ");
  }else{
    printf("J ");
  }
  if(B[2]>=B[1]&&B[2]>=B[0]){
    printf("B\n");
  }else if(B[0]>=B[1]&&B[0]>=B[2]){
    printf("C\n");
  }else{
    printf("J\n");
  }
  return 0;
}
