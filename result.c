#include<stdio.h>
int main()
{
    int roll_no, sub1, sub2 ,sub3;
    char name[10];
    float total,per;

    printf("\nEnter Roll no:");
    scanf("%d",&roll_no);

    printf("\nEnter Student Name:");
    scanf("%s",&name);

    printf("\nEnter Subject 1 Marks:");
    scanf("%d",&sub1);
    printf("\nEnter Subject 2 Marks:");
    scanf("%d",&sub2);
    printf("\nEnter Subject 3 Marks:");
    scanf("%d",&sub3);

    total=sub1+sub2+sub3;
    per=(total/300)*100;
    printf("\n-------------------------------------------");
    printf("\n----------------MarkSheet------------------");
    printf("\n-------------------------------------------");
    printf("\n----->Subjects Total=%.2f",total);
    printf("\n-------------------------------------------");
    printf("\n----->Percentages=%.2f",per);

    if(per>=33){
        printf("\n %s is !PASS",name);
        if (per>=80)
        {
            printf("\n PASS With A Grade");
        }
        else if(per>=60){
            printf("\n PASS With B Grade");
        }
        else if(per>=50){
            printf("\n PASS With C Garde");
        }
        else{
            printf("\n PASS with D Grade");
        }
        
    }
    else{
        printf("\n %s is !FAIL",name);
    }
}