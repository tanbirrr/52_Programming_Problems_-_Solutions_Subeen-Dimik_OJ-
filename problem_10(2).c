#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    
    for(i=1; i<=n; i++)
    {
        int r1,r2,baki;
        scanf("%d %d %d",&r1,&r2,&baki);
        printf("%0.2lf ",(double)(r2*6)/(300-baki) );
        
        if(r1-r2<0)
        {
            printf("%0.2lf\n",0.0 );
            continue;
        }
        ++r1; 
        printf("%0.2lf\n",(double)( (r1-r2)*6)/baki );
    }


    return 0;
}
