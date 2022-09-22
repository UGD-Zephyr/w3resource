/* Programmer: Per Stoor
 * Date: 2022-09-14
 * Last changed: 2022-09-14
 * Type of Program: find the largest element using Dynamic Memory Allocation.
 * */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 5

int main(int argc, char *argv[]){

	int amount_of_element;
	int largest_number;
	int loop_counter1;
	int *element_array;
	int user_inputted_number;
	char user_inputted_string[STRING_LENGTH];

		largest_number = 0;
		element_array = (int *) malloc(amount_of_element * sizeof(amount_of_element));

			printf("Enter amount of elements:");
			fgets(user_inputted_string, STRING_LENGTH, stdin);
			sscanf(user_inputted_string, "%d", &amount_of_element);

				for(loop_counter1 = 0; loop_counter1 < amount_of_element; loop_counter1++){

					printf("Enter value %d:", (loop_counter1+1));
					fgets(user_inputted_string, STRING_LENGTH, stdin);
					sscanf(user_inputted_string, "%d", &user_inputted_number);

					element_array[loop_counter1] = user_inputted_number;

						if( element_array[loop_counter1] > largest_number){
							largest_number = element_array[loop_counter1];
						}
				}

			printf("\nlargest_number = %d\n", largest_number);

		free(element_array);

return 0;
}
