#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*Consider an array of distinct numbers sorted in increasing order. The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.*/
int main() {
    int n,a[100],i,k=0,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if(a[0]<0)
        printf("Negative input");
    else{
        min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i]){
            min=a[i];
        k=i;}
    }
    
    
    printf("%d",k);}
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
