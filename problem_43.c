#include <stdio.h>

int pown(int n,int p)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res*=p;
    }
    return res;
}

int main()
{

    int T, p, q, c, i, rest;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d %d %d", &p, &q, &c);

        rest = pown(q,p);


        printf("Result = %d\n", rest % c);
    }

    return 0;
}
