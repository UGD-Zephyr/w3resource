/* Programmer: Per Stoor
 * Date: 2022-10-08
 * Last changed: 2022-10-09
 * Type of program: Find the content of the file and number of lines in a text file.
 */

#include <stdio.h> 
#include <stdlib.h> 

#define FILE_PATH "/mnt/c/wsl_programming/c/w3resource/file_handling/file_handling06_test.txt"

int main(int argc, char *argv[]){ 

    int line_counter1;
    char file_character;
    FILE *file_pointer;

        file_pointer = fopen(FILE_PATH, "r"); 
            if(file_pointer == NULL){
                printf("Error opening file.\n");
                exit(EXIT_FAILURE);
            }

                line_counter1 = 0;
                while((file_character = fgetc(file_pointer)) != EOF){
                    //putchar(file_character);
                    printf("%c", file_character);
                        if(file_character == '\n'){
                            line_counter1++;
                        } 
                }

        printf("lines in pers super file: %d\n", line_counter1);
        fclose(file_pointer);

return 0;
} 
