/* Programmer: Per Stoor
 * Date: 2022-07-19
 * Last changed: 2022-07-19
 * Type of program: Practicing file saving.
 * */

#include <stdio.h>
#include <stdlib.h>
#define STRING_LENGTH 50

int main (int argc, char *argv[]){

	char user_inputted_string[STRING_LENGTH];
	FILE *file_pointer;
	
	file_pointer = fopen("C://Users/stoorp/test.txt", "w");

		if (file_pointer == NULL){
			printf("Error opening file!\n");
			exit(EXIT_FAILURE);
		}

	printf("The file [test.txt] has been created in 'C://Users/stoorp/test.txt'\n");
	printf("Enter a string to be saved in the file:");
	fgets(user_inputted_string, STRING_LENGTH, stdin);

	fputs(user_inputted_string, file_pointer);
	printf("The entered string has been saved to the file.\n");

	fclose(file_pointer);

return 0;
}
