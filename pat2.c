#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j;

scanf("%d",&n);
    if(n<0)
        printf("Invalid input");
    else{
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }}

    return 0;

}
