#include<stdio.h>
int main()
{
    int t,x,i,j,e[21],o[21];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        e[0]=1;
        e[1]=1;
        x++;
        for(i=1; i<=x; i++){
            if(i==1) printf("%d\n",1);
            if(i==2) printf("%d %d\n",1,1);
            if(i>=3 && i%2==0){
                e[0]=1;
                for(j=1; j<i-1; j++){
                    e[j] = o[j-1]+o[j];
                }
                e[j]=1;
            }

            if(i>=3 && i%2==0){
                for(j=0; j<i-1; j++){
                    printf("%d ",e[j]);
                }
                printf("%d\n",e[j]);
            }

            if(i>=3 && i%2!=0){
                o[0]=1;
                for(j=1; j<i-1; j++){
                    o[j] = e[j-1]+e[j];
                }
                o[j]=1;
            }

            if(i>=3 && i%2!=0){
                for(j=0; j<i-1; j++){
                    printf("%d ",o[j]);
                }
                printf("%d\n",o[j]);
            }
        }

        printf("\n");

    }
}