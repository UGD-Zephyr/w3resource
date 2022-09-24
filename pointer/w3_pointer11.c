/* Programmer: Per Stoor
 * Date: 2022-09-23
 * Last changed: 2022-09-23
 * Type of program: swap elements using call by reference 
 */

#include <stdio.h> 
#include <stdlib.h> 

#define STRING_LENGTH 10

void display_elements_function(int *element_a_pointer, int *element_b_pointer, int *element_c_pointer);
void swap_number_function(int *element_a_pointer, int *element_b_pointer, int *element_c_pointer);

int main(int argc, char *argv[]){ 

    int element_a;
    int element_b;
    int element_c;
    int *element_a_pointer;
    int *element_b_pointer;
    int *element_c_pointer;
    char user_intputted_string[STRING_LENGTH];

    printf("enter element a:");
    fgets(user_intputted_string, STRING_LENGTH, stdin);
    sscanf(user_intputted_string, "%d", &element_a);

    printf("enter element b:");
    fgets(user_intputted_string, STRING_LENGTH, stdin);
    sscanf(user_intputted_string, "%d", &element_b);

    printf("enter element c:");
    fgets(user_intputted_string, STRING_LENGTH, stdin);
    sscanf(user_intputted_string, "%d", &element_c);

    display_elements_function(&element_a, &element_b, &element_c);
    printf("\n");
    swap_number_function(&element_a, &element_b, &element_c); 


return 0;
} 
void display_elements_function(int *element_a_pointer, int *element_b_pointer, int *element_c_pointer){

    system("clear");
    printf("Before swap:\n");
    printf("-------------\n");
    printf("element a = %d\n", *element_a_pointer);
    printf("element b = %d\n", *element_b_pointer);
    printf("element c = %d\n", *element_c_pointer);
}

void swap_number_function(int *element_a_pointer, int *element_b_pointer, int *element_c_pointer){

    int temp;

    /*
     * This swap shifts everything up one step.
     *
        temp = *element_a_pointer;
        *element_a_pointer = *element_b_pointer;
        *element_b_pointer = *element_c_pointer;
        *element_c_pointer = temp;
    */

    /*
     * This swap shifts everything down one step.
     * */
        temp = *element_c_pointer;
        *element_c_pointer = *element_b_pointer;
        *element_b_pointer = *element_a_pointer;
        *element_a_pointer = temp;

        printf("After swap:\n");
        printf("-------------\n");
        printf("element a = %d\n", *element_a_pointer);
        printf("element b = %d\n", *element_b_pointer);
        printf("element c = %d\n", *element_c_pointer);
}
