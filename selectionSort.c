#include <stdio.h>
#include <time.h>
void main()
{
    int n, array[100];
    int i, j, temp;
    clock_t begin, end;
    printf("Enter the size of an array\n");
    scanf("%d", &n);
    printf("Enter the element in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Array Element without Sorting\n");
    for(i=0;i<n;i++){
        printf("%d\t",array[i]);
    }

    begin = clock();
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    end = clock();
    printf("Array element after sorting\n");
    for (i = 0; i < n; i++)
    {

        printf("%d", array[i]);
    }
    printf("\n\nTotal time taken = %lf", (double)(end - begin) / CLOCKS_PER_SEC);
}
