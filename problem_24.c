#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0; i<n; i++)
        {
             scanf("%d",&a[i]);
        }
        printf("%d",a[0]);
        for(int i=2; i<n; i+=2)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
