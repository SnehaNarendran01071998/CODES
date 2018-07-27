#include<stdio.h>
#include<math.h>
int main()
{
	int n,x1,y1,x2,y2,area=0,rect[100][100],i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	for(a=x1;a<x2;a++)
	{
	for(b=y1;b<y2;b++)
	{
	rect[a][b]+=1;
	if(rect[a][b]==1)
	{
	area++;
	}
	}
	}
	}
	printf("%d",area);

}