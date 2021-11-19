#include <stdio.h>
int main(){
    
    int hr1, hr2, min1, min2, m1, m2, hr_diff, min_diff;

    printf("Enter time 1 (hh:mm) \n");
    scanf("%d:%d", &hr1, &min1);
    printf("Enter 0 for AM and 1 for PM \n");
    scanf("%d", &m1);

    printf("Enter time 2 (hh:mm) \n");
    scanf("%d:%d", &hr2, &min2);
    printf("Enter 0 for AM and 1 for PM \n");
    scanf("%d", &m2);

    if(hr1 > hr2){
        hr_diff = hr1 - hr2;
        if(min1 > min2)
            min_diff = min1 - min2;
        else
            min_diff = min2 - min1;
    }
    else
        hr_diff = hr1 - hr2;
    
    if(m1 != m2)
        hr_diff = hr_diff + 12;
    
    printf("Time differance - %d:%d", hr_diff, min_diff);

    return 0;
}