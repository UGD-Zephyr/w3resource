/* Programmer: Per Stoor
 * Date: 2021-09-14
 * Last changed: 2022-8-23
 * Type of Program: String practice, count the amount of alphabet characters, number characters
 * and special characters in a user given string.
 * */

#include <stdio.h>
#define STRING_LENGTH 50

int main (int argc, char *argv[]){

int loop_counter1;
int amount_of_alphabet_characters = 0;
int amount_of_numbers = 0;
int amount_of_special_characters = 0;

char user_inputted_string[STRING_LENGTH];

	printf("Enter string:");
	fgets(user_inputted_string, STRING_LENGTH, stdin);

	for (loop_counter1 = 0; user_inputted_string[loop_counter1] != '\0'; loop_counter1++){

		if (	((user_inputted_string[loop_counter1] > 64) && (user_inputted_string[loop_counter1] < 91 )) || 
			((user_inputted_string[loop_counter1] > 96) && (user_inputted_string[loop_counter1] < 123))){

				amount_of_alphabet_characters++;

		}
		else if ((user_inputted_string[loop_counter1] > 47) && (user_inputted_string[loop_counter1] < 58)){

				amount_of_numbers++;
		}
		else if (((user_inputted_string[loop_counter1] >31) && (user_inputted_string[loop_counter1] < 48 )) || 
			((user_inputted_string[loop_counter1] > 57) && (user_inputted_string[loop_counter1] < 65))  || 
			((user_inputted_string[loop_counter1] > 90) && (user_inputted_string[loop_counter1] < 97 )) || 
			(user_inputted_string[loop_counter1] > 122) ){

			amount_of_special_characters++;
		}

	}

	printf("Amount of alphabet characters in the string:	%d.\n", (amount_of_alphabet_characters));
	printf("Amount of numbers in the string:		%d.\n", (amount_of_numbers));
	printf("Amount of special characters in the string:	%d.\n", (amount_of_special_characters));
	printf("\n");

return 0;
}
