#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int num1,num2,rem;
        scanf("%lld %lld",&num1,&num2);
        int n1=num1,n2=num2;
        while(n2!='\0')
        {
            rem=n1%n2;
            n1=n2;
            n2=rem;
        }
        int gcd=n1;
        //printf("%d",gcd);
        long long int lcm=(num1*num2)/gcd;
        printf("LCM = %lld",lcm);
        if(t!=0) printf("\n");
    }
    
    return 0;
}
