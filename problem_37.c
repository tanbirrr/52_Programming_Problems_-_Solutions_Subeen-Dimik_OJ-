#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10];
        scanf("%s",s);
        for(int i=strlen(s)-1; i>=0; i--)
        {
            printf("%c",s[i]);
        }
        if(t!=0)
        {
        
        printf("\n");

        }
    }
    return 0;
}