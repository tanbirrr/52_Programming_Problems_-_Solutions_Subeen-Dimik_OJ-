#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n1;
        scanf("%d",&n1);
        int a[n1];
        for(int i=0; i<n1; i++)
        {
            scanf("%d",&a[i]);
        }
        int n2;
        scanf("%d",&n2);
        int b[n2];
        for(int i=0; i<n2; i++)
        {
            scanf("%d",&b[i]);
        }
        int c[n1+n2];
        for(int i=0; i<n1; i++)
        {
            c[i]=a[i];
        }
        for(int j=0,i=n1; j<n2; i++,j++)
        {
            c[i]=b[j];
        }
        
        for(int i=0; i<(n1+n2)-1; i++)
        {
            for(int j=i+1; j<n1+n2; j++)
            {
                if(c[i]>c[j])
                {
                    int temp;
                    temp=c[i];
                    c[i]=c[j];
                    c[j]=temp;
                }
            }
        }
        for(int i=0; i<n1+n2; i++)
        {
            if(i==0) printf("%d",c[0]);
            else printf(" %d",c[i]);
        }
        if(t!=0)printf("\n");
    }
}