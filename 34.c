#include <stdio.h>
int main()
{
    char x[1000000];
    gets(x);
    int vowel = 0, consonant = 0, digit = 0;
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U' || x[i] == 'a' || x[i] == 'e' 
        || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
       vowel++;
       else if((x[i]>='A'&&x[i]<='Z') || (x[i]>='a'&&x[i]<='z'))
       consonant++;
       if(x[i]>='0'&&x[i]<='9') 
       digit++;
    }
    printf("%d\n%d\n%d\n",vowel,consonant,digit);
}