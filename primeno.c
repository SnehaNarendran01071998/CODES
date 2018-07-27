int main()
{
    int num,i,j,flag=0;
    scanf("%d", &num);                          
    printf("Input number is %d.\n", num); 
    
    printf("%d",num);
    for(i=2;i<=num;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if((i%j)==0)
            {
                flag=1;
               break;
           }
        }
        if(flag==0)
        {
            printf("%d",i);
        }
    }
}