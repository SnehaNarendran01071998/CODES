#include<stdio.h>
int main()
{
char str[100];
int i=0,j,k=0,n;
scanf("%s",str);
scanf("%d",&n);
while(str[i]!='\0')
{
if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
{
j=0;
{
if(str[i]>='a' && str[i]<='z')
k=str[i];
if(str[i]>='A' && str[i]<='Z')
k=str[i];
if(str[i]>='0' && str[i]<='9')
k=str[i];
while(j<n)
{
if(k==123)
k=97;
if(k==91)
k=65;
if(k==58)
k=48;
k++;
j++;
}

}
{
if(k==123)
k=97;
if(k==91)
k=65;
if(k==58)
k=48;
}
str[i]=k;

}
i++;
}
printf("%s",str);

}