/* Programmer:		Per Stoor
 * Date:			2022-09-29
 * Last changed:	2022-09-29
 * Type of Program:	show how a function returns a pointer.
 *
 * Notes: Task completed!
 * */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 10

int user_input_function();
int *compare_function(int *compare1, int *compare2);

int main(int argc, char *argv[]){

	int user_value1;
	int user_value2;
	int loop_counter1;
	int *largest_number_pointer;

		for(loop_counter1 = 0; loop_counter1 < 2; loop_counter1++){
			if(loop_counter1 == 0){
				user_value1 = user_input_function();
			}
			else if(loop_counter1 == 1){
				user_value2 = user_input_function();
			}
			else{
				printf("I SHOLD NEVER BE SEEN!\n");
			}
		}
		
		largest_number_pointer = compare_function(&user_value1, &user_value2);
		printf("The largest number is: %d\n", *largest_number_pointer);
	
return 0;
}

int user_input_function(){

	int function_loop_counter1;
	int function_inputted_value;
	char function_inputted_string[STRING_LENGTH];

		for(function_loop_counter1 = 0; function_loop_counter1 < 2; function_loop_counter1++){
			printf("Enter number: ");
			fgets(function_inputted_string, STRING_LENGTH, stdin);
			sscanf(function_inputted_string, "%d", &function_inputted_value);

			return function_inputted_value;
		}
return 1;
}

int *compare_function(int *compare1, int *compare2){

	int *compare_function_result = 0;

	// The problem is inside the function and the if-statements.
		if(*compare1 > *compare2){
			compare_function_result = compare1;
		}
		else if(*compare2 > *compare1){
			compare_function_result = compare2;
		}

return compare_function_result;
}
