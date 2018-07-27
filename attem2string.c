#include<stdio.h>
#include<string.h>
int main()
{
	int sum1=0,sum2=0,i,n,t,k;
	char s1[100000],s2[100000];
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
	scanf("%s%s",s1,s2);
}

	n=strlen(s1);
	for(i=0;i<=n;i++)
	{
		sum1=sum1+s1[i];
		sum2=sum2+s2[i];
	}
	
	if(sum1==sum2)
		printf("YES\n");
	else
	    printf("NO\n");

}

