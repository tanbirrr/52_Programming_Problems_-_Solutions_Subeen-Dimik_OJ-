#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int rev=0;
        while(n!=0)
        {
            rev=rev*10;
            rev+=n%10;
            //printf("%d",rev);
            //rev=0;
            n/=10;

        }
        printf("%d",rev);
        if(t!=0)
        {

        printf("\n");

        }
    }
    return 0;
}
