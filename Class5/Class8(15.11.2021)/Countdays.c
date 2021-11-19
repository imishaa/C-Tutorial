#include <stdio.h>
int main(){
    
     int day, month, year;
    
    printf("Enter a date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    int day_def = 1;
    int month_def = 1;

    int day_diff = day - day_def;
    int month_diff;
    int year_diff;
    int total = day_diff;

    if(month > 2){
        if(year % 4 == 0 && year % 100 != 0)
                total = total + 31 + 29;
            if(year % 400 == 0)
                total = total + 31 + 29;
            else
                total = total + 31 + 28;
    }

    switch(month){
        case 4:
            total = total + 31;
            break;
        case 5:
            total = total + 31 + 30;
            break;
        case 6:
            total = total + 31 + 30 + 31;
            break;
        case 7:
            total = total + 31 + 30 + 31 + 30;
            break;
        case 8:
            total = total + 31 + 30 + 31 + 30 + 31;
            break;
        case 9:
            total = total + 31 + 30 + 31 + 30 + 31 + 30;
            break;
        case 10:
            total = total + 31 + 30 + 31 + 30 + 31 + 30 + 31;
            break;
        case 11:
            total = total + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30;
            break;
        case 12:
            total = total + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31;
            break;
    }
    
    printf("Total Days: %d", total);

    return 0;
}