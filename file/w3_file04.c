/* Programmer: Per Stoor
 * Date: 2022-07-20
 * Last changed: 2022-08-8
 * Type of program: File handling practice.
 *
 * Notes: Read a .txt file and store each line in an array.
 * There is no need to write data INTO the file.
 *
 * Thinking about how to save each line of the .txt file
 * into it's own array...
 * 
 * Update: It should be a two dimensional array.
 * Each line fgets scans should be stored in the
 * array...this is tricky though...
 *
 * Update: this has been solved. I needed help to construct the loops
 * from the internet though. 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_AMOUNT_OF_WORDS 10 
#define ARRAY_STRING_LENGTH 50 
#define FILE_PATH "C://Users/stoorp/Programming/C/test.txt"


int main (int argc, char *argv[]){

	int loop_counter1;
	int loop_counter2;
	int total_amount_of_words;
	char file_array1[ARRAY_AMOUNT_OF_WORDS][ARRAY_STRING_LENGTH];
	FILE *file_pointer_read;


		file_pointer_read = fopen(FILE_PATH, "r");
			if (file_pointer_read == NULL){
				printf("Error reading file.\n");
				exit(EXIT_FAILURE);
			}

				loop_counter1 = 0;
				while (fgets(file_array1[loop_counter1], ARRAY_STRING_LENGTH, file_pointer_read) != NULL){
					loop_counter1++;
					// this line below makes sure to add null terminator to all the strings
					file_array1[loop_counter1][strlen(file_array1[loop_counter1]) - 1] = '\0';
				}

				total_amount_of_words = loop_counter1;

				for (loop_counter2 = 0; loop_counter2 <= total_amount_of_words; loop_counter2++){
					printf(" %s", file_array1[loop_counter2]);
				}
				
				printf("\n");
				

		fclose(file_pointer_read);

return 0;
}

