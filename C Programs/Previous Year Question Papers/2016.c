#include<stdio.h>
#include<string.h>
/*
void main()
{
    printf("%s","C","question","bank");
}
*/
/*
void main()
{
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    printf("%u\n%u\n%u\n",a[0]+1,*(a[0]+7),*(*(a+0)+1));
}
*/
/*
void main()
{
    printf("%d%d",sizeof("string"),strlen("string"));
}
*/
/*
void main()
{
    char str1="Bombay";
    char str2="Hyderbad";
    char *s1=str1;
    char *s2=str2;
    while (*s1++!=NULL)
    *s2++=*s1++;
    printf("%s",s2);
    
}
*/
/*
void main()
{
    int x=5,y=7;
    x=y++ + ++x;
    y=++y + x++;
    printf("%d\n%d",x,y);
}
*/
/*
void main()
{
    int x,y=2;
    x=y<<1;
    printf("%d",x);
}
*/
/*
void main()
{
    int i;
    for (i=0;i<4;++i)
    {
        printf("%d",i);
    }
}
*/
void main()
{
    int a=0,b=1,c=2,x;
    x=a++||b++||c++;
    printf("%d%d%d%d",x,a,b,c);
}