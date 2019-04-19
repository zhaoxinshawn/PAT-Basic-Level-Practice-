#include <stdio.h>
#include <math.h>

void main()
{
    int M, N;
    int b[10000];
    int i, j, k = 1, flag;
    scanf("%d %d", &M, &N);
    b[0] = 2;
    for(i = 3;k < N;i++)
    {
        flag = 1;
        for(j = 2;j <= sqrt((double)i);j++)
        {
            if(i%j == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            b[k] = i;
            k++;
        }
    }
    for(k = M-1;k < N;k++)
    {
        printf("%d", b[k]);
        if((k-M+2)%10 && k != N-1)
            printf(" ");
        if((k-M+2)%10 == 0 && k != N-1)
            printf("\n");
    }

}
