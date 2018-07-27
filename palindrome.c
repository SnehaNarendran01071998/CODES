#include<stdio.h>
#include<string.h>
void main()
{
	char a[100];
		
	scanf("%s",a);
	int h;
	h=strlen(a)-1;
	int l=0;
	while(h>1)
	{
		if(a[l++]!=a[h--])
		{
			printf("NO");
			return;
		}
	}
	printf("YES");
}