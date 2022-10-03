/* Programmer: Per Stoor
 * Date: 2022-10-01
 * Last changed: 2022-10-03
 * Type of program: print the elements of an array in reverse order.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

void print_array_function(int *function_array1, int function_array_length);
int elements_amount_function();
int reverse_array_function();

int main(int argc, char *argv[]){ 

    int *element_array;
    int amount_of_elements;
    int loop_counter1;
    int user_array_value;
    char user_inputted_string[STRING_LENGTH];

    
        amount_of_elements = elements_amount_function(); 

        element_array = (int *) malloc(amount_of_elements * sizeof(amount_of_elements));
            if(element_array == NULL){
                printf("Error allocating memory, exiting...\n");
                exit(EXIT_FAILURE);
            }

            for(loop_counter1 = 0; loop_counter1 < amount_of_elements; loop_counter1++){
                printf("Enter element %d: ", (loop_counter1 + 1));
                fgets(user_inputted_string, STRING_LENGTH, stdin);
                sscanf(user_inputted_string, "%d", &user_array_value);
                *(element_array + loop_counter1) = user_array_value; 
            }

        print_array_function(element_array, amount_of_elements);

        free(element_array);
return 0;
} 

void print_array_function(int *function_array1, int function_array_length){

    int function_loop_counter1;

    for(function_loop_counter1 = 0; function_loop_counter1 < function_array_length; function_loop_counter1++){
        printf("%d ", *(function_array1 + function_loop_counter1));
    }
    printf("\n");
}

int elements_amount_function(){

    int function_elements;
    char function_string[STRING_LENGTH];

    printf("Enter amount of element(s): ");
    fgets(function_string, STRING_LENGTH, stdin);
    sscanf(function_string, "%d", &function_elements);

return function_elements;
}
