#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    //getchar();
    while(t--)
    {
        char ch;
        scanf(" %c",&ch);
        // getchar();
        // ch=getchar();
        if(ch>='a' && ch<='z') printf("Lowercase Character");
        else if(ch>='A' && ch<='Z') printf("Uppercase Character");
        else if(ch>='0' && ch<='9') printf("Numerical Digit");
        else printf("Special Character");
        if(t!=0) printf("\n");
    }
    return 0;
}
