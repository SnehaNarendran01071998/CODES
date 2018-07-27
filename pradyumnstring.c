#include<stdio.h>
int main()
{
	int a[10],temp,i,j,n,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	temp=a[0];
	for(j=0;j<n-1;j++)
	{
	a[j]=a[j+1];
	a[j+1]=temp;
	
	}
	if(a[n/2]>-1)
		a[n/2]=-1;
	count++;
	}
	/*for(i=0;i<n;i++)
	{
	/*printf("%d\n",a[i]);
	}*/
	printf("%d",count);

}