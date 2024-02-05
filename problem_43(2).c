#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p,q,c;
        scanf("%d %d %d",&p,&q,&c);
        int result=1;
        for(int i=0; i<q; i++)
        {
            result=(result*p)%c;
        }
        printf("Result = %d\n",result);
    }
    return 0;
}
