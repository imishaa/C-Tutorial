#include <stdio.h>

int main()
{
    printf("Enter the number:\n");
    float a;
    scanf("%f",&a);
    int b=a;
    float c=a-b;
    printf("%f",c);
    printf("\n%d",b);

    return 0;
}

