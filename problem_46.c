#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        double a,b,c;
        scanf("%lf %lf %lf",&a,&b,&c);
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %0.3lf\n",area);
    }
    
    return 0;
}
