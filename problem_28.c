#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int ascending=1,descending=1;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])ascending=0;
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]<a[i+1]) descending=0;
        }
        if(ascending==1) printf("YES\n");
        else if(descending==1) printf("YES\n");
        else printf("NO\n");
        // else if (descending==0) printf("NO\n");
     
    }
    return 0;
}
