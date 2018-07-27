#include<stdio.h>
int main()
{
	int L,R,Q,N,i,sum,avg,a[1000];
	scanf("%d%d",&N,&Q);
	for(i=1;i<=N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=Q;i++)
	{
		sum=0;
		avg=0;
		scanf("%d%d",&L,&R);
		sum=a[L]+a[R];
		avg=(sum)/2;
		printf("%d",avg);

	}

}