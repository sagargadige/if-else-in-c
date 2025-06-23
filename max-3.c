#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("Enter value of c:");
    scanf("%d",&c);
    printf("\n -----------------------------");
    printf("\n a=%d and b=%d and c=%d",a,b,c);
    printf("\n -----------------------------");
    if(a>=b && a>=c){
        printf("\n a:%d is MAX",a);
    }
    else if(b>=c)
    {
        printf("\n b:%d is MAX",b);
    }
    else{
        printf("\n c:%d is MAX",c);
    }
    return 0;
}