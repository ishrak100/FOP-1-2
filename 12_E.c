#include <stdio.h>
void main()
{
    int x;
    int fir_dig, sec_dig, thir_dig, fou_dig;
    scanf("%d", &x);
    fir_dig = x % 10;
    sec_dig = (x / 10) % 10;
    thir_dig = (x / 100) % 10;
    fou_dig = x / 1000;

    char dig_spec[10][20] = {"one", "two", "three", "four", "five", "six", "seven",
                             "eight", "nine", "*_*"};

    char dig_spec_2nd_digit[10][20] = {"*_*", "twenty", "thirty", "forty", "fifty",
                                       "sixty", "seventy", "eighty", "ninety", "*_*"};

    char dig_spec_2nd_digit_1[10][20] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
                                         "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "*_*"};

    if (fou_dig != 0)
    {

        printf("%s thousand", dig_spec[fou_dig - 1]);
        if (fou_dig != 1)
        {

            printf("%s");
        }

        printf("\n");
    }

    if (thir_dig != 0)
    {

        printf("%s hundred", dig_spec[thir_dig - 1]);
        if (thir_dig != 1)
        {

            printf("%s");
        }

        printf("\n");
    }

    if (sec_dig != 0)
    {
        if (sec_dig != 1)
        {
            printf("%s\n", dig_spec_2nd_digit[sec_dig - 1]);
        }
        if (sec_dig == 1)
        {

            printf("%s\n", dig_spec_2nd_digit_1[fir_dig]);
            return 0;
        }
    }
    if (fir_dig != 0)
    {
        printf("%s", dig_spec[fir_dig - 1]);
    }
}
