/* Programmer: Per Stoor
 * Date: 2022-01-27
 * Last changed: 2022-01-27
 * Type of program: String exercises from the internet. Copy user inputted string to output.
 * */

#include <stdio.h>
#define STRING_LENGTH 50

int main (int argc, char *argv[]){

int loop_counter1;
char user_inputted_string[STRING_LENGTH];
char user_inputted_string2[STRING_LENGTH];

	printf("Enter string:");
	fgets(user_inputted_string, STRING_LENGTH, stdin);

	for (loop_counter1 = 0; user_inputted_string[loop_counter1] != '\0'; loop_counter1++){

		user_inputted_string2[loop_counter1] = user_inputted_string[loop_counter1];

	}

	/*
	 * Making sure the second string is NULL terminated.
	 *
	 * */
	user_inputted_string2[loop_counter1] = '\0';

	printf("The first string is: %s", user_inputted_string);
	printf("The second string is: %s\n", user_inputted_string2);

return 0;
}
