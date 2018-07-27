#include<stdio.h>
#include<math.h>
int main()
{
	int a[1000],n,i;
	long pro=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	pro=(pro*a[i])%(int)(pow(10,9)+7);
	}
	printf("%d",pro);
}