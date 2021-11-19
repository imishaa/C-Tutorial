#include <stdio.h>

int main()
{
    int i,n;

    printf("Print all natural numbers from n to 1 : ");
    scanf("%d", &n);

    i=n;
    while(i>=1)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}