/*Kundana Anumakonda
File Name: project2.c
Description: This program is */


#include <stdio.h>

int main(){
    char character;
    int ASCII;

    printf(" Enter 1 or more characters then ENTER\n");
    printf("NOTE: a character # will exit the program):\n");

    do{
        character = getchar();
        if(character == '#' || character == '\n'){
            break;
        }

        ASCII = (int)character;

        if(ASCII >= 65 && ASCII <= 90){
            printf("You typed: %c (ASCII %d)\n", character, ASCII);
            character += 32;
            printf("Class: Uppercase Letter\n");
            printf("Converted to: %c\n", character);
        }

        else if(ASCII >= 97 && ASCII <= 122){
            printf("You typed: %c (ASCII %d)\n", character, ASCII);
            character -= 32;
            printf("Class: Lowercase Letter\n");
            printf("Converted to: %c\n", character);
        }

        else if(ASCII >= 65 && ASCII <= 90){
            printf("You typed: %c (ASCII %d)\n", character, ASCII);
            printf("Class: Digit\n");
            printf("No conversion: %c\n", character);
        }

        else if(ASCII >= 32 && ASCII <= 126){
            printf("You typed: %c (ASCII %d)\n", character, ASCII);
            printf("Class: Printable Symbol\n");
            printf("No conversion: %c\n", character);
        }

        else{
            printf("You typed: %c (ASCII %d)\n", character, ASCII);
            printf("Class: Non-printable Character\n");
            printf("No conversion: %c\n", character);
        }

    }while(1);

    return 0;
}