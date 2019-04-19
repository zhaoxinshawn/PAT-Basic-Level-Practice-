#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 typedef struct {
	long int a,b,c;
	char d[10];
}student;
int main(int argc, char *argv[]) {
     int n,i;
	student p[10];
	scanf("%d",&n);
    for(i=0;i<n;i++)
	{
    	scanf("%ld %ld %ld",&p[i].a,&p[i].b,&p[i].c);
	}
	for(i=0;i<n;i++){
     if((p[i].a+p[i].b)>p[i].c){
	  strcpy(p[i].d,"true");
      }else{
	  strcpy(p[i].d,"false");
      }
	}
    for(i=0;i<n;i++){
	printf("Case #%d: %s",i+1,p[i].d);
	if(i!=n-1){
		printf("\n");
	}
   }
   return 0;
}
