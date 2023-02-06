#include<stdio.h>
int main()
{
    char str[1000];
    int i;
    printf("Enter a string of lowercase English letters : ");
    gets(str);
    int freq[26] = {0};
    for (i = 0; str[i] != '\0'; i++)
    {
        freq[str[i]-'a'] += 1;
    }

    printf("The frequency of characters is -\n");
    for (i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            char char_ = 'a' + i;
            printf("\t%c = %d\n", char_, freq[i]);
        }
    }
    return 0;
}