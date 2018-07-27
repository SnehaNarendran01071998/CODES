#include<stdio.h>
#include<string.h>
void swap(int,int);
int main()
{
	int t,k;
	char over[100];
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int n,p,i,k,j,player[100],striker,nonstriker,s;
		int out=0;
	int ballcount=0;
	scanf("%d%d",&n,&p);
	for(j=0;j<p;j++){
	player[j]=-1;}
   scanf("%s",over);
   striker=0;
   nonstriker=1;
   out=2;
	player[striker]=0;
	player[nonstriker]=0;
	for(i=0;i<strlen(over);i++)
	{
		if(ballcount==6)
		{
			swap(striker,nonstriker);
			ballcount=0;
		}
	
	if(over[i]=='0')
		player[striker]+=0;
	else if(over[i]=='1'){
		player[striker]+=1;
	     swap(striker,nonstriker);}
	else if(over[i]=='2')
		player[striker]+=2;
	else if(over[i]=='3')
	{
		player[striker]+=3;
		swap(striker,nonstriker);
	}
	else if(over[i]=='4')
		player[striker]+=4;
	else if(over[i]=='6')
		player[striker]+=6;
	else if(over[i]=='W'){
		striker=out;	
	player[striker]=0;
	out++;	
	}
	ballcount++;
	}
	printf("Case %d:\n",k+1);
	
	for(s=0;s<p;s++)
	{
	if(s==striker)	
	printf("Player %d: %d*\n",s+1,player[s]);	
	else if(s==nonstriker)	
		printf("Player %d: %d*\n",s+1,player[s]);		
	else if(player[s]==-1)
		printf("Player %d: DNB\n",s+1);
	else
		printf("Player %d: %d\n",s+1,player[s]);

		}
	}
	
	}

	void swap(int a,int b)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
