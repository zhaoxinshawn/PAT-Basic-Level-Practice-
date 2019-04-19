#include <stdio.h>
#include <string.h>
int main(void){
	char a[100];
	scanf("%s",&a);
	int n,i;
	n=strlen(a);
	if(n==3){
		for(i=0;i<a[0]-48;i++){
			printf("B");
		}
		for(i=0;i<a[1]-48;i++){
			printf("S");
		}
		for(i=0;i<a[2]-48;i++){
			printf("%d",i+1);
		}
	}else if(n==2){
		for(i=0;i<a[0]-48;i++){
			printf("S");
		}
		for(i=0;i<a[1]-48;i++){
			printf("%d",i+1);
		}
	}else{
		for(i=0;i<a[0]-48;i++){
			printf("%d",i+1);
		}
	}	
}
