#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[10001];
        fgets(s,10001,stdin);
        int count=0;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]== ' ') count++;
            i++;
        }
        printf("%d\n",count+1);
    }
    return 0;
}
