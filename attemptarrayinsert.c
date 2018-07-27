#include <stdio.h>

int main()
{
int n,q,a[100],i,j,x,y,z,k,sum;
scanf("%d %d",&n,&q);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=1;j<=q;j++)
{
scanf("%d %d %d",&x,&y,&z);
sum=0;
if(x==1)
{
a[y]=z;
}

else if(x==2)
{
for(k=y;k<=z;k++)
{

sum=sum + a[k];
}
printf("%d \n",sum);
}


}
return 0;


}