#include<stdio.h>
int main()
{
int n,min=1000,max=0,allfound=0,i,j,a[100];
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];
}

for(i=min;i<=max;i++)
{

for(j=0;j<n;j++)
{
if(a[j]==i)
{
allfound++;
break;
}
else
continue;
}

}

if(allfound==max)
printf("YES");
else
printf("NO");


return 0;
}