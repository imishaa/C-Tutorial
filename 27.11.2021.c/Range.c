//Display all numbers from n to m the, value to be entered by user


#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter the two numbers for the range:\n");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        for (i = a; i <= b; i++)
        {
            printf("%d,", i);
        }
    }
    else
    {
        for (i = b; i >= a; i--)
        {
            printf("%d,", i);
        }
    }
    return 0;
}