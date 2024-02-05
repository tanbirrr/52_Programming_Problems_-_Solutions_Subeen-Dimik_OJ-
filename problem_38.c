#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        int k=1;
        scanf("%d %d",&n,&m);
        for(int i=1; i<(2*n); i++)
        {
          for(int j=1; j<=k; j++)
          {
            printf("%d ",m);
          }
          printf("\n");
          if(i<n)
          {
            k++;
            
          }
          else
          {
            k--;
          }
        }
        
    }
    return 0;
}
