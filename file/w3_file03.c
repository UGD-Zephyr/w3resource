/* Programmer: Per Stoor
 * Date: 2022-07-19
 * Last changed: 2022-07-20
 * Type of program: File handling practice.
 *
 * Note: The code has issues where the contents of the file are not
 * printed to the console. If the while loop is removed, the file saves
 * the test lines no problem...
 *
 * 2022-07-20 Update: Problem solved, I had to open and close the file each time I
 * wanted to save to it and read from it. (help from StackOverflow)
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_LENGTH 50
#define FILE_PATH "C://Users/stoorp/programming/C/test.txt"
#define TEST_LINE "Test line "

int main (int argc, char *argv[]){

	int amount_of_lines;
	int single_character;
	int loop_counter1;
	char user_inputted_string[STRING_LENGTH];
	char text_buffer[STRING_LENGTH];
	FILE *file_pointer;

		printf("Please enter how many lines to add:");
		fgets(user_inputted_string, STRING_LENGTH, stdin);
		sscanf(user_inputted_string, "%d", &amount_of_lines);

		file_pointer = fopen(FILE_PATH, "w");
			if (file_pointer == NULL){
				printf("Error opening file!\n");
				exit(EXIT_FAILURE);
			}

			for (loop_counter1 = 1; loop_counter1 <= amount_of_lines; loop_counter1++){
				fprintf(file_pointer, TEST_LINE"%d\n", loop_counter1);
			}

		fclose(file_pointer);

		printf("The contents of the file is:\n");

		/* This is the example from StackOverflow...
		 * 
		file_pointer = fopen(FILE_PATH, "r");
			if (file_pointer){
			
				while ((single_character = getc(file_pointer))!= EOF){
					putchar(single_character);
				}

		fclose(file_pointer);
			}
		*/

		// This is my own style adapted with the StackOverflow solution (probably wrong...)
		file_pointer = fopen(FILE_PATH, "r");
			if (file_pointer == NULL){
				printf("Error opening file!\n");
				exit(EXIT_FAILURE);
			}	
				while ((single_character = getc(file_pointer))!= EOF){
					putchar(single_character);
				}

		fclose(file_pointer);
			
return 0;
}
