#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n - 1];
        for (int i = 0; i < n - 1; i++)
        {
            scanf("%d", &a[i]);
        }
        int b[n];
        int num = 1;
        for (int i = 0; i < n; i++)
        {
            b[i] = num;
            num++;
        }

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = 0; j < n - 1; j++)
            {
                if (b[i] == a[j])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%d\n", b[i]);
                break;
            }
        }
    }
    return 0;
}
