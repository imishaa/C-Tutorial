//C to print the series 1,5,2,4,3,3.4,2,5,1 

int main()
{
    int i,a,b;
    printf("Enter the Number:\n");
    scanf("%d",&a);
    b=a;
    for ( i = 1; i<=a; i++)
    {
        printf("%d%d",i,b);
        b--;
    }
    
    return 0;
}
