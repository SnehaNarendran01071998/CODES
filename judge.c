#include<stdio.h>
int main()
{
	int n,a[100],sumeve=0,sumodd=0,i,t;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	if(i%2==0)
		sumeve=sumeve+a[i];
	else
		sumodd=sumodd+a[i];
		}
		if(sumodd>sumeve)
		printf("Case %d:%d",t,sumodd);
		else
		printf("Case %d:%d",t,sumeve);}
}