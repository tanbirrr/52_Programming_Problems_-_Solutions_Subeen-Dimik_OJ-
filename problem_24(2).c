#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    //used for test cases
    for(i=0;i<n;i++){

        int num;
        scanf("%d",&num);
        int ara[num];
        int j;
        //taking input of array items
        for(j=0;j<num;j++){
            scanf("%d",&ara[j]);
        }
         printf("%d",ara[0]);
        for(j=2;j<num;j+=2){
            printf(" %d",ara[j]);
        }
        printf("\n");


    }


    return 0;
}