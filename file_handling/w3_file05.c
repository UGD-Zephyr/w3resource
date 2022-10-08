/* Programer: Per Stoor
 * Date: 2022-08-09
 * Last changed: 2022-10-07
 * Type of program: Find the number of lines in a text file.
 * */

#include <stdio.h>
#include <stdlib.h>

#define FILE_PATH "/mnt/c/wsl_programming/c/w3resource/file_handling/test.txt"

int main (int argc, char *argv[]){

	//int character_counter;
    int line_counter;
	char character_in_file;
	FILE *file_to_read;

		file_to_read = fopen(FILE_PATH, "r");
			if(file_to_read == NULL){
				printf("Error opening file!\n");
				exit(EXIT_FAILURE);
			}

                line_counter = 0;
                while((character_in_file = fgetc(file_to_read)) != EOF){
                    if(character_in_file == '\n'){
                        line_counter++;
                    }
                }

                printf("Line counter = %d\n", line_counter);
            /*
             * This counts amount of characters in a text file.
             * ASCII value 32 = white space and '\n' is newline.
             * this code will not count these two as characters.
			character_counter = 1;
			while((character_in_file = fgetc(file_to_read)) != EOF){
                if(character_in_file == 32 || character_in_file == '\n'){
				    character_counter = character_counter;
                }
                else{
                    character_counter++;
                }
			}

             *
			 * character_counter is -1 so that the last NULL value isn't added to the count.
			 *
			 *   printf("Amount of characters in test.txt: %d\n", (character_counter - 1));
             * */

		fclose(file_to_read);

return 0;
}
