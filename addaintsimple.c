
#include <stdio.h>
#include<string.h>

void main()
{
	int i,t,k,len;
	char a[100000],result;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	    result=0;
	    scanf("%s",a);
	    	len=strlen(a);
	for(i=0;i<len;i++)
	{
		result=(a[i]+a[len-i-1]-192);
		if(result>26)
			result=result-26;
			printf("%c",result+96);

	}
printf("\n");
	
}

}

