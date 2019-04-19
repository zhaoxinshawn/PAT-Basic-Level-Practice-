#include <stdio.h>

void main(){
  char n[101];
  int a[4];
  int i, sum, j, sum1;
  scanf("%s", &n);
  for(i = 0, sum = 0;n[i] != '\0' && n[i] != '\n';i++)
  {
      sum += n[i] - 48;
  }
  sum1 = sum;
  for(j = 1;sum1 != 0;j *= 10)
  {
      sum1 /= 10;
  }
  j /= 10;
    for(i = 0;j != 0;i++)
    {
        if(i != 0)printf(" ");
        switch(sum/j)
        {
	        case 1:printf("yi");break;
	        case 2:printf("er");break;
	        case 3:printf("san");break;
	        case 4:printf("si");break;
	        case 5:printf("wu");break;
        	case 6:printf("liu");break;	
        	case 7:printf("qi");break;
        	case 8:printf("ba");break;
        	case 9:printf("jiu");break;
        	case 0:printf("ling");break;
	    }
        sum -= (sum/j)*j;
        j /= 10;
    }
    printf("\n");
}
