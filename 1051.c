#include <stdio.h>
#include <math.h>
int main(){
  double R1,P1,R2,P2;
  scanf("%lf %lf %lf %lf",&R1,&P1,&R2,&P2);
  double a,b;
  a=R1*R2*cos(P1+P2);
  b=R1*R2*sin(P1+P2);
  if(a+0.005>=0&&a<0)
        printf("0.00");
    else
        printf("%.2f",a);
    if(b>=0)
        printf("+%.2fi",b);
    else if(b+0.005>=0&&b<0)
        printf("+0.00i");
    else
        printf("%.2fi",b);
  
  
  return 0;
}
