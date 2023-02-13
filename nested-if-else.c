#include<stdio.h>
void main()
{
    int a,b,c,biggest;
    printf("Enter three number to check biggest\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    printf("%d is biggest",a);
         
    else if(b>a&&b>c)
    printf("%d is biggest",b);
    
    else if(c>a&&c>b)
    printf("%d is biggest",c); 

    else 
    printf("All HAVE A SAME VALUE");

}