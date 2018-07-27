#include<stdio.h>
int main()
{
	int i,j,r,c,count;
	char a;
	scanf("%d%d",&r,&c);
	for(i=0,count=0;i<r;i++)
	{
	for(j=0;j<c;j++)
	{
	scanf("%c",&a);
	if(i==j && a=='W')
	count++;
	}
	}
printf("%d",count/2+count%2);
}
