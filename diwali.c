#include<stdio.h>
int main()
{
	int i,t,j,a,k,n,sum;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	scanf("%d%d%d",&a,&k,&n);
	sum=0;
	for(i=0;i<n-1;i++)
	{
	sum=sum+k;
	}
	printf("%d\n",a+sum);

	}
}