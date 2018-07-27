#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp;
	int i,n,count=0;
	scanf("%d",&n);
	
	scanf("%s",str);
	for(i=0;i<=n;i++)
	{
	if((str[i]=='1') && (str[i+1]=='1'))
	count++;

	}
	for(i=0;i<n;i++)
	{
	if((str[i]=='1') && (str[i+1]=='0')&& (str[i+2]=='1'))
	{
	temp=str[i+1];
	str[i+1]=str[i+2];
	str[i+2]=temp;
	break;
	}
}

printf("%s",str);
printf("%d",count+1);	
	
}


