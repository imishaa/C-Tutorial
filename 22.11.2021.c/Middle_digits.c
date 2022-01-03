//Print middle digit of any number

#include <stdio.h>
int main()
{
int a,b,c;

printf("Enter a Three Digit Number:\n");
scanf("%d" ,&a);
b = (a / 10) % 10 ;

printf("The Middle digit of given number is:%d\n",b);

    return 0;
}
