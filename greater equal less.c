#include <stdio.h>
int main()
{
    int a,b;
    printf("input your value");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("%d is greater than %d", a,b);
    else if(a==b)
        printf("%d is equal to %d", a, b);
    else
        printf("%d is less than %d", a,b);
    return 0;
}
