#include <stdio.h>

int fact(int);

int main()
{
    int num, ans;

    printf("Enter the number:");
    scanf("%d", &num);

    ans = fact(num);

    printf("Factorial is %d", ans);
}

int fact(int x)
{
    int f;
    if (x == 1)
        return 1;

    else
        f = x * fact(x - 1);
    return f;
}
