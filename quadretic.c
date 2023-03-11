#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
  float a, b, c, r1, r2, d;

  printf("enter the values a b c");
  scanf("%f %f %f", &a, &b, &c);
  d = b * b - 4 * (a * c);
  if (d > 0)
  {
    printf("roots are real and equal");
    r1 = -b + sqrt(d) / 2 * a;
    r2 = -b - sqrt(d) / 2 * a;
    printf("roots are %f %f", r1, r2);
  }
  else if (d == 0)
  {
    printf("roots are equal");
    r1 = r2 = -b / 2 * a;
    printf("roots are %f ", r1, r2);
  }
  else
    printf("rootys are comples");
  getch();
}