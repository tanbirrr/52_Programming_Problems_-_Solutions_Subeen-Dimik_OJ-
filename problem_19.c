#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[10001];
        scanf(" %[^\n]",s);
        int count=0;
        int i=0;
        while(s[i] != '\0')
        {
            if(s[i]==' ') count++;
            i++;
        }
        printf("Count = %d\n",count+1);
    }
    return 0;
}
