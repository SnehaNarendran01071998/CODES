/*Magical tree*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int l,i,j,max,res;
	int sum=0,temp;
	scanf("%d",&l);

	for(i=1;i<=l;i++)
	{
		
	char str[100000];
	scanf("%s",str);
	sum=str[0];
		for(j=1;j<strlen(str)-1;j=j+2)
		{
			temp=str[j+1]-48;

			
        
        if (str[j] == '+')      
         sum += temp;
        else if (str[j] == '-') 
         sum -= temp;
 }
       res=sum-48;
       if(i==1)
       	max=res;
       if(res>max)

       	max=res;
       
   }
   printf("%d\n",max );
   return 0;
}

 
    
        
     
