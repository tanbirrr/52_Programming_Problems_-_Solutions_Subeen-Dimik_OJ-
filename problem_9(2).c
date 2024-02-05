#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double sq_root=sqrt(n);
        if(sq_root*sq_root == n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
