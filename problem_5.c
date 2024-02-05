#include<stdio.h>

int main()
{
    // int n;
    // scanf("%d",&n);
    // int k=1;
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=k; j<=n; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    int t;
    scanf("%d",&t);
    for(int p=1; p<=t; p++)
    {
         int n;
    scanf("%d",&n);
    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=k; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    }
    return 0;
}
