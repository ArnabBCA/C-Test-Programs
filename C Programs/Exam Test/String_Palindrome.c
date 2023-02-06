#include <stdio.h>
#include <string.h>
int main()
{   
    int i;
    char str1[20];
    char str2[20];
    char temp;
    printf("Enter the String\n");
    gets(str1);

    strlwr(str1);                           // changing to lower case
    strcpy(str2,str1);    // Copying original string array to str2
    
    printf("Original String = %s\n", str1);
    for (i = 0;str2[i]!='\0'; i++)
    {
        temp = str2[i];
        str2[i] = str2[end];
        str2[end] = temp;
        end--;
    }
}