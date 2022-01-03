//Print the series of sum odd numbers from 1 to n 

#include <stdio.h>

int main()
{
    int i=1;
    int a;
    int sum=0;

    printf("Enter a positive odd integer:\n");
    scanf("%d",&a);
    printf("The sum of odd numbers from 1 to %d is:\n",a);
    
    while (i<=a)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("%d",sum);
    
    return 0;
}



