#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       long long int a,b,c;
       scanf("%lld %lld %lld",&a,&b,&c);
       for(int i=a; i<=b; i++)
       {
          if(i%c==0)
          {
            printf("%d\n",i);
          }
       }
       printf("\n");
    }
    return 0;
}
