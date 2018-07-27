#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,k,n,count=0;
	char str[100000];
	scanf("%s",str);
	n=strlen(str);
	scanf("%lld",&k);
	for(i=0;i<n;++i)
	{
		
		if(str[i]!='9')
		{
		    if(count==k)
			break;
			else{
		
			str[i]='9';
		++count;}
	}
	
	}
	printf("%s",str);
}