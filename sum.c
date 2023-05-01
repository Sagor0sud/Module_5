#include <stdio.h>
int main()
{
    int n,m;
    int P_sum1;
    int R_sub1;
    float S_sum2;
    float Q_sub2;
    float p,q;  
    scanf("%d %d", &n, &m);
    scanf("%f %f", &p, &q);
     P_sum1=n+m;
     R_sub1=n-m;
     S_sum2=p+q;
     Q_sub2=p-q;
    printf("%d %d \n",P_sum1,R_sub1);
    printf("%0.1f %0.1f",S_sum2,Q_sub2);
return 0;
}