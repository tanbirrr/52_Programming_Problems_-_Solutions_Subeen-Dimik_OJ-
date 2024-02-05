#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,n;
        scanf("%d %d",&x,&n);
        if(x>n)
        {
            printf("Invalid!\n");
        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i%x==0)
                {
                    printf("%d\n",i);
                }
            }

        }
        printf("\n");
    }
    return 0;
}