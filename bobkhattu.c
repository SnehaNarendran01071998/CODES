#include<stdio.h>
int main()
{
	int t,i,j,count;
	char a[100],b[100];
	scanf("%d",&t);
	while(t--)
	{
	scanf("%s%s",a,b);
	for(i=0;i<'\0';i++)
	{
	for(j=0;j<'\0';j++){
	if(a[i]!=b[j])
	count++;
	}
	}
	printf("%d",count);
}
}