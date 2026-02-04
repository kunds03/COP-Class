/*Kundana Anumakonda
File Name: project2.c
Description: This program is for a local AC business to caculate the cost for AC rental*/


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
            character += 32;
            printf("Class: Uppercase Letter\n");
            printf("Converted to: %c\n", character);
        }

        else if(ASCII >= 97 && ASCII <= 122){
            character -= 32;
            printf("Class: Lowercase Letter\n");
            printf("Converted to: %c\n", character);
        }

        else if(ASCII >= 65 && ASCII <= 90){
            printf("Class: Digit\n");
            printf("Converted to: %c\n", character);
        }

        else if(ASCII >= 32 && ASCII <= 126){
            printf("Class: Printable Symbol\n");
            printf("Converted to: %c\n", character);
        }

        else{
            printf("Class: Non-printable Character\n");
            printf("Converted to: %c\n", character);
        }

    }while(1);

    return 0;
}