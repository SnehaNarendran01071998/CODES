#include<stdio.h>
int main()
{
	int i,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0;
	char n[100];
	scanf("%s",n);
	for(i=0;i<strlen(n);i++)
	{
		if(n[i]=='0')a++;
		if(n[i]=='1')b++;
		if(n[i]=='2')c++;
		if(n[i]=='3')d++;
		if(n[i]=='4')e++;
		if(n[i]=='5')f++;
		if(n[i]=='6')g++;
		if(n[i]=='7')h++;
		if(n[i]=='8')j++;
		if(n[i]=='9')k++;
	}
	printf("0 %d\n",a);
	printf("1 %d\n",b);
	printf("2 %d\n",c);
    printf("3 %d\n",d);
    printf("4 %d\n",e);
    printf("5 %d\n",f);
    printf("6 %d\n",g);
    printf("7 %d\n",h);
    printf("8 %d\n",j);
    printf("9 %d\n",k);
}