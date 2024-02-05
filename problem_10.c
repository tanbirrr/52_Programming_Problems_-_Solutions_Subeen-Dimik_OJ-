#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        double r1,r2,b;
        scanf("%lf %lf %lf",&r1,&r2,&b);
        double ball_played=300-b;
        double current_rr=(r2/ball_played)*6;
        double asking_rr=((r1-r2+1)/b)*6;

        printf("%0.2lf %0.2lf\n",current_rr,asking_rr);
    }
    
    return 0;
}
