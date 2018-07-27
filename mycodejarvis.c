#include<stdio.h>
int main()
{
	int a[100],b[100],min,rem=0,temp,n,t,pos,i;
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	if(a[i]==0)
	{
	return (6);
	}
	else
		temp=a[i];
	b[i]=0;
	while(temp>0)
	{
		rem=temp%10;
		if(rem==1)
			b[i]+=2;
		else if(rem==7)
			b[i]+=3;
		else if(rem==4 )
			b[i]+=4;
		else if(rem==2 || rem==3 || rem==5)
			b[i]+=5;
		else if(rem==6 || rem==9 || rem==0)
			b[i]+=6;
		else
			b[i]+=7;
		temp=temp/10;
	}
}
min=b[0];
for(i=0;i<n;i++)
{
	if(min>b[i])
		min=b[i];
	pos=i;}
	printf("%d\n",a[pos] );


	}
	}
	
