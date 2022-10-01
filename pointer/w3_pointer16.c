/* Programmer: Per Stoor
 * Date: 2022-09-30
 * Last changed: 2022-10-01
 * Type of program: Compute the sum of all elements in an array using pointers.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

int calculate_sum(int *function_array_pointer, int function_array_elements);

int main(int argc, char *argv[]){ 

    int amount_of_array_elements;
    int sum;
    int *sum_array;
    char user_inputted_string[STRING_LENGTH];

        printf("Enter amount of elements: ");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
        sscanf(user_inputted_string, "%d", &amount_of_array_elements);

        sum_array = (int *) malloc(amount_of_array_elements + sizeof(amount_of_array_elements));        
            if(sum_array == NULL){
                printf("Error allocating memory...\n");
                exit(EXIT_FAILURE);
            }

        sum = 0;
        sum = calculate_sum(sum_array, amount_of_array_elements);
        printf("The sum is: %d\n", sum);
            
        free(sum_array);

return 0;
} 

int calculate_sum(int *function_array_pointer, int function_array_elements){

    int function_loop_counter1;
    int function_array_value;
    int function_sum;
    char function_inputted_string[STRING_LENGTH];

        function_sum = 0;

            for(function_loop_counter1 = 0; function_loop_counter1 < function_array_elements; function_loop_counter1++){

                printf("Enter element %d: ", (function_loop_counter1 + 1));
                fgets(function_inputted_string, STRING_LENGTH, stdin);
                sscanf(function_inputted_string, "%d", &function_array_value);

                *(function_array_pointer + function_loop_counter1) = function_array_value;
                function_sum = (function_sum + *(function_array_pointer + function_loop_counter1));
            }

return function_sum;
}
