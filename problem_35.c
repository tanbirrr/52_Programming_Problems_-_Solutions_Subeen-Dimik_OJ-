#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int xc,yc,r,x,y;
        scanf("%d %d %d %d %d",&xc,&yc,&r,&x,&y);
        int d=sqrt(pow(xc-x,2)+pow(yc-y,2));
        if(d<=r)
        {
            printf("The point is inside the circle\n");
        }
        else
        {
            printf("The point is not inside the circle\n");
        }
 
    }
    return 0;
}
