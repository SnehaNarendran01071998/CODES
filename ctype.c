#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(isalpha(c)>0)
    {printf("\n This is a character");}
    else
    {printf("\n This is not a character");}
    return 0;
}