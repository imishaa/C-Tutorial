//Check Number is equal to its Reverse

#include <stdio.h>

int main()
{
    int num,a,rev=0,rem=0;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    a=rev;

    while (num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;    
    }
    if (a==rev)
    {
        printf("This number is equal to its reverse\n");
    }

    else
        {
            printf("This number is not equal to its reverse");
        }
        
    
    return 0;
}

