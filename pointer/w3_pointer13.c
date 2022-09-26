/* Programmer: Per Stoor
 * Date: 2022-09-25
 * Last changed: 2022-09-26
 * Type of program: count the number of vowels and consonants in a string using a pointer.
 */

#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h>

#define STRING_LENGTH 50

void vowel_and_consonant_counter(char *string_pointer);

int main(int argc, char *argv[]){ 

    char user_inputted_string[STRING_LENGTH];

        printf("Enter string:");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
    
        vowel_and_consonant_counter(user_inputted_string);
    
return 0;
} 

void vowel_and_consonant_counter(char *string_pointer){

    int function_vowel_counter;
    int function_consonant_counter;
    int function_loop_counter1;

        function_vowel_counter = 0;
        function_consonant_counter = 0;

             
             
             
            while(*string_pointer != '\0'){

               /* 
                * First the string gets converted to all lowercase to make
                * the vowel and consonant check twice as fast (we don't need
                * to show the user that we only check lowercase letters)
                */
                *string_pointer = tolower(*string_pointer);

               /* 
                * The first if statement checks for big and small letters in the string,
                * if none, consonant and vowels will not be counted.
                */
                if( (*string_pointer >= 65 && *string_pointer <= 90) ||
                    (*string_pointer >= 97 && *string_pointer <= 122)){
                    
                    
                   /* 
                    * The second if statement looks for vowels to count,
                    * if none count as consonant in the below else statement. 
                    */        
                    if (
                        (*string_pointer == 97) ||
                        (*string_pointer == 101)||
                        (*string_pointer == 105)||
                        (*string_pointer == 111)||
                        (*string_pointer == 117)){

                            function_vowel_counter++;
                    }
                   /* 
                    * Since the nested if statements filter out all non-alphabet characters
                    * we don't need to worry about white spaces either.
                    */
                    else{
                            function_consonant_counter++;
                    }
                }

                string_pointer++;
            }

        printf("Vowels:     %d\n", function_vowel_counter);
        printf("Consonants: %d\n", function_consonant_counter);

}
