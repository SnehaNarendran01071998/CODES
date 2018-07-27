#include<stdio.h>
int main()
{
	int t,i,k,s1=0,s2=0,s3=0,n,x,y,z,result=0;
	
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	    
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i%3==0)
			x=i;
		if(i%5==0) 
			y=i;
	if(i%15==0)
		z=i;
s1 = 3*((x*(x+3))/2);
s2 = 5*((y*(y+5))/2);
s3 = 15*((z*(z+15))/2);
result=s1+s2-s3;

	
}
printf("%d\n",result);
}
}