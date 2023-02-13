#include<stdio.h>
void main()
{
    int x, i=1;
    while(i<=5)
    {
        printf("enter a number");
        scanf("%d",&x);
        if(x>0)
        break;
        i++;
    }
    i==6?printf("ends normally"):printf("applied break");

}