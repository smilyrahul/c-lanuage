

#include <stdio.h>
#include <time.h>


int main()
{
    int first, last, middle, n, i, a[10], search;
    clock_t begin, end;
    printf("Enter the size of an array: ");
    scanf("%d", &n);

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be search");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    begin = clock();
    while (first <= last)
    {
        middle = (first + last) / 2;
        if (a[middle] < search)
            first = middle + 1;
        else if (a[middle] == search)
        {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        }
        else
            last = middle - 1;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.\n", search);

    end = clock();
    printf("\n\nTime taken: %lf seconds\n", (double)(end - begin) / CLOCKS_PER_SEC);
   
    return 0;
}