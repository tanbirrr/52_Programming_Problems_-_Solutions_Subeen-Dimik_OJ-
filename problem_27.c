#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int number;
        scanf("%d",&number);
        int rem,res=0;
        int n=number;
        while(n!=0)
        {
           rem=n%10;
           res+=(rem*rem*rem);
           n=n/10;
        }
        if(res==number) printf("%d is an armstrong number!",number);
        else printf("%d is not an armstrong number!",number);
        printf("\n");
    }
    return 0;
}
