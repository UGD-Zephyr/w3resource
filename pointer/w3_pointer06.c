/* Programmer: Per Stoor
 * Date: 2022-09-06
 * Last changed: 2022-09-06
 * Type of program: Exercise 6 of the
 * W3 pointer questions. Finding max from
 * two numbers.
 * */

#include <stdio.h>
#include <stdlib.h>

#define STRING_LENGTH 10

float user_input_function();
float find_maximum_function(float *pointer1, float *pointer2);

int main(int argc, char *argv[]){

	int loop_counter1;
	float user_number1;
	float user_number2;
	float user_number_value_holder;
	float maximum_result;

		for(loop_counter1 = 0; loop_counter1 < 2; loop_counter1++){
				if(loop_counter1 == 0){
					user_number1 = user_input_function(); 
				}
				else if(loop_counter1 == 1){
					user_number2 = user_input_function(); 
				}
				else{
					printf("\nmain: I should never bee seen\n");
				}
		}

		maximum_result = find_maximum_function(&user_number1, &user_number2);
		printf("maximum_value = %.1f", maximum_result);

return 0;
}

float user_input_function(){

	float user_input_function_number;
	char user_inputted_string[STRING_LENGTH];

		printf("Enter number:");
		fgets(user_inputted_string, STRING_LENGTH, stdin);
		sscanf(user_inputted_string, "%f", &user_input_function_number);

return user_input_function_number;
}

float find_maximum_function(float *pointer1, float *pointer2){

	float maximum_value;

		if(*pointer1 > *pointer2){
			maximum_value = *pointer1;
		}
		else if(*pointer1 < *pointer2){
			maximum_value = *pointer2;
		}
		else if(*pointer1 == *pointer2){
			printf("The numbers can't be equal, please reload and try again.\n");
			maximum_value = 0;
		}
		else{
			printf("\nfunction: I should never bee seen\n");
		}
return maximum_value;
}
