#include<stdio.h>
void main()
{
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>90)
    {
        printf("Grade is A");
    }
    else if(marks>80)
    {
        printf("Grade is B");
    }
    else if(marks>70)
    {
        printf("Grade is c");
    }
    else if(marks>60)
    printf("Grade is D");
    else 
    printf("fail");

}