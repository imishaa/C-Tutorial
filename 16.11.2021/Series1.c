#include <stdio.h>

int main()
{
    int i,n;

    printf("Print all natural numbers from 1 to : ");
    scanf("%d", &n);

    i=1;
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}