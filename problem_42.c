#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        for(int k=n; k>0; k--)
        {
            if(k==1)printf("1\n");
            else if(k==2)printf("2^%d + 2 + ",k);
            else printf("2^%d + ",k);
        }
    }
    
    return 0;
}
