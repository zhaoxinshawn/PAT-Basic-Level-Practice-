#include <stdio.h>
int main(){
    int a,b;
    int isFirst = 1;
    while(~scanf("%d %d", &a, &b)){
        if(b == 0)
            break;      
        if(!isFirst)
            printf(" ");
        else
            isFirst = 0;
        printf("%d %d", a * b, b - 1);
    }
    if(isFirst)
        printf("0 0");
    return 0;   
}
