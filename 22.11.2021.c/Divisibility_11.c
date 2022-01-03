//Print two nos.and display all nos. divisible by 11

#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the last number:\n");
    scanf("%d",&b);
    printf("The numbers divisible by 11 between %d and %d are:\n",a,b);

    int i=a;

    while (i<b)
    {
        if (i%11==0)
        {
            printf("%d\n",i);
        }
        i++;

    }    
    return 0;
}
