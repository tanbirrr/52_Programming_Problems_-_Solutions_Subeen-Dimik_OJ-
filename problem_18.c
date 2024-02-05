#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10001];
        scanf(" %[^\n]",s);
        for(int i=0; i<strlen(s); i++)
        {
              if(s[i]=='a' || s[i]== 'e' || s[i]== 'i' || s[i]=='o'
            || s[i]=='u')
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
          for(int i=0; i<strlen(s); i++)
        {
              if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'
            && s[i]!='u' && s[i] != ' ')
            {
                printf("%c",s[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
