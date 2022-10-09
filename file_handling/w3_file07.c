/* Programmer: Per Stoor
 * Date: 2022-10-09
 * Last changed: 2022-10-09
 * Type of program: Count the number of words and characters in a file.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define FILE_PATH "/mnt/c/wsl_programming/c/w3resource/file_handling/file_handling07_test.txt"

int main(int argc, char *argv[]){ 

    int word_counter1;
    int character_counter1;
    char file_character;
    FILE *file_pointer;
        
        file_pointer = fopen(FILE_PATH, "r");
            if(file_pointer == NULL){
                printf("Error opening file.\n");
                exit(EXIT_FAILURE);
            }

            word_counter1 = 0;
            character_counter1 = 0;
            while((file_character = fgetc(file_pointer)) != EOF){
                if(file_character == 32 || file_character == '\n'){
                    character_counter1 = character_counter1;
                    word_counter1++;
                }
                else{
                    character_counter1++;
                }
            }

        printf("Amount of characters:   %d\n", character_counter1);
        printf("Amount of words:        %d\n", word_counter1);

        fclose(file_pointer);

return 0;
} 
