/* Programmer:      Per Stoor
 * Date:            2023-02-02
 * Last changed:    2023-02-02
 * Type of program: Store elements in an array and print it.
 */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 256

int main(int argc, char *argv[]){

    int *element_array;
    int amount_of_elements;
    int value_of_elements;
    int loop_counter1;
    int loop_counter2;
    char string_buffer[STRING_LENGTH];

        printf("Enter amount of elements for the array.\n");
        fgets(string_buffer ,STRING_LENGTH, stdin);
        sscanf(string_buffer, "%d", &amount_of_elements);

        element_array = (int *) malloc(amount_of_elements * sizeof(amount_of_elements));
            if(element_array == NULL){
                perror("Malloc could not allocate memory...");
                exit(EXIT_FAILURE);
            }

        loop_counter1 = 0;
        while(loop_counter1 < amount_of_elements){
            printf("element - %d: ", (loop_counter1 + 1));
            fgets(string_buffer ,STRING_LENGTH, stdin);
            sscanf(string_buffer, "%d", &value_of_elements);
            element_array[loop_counter1] = value_of_elements;
            loop_counter1++;
        }

        loop_counter2 = 0;
        while(loop_counter2 < amount_of_elements){
            printf("%d ", element_array[loop_counter2]);
            loop_counter2++;
        }

        printf("\n");

        free(element_array);

return 0;
}
