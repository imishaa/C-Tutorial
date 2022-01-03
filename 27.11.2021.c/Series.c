//C program to print all natural numbers from 1 to n
 

#include <stdio.h>

int main()
{
    int i, a;
    printf("Enter any number: ");
    scanf("%d", &a);

    printf("Natural numbers from 1 to %d : \n", a);

    for(i=1; i<=a; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}