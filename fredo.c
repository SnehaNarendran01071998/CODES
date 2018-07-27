#include<stdio.h>
int main()
{
	int t,i,arr[100],n,am;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d%d",&am,&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	if(arr[i]==0)
	am=am-1;
	else
	am=am+2;
if(am<=0)
	break;
	}
	if(i<n-1)
	printf("No %d",i+1);
	else
	printf("Yes %d",i+1);
	}

}