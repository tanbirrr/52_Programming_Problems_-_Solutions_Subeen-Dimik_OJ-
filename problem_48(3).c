#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int a[n-1];
       for(int i=0; i<n-1; i++)
       {
        scanf("%d",&a[i]);
       }
       int xor_sum=0;
       for(int i=1; i<=n; i++)
       {
        xor_sum^=i;
       }
       for(int i=0; i<n-1; i++)
       {
        xor_sum^=a[i];
       }
       printf("%d\n",xor_sum);
    }
    return 0;
}
