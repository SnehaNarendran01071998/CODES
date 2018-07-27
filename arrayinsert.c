#include<stdio.h>
int main()
{
	int ar[100],i,j,k,n,q,a,b,c,sum;
	scanf("%d%d",&n,&q);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(j=1;j<=q;j++)
	{
		scanf("%d%d%d",&a,&b,&c);
		sum=0;
	
	if(a==1)
	{
		ar[b]=c;
	}
	else if(a==2)
	{
		for(k=b;k<=c;k++)
		{
			sum=sum+ar[k];
		}
		printf("%d\n",sum);
	}
	
}

	return 0;

}