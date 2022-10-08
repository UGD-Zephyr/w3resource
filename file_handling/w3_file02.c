/* Programmer: Per Stoor
 * Date: 2022-07-19
 * Last changed: 2022-07-19
 * Type of program: Practicing file handling in C.
 *
 * Notes: When using fopen to read a file and you want to
 * have a user inputted string (for example: enter path to file),
 * scanf works, but has issues,
 *
 * fgets works but will add a newline '\n' at the end of the string
 * causing issues. This newline needs to be removed, either with
 * strtok or strchr which examples can be seen below.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define STRING_LENGTH 256 

int main (int argc, char *argv[]){

	char text_buffer[STRING_LENGTH];
	char file_path[STRING_LENGTH];
	char *p;
	FILE *file_pointer;

		printf("Enter path to the file you wish to open:");

		/*
		 *	This scanf function works, but will not be used.
		 *	scanf("%s", file_path);
		 */

		fgets(file_path, STRING_LENGTH, stdin);

			if ((p = strchr(file_path, '\n')) != NULL){
				*p = '\0';
			}

		/*	This strtok function from (string.h) works.
		 *	strtok(file_path, "\n");
		 */

		file_pointer = fopen(file_path, "r");

			if (file_pointer == NULL){
				printf("Error opening file!");
				exit(EXIT_FAILURE);
			}

		fgets(text_buffer, STRING_LENGTH, file_pointer);
		printf("The contents of %s is:\n", file_path);
		printf("%s\n", text_buffer);

		fclose(file_pointer);

return 0;
}
