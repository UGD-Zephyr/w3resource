/* Programmer: Per Stoor
 * Date: 2021-09-10
 * Last changed: 2021-09-10
 * Type of Program: String practice 2.
 * */

#include <stdio.h>

#define MAX_STRING_LENGTH 30

int main (int argc, char *argv[]){

int length_of_string;
int loop_counter1;
char user_inputted_string[MAX_STRING_LENGTH];

	printf("Please enter a sentence: ");
	fgets(user_inputted_string, MAX_STRING_LENGTH, stdin);

	for 	(loop_counter1 = 0; 
		user_inputted_string[loop_counter1] != '\0'; 
		loop_counter1++){

		length_of_string = loop_counter1;
	}

	printf("Length of the string is: %d character(s)\n", length_of_string);
	printf("loop_counter1 = %d.\n", loop_counter1);

return 0;
}
