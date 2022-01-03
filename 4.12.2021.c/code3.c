#include<stdio.h>

int main(){
    int a[7];
    int i;
    printf("Enter the data : \n");

    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The reverse order is : \n");

    for(i=6;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
return 0;
}
     