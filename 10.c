#include <stdio.h>
void main()
{

    int a, b, i, max, min;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        for (i = b; i <= a; i++)
        {
            if (((i % 3 == 0 || i % 5 == 0) && (i % 3 != 0 || i % 5 != 0)))
                printf("%d\n", i);
        }
    }

    else if (a < b)
    {
        for (i = a; i <= b; i++)
        {
            if (((i % 3 == 0 || i % 5 == 0) && (i % 3 != 0 || i % 5 != 0)))
                printf("%d\n", i);
        }
    }
}