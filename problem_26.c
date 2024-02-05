#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float x;
        scanf("%f",&x);
        int count=0;
        while(x>1.00)
        {
            x=x/2;
            count++;
        }
        printf("%d days\n",count);
    }
    
    return 0;
}
