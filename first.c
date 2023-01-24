#include <stdio.h>

void main()
{
  int search, i, count, n, a[20];
  printf("Enter the size of array\n");
  scanf("%d", &n);
  printf("Enter the element in the array\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("Enter the element to be search\n");
  scanf("%d", &search);
  for (i = 0; i < n; i++)
  {
    if (a[i] == search)
    {
      printf("%d is found at %d position\n", search, i + 1);
      count = 1;
    }
  }
  if (count == 0)
  {
    printf("NOt found in the array");
  }
}