#include<stdio.h>
#include<string.h>
main()
{
int s,i,j,k,range;
int l[10],l2[10];
char a[10][26],b[10][26];
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%s",&a[i]);
scanf("%s",&b[i]);
}
for(i=0;i<s;i++)
{
l[i]=strlen(a[i]);
l2[i]=strlen(b[i]);
range=0;
if(l[i]==l2[i])
{
for(k=0;k<l[i];k++)
{
for(j=0;j<l2[i];j++)
{
if(a[i][k]==b[i][j])
{
range+=1;
break; 

}

}
}
}
if(range==l[i])
{
printf("YES\n");
}
else
printf("NO");
}
}