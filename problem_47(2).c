#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        int f;
        scanf("%d", &f);
        int ara[f];
        int j;
        
        for (j = 0; j < f; j++)
        {
            scanf("%d", &ara[j]);
        }
        int f2;
        scanf("%d", &f2);
        int ara2[f2];
        int k;

        for (k = 0; k < f2; k++)
        {
            scanf("%d", &ara2[k]);
        }
        int added[f + f2];
        int l;
        
        for (j = 0, k = 0, l = 0; j < f && k < f2; l++)
        {
            if (ara[j] < ara2[k])
            {
                added[l] = ara[j];
                j++;
            }
            else
            {
                added[l] = ara2[k];
                k++;
            }
        }
        
        while (j < f)
        {
            added[l] = ara[j];
            j++;
            l++;
        }
        
        while (k < f2)
        {
            added[l] = ara2[k];
            k++;
            l++;
        }
    
        for (l = 0; l < f + f2; l++)
        {
            if (l == 0)
            {
                printf("%d", added[l]);
            }
            else
            {
                printf(" %d", added[l]);
            }
        }
        printf("\n");
    }

    return 0;
}