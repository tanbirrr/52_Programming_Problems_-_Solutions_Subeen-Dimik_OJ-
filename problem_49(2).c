#include<stdio.h>
#include<math.h>
int is_prime(long long int n)
{
    if(n<2) return 0;
    
        for(long long int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0) return 0;
        }

    return 1;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        if(is_prime(n)==1) printf("%lld is a prime",n);
        else printf("%lld is not a prime",n);
        if(t!=0)printf("\n");
    }
    return 0;
}
