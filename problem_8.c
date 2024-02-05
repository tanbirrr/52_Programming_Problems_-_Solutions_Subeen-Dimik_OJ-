#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int k=1; k<=t; k++)
    {
        int a[3];
        for(int i=0; i<3; i++)
        {
            scanf("%d",&a[i]);
        }
        
        for(int i=0; i<3-1; i++)
        {
            for(int j=i+1; j<3; j++)
            {
                if(a[i]>a[j])
                {
                    int temp;
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("Case %d:",k);
        for(int i=0; i<3; i++)
        {
            printf(" %d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
