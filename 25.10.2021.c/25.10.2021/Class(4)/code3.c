#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter a 4digit number:\n");
    scanf("%d",&a);
    
    printf("The digits are:\n");
    c=a%10;
    b=a/10;
    printf("%d\n",c);
    c=b%10;
    b=b/10;
    printf("%d\n",c);
    c=b%10;
    b=b/10;
    printf("%d\n",c);
    printf("%d",b);
    

    return 0;
}

