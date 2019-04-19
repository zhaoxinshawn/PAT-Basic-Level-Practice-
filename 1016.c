#include <stdio.h>
#include<string.h>
int main(){
  char A[13],B[13];
  int Da,Db;
  int numa=0,numb=0;
  scanf("%s %d %s %d",A,&Da,B,&Db);
  
  for(int i=0;i<strlen(A);i++){
    if((A[i]-'0')==Da){
      numa=numa*10+Da;
    }
  }
  
  for(int i=0;i<strlen(B);i++){
    if(Db==(B[i]-'0')){
      numb=numb*10+Db;
    }
  }

 
  printf("%d\n",numa+numb);
  
  return 0;
}
// int main(){	
//   char *A = new char[11];	
//   char *B = new char[11];	
//   int pa = 0, pb = 0; 	
//   int da,db; 	
//   scanf("%s %d %s %d", A, &da, B, &db);		
//   for(int ia = 0; A[ia] != '\0'; ia++)	
//   {		
//     if((A[ia]-'0') == da)			
//       pa=pa*10+da;	
    
//   }	
//   for(int ib = 0; B[ib] != '\0'; ib++)	
//   {		
//     if((B[ib]-'0') == db)			
//       pb=pb*10+db;	
    
//   }	
 
//   printf("%d\n",pa+pb);
// return 0; 
// }
