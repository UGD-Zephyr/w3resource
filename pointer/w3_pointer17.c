/* Programmer: Per Stoor
 * Date: 2022-10-01
 * Last changed: 2022-10-03
 * Type of program: print the elements of an array in reverse order.
 *
 * Notes: This solution only prints the array in the reverse order.
 * Another solution could be to actually change the placement of the
 * values in the array and then just re-use the first print_array
 * function.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

void print_array_function(int *function_array1, int function_array_length1);
void reverse_print_array_function(int *function_array2, int function_array_length2);
int *input_array_function(int *function_array3, int function_array_length3);
int elements_amount_function();
// int reverse_array_function(*function_array4, int function_array_length4);

int main(int argc, char *argv[]){ 

    int *element_array;
    int amount_of_elements;
    
        amount_of_elements = elements_amount_function(); 
        element_array = (int *) malloc(amount_of_elements * sizeof(amount_of_elements));
            if(element_array == NULL){
                printf("Error allocating memory, exiting...\n");
                exit(EXIT_FAILURE);
            }

        element_array = input_array_function(element_array, amount_of_elements);
        printf("\n");
        printf("Normal array: ");
        print_array_function(element_array, amount_of_elements);

        //element_array = reverse_array_function(element_array, amount_of_elements);
        printf("\n");
        printf("Reversed array: ");
        reverse_print_array_function(element_array, amount_of_elements);

        free(element_array);

return 0;
} 

void print_array_function(int *function_array1, int function_array_length1){

    int print_array_loop_counter1;

    for(print_array_loop_counter1 = 0; print_array_loop_counter1 < function_array_length1; print_array_loop_counter1++){
        printf("%d ", *(function_array1 + print_array_loop_counter1));
    }
    printf("\n");
}

void reverse_print_array_function(int *function_array2, int function_array_length2){

    int reverse_print_array_loop_counter1;

    for(reverse_print_array_loop_counter1 = (function_array_length2 - 1);
        reverse_print_array_loop_counter1 >= 0; 
        reverse_print_array_loop_counter1--){

            printf("%d ", *(function_array2 + reverse_print_array_loop_counter1));
    }

    printf("\n");}

int *input_array_function(int *function_array3, int function_array_length3){

    int input_array_loop_counter1;
    int function_array_value;
    char function_inputted_string[STRING_LENGTH];

        for(input_array_loop_counter1 = 0; input_array_loop_counter1 < function_array_length3; input_array_loop_counter1++){
            printf("Enter element %d: ", (input_array_loop_counter1 + 1));
            fgets(function_inputted_string, STRING_LENGTH, stdin);
            sscanf(function_inputted_string, "%d", &function_array_value);
            *(function_array3 + input_array_loop_counter1) = function_array_value; 
        }

return function_array3;
}

int elements_amount_function(){

    int function_elements;
    char function_string[STRING_LENGTH];

    printf("Enter amount of element(s): ");
    fgets(function_string, STRING_LENGTH, stdin);
    sscanf(function_string, "%d", &function_elements);

return function_elements;
}

/*
int reverse_array_function(*function_array4, int function_array_length4){

    int reverse_array_loop_counter1;

        for(reverse_array_loop_counter1 = 0;
            reverse_array_loop_counter1 < function_array_length3 ;
            reverse_array_loop_counter1++){

                
        }

return function_array4;
}
*/
