#include <stdio.h>

int main()

{
    int a,b,c,mid,mid3;

    printf("Enter the 5 digit number:\n");
    scanf("%d",&a);

    c=a%10;
    b=a/10;
    c=b%10;
    b=b/10;

    int first=c;
    c=b%10;
    b=b/10;

    int second=c;
    c=b%10;
    b=b/10;

    int third=c;

    mid3=(third*100)+(second*10)+(first*1);

    printf("The middle three digits are: %d\n",mid3);
    printf("The middle digit is: %d",second);



    
    return 0;
}

