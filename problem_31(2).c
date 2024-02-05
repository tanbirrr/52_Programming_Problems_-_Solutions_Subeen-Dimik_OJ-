#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[]={6,28,496,8128,33550336};
        for(int i=0; i<5; i++)
        {
            if(a[i]<=n)
            {
                printf("%d\n",a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
