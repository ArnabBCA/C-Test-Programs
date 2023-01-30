#include <stdio.h>
void String_Case(char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }    
    }
    printf(str);
}
int main()
{   int i;
    char str[20];
    printf("Enter the String\n");
    gets(str);
    
    String_Case(str);
    return 0;
}