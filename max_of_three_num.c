//Finding max of three numbers using ternary operator...
#include<stdio.h>
int main()
{
    int a,b,c,max;

    printf("Enter the value of a:");
    scanf("%d",&a);
    
    printf("Enter the value of b:");
    scanf("%d",&b);

    printf("Enter the value of c:");
    scanf("%d",&c);

    max=(a>b)?((a>c)?a:c):((b>c)?b:c);

    printf("The Max number is %d",max);
       
}