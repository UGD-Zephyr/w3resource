/* Programmer: Per Stoor
 * Date: 2022-09-14
 * Last changed: 2022-09-14
 * Type of program:  sort an array using pointers
 * and dynamic memmory allocation.
 * */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 10

int main(int argc, char *argv[]){

	int *number_array;
	int user_inputted_string[STRING_LENGTH];
	int number_array_element;
	int user_inputted_value;

		number_array = (int *) malloc(number_array_element * sizeof(number_array_element));
			if(number_array == NULL){
				printf("error allocating memory!\n");
				exit(EXIT_FAILURE);
			}

			printf("Enter amount of elements:");
			fgets(user_inputted_string, STRING_LENGTH, stdin);
			sscanf(user_inputted_string, "%d", &number_array_element);

				for(loop_counter1 = 0; loop_counter1 < number_array_element; loop_counter1++){
					printf("Enter element %d:", loop_counter1+1);
					fgets(user_inputted_string, STRING_LENGTH, stdin);
					sscanf(user_inputted_string, "%d", &user_inputted_value);
				}

		free(number_array);

return 0;
}
