#include<stdio.h>

int main()
{
    int i,j;
    i=4;
    lbi:

    j=i;
    lbj:
    printf("%d",j);
    j--;
    if (j>=1)
    {
        goto lbj;
        

    }
    i--;
    printf("\n");
    if (i>=1)
    {
        goto lbi;
    }
        return 0;
}
