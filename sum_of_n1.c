//Sum of factorial numbers series...
#include<stdio.h>
int main()
{
    int i,num,fact=1,sum=0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }

    printf("Sum of series is %d",sum);

    return 0;
}