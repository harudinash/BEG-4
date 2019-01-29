#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Input :");
    scanf("%d%d",&a,&b);
    printf("Output :\n");
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);

    return 0;
}
