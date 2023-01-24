#include<Stdio.h>
int main()
{
    int a[10],i,j,max;
    printf("the max numbe is ");
    for(i=0;i<3;i++)
    {
     scanf("%d",&a[i]);}
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++);
        {
            if(a[i]>a[j])
            {
                max=a[i];
            }
        }
    }
    printf("number is %d",&max);
    return 0;
}