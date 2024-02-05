#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1001];
        scanf("%s",s);
        int flag=1;
        int i=0;
        int j=strlen(s)-1;
        while(i<j)
        {
            if(s[i]!= s[j])
            {
              flag=0;
              break;
            }
            i++;
            j--;
        }
        if(flag==1) printf("Yes! It is palindrome!\n");
        else printf("Sorry! It is not palindrome!\n");
    }
    return 0;
}
