#include<stdio.h>
int main()
{
	int n,a[1000],i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);}
	for(i=0;i<n;i++)
	{
	if(n-i<=a[i]){
	printf("%d",i+1);
	return 0;	
}

}
}