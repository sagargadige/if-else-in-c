#include <stdio.h>
int main()
{
    int a, b, c, d,e;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    printf("Enter value of c:");
    scanf("%d", &c);
    printf("Enter value of d:");
    scanf("%d", &d);
    printf("Enter value of e:");
    scanf("%d", &e);
    printf("\n ----------------------------------------");
    printf("\n a=%d and b=%d and c=%d and d=%d and e=%d", a, b, c, d,e);
    printf("\n ----------------------------------------");

    if (a >= b && a >= c && a >= d && a>=e)
    {
        printf("\n a:%d is MAX", a);
    }
    else if (b >= c && b >= d && b>=e)
    {
        printf("\n b:%d is MAX", b);
    }
    else if (c >= d && c>=e)
    {
        printf("\n c:%d is MAX", c);
    }
    else if(d >= e)
    {
        printf("\n d:%d is MAX", d);
    }
    else {
        printf("\n e:%d is MAX", e);
    }
    return 0;
}