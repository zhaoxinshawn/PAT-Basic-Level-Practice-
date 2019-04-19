#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int M,N,i,j,k;
	int a[100];
	scanf("%d %d",&N,&M);
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<M;i++){
		k=a[N-1];
		for(j=N-1;j>0;j--){
			a[j]=a[j-1];
		}
		a[0]=k;
	}
	for(i=0;i<N;i++){
		if(i!=0){
			printf(" ");
		}
		printf("%d",a[i]);
	}
	return 0;
}
