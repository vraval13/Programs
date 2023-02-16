#include<stdio.h>
int main()
{
    int i,j,arr[4][4];
    int v=1;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%4d",v);
            v++;
        }
        printf("\n");
    }
}