/* Programmer: Per Stoor
 * Date: 2022-09-06
 * Last changed: 2022-09-06
 * Type of program: Pointer excercise 4 from W3.
 * add two numbers with pointers.
 * */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 10

float user_input_function();
float pointer_addition_function(float *pointer1, float *pointer2);
void result_function(float pointer_addition_result);

int main(int argc, char *argv[]){

	float added_number1;
	float added_number2;
	float result;
	
		added_number1 = user_input_function();
		added_number2 = user_input_function();

		result = pointer_addition_function(&added_number1, &added_number2);

		result_function(result);

return 0;
}

float user_input_function(){

	float user_input_function_number;
	char user_input_function_string[STRING_LENGTH];

		printf("Enter number:");
		fgets(user_input_function_string, STRING_LENGTH, stdin);
		sscanf(user_input_function_string, "%f", &user_input_function_number);

return user_input_function_number;
}

float pointer_addition_function(float *pointer1, float *pointer2){

	float pointer_addition_function_result;

		pointer_addition_function_result = *pointer1 + *pointer2;

return pointer_addition_function_result;
}

void result_function(float pointer_addition_result){

		printf("\nResult: %.1f\n", pointer_addition_result);
}
