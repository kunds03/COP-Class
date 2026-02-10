/*Kundana Anumakonda
File Name: project2.c
Description: This program is to read a stream of characters and analyze them based on their ASCII values*/


#include <stdio.h>

int main(){
    char character;
    int ASCII;
    int firstChar = 1;

    //This loop will continuously display the prompt asking the user to enter characters
    do{

        printf("Enter 1 or more characters then ENTER:\n");
        printf("(NOTE: a character # will exit the program):\n");

        //This loop reads each character and processes them at a time
        do{
            character = getchar();

            //If the character inputed is a # then the program is exited
            if(character == '#'){
                return 0;
            }

            //if the character inputed is a new line character the break the loop and will return to the prompt loop
            if (character == '\n'){
                printf("\n");
                firstChar = 1;
                break;
            }

            //This is to print a new line between characters only
            if (!firstChar) {
                printf("\n");
            }
            //Prints a new line after prompt
            else {
                printf("\n");
                firstChar = 0;
            }

            ASCII = (int)character;
            printf("You typed: '%c' (ASCII %d)\n", character, ASCII);

            //Checks if the ASII of the character is in the range of the ASCII values for Uppercase Letters
            if(ASCII >= 65 && ASCII <= 90){
                character += 32;
                printf("Class: Uppercase Letter\n");
                printf("Converted to: '%c'\n", character);
            }

            //Checks if the ASII of the character is in the range of the ASCII values for Lowercase Letters
            else if(ASCII >= 97 && ASCII <= 122){
                character -= 32;
                printf("Class: Lowercase Letter\n");
                printf("Converted to: '%c'\n", character);
            }

            //Checks if the ASII of the character is in the range of the ASCII values for Digits
            else if(ASCII >= 48 && ASCII <= 57){
                printf("Class: Digit\n");
                printf("No conversion done\n");
            }   

            //Checks if the ASII of the character is in the range of the ASCII values for Printable Symbols
            else if(ASCII >= 32 && ASCII <= 126){
                printf("Class: Printable Symbol\n");
                printf("No conversion done\n");
            }

            //Checks if the ASII of the character is in the range of the ASCII values for Non-printable or Extended ASCII
            else{
                printf("Class: Non-printable or extended ASCII\n");
                printf("No conversion done\n");
            }
            
        }while(1);

    }while(1);

    return 0;
}


