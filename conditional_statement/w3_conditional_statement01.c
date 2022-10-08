/* Programmer: Per Stoor
 * Date: 2022-10-08
 * Last changed: 2022-10-08
 * Type of program: Accept two integers and check whether they are equal or not.
 */

#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

#define STRING_LENGTH 10

void result_function(int result_function_number1, int result_function_number2);
bool equal_check_function(int function_number1, int function_number2);

int main(int argc, char *argv[]){ 

    int user_inputted_number1;
    int user_inputted_number2;
    int number_buffer;
    char string_buffer[STRING_LENGTH];

        printf("Enter first number: ");
        fgets(string_buffer, STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &number_buffer);
        user_inputted_number1 = number_buffer;

        printf("Enter second number: ");
        fgets(string_buffer, STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &number_buffer);
        user_inputted_number2 = number_buffer;

        result_function(user_inputted_number1, user_inputted_number2);

return 0;
} 

bool equal_check_function(int function_number1, int function_number2){

    bool function_result;
        
        if(function_number1 == function_number2){
            function_result = true;
            return function_result;
        }
        else{
            function_result = false;
            return function_result;
        }
}

void result_function(int result_function_number1, int result_function_number2){

    bool function_boolean;

        function_boolean = equal_check_function(result_function_number1, result_function_number2);
            if(function_boolean == true){
                printf("The numbers %d and %d are equal!\n", result_function_number1, result_function_number2);
            }
            else if(function_boolean == false){
                printf("The numbers %d and %d are unequal!\n", result_function_number1, result_function_number2);
            }

}
