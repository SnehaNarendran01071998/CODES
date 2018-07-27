#include<stdio.h>
int isprime();
int nextprime();
int main()
{
	int t,n,i,k;
	char s[1000];
	scanf("%d",&t);
	
	for(k=0;k<t;k++)
	{
		  
		   scanf("%d",&n);
           scanf("%s",s);
           for(i=0;i<n;i++)
		{ 
           
            if(s[i]>=65 && s[i]<=69)
           	s[i]=67;
           else if(s[i]>=70 && s[i]<=72)
           	s[i]=71;
           else if(s[i]>=73 && s[i]<=76)
           	s[i]=73;
           else if(s[i]>=77 && s[i]<=81)
           	s[i]=79;
           else if(s[i]>=82 && s[i]<=86)
           	s[i]=83;
           else if(s[i]>=87 && s[i]<=93)
           s[i]=89;
       else if(s[i]>=94 && s[i]<=99)
           s[i]=97;
       else if(s[i]>=100 && s[i]<=102)
           s[i]=101;
       else if(s[i]>=103 && s[i]<=105)
           s[i]=103;
       else if(s[i]>=106 && s[i]<=108)
           s[i]=107;
       else if(s[i]>=109 && s[i]<=111)
           s[i]=109;
       else if(s[i]>=112 && s[i]<=125)
           s[i]=113;
           else if(s[i]<65)
           s[i]=67;


		}
		printf("%s\n",s );
	}
}
