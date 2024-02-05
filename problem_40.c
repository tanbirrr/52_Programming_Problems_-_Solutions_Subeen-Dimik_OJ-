#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int x,k;
       scanf("%d %d",&x,&k);
       int result=0;
       for(int i=0; i<=k; i++)
       {
          result+=pow(x,i);
       }
       printf("Result = %d\n",result);
    }
    return 0;
}
