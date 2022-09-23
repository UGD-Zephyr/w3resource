/* Programer: Per Stoor
 * Date: 2022-08-09
 * Last changed: 2022-08-09
 * Type of program: Find the number of lines in a text file.
 * */

#include <stdio.h>
#include <stdlib.h>

#define FILE_PATH "C://Users/stoorp/Programming/C/test.txt"

int main (int argc, char *argv[]){

	int character_counter;
	char character_in_file;
	FILE *file_to_read;

		file_to_read = fopen(FILE_PATH, "r");
			if(file_to_read == NULL){
				printf("Error opening file!\n");
				exit(EXIT_FAILURE);
			}

			character_counter = 0;
			while(character_in_file = fgetc(file_to_read) != EOF){
				character_counter++;
			}

			/*
			 * character_counter is -1 so that the last NULL value isn't added to the count.
			 * */
			printf("Amount of characters in test.txt: %d\n", (character_counter - 1));

		fclose(file_to_read);

return 0;
}
