/* Programmer: Per Stoor
 * Date: 2022-09-30
 * Last changed: 2022-09-30
 * Type of program: Compute the sum of all elements in an array using pointers.
 *
 * Notes: DONE! But add functions to make it better...
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

int main(int argc, char *argv[]){ 

    int amount_of_array_elements;
    int sum;
    int *sum_array;
    int sum_array_value;
    int loop_counter1;
    char user_inputted_string[STRING_LENGTH];

        sum = 0;

        printf("Enter amount of elements: ");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
        sscanf(user_inputted_string, "%d", &amount_of_array_elements);

        sum_array = (int *) malloc(amount_of_array_elements + sizeof(amount_of_array_elements));        
            if(sum_array == NULL){
                printf("Error allocating memory...\n");
                exit(EXIT_FAILURE);
            }

            for(loop_counter1 = 0; loop_counter1 < amount_of_array_elements; loop_counter1++){

                printf("Enter element %d: ", (loop_counter1 + 1));
                fgets(user_inputted_string, STRING_LENGTH, stdin);
                sscanf(user_inputted_string, "%d", &sum_array_value);

                *(sum_array + loop_counter1) = sum_array_value;
                sum = (sum + *(sum_array + loop_counter1));
            }

        printf("The sum is: %d\n", sum);
            
        free(sum_array);

return 0;
} 
