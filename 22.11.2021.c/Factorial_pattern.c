//Program to print the sum of 1/2! + 3!/2 + 3/4! + 5!/4 + .... + n!/n-1

#include<stdio.h>

int main()
{
    int n;
    float prd1,prd2,tmp1,tmp2;
    float sum;
    float sum1=0;
    float sum2=0;
    float i=2.0;
    float j=3.0;
    printf("Enter a number\n");
    scanf("%d",&n);

    while (i<=(n-1))
    {
        tmp1=i;
        prd1=1.0;
        while (tmp1>=1)
        {
            prd1=prd1*tmp1;
            tmp1--;
        }

        sum1=sum1+((i-1.0)/prd1);
        i=i+2;
    }

    while (j<=n)
    {
        tmp2=j;
        prd2=1.0;
        while (tmp2>=1.0)
        {
            prd2=prd2*tmp2;
            tmp2--;
        }

        sum2=sum2+(prd2/(j-1.0));
        j=j+2.0;
    }

    sum=sum1+sum2;
    printf("The result of 1/2! + 3!/2 + 3/4! + 5!/4 + .... + n!/n-1 is %f",sum);

    return 0;    
}