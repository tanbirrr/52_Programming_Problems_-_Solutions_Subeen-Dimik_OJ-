#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char s[1001];
        scanf("%s",&s);
        int count[26]={0};
        for(int i=0; i<strlen(s); i++)
        {
           int val=s[i]-97;
           count[val]++;
        }
        for(int i=0; i<26; i++)
        {
          if(count[i] != 0)
          {
            printf("%c = %d\n",i+'a',count[i]);
          }
    }     
        //    for(int i=0; i<strlen(s); i++)
        //    {
        //        int val=s[i]-97;
        //        if(count[val] !=0)
        //        {
        //         printf("%c = %d\n",val+'a',count[val]);
        //        }
        //        count[val]=0;           
        //    }   

    printf("\n");

}
}