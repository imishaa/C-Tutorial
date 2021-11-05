#include <stdio.h>

int main()

{
    int a,b,c;
    a=5;
    b=7;
    printf("Earlier values:\n");
    printf("a=%d\tb=%d\n",a,b);

    c=a;
    a=b;
    b=c;    

    printf("Swapped values:\n");
    printf("a=%d\tb=%d\n",a,b);

    return 0;
}
