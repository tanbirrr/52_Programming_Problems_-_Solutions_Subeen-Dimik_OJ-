#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[51];
        scanf(" %[^\n]",s);
       
        for(int i=0; i<strlen(s); i++)
        {
            if(s[i]=='L')
            {
                s[i]=s[i-1];
            }
            else if(s[i]=='R')
            {
                s[i]=s[i+1];
            }
        }
        for(int i=0; i<strlen(s); i++)
        {
            printf("%c",s[i]);
        }
        if(t!=0)printf("\n");
    }    
    return 0;
}
