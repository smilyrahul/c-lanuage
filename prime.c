#include<stdio.h>

void main()
{
    int i, num, prime = 0;
    printf("Enter the num to find prime or not");
    scanf("%d", &num);
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            printf("NOt a Prime number");
            prime = 1;
            break;
        }
    }
    if (prime == 0)
    {
        printf("Nmber is Prime NUmber");
    }
}