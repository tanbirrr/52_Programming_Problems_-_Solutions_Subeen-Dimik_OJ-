#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s1[129],s2[129];
        scanf("%s %s",s1,s2);
        int l=strlen(s1);
        int l2=strlen(s2);
        int j;
        int count=0;
        for(int i=0; i<=l-l2; i++)
        {
            for(j=0; j<l2; j++)
            {
                if(s1[i+j]!=s2[j]) break;
            }
            if(j==l2)
            {
                count++;
            }
        }
        printf("%d\n",count);

    }
    return 0;
}
