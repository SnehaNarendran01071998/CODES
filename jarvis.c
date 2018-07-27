#include<stdio.h>
int main()
{
    int n,m,a[100],i,j,count=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    while(i<n)
    {
        if(a[i]>0)
        {
            i++;
            continue;}
            
            j=a[i]-1;
            if(a[j]>0)
            {
                a[i] = a[j];
 
           
            a[j] = -1;
        }
        else
        {
            
            a[j]--;
 
         
            a[i] = 0;
            i++;
        }
    }
    for(i=0;i<n;i++){
        
    if(abs(a[i]>0))
    {
        count++;
    }
    printf("%d\n",count);
    printf("%d ",a[i] );
            }
            
        }
    
