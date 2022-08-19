#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d, m, n;
        scanf("%d%d%d%d", &a, &b, &c, &d);
        if (a > b)
        {
            m = a;
        }
        else
        {
            m = b;
        }
        if (c > d)
        {
            n = c;
        }
        else
        {
            n = d;
        }
        printf("%d\n", m + n);
    }
    return 0;
}