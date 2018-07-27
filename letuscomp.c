#include<stdio.h>
/*unsigned int countBits(unsigned int n)
{
   unsigned int count = 0;
   while (n)
   {
        count++;
        n >>= 1;
    }
    return count;
}*/
int main()
{
    int t,x,k,d;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d",&x);
        for(d=1;d<x;d++)
        {
           printf("%d",log2(d));
    }
}