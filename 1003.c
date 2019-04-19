#include <stdio.h>

void main()
{
    char c;
    int num, i;
    int flag, count[3] = {0, 0, 0};
    int b[10];
    scanf("%d", &num);
    getchar() ;

    for(i = 0; i < num; i++)
    {
        flag = 0, count[0] = count[1] = count[2] = 0;
        while((c = getchar()) != '\n')
        {
            if(c == 'A')
                count[flag]++;
            else if(c == 'P' && flag == 0)
                flag = 1;      
            else if(c == 'T' && flag == 1)
                flag = 2;       
            else                            
                break;         
        }
        if(c == '\n' && flag == 2                           
         && count[1] && count[2] == count[1] * count[0])    
            b[i] = 1;
        else
            b[i] = 0;
        if(c != '\n') while((c = getchar()) != '\n'); 
    }
    for(i = 0;i < num;i++)
    {
        if(i != 0)
            printf("\n");
        if(b[i] == 1)
            printf("YES");
        if(b[i] == 0)
            printf("NO");
    }
}
