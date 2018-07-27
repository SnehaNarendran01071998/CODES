#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
	int i,j,count,k,t;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	const char dummy= '0';
	count=0;
	char* a = (char *)malloc(512000 * sizeof(char));
    scanf("%s",a);
    char* b = (char *)malloc(512000 * sizeof(char));
    scanf("%s",b);
	for(i=0;a[i]!= '\0';i++)
	{
		for(j=0;b[j]!= '\0';j++)
		{
			if(a[i]==b[j])
			{
				a[i]=dummy;
				b[j]=dummy;
			}	
		}
	}
	for(i=0;a[i]!= '\0';i++)
	{
	if(a[i]!=dummy)
		count++;
	}

	for(i=0;b[i]!= '\0';i++)
		{
		    if(b[i]!=dummy)
		count++;
	}
	printf("%d\n",count);
	}
	return 0;
}