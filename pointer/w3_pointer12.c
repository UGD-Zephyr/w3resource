/* Programmer: Per Stoor
 * Date: 2022-09-25
 * Last changed: 2022-09-25
 * Type of program: find the factorial of a given number using pointers. 
 *
 * Notes: NOT YET COMPLETED!
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

int factorial_function(int *factorial_pointer);

int main(int argc, char *argv[]){ 

    int user_inputted_number;
    int result;
    char user_inputted_string[STRING_LENGTH];

        printf("Enter number: ");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
        sscanf(user_inputted_string, "%d", &user_inputted_number);
        result = factorial_function(&user_inputted_number);
        printf("Factorial of %d is:     %d\n", user_inputted_number, result);
return 0;
} 

int factorial_function(int *factorial_pointer){

    int function_loop_counter1;
    int factorial_function_result;

        factorial_function_result = 1;

            for(function_loop_counter1 = 1; function_loop_counter1 <= *factorial_pointer; function_loop_counter1++){
                factorial_function_result = (factorial_function_result * function_loop_counter1);
            }
return factorial_function_result;
}
