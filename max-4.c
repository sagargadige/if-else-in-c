#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Enter value of c:");
    scanf("%d", &c);
    printf("Enter value of d:");
    scanf("%d", &d);
    printf("\n ----------------------------------------");
    printf("\n a=%d and b=%d and c=%d and d=%d", a, b, c, d);
    printf("\n ----------------------------------------");

    if (a >= b && a >= c && a >= d)
    {
        printf("\n a:%d is MAX", a);
    }
    else if (b >= c && b >= d)
    {
        printf("\n b:%d is MAX", b);
    }
    else if (c >= d)
    {
        printf("\n c:%d is MAX", c);
    }
    else
    {
        printf("\n d:%d is MAX", d);
    }
    return 0;
}