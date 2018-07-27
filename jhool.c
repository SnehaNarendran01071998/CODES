#include <stdio.h>
#include <string.h>
int main()
{
char text[101];
char pat1[] = "000000";
char pat2[] = "111111";
scanf("%s",text);
if((strstr(text,pat1)!= NULL) || (strstr(text,pat2)!= NULL) )
{
printf("Sorry, sorry!");
}
else
{
printf("Good luck!");
}
return 0;
}