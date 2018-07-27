#include<stdio.h>
#include<string.h>
/*int findmin(int a,int b);
int findmax(int a,int b);
int findmin(a,b)
{
	if(a<b)
	return a;
	else 
	return b;
}
int findmax(a,b)
{
	if(a>b)
	return a;
	else 
	return b;
}*/
int main()
{
	char s[100];
	int i,count1=0,count2=0,len,min,max;
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<len;i++)
	{
	if(s[i]=='(')
	count1++;
	else
	count2++;
	}
	min=findmin(count1,count2);
	max=findmax(count1,count2);


	if(max==(min+1))
	{
	printf("%d",max);
	}
	else{
	printf("%d",min);}
}