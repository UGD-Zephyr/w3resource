/* Programmer: Per Stoor
 * Date: 2022-09-14
 * Last changed: 2022-09-14
 * Type of program:  sort an array using pointers
 * and dynamic memmory allocation.
 *
 * NOTES: STILL WORK IN PROGRESS!
 * */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 10

void array_print_function(int *dummy_array, int array_size);
int *array_input_function(int array_size);

int main(int argc, char *argv[]){

	int *number_array;
	int number_array_element;
    char user_inputted_string[STRING_LENGTH];

		printf("Enter amount of elements:");
		fgets(user_inputted_string, STRING_LENGTH, stdin);
		sscanf(user_inputted_string, "%d", &number_array_element);

        /*
         * Function to input selected amount of elements
         * into the array.
         * */
        //array_input_function(number_array, number_array_element);

        /*
         * Function to 
         * */
		number_array = array_input_function(number_array_element);

        /*
         * Array before sorting.
         * */
        printf("\nUnsorted array:   ");
        array_print_function(number_array, number_array_element);
        printf("\n");

        /*
         * Array after sorting.
         * */
        printf("\nSorted array:     ");
        array_print_function(number_array, number_array_element);
        printf("\n");
       
		free(number_array);

return 0;
}

void array_print_function(int *dummy_array_print, int array_print_size){

    int function_loop_counter1;

        for(function_loop_counter1 = 0; function_loop_counter1 < array_print_size; function_loop_counter1++){
            printf("%d ", (*dummy_array_print + function_loop_counter1));
        }
}

int *array_input_function(int array_input_size){

    int *function_array;
    int function_loop_counter1;
	int function_inputted_value;
    char function_inputted_string[STRING_LENGTH];

        function_array = (int *) malloc(array_input_size * sizeof(array_input_size));
			if(function_array == NULL){
				printf("error allocating memory!\n");
				exit(EXIT_FAILURE);
			}
            
            for(function_loop_counter1 = 0; function_loop_counter1 < array_input_size; function_loop_counter1++){
                printf("Enter element %d:", function_loop_counter1+1);
                fgets(function_inputted_string, STRING_LENGTH, stdin);
                sscanf(function_inputted_string, "%d", &function_inputted_value);
                *function_array = function_inputted_value;
                *function_array++;
		    }        

return function_array;
}
