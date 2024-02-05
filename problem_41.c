#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        double fact=1.00;
        double sum=0.00;
        for(int i=1; i<=n; i++)
        {
            fact=fact*i;
            sum+=i/fact;
        }
        printf("%0.4lf\n",sum);
    } 
    return 0;
}
