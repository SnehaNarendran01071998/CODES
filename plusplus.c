#include<stdio.h>
int main()
{
	int a[50][50],i,j,x1[25][25],y1[25][25],x2[25][25],y2[25][25],sum=0,centre[25][25],n,m;
	int proc=1,prox1=1,prox2=1,proy1=1,proy2=1;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);

	}
}

		
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
	if(i!=0||j!=0||i!=m-1||j!=n-1)
	{
		
		centre[i][j]=a[i][j];
		proc=proc*centre[i][j];
	}
	else
	{
		x1[i][j]=a[i-1][j];		
		prox1=prox1*x1[i][j];
		y1[i][j]=a[i][j-1];
		proy1=proy1*y1[i][j];
		x2[i][j]=a[i+1][j];
		prox2=prox2*x2[i][j];
		y2[i][j]=a[i][j+1];
		proy2=proy2*y2[i][j];
	}
	}
}
}

	sum=proc+prox1+proy1+prox2+proy2;
	printf("%d",sum);


	
}
