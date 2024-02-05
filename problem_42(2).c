#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num;
        scanf("%d",&num);
        while(num>=0)
        {
            if(num>1)printf("%d^%d + ",2,num);
            else if(num!=0)printf("%d + ",2);
            else printf("%d",1);
            num--;
        }
        printf("\n");
    }
    return 0;
}
