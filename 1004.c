#include<stdio.h>
typedef struct{
	int a;
	char b[11];
	char c[11];
}student;
int main(void){
	int i,n,j;
	student p[101],d;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	  scanf("%s",p[i].b);
		scanf("%s",p[i].c);
		scanf("%d",&p[i].a);	
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(p[j].a>p[j+1].a){
				d=p[j];
				p[j]=p[j+1];
				p[j+1]=d;
			}
		}
	}
	printf("%s %s\n%s %s\n",p[n-1].b,p[n-1].c,p[0].b,p[0].c);
}
