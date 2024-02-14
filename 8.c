#include <stdio.h>
void main()
{
    int npos, cpos, n;
    char ch, nch;
    scanf("%c%d", &ch, &n);
    cpos = ch - 'A';
    npos = (cpos + n) % 26;
    nch = npos + 'A';
    printf("%c", nch);
}