#include <stdio.h>

int main()
{
    int u, l, i;
    printf("Enter the lower limit: ");
    scanf("%d", &l);
    printf("Enter the upper limit: ");
    scanf("%d", &u);

    while (l<u)
    {
        printf("%d\n",l);
        l++;
    }
    

    return 0;
}
