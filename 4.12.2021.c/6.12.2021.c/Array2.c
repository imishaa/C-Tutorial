#include <stdio.h>

int main()
{
    int i, j, arr[4][3];
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value in %d %d : \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}    