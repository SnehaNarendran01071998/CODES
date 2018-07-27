#include<stdio.h>

int main()
{
	int n,t,count,j,k;
	char s[100];
	scanf("%d",&t);
	for(k=0;k<t;k++){
	scanf("%d",&n);
	count=0;
	
	
	scanf("%s",s);
	for(j=0;j<n;j++)
	{
		if(s[j]=='0'){
			count++;

		}
	}
	
printf("%d\n",count);
	}
	}
	
	
