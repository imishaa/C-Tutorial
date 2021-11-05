#include <stdio.h>

int main()

{
    int subject;

    printf ("Enter your subject \n");
    printf ("Enter 1 if you are only pass in Maths \n" , &subject);
    printf ("Enter 2 if you are only pass in Science \n" ,&subject);
    printf ("Enter 3 if you are pass in Maths and Science both \n" , &subject);    

    scanf ("%d" , &subject);

    printf ("You have entered %c as your subject \n" , subject);

    if (subject==Maths)
    {
        printf ("You will get a gift of worth 15/-");
    }
    
    else if (subject==Maths and Science)
    {
        printf ("You will get a gift of worth 45/-");
    }   

    else (subject==Science)
    {
        printf ("You will get a gift worth 15/-");
    }
    
    return 0;
}
  