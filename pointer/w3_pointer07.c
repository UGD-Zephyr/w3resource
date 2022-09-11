/* Programmer: Per Stoor
 * Date: 2022-09-10
 * Last changed: 2022-09-10
 * Type of program: w3 pointer exercise 7.
 * store n elements in an array and print the elements using pointer
 *
 * Notes: I made one change from the official solution. I am using
 * malloc to initialize the "array" at runtime instead of an
 * arbitrary number. This is called Dynamic Memory Allocation.
 */

#include <stdio.h>
#include <stdlib.h> 

#define STRING_LENGTH 10

int main(int argc, char *argv[]){ 
 
    int user_inputted_amount_of_elements;
    int *element_array_pointer;
    int loop_counter1;
    char user_inputted_string[STRING_LENGTH];

        printf("Enter amount of elements:");
        fgets(user_inputted_string, STRING_LENGTH, stdin);
        sscanf(user_inputted_string, "%d", &user_inputted_amount_of_elements);

        element_array_pointer = (int*)malloc(user_inputted_amount_of_elements * sizeof(user_inputted_amount_of_elements));

            for(loop_counter1 = 0; loop_counter1 < user_inputted_amount_of_elements; loop_counter1++){
                printf("integer value:");
                fgets(user_inputted_string, STRING_LENGTH, stdin);
                sscanf(user_inputted_string, "%d", (element_array_pointer + loop_counter1));
            }

            printf("\n");

            for(loop_counter1 = 0; loop_counter1 < user_inputted_amount_of_elements; loop_counter1++){
                printf("element_array[%d] = %d\n", loop_counter1, *(element_array_pointer + loop_counter1));
            }

        free(element_array_pointer);

return 0;
} 
