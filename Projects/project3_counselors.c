/*Kundana Anumakonda
File Name: project3_counselors.c
Description: This program is for a sumer camp program to check which counselor hasnt been assigned*/

#include <stdio.h>
int search(int counselors[], int n);


int main(){
    int size;
    int i;
    
    //Asks the users to enter the number of counselors which will be the size of the array
    printf("Enter number of counselors: ");
    scanf("%d", &size);

    //Sets the size of the array to be size - 1 because a counselor wont be assigned
    int counselors[size - 1];

    //Asks for the counselors that are assigned
    printf("Enter counselors assigned: ");

    //Sets the counselors that are assigned into the array
    for(i = 0; i < size - 1; i++){
        scanf("%d", &counselors[i]);
    }

    //Calls the search function to find the counselor that isnt assigned and saves the value in result
    int result = search(counselors,size);
    
   printf("Counselor has not been assigned: %d", result);

    

    return 0;
}

int search(int counselors[], int n){
    int i;
    int j;
    int foundFlag = 0;

    //The first loop is to check for the counselor numbers from 1 to n(size of array)
    for(i = 1; i <= n; i++){

        //The flag is used to check if the counselor number is in the array 
        //It gets reset to 0 everytime the outer loop executes to the next iteration
        foundFlag  = 0;

        //The second loop is to get the elements in the array counselors
        for(j = 0; j  < n; j++){

            //This checks if the value of counselors array at the position j is equal to the counselor number(i)
            //If its true that means the counselor is assigned and breaks the second loop to move onto the next number(i++)
            if(counselors[j] == i){
                foundFlag = 1;
                break;
            }
        }

        //This checks if the flag for the number is 0, which means that the counselor number(i) is the unassigned counselor 
        if(foundFlag == 0){
            return i;
        }
    }

}