#include <stdio.h>

int main()
{
    int a;
    printf("Enter a three digit number:\n");
    scanf("%d",&a);
    printf("%d",a%10);
    a=a/10;
    printf("%d",a%10);
    a=a/10;
    printf("%d",a%10);

    
    return 0;
}
