#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int fact=1;
        for(int i=n; i>=1; i--)
        {
            fact*=i;
        }
        printf("%lld\n",fact);
    }
    
    return 0;
}
