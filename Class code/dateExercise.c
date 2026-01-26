#include <stdio.h>
#include <stdbool.h>

int main(){

    bool flag;

    int month1, day1, year1, month2, day2, year2;
    
    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month1, &day1, &year1);

    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month2, &day2, &year2);

    //Checks if the entered dates are the same or not
    if(year1 == year2 && month1 == month2 && day1 == day2){
        printf("dates are the same");
    }
    else{

        //Checks if the years are not the same
        if(year1 != year2){

            //Because years arent the same checks if year1 is less than year2 or not
            if(year1 < year2){
                flag = true;
            }
            else{
                flag = false;
            }
        }

        //The years are the same
        else{

            // Checks if the months are not the same
            if(month1 != month2){

                //Because months arent the same checks if month1 is less than month2 or not
                if(month1 < month2){
                    flag = true;
                }
                else{
                    flag = false;
                }
            }

            //The months are the same
            else{

                //Checks if day1 is less than day2 or not
                if(day1 < day2){
                    flag = true;
                }
                else{
                    flag = false;
                }
            }
        }
    }

    //Checks the flag to determine which date is earlier
    //if flag != 0 means true
    if(flag){
        printf("%d/%d/%d is earlier", month1, day1, year1);
    }
    // else flag == 0 means false
    else{
        printf("%d/%d/%d is earlier", month2, day2, year2);
    }
    return 0;
}