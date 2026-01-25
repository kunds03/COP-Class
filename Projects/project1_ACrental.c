/*Kundana Anumakonda
File Name: project1_ACrental.c
Description: This program is for a local AC business to caculate the cost for AC rental*/


#include <stdio.h>

int main(){

    int selection;
    int days;

    int charge = 0;

    int weeks = 0;
    int remainingDays = 0;


    int firstDayRate = 0;
    int dailyRate = 0;
    int weekMaxRate = 0;

    printf("Please select from four types of AC: 1, 2, 3, and 4 \nEnter Selection: ");
    scanf("%d", &selection);

    // Checks if the selection is invalid or not
    if(selection < 1 || selection > 4){
        printf("Invalid selection. Select from 1 to 4.");
    }

    else{
        printf("Enter days: ");
        scanf("%d", &days);
        
        //Checks if the number of days is invalid or not
        if(days < 0){
            printf("Invalid days.");
        }

        else{

            //Setting the rates based on the selection made
            switch(selection){
                case 1:
                    firstDayRate = 50;
                    dailyRate = 30;
                    weekMaxRate = 160;
                    break;
                case 2:
                    firstDayRate = 60;
                    dailyRate = 35;
                    weekMaxRate = 200;
                    break;
                case 3:
                    firstDayRate = 80;
                    dailyRate = 50;
                    weekMaxRate = 280;
                    break;
                case 4:
                    firstDayRate = 200;
                    dailyRate = 120;
                    weekMaxRate = 550;
                    break;
            } 
            
            //Evaulating the charges based on the number of days
            if(days < 7){
                charge = firstDayRate;
                charge += (dailyRate * (days - 1));
            }
            
            else{
                weeks = days / 7;
                remainingDays = days % 7;

                charge = weeks * weekMaxRate;
                charge += (remainingDays * dailyRate);
            }
            
            printf("Charge($): %d", charge);
        }
    }

    return 0;
}