#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        char s[101];
        scanf("%s",&s);
        int a=strlen(s)-1;
        // int b=s[a];
        if(s[a]%2==0) printf("even\n");
         else printf("odd\n");
        // printf("%d\n",b);
    }
    return 0;
}
