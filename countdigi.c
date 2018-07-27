#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,count=0,i,k;
	char a[100];
	scanf("%d",&t);
	
	for(k=0;k<t;k++)
	{
	scanf("%d",&n);
	
	scanf("%s",a);
	for (i=0; a[i]!= '\0'; i++)
    {
        
        if (isalpha(a[i]) != 0 && isdigit(a[i+1]) != 0 )
            count++;
 
	
	}
	printf("%d",count);
}
}