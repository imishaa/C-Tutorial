#include <stdio.h>

int main()
{
    int i, j, arr[3][4], n = 1;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            arr[j][i] = n;
            n = n + 1;
            
        }
        
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}