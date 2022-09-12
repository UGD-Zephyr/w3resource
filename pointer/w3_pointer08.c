/* Programmer: Per Stoor
 * Date: 2022-09-10
 * Last changed: 2022-09-11
 * Type of program: print all permutations of a given string using pointers.
 *
 * Notes: This one was too hard to figure out by myself. We have recursion
 * and function calls by reference going on...internet supplied the solution.
 */

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void change_element_position(char *pointer1, char *pointer2);
void element_permutation(char *string, int start_position, int end_position);

int main(int argc, char *argv[]){ 

    int alphabet_array_length;
    char alphabet_array[] = {'a', 'b', 'c', 'd'};
    
        alphabet_array_length = strlen(alphabet_array);
        element_permutation(alphabet_array, 0, (alphabet_array_length-1));

return 0;
} 
void change_element_position(char *pointer1, char *pointer2){

    int temporay_value;

        temporay_value = *pointer1;
        *pointer1 = *pointer2; 
        *pointer2 = temporay_value;

}

void element_permutation(char *string, int start_position, int end_position){

    int function_loop_counter1;

        if(start_position == end_position){
            printf("%s ", string);
        }
        else{
            for(function_loop_counter1 = start_position; function_loop_counter1 <= end_position; function_loop_counter1++){
                change_element_position((string + end_position), (string + function_loop_counter1));
                element_permutation(string, (start_position+1), end_position);
                change_element_position((string + end_position), (string + function_loop_counter1));
            }
        }

}
