/*Kundana Anumakonda
File Name: project3_ACrental.c
Description: This program is for a local AC business to caculate the cost for AC rental*/


#include <stdio.h>

int main(){

    int selection;
    int days;

    int charge = 0;
    int remainingCharge = 0;

    int weeks = 0;
    int remainingDays = 0;

    //3 Arrays setting the First Day rate, Daily Rate, and Weekly Max Rate in the order of the AC
    int firstDayRate[4] = {50,60,80,200};
    int dailyRate[4] = {30,35,50,120};
    int weekMaxRate[4] = {160,200,280,550};
    

    printf("Please select from four types of AC: 1, 2, 3, and 4\n");
    printf("Enter selection: ");
    scanf("%d", &selection);

    // Checks if the rental AC selection made by the user is invalid if so exit
    if(selection < 1 || selection > 4){
        printf("Invalid selection. Select from 1 to 4.");
    }

    else{
        printf("Enter days: ");
        scanf("%d", &days);
        
        //Checks if the number of days for renting the AC is invalid if so exit
        if(days < 0){
            printf("Invalid days.");
        }

        else{
            //Evaulating the charges based on the number of days the AC is rented

            if(days < 7){
                charge = firstDayRate[selection-1];
                charge += (dailyRate[selection-1] * (days - 1));
                
                //If charge is greater Weekly Maximum charge, reset/reduce the charge to the Weekly Maximum charge
                if(charge > weekMaxRate[selection-1]){
                    charge = weekMaxRate[selection-1];
                }
            }
            
            else{
                //Evaulate number of weeks and days
                weeks = days / 7;
                remainingDays = days % 7;

                //Calculate charge for number of weeks AC is rented
                charge = weeks * weekMaxRate[selection-1];

                //Calculate the charge for the remaining days
                if(remainingDays > 0){
                    remainingCharge = dailyRate[selection-1] * remainingDays;

                    //If charge is greater Weekly Maximum charge, reset/reduce the charge to the Weekly Maximum charge
                    if(remainingCharge > weekMaxRate[selection-1]){
                        remainingCharge = weekMaxRate[selection-1];
                    }
                }

                charge += remainingCharge;
            }
            
            printf("Charge($):%d", charge);
        }
    }

    return 0;
}