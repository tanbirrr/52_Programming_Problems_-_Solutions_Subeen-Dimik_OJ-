#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char words [n][10001];
        for(int i=0; i<n; i++)
        {
            scanf("%s",words[i]);
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<n-i-1; j++)
            {
                if(strcmp(words[j],words[j+1]) > 0)
                {
                    char temp[10001];
                    strcpy(temp,words[j]);
                    strcpy(words[j],words[j+1]);
                    strcpy(words[j+1],temp);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            printf("%s\n",words[i]);
        }
    }
    return 0;
}
