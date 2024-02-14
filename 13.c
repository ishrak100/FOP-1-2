#include <stdio.h>
void main()
{
    int n;
    scanf("%d", &n);
    while (!feof(stdin))
    {
        printf("%d\n", n);
        scanf("%d", &n);
    }
}