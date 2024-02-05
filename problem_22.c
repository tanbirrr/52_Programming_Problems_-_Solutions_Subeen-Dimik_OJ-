#include<stdio.h>
int is_prime(int n)
{
    if(n<2) return 0;
    
        for(int i=2; i*i<=n; i++)
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
        int a,b;
        scanf("%d %d",&a,&b);
        int count=0;
        for(int i=a; i<=b; i++)
        {
            if(is_prime(i)==1)
            {
                count++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}
