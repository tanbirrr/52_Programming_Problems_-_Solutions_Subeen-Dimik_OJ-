#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char s[10001];
        //fgets(s,10001,stdin);
         gets(s);
        // scanf("%[^\n]",s);
        char x;
        scanf(" %c",&x);
        getchar();
        int count=0;
        int i=0;
        while(s[i] != '\0')
        {
            if(s[i]==x) count++;
            i++;
        }
        if(count > 0) printf("Occurrence of '%c' in '%s' = %d\n",x,s,count);
        else printf("'%c' is not present\n",x);
    }
    return 0;
}
