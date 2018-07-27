#include<stdio.h>
int main()
{
	int arr[100],n,q,k,l,r,t,i,w,counteve,countodd,j;
	scanf("%d",&t);
	for(w=0;w<t;w++)
	{
		counteve=0;
		countodd=0;
		scanf("%d%d",&n,&q);
		for(i=1;i<=n;i++)
		{

			scanf("%d",&arr[i]);
		}
		for(j=0;j<q;j++)
		{
			scanf("%d%d%d",&k,&l,&r);
			if(k==0)
			    { 
			
				for(i=l;i<=r;i++)
				{
					
					if(arr[i]%2==0)
				counteve++;

				}
				if(counteve==0|| (counteve/(r-l+1))==0.5)
				{
				    printf("0\n");
				}
				else
				printf("%d %d\n",counteve,(r-l+1));
			}
				else 
				{
					for(i=l;i<=r;i++)
				{
					if(arr[i]%2!=0)
				countodd++;	
				}
				if(countodd==0|| (countodd/(r-l+1))==0.5)
				{
				    printf("0\n");
				}
				else 
				printf("%d %d\n",countodd,(r-l+1));
				}
				fflush(stdin);

	}

}
}