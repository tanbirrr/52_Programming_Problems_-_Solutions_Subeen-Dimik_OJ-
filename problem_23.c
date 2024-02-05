#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[101];
        scanf(" %[^\n]",s);
        for(int i=0; i<strlen(s); i++)
        {
            printf("%d",s[i]-64);
        }
        printf("\n");
    }
    return 0;
}
