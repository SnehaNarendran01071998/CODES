#include<stdio.h>
int main()
{
	int i,k=0,j,n,t,p;
	scanf("%d",&t);
	for(p=0;p<t;p++)
	{
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	for(j=1;j<n-1;j++)
	{
	printf(" ");
	}
	while(k!=(2*i)-1)
	{
	printf("*");
	k++;
	}
	printf("\n");
	}
	}

}