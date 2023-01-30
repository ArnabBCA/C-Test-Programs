#include <stdio.h>
#include <string.h>
int main()
{   
    int i;
    char str1[20];
    char str2[20];
    char temp;
    int end, len;

    printf("Enter the String\n");
    gets(str1);

    strlwr(str1);                           // changing to lower case

    memcpy(str2,str1,strlen(str1)+1);       // Copying original string array to str2
    
    printf("Original String = %s\n", str1);

    len = strlen(str1);
    end = len - 1;

    for (i = 0; i < end; i++)
    {
        temp = str2[i];
        str2[i] = str2[end];
        str2[end] = temp;
        end--;
    }
    printf("Reversed String = %s\n ", str2);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==str2[i])
        {
            printf("Palindrome String");
            break;
        }
        else
        {
            printf("Not a Palindrome String");
            break;
        }
    }
    return 0;
}