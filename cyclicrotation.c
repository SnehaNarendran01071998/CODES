#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/* Given an array, cyclically rotate the array clockwise by one.*/
int main() {
    int n,a[100],x,i;
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
        if(a[0]<0)
        {
            printf("NEGATIVE VALUE");
        }
    else{
        x=a[n-1];
        for(i=n-1;i>0;i--)
            a[i]=a[i-1];
        a[0]=x;
    for(i=0;i<n;i++)
       printf("%d ",a[i]);}
            
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
