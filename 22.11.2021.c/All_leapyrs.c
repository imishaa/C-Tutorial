//All leap years in between two years

#include <stdio.h>
int main()
{
    int sy, ey, i;
    printf("Print leap years between two given years \n");
    printf("Enter Start year: ");
    scanf("%d", &sy);
    printf("Enter End year: ");
    scanf("%d", &ey);
    printf("Leap years:\n");
    i = sy;
    while (i <= ey)
    {
        if ((0 == i % 4) && (0 != i % 100) || (0 == i % 400))
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}