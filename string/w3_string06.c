/* Programmer: Per Stoor
 * Date: 2021-09-13
 * Last changed: 2021-09-13
 * Type of program: String practice to compare two strings without library functions. 
 * */

#include <stdio.h> 

#define STRING_LENGTH 30

int compare_strings(char *user_string1, char *user_string2);

int main (int argc, char *argv[]){

int equal_flag;
char user_inputted_string1[STRING_LENGTH];
char user_inputted_string2[STRING_LENGTH];

equal_flag = 1;

	printf("Enter string 1: ");
	fgets(user_inputted_string1, STRING_LENGTH, stdin);

	printf("Enter string 2: ");
	fgets(user_inputted_string2, STRING_LENGTH, stdin);

	equal_flag = compare_strings(user_inputted_string1, user_inputted_string2);

		if (equal_flag == 1){
			printf("\nThe strings are equal!\n");
		}
		else if (equal_flag == 0){
			printf("\nThe strings are UNequal!\n");
		}
		else {
			printf("Input error.");
		}
	

return 0;
}

int compare_strings(char *user_string1, char *user_string2){

int string_comparison_value;
int compare_string_loop_counter1;

string_comparison_value = 1;

	for (	compare_string_loop_counter1 = 0;
		user_string1[compare_string_loop_counter1] != '\0';
		compare_string_loop_counter1++){

			if (	user_string1[compare_string_loop_counter1] != 
				user_string2[compare_string_loop_counter1]){

				string_comparison_value = 0;
				break;
			}
	}



return string_comparison_value;
}

/* Notes: 
 *
 *
 *
 *
 *
 *
 *
 *
 * */
