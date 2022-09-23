/* Programmer: Per Stoor
 * Date: 2022-09-15
 * Last changed: 2022-09-23
 * Type of program: Calculate the length of the string using a pointer
 *
 * Notes: Regarding dynamic strings; reading one character at a time from
 * stdin and using realloc for every newly entered character lets me avoid
 * having a static buffer. Performance does take a huge hit (a lot of reallocs happen)
 *
 * using a buffer does require ONE static string but lets you have better performance
 * in larger programs.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LENGTH 101

int main (int argc, char *argv[]){
    
    /*
     * This is the realloc way (performance heavy but no static strings and no reliance on string.h)
     */
    int loop_counter1;
    int loop_counter2;
    int loop_counter3;
    int amount_of_characters;
    int *amount_of_characters_pointer;
    char *user_string;
    char user_character;

        loop_counter1 = 0;
        loop_counter2 = 1;
        amount_of_characters = 0;
        amount_of_characters_pointer = &amount_of_characters;
    
        user_string = (char *) malloc(sizeof(user_string));
        printf("Enter string:");

            while(user_character != '\n'){
                user_character = getc(stdin);
                user_string = (char *) realloc(user_string,(loop_counter2 * sizeof(user_string)));
                user_string[loop_counter1] = user_character;

                    if(user_string[loop_counter1] == 32){
                        *amount_of_characters_pointer = *amount_of_characters_pointer;
                    }
                    else{
                        *amount_of_characters_pointer = *amount_of_characters_pointer + 1;
                    }
                    
                        loop_counter1++;
                        loop_counter2++;
            }

        user_string[loop_counter1] = '\0';
        printf("Amount of characters (whitespace excluded / NULL terminator excluded) is: %d\n", 
                *amount_of_characters_pointer - 1);
        free(user_string);

    /*
     * this is the buffer way (performance light but requires a static buffer string and heavy use of string.h)
     *
    int loop_counter1;
    int lengt_of_string;
    char string_buffer[STRING_LENGTH];
    char *user_inputted_string;
    char *string_characters;

        printf("Enter string:");
        fgets(string_buffer, STRING_LENGTH, stdin);

        user_inputted_string = (char *) malloc(strlen(string_buffer) + 1);
        strcpy(user_inputted_string, string_buffer);
        lengt_of_string = strlen(user_inputted_string);

        printf("\n");
        printf("length of string buffer:  %d\n", STRING_LENGTH);
        printf("length of string:         %d\n", lengt_of_string - 1);

        free(user_inputted_string);
    */

return 0;
}
